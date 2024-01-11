# Abstract
Potholes, a common consequence of neglected maintenance, pose a significant threat to road safety. 
To facilitate offline data collection for road repair, methods for identifying potholes on road surfaces focus on creating strategies for real-time or offline identification of these hazards. 
These factors have prompted an extensive global study into methods for identifying potholes on roadways. 
I demonstrate my contributions to this field using a mobile robot named Limo, built around the AgileX mobile platform. 
I implement methods for robot navigation and automatic pothole diagnosis using two techniques (OpenCV and YoloV8), showcasing the practical application of my proposed strategies.
# Instructions for executing the code
This works under the assumption that ros2 humble version is installed. Additionally, this has only been set up and tested in Ros2-humble native environments.
# Further prerequisites consist of
If you don't have the limo_robot repository on your device, you can clone it and build it by following the instructions provided here.
```https://github.com/LCAS/limo_ros2/tree/humble```
# Once this directory and the Limo_robot repository are available on your device you can run the following command to visualize the solution.
# 1) solution using the OpenCv running on the potholes simple world
for this I build a launch file to run the navigation and the detection at the same time:
```ros2 launch limo_pothole_detection_navigation_bringup assessment_solution_opencv.launch.py```
a video demostrating how the result of this method has been uploaded on youtube and can be view by clicking on the link bellow:
```https://youtu.be/7g7rTJj5Q18```
# 2) solution using the YoloV8 potholes realistic world
for this solution because of the computing power of my device I had to slow down the speed of the robot (by changing the nav2_params to nav2_params_yolo.yaml) for a smooth detection and localization of the pothole. In case your device has limited computing power I will recommend you start the navication stack using the following command:
```ros2 launch  limo_navigation limo_navigation.launch.py use_sim_time:=true map:=robot_programming/src/map/first_map.yaml params_file:=robot_programming/src/params/nav2_params_yolo.yaml```
I build a launch file to run the detection node only:
```ros2 launch limo_pothole_detection_navigation_bringup assessment_solution_opencv.launch.py```
The navigation can be started afterware by running
```ros2 run navigation Nav_through_waypoint ```
A video demostrating how the result of this detection method using yolo has been uploaded on youtube and can be view by clicking on the link bellow:
```https://youtu.be/02gSRXX2Xg4```
