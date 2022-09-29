# gpu status
std_msgs/Header header

# True if there is no internal error in monitoring, false otherwise
bool gpu_status

#available cuda devices
int16 cu_device

# free memory in MB
float32 free_memory

# used memory in MB
float32 used_memory

# total memory in MB
float32 total_memory

# temperature in Celcius
float32 temp_c

# speed fan in %
float32 speed_fan

# power usage in w is accurate to within +/- 5%
float32 power_usage
