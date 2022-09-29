std_msgs/Header header

uint32 DASH_APPS_TIMEOUT            = 1
uint32 DASH_BRAKE_TIMEOUT           = 2
uint32 DASH_BUTTONS_TIMEOUT         = 4
uint32 DASH_FRONT_HALL_TIMEOUT      = 8
uint32 AUX_PUMPS_FANS_TIMEOUT       = 16
uint32 DASH_BOOLS_TIMEOUT           = 32
uint32 EBS_TANK_PRESSURE_TIMEOUT    = 64
uint32 AMI_SELECTED_MISSION_TIMEOUT = 128
uint32 SWA_STATUS_TIMEOUT           = 256
uint32 EBS_SUPERVISOR_TIMEOUT       = 512
uint32 EBS_SERVICE_BRAKE_TIMEOUT    = 1024
uint32 INVERTER_ADU_TIMEOUT	     = 2048
uint32 ECU_PARAMS_ACTUAL_TIMEOUT    = 4096
uint32 COOLING_INFO_TIMEOUT	     = 8192
uint32 ISABELLEN_TIMEOUT	     = 16384
uint32 ECU_CONTROL_SYSTEMS_TIMEOUT  = 32768
uint32 ECU_ISABELLEN_TIMEOUT        = 65536
uint32 INV_LEFT_INFO_TIMEOUT	     = 131072
uint32 INV_RIGHT_INFO_TIMEOUT       = 262144

uint32 message_timeouts


#uint16 SWA_STATUS_ANALOG1_ERROR     = 1
#uint16 SWA_STATUS_ANALOG2_ERROR     = 2
#uint16 SWA_STATUS_STALL_OCCURED     = 4

uint16 sensor_errors


uint16 tx_berrors   # current Tx errors
uint16 rx_berrors   # current Rx errors
uint64 tx_terrors   # total Tx errors
uint64 rx_terrors   # total Rx errors
uint32 bus_errors   # counts bus erros
uint32 restarts     # counts restarts

int32 CAN_STATE_ERROR_ACTIVE    = 0 # RX/TX error count < 96
int32 CAN_STATE_ERROR_WARNING   = 1	# RX/TX error count < 128
int32 CAN_STATE_ERROR_PASSIVE   = 2	# RX/TX error count < 256
int32 CAN_STATE_BUS_OFF         = 3	# RX/TX error count >= 256
int32 CAN_STATE_STOPPED         = 4	# Device is stopped
int32 CAN_STATE_SLEEPING        = 5	# Device is sleeping
int32 CAN_STATE_MAX             = 6

int32 can_state     # displays CAN state
