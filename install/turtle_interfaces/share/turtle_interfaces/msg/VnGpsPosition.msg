# VN-300 messages
std_msgs/Header header

# number of satelites
uint8 num_sats

# fix status
# 0: no fix
# 1: time fix only
# 2: 2D fix
# 3: 3D fix
uint8 fix

# [Latitude (positive North deg), Longitude (positive East deg), Altitude (Above Mean Sea Level m)]
geometry_msgs/Vector3 position

# [Body frame position uncertainty in NED frame)]
geometry_msgs/Vector3 positionu