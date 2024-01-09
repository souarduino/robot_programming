from launch import LaunchDescription
from launch_ros.actions import Node

def generate_launch_description():
    ld=LaunchDescription()
    navigation=Node(
        package="navigation",
        executable="Nav_through_waypoint"
    )
    pothole_detection_yolo=Node(
        package="pothole_detection",
        executable="pothole_detection_yolo"
    )
    pothole_location=Node(
        package="pothole_detection",
        executable="pothole_location1"
    )
    ld.add_action(pothole_detection_yolo)
    ld.add_action(pothole_location)
    ld.add_action(navigation)
    return ld