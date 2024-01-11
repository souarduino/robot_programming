# Abstract
An important risk to road safety are potholes which is why efforts have been made to autonomously detect them. In this repository, I am attempting to solve this provlem by implementing algorithms for automatic pothole detection and robot navigation using two methods. My solutions make use of  OpenCV and yoloV8, along side a depth sensing camera, to determine a pothole's location in relation to a world frame. With a series of waypoints as a guide, the robot moves around the map and locates the potholes and the  run concludes with the creation of a summary report.
# Instructions for executing the code
# Prerequisites
This works under the assumption that ros2 humble version is installed. Additionally, this has only been set up and tested in Ros2-humble native environments.
If you don't have the limo_robot repository on your device, you can clone it and build it by following the instructions provided here.
```
https://github.com/LCAS/limo_ros2/tree/humble
```
Once this directory and the Limo_robot repository are available on your device you can run the following command to visualize the solution.

### 1) Solution using the OpenCv running on the potholes simple world
For this I build a launch file to run the navigation and the detection at the same time:
```
ros2 launch limo_pothole_detection_navigation_bringup assessment_solution_opencv.launch.py
```
A video demostrating how the result of this method has been uploaded on youtube: https://youtu.be/7g7rTJj5Q18

### 2) Solution using the YoloV8 potholes realistic world
For this solution because of the computing power of my device I had to slow down the speed of the robot (by changing the nav2_params to nav2_params_yolo.yaml) for a smooth detection and localization of the pothole. In case your device has limited computing power I will recommend you start the navigation stack using the following command:
```
ros2 launch  limo_navigation limo_navigation.launch.py use_sim_time:=true map:=robot_programming/src/map/first_map.yaml params_file:=robot_programming/src/params/nav2_params_yolo.yaml
```
I built a launch file to run the detection node only:
```
ros2 launch limo_pothole_detection_navigation_bringup assessment_solution_opencv.launch.py
```
The navigation can be started afterware by running
```
ros2 run navigation Nav_through_waypoint
```
A video demostrating how the result of this detection method using yolo has been uploaded on youtube: https://youtu.be/02gSRXX2Xg4
