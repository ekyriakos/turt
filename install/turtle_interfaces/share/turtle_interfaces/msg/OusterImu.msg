# Ouster OS1 IMU Data-Msg

std_msgs/Header header

# IMU timestamp of monotonic system time since boot in nanoseconds
uint64 imu_monotonic_time_stamp

# Gyroscope timestamp relative to timestamp_mode in nanoseconds
uint64 gyro_time_stamp

# Accelerometer timestamp relative to timestamp_mode in nanoseconds
uint64 accel_time_stamp

# Acceleration in g with respect to IMU sensor frame
geometry_msgs/Vector3 acceleration

# Angular velocity in deg/sec with respect to IMU sensor frame
geometry_msgs/Vector3 angular_velocity

