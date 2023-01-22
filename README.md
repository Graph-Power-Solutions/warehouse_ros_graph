# Graph Database backend for ROS (Robot Operating System)

This is a Graph Database storage backend for ROS2 using [Bolt](https://boltprotocol.org/) protocol with [mgclient](https://github.com/memgraph/mgclient) connector.

Supported graph databases:
* [MemGraph](https://www.memgraph.com/)

## Installation
1. [Install ROS2](https://docs.ros.org/en/humble/Installation.html)
2. Activate your workplace (e.g. with `source /opt/ros/humble/setup.bash`).
3. In your workplace folder create a file named `warehouse.repos` with the following content:
```yaml
repositories:
  warehouse_ros_graph:
    type: git
    url: https://github.com/Graph-Power-Solutions/warehouse_ros_graph
    version: ros2
```
4. Fetch source files and build:
```
vcs import src < warehouse.repos
rosdep update
rosdep install --from-paths src --ignore-src --rosdistro humble
colcon build
```
