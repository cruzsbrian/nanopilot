from launch import LaunchDescription
import launch_ros.actions

def generate_launch_description():
    return LaunchDescription([
    	launch_ros.actions.Node(
            package='llc_ros_interface', node_executable='llc_ros_interface', output='screen', arguments=['/dev/ttyS1', '1500000']),
        launch_ros.actions.Node(
            package='attitude_control', node_executable='attitude_control', output='screen'),
        launch_ros.actions.Node(
            package='attitude_ekf', node_executable='attitude_ekf', output='screen'),
        launch_ros.actions.Node(
            package='rc_control', node_executable='rc_control', output='screen'),

        
    ])
