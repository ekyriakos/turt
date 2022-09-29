std_msgs/Header header

# statistics (when statisticsEnabled == true)
turtle_interfaces/SlamStatistics slam_statistics # optimizer statistics
bool localization_mode
uint32 sensor_cone_count # number of cones given by the current sensor point cloud
uint32 total_cone_count # total number of cones in the graph
