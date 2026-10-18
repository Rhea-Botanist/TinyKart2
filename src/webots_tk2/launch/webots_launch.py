import os
import launch
from launch import LaunchDescription
from launch_ros.actions import Node
from ament_index_python.packages import get_package_share_directory
from webots_ros2_driver.webots_launcher import WebotsLauncher
from webots_ros2_driver.webots_controller import WebotsController


def generate_launch_description():
    package_dir = get_package_share_directory('webots_tk2')
    robot_description_path = os.path.join(package_dir, 'resource', 'tinykart_2.urdf')

    webots = WebotsLauncher(
        world=os.path.join(package_dir, 'worlds', 'my_world.wbt')
    )

    webots_tk2 = WebotsController(
        robot_name='tinykart_2',
        parameters=[
            {'robot_description': robot_description_path},
        ]
    )

    tk2_main = Node(
        package='tk2_main',
        executable='tk2_main_node',
    )

    return LaunchDescription([
        webots,
        webots_tk2,
        tk2_main,
        launch.actions.RegisterEventHandler(
            event_handler=launch.event_handlers.OnProcessExit(
                target_action=webots,
                on_exit=[launch.actions.EmitEvent(event=launch.events.Shutdown())],
            )
        )
    ])