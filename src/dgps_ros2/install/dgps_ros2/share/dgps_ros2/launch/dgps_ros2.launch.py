import sys
import os

from ament_index_python.packages import get_package_share_directory
from launch import LaunchDescription
from launch.substitutions import LaunchConfiguration
from launch.actions import DeclareLaunchArgument
from launch_ros.actions import Node
from launch.actions import ExecuteProcess
import launch_ros.actions


def generate_launch_description():
    username = LaunchConfiguration('username', default='qxwnlp001')
    password = LaunchConfiguration('password', default='e194992')
    port_name = LaunchConfiguration('port_name', default='/dev/ttyS0')
    topic = LaunchConfiguration('topic', default='dgps')
    frame_id = LaunchConfiguration('frame_id', default='gps')
    server = LaunchConfiguration('server', default='rtk.ntrip.qxwz.com')
    port = str("8002")



    return LaunchDescription([
        DeclareLaunchArgument(
            'username',
            default_value=username,
            description='username'),
        DeclareLaunchArgument(
            'password',
            default_value=password,
            description='password'),
        DeclareLaunchArgument(
            'port_name',
            default_value=port_name,
            description='serialPort'),
        DeclareLaunchArgument(
            'frame_id',
            default_value=frame_id,
            description='frame_id'),
        DeclareLaunchArgument(
            'server',
            default_value=server,
            description='server'),
        DeclareLaunchArgument(
            'port',
            default_value=port,
            description='port'),

        Node(
            package='dgps_ros2',
            executable='dgps_ros2_exe',
            name='dgps',
            parameters=[
                {'username': username, 'password': password, 'port_name':port_name, 'topic':topic, 'frame_id':frame_id, 'server':server, 'port': port }
            ],
            output='screen',
            emulate_tty=True)

    ])
