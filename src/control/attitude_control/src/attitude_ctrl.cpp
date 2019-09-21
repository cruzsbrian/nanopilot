#include "rclcpp/rclcpp.hpp"
// #include <sensor_msgs/msg/imu.hpp>
#include <autopilot_msgs/msg/attitude_trajectory_setpoint.hpp>
#include <autopilot_msgs/msg/rate_control_setpoint.hpp>
// #include <geometry_msgs/msg/pose_with_covariance_stamped.hpp>
#include <geometry_msgs/msg/pose_stamped.hpp>
#include <std_msgs/msg/bool.hpp>
using std::placeholders::_1;
#include <iostream>
#include <chrono>
#include <cmath>

#include <Eigen/Dense>

using namespace std::chrono_literals;


class AttitudeCtrl : public rclcpp::Node
{
    public:
    AttitudeCtrl()
        : Node("AttitudeCtrl")
    {
        att_setpt_sub = this->create_subscription<autopilot_msgs::msg::AttitudeTrajectorySetpoint>(
                "attitude_setpoint", 1, std::bind(&AttitudeCtrl::att_setpt_cb, this, _1));

        pose_sub = this->create_subscription<geometry_msgs::msg::PoseStamped>(
                "pose", 1, std::bind(&AttitudeCtrl::pose_cb, this, _1));

        leg_pose_sub = this->create_subscription<autopilot_msgs::msg::ActuatorPositions>(
                "hip_actuator_positions", 1, std::bind(&AttitudeCtrl::leg_pose_cb, this, _1));

        ap_in_control_sub = this->create_subscription<std_msgs::msg::Bool>(
                "ap_in_control", 1, std::bind(&AttitudeCtrl::ap_in_control_cb, this, _1));

        ctrl_pub = this->create_publisher<autopilot_msgs::msg::RateControlSetpoint>("control", 10);

        this->declare_parameter("roll_time_cst", 1.0);
        this->declare_parameter("pitch_time_cst", 0.6);
        this->declare_parameter("yaw_time_cst", 0.5);
        this->declare_parameter("torque_kf", 1.0);
        this->declare_parameter("thrust_factor", 0.4);

        control_timer = create_wall_timer(
                20ms, std::bind(&AttitudeCtrl::control_update, this));
    }


    private:

    void control_update(void)
    {
        const double f_g = 23.5; // force of gravity
        const double coeff_friction = 0.8; // coefficient of friction b/w feet and ground

        // https://doi.org/10.3929/ethz-a-009970340

        auto ctrl_msg = autopilot_msgs::msg::RateControlSetpoint();

        if (!pose_msg || !att_setpt_msg) {
            return;
        }

        // Control parameters. _time_cst params relate error to desired angular
        // rate that the controller outputs.
        double roll_time_cst; // [s]
        double pitch_time_cst; // [s]
        double yaw_time_cst; // [s]
        double torque_kf;
        double thrust_factor;

        // Get paramaters from ROS. If not found, the default value here is
        // used.
        this->get_parameter_or("roll_time_cst", roll_time_cst, 0.4);
        this->get_parameter_or("pitch_time_cst", pitch_time_cst, 0.4);
        this->get_parameter_or("yaw_time_cst", yaw_time_cst, 0.5);
        this->get_parameter_or("torque_kf", torque_kf, 1.0);
        this->get_parameter_or("thrust_factor", thrust_factor, 0.4);

        // Rate = K dot error.
        Eigen::Vector3d K(1/roll_time_cst, 1/pitch_time_cst, 1/yaw_time_cst);

        Eigen::Vector3d max_rate_setpt(2, 2, 2);

        // Get current attitude and setpoint from ROS msg as Eigen quaternions.
        // These are given as rotations transforming points in the body frame to
        // points in the inertial frame.
        auto setpt_body_to_nav = Eigen::Quaterniond(att_setpt_msg->orientation.w,
                att_setpt_msg->orientation.x,
                att_setpt_msg->orientation.y,
                att_setpt_msg->orientation.z);
        auto estimate_body_to_nav = Eigen::Quaterniond(pose_msg->pose.orientation.w,
                pose_msg->pose.orientation.x,
                pose_msg->pose.orientation.y,
                pose_msg->pose.orientation.z);

        estimate_body_to_nav.normalize();

        // Set y frame to be the body frame. This gives no yaw control. For a
        // set yaw, y could be a rotation of the inertial frame around z.
        auto y_to_nav = Eigen::AngleAxisd(yaw_d, Eigen::Vector3d::UnitZ());

        Eigen::Matrix<double, 3, 3> body_to_nav_mat = estimate_body_to_nav.toRotationMatrix();
        Eigen::Matrix<double, 3, 3> y_to_nav_mat = y_to_nav.toRotationMatrix();

        // Desired force vector in the intertial frame (set to (0, 0, -1) for
        // attitude to be upright).
        Eigen::Vector3d f_nav(0, 0, -1);

        // Desired force vector in the setpoint body frame. This is (0, 0, -1)
        // by definition.
        Eigen::Vector3d f_d(0, 0, -1);

        // Desired force vector in the y frame.
        Eigen::Vector3d f_y = y_to_nav_mat.transpose() * f_nav;

        // Find shortest rotation that aligns the force axis of the y frame with
        // the intertial frame.
        auto setpt_body_to_y = Eigen::Quaterniond::FromTwoVectors(f_d, f_y);

        // Transform this setpoint from y frame into inertial frame.
        setpt_body_to_nav = y_to_nav * setpt_body_to_y;
        setpt_body_to_nav.normalize();

        // Find the gravity vector in the robot's frame.
        // Note the frame is forward-right-down for xyz
        Eigen::Vector3d gravity_nav(0, 0, f_g);
        Eigen::Vector3d gravity_body = body_to_nav_mat.transpose() * gravity_nav;

        // Calculate the torque from gravity in the robot's frame.
        Eigen::Vector3d feet_to_cg_body(0, 0, -0.44); // distance from feet to cg in meters
        Eigen::Vector3d gravity_torque_body = feet_to_cg_body.cross(gravity_body);

        // Get angle from vertical for max thrust calculation
        Eigen::Vector3d unit_vert(0, 0, 1);
        double angle_from_vert = acos((body_to_nav_mat * unit_vert).dot(unit_vert));

        // Find max thrust that can be applied before we slide
        double max_thrust = f_g;

        // Get attitude error: rotation transforming points from the current
        // body frame to points in the setpoint body frame.
        auto att_error = setpt_body_to_nav.conjugate()*estimate_body_to_nav;
        att_error.normalize();

        // Quaternions double cover the rotation space, so we restrict it to w > 0.
        // att_error and -att_error represent the same orientation.
        if (att_error.w() < 0) {
            att_error.coeffs() *= -1;
        }

        // This gives a rotation vector whose direction is the axis of rotation
        //  and whose length is the sin of the angle of rotation.
        Eigen::Vector3d att_error_vec = 2 * att_error.vec();

        Eigen::Vector3d rate_setpt = -K.cwiseProduct(att_error_vec);
        rate_setpt = rate_setpt.cwiseMin(max_rate_setpt).cwiseMax(-max_rate_setpt);

        ctrl_msg.header.stamp = pose_msg->header.stamp;
        ctrl_msg.feed_forward_torque.x = -gravity_torque_body[0] * torque_kf;
        ctrl_msg.feed_forward_torque.y = -gravity_torque_body[1] * torque_kf;
        ctrl_msg.rate_control_setpoint.x = rate_setpt[0];
        ctrl_msg.rate_control_setpoint.y = rate_setpt[1];
        ctrl_msg.rate_control_setpoint.z = rate_setpt[2];
        ctrl_msg.force.z = thrust_factor * max_thrust;
        if (leg_pose_msg) {
            ctrl_msg.actuators.actuators = leg_pose_msg->actuators;
        }
        ctrl_pub->publish(ctrl_msg);
        // RCLCPP_INFO(this->get_logger(), "ctrl '%f %f %f'", rate_setpt[0], rate_setpt[1], rate_setpt[2]);
    }



    void att_setpt_cb(const autopilot_msgs::msg::AttitudeTrajectorySetpoint::SharedPtr msg)
    {
        att_setpt_msg = msg;
    }

    void pose_cb(const geometry_msgs::msg::PoseStamped::SharedPtr msg)
    {
        pose_msg = msg;
    }

    void leg_pose_cb(const autopilot_msgs::msg::ActuatorPositions::SharedPtr msg)
    {
        leg_pose_msg = msg;
    }

    void ap_in_control_cb(const std_msgs::msg::Bool::SharedPtr msg)
    {
        if (pose_msg) {
            if (msg->data && !last_in_control) {
                auto estimate_body_to_nav =  Eigen::Quaterniond(pose_msg->pose.orientation.w,
                    pose_msg->pose.orientation.x,
                    pose_msg->pose.orientation.y,
                    pose_msg->pose.orientation.z);

                auto rotated_x = estimate_body_to_nav.toRotationMatrix() * Eigen::Vector3d::UnitX();
                yaw_d = std::atan2(rotated_x[1], rotated_x[0]);
                std::cout << yaw_d << std::endl;
            }

            last_in_control = msg->data;
        }
    }

    // ROS Subscribers
    rclcpp::Subscription<autopilot_msgs::msg::AttitudeTrajectorySetpoint>::SharedPtr att_setpt_sub;
    autopilot_msgs::msg::AttitudeTrajectorySetpoint::SharedPtr att_setpt_msg;

    rclcpp::Subscription<geometry_msgs::msg::PoseStamped>::SharedPtr pose_sub;
    geometry_msgs::msg::PoseStamped::SharedPtr pose_msg;

    rclcpp::Subscription<autopilot_msgs::msg::ActuatorPositions>::SharedPtr leg_pose_sub;
    autopilot_msgs::msg::ActuatorPositions::SharedPtr leg_pose_msg;

    rclcpp::Subscription<std_msgs::msg::Bool>::SharedPtr ap_in_control_sub;
    bool last_in_control = false;
    double yaw_d = 0.0;

    // ROS Publishers
    rclcpp::Publisher<autopilot_msgs::msg::RateControlSetpoint>::SharedPtr ctrl_pub;

    rclcpp::TimerBase::SharedPtr control_timer;
};

int main(int argc, char * argv[])
{
    rclcpp::init(argc, argv);
    rclcpp::spin(std::make_shared<AttitudeCtrl>());
    rclcpp::shutdown();
    return 0;
}
