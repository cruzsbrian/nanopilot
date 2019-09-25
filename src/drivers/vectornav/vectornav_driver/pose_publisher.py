import rclpy
from rclpy.node import Node

from geometry_msgs.msg import PoseStamped
import serial
import vectornav_driver.vectornav
import sys

class PosePublisher(Node):

    def __init__(self):
        super().__init__('vectornav_pose_publisher')
        self.port = serial.Serial(sys.argv[1], 115200)
        vectornav_driver.vectornav.set_baud(921600)
        self.port = serial.Serial(sys.argv[1], 921600)
        self.publisher_ = self.create_publisher(PoseStamped, '/pose', 10)
        timer_period = 0.01  # seconds
        self.timer = self.create_timer(timer_period, self.timer_callback)

    def timer_callback(self):
        msg = PoseStamped()
        imu = vectornav_driver.vectornav.get_imu(self.port)
        msg.header.stamp = self.get_clock().now().to_msg()
        msg.pose.orientation.x = imu['q'][0]
        msg.pose.orientation.y = imu['q'][1]
        msg.pose.orientation.z = imu['q'][2]
        msg.pose.orientation.w = imu['q'][3]
        self.publisher_.publish(msg)
        # self.get_logger().info('imu pose {}'.format(imu))


def main(args=None):
    rclpy.init(args=args)

    pose_publisher = PosePublisher()

    rclpy.spin(pose_publisher)

    pose_publisher.destroy_node()
    rclpy.shutdown()


if __name__ == '__main__':
    main()
