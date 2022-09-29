std_msgs/Header header

# [-1, 1] range. -1 is full brake, 1 is full throttle and 0 is neutral
float32 throttle

# [-1, 1] range. -1 is full left steering, 1 is full right steering
float32 steering

# support for multiple steering modes. In position mode the steering value represents desired 
# steering position and in velocity mode it represents desired steering velocity
# the stepper motor cannot easily support steering velocity
uint8 STEERING_MODE_POSITION = 13
uint8 STEERING_MODE_VELOCITY = 0
uint8 steering_mode

