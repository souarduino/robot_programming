from launch import LaunchDescription
from launch_ros.actions import Node
from time import sleep

def generate_launch_description():
    pothole_detection_yolo=Node(
        package="pothole_detection",
        executable="pothole_detection_opencv"
    )
    pothole_location=Node(
        package="pothole_detection",
        executable="pothole_cluster"
    )
    sleep(5)
    ld=LaunchDescription()
    navigation=Node(
        package="navigation",
        executable="Nav_through_waypoint"
    )
    
    ld.add_action(pothole_detection_yolo)
    ld.add_action(pothole_location)
    sleep(1)
    ld.add_action(navigation)
    return ld