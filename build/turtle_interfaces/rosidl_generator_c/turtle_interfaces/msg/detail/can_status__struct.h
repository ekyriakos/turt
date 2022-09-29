// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from turtle_interfaces:msg/CanStatus.idl
// generated code does not contain a copyright notice

#ifndef TURTLE_INTERFACES__MSG__DETAIL__CAN_STATUS__STRUCT_H_
#define TURTLE_INTERFACES__MSG__DETAIL__CAN_STATUS__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

/// Constant 'DASH_APPS_TIMEOUT'.
enum
{
  turtle_interfaces__msg__CanStatus__DASH_APPS_TIMEOUT = 1ul
};

/// Constant 'DASH_BRAKE_TIMEOUT'.
enum
{
  turtle_interfaces__msg__CanStatus__DASH_BRAKE_TIMEOUT = 2ul
};

/// Constant 'DASH_BUTTONS_TIMEOUT'.
enum
{
  turtle_interfaces__msg__CanStatus__DASH_BUTTONS_TIMEOUT = 4ul
};

/// Constant 'DASH_FRONT_HALL_TIMEOUT'.
enum
{
  turtle_interfaces__msg__CanStatus__DASH_FRONT_HALL_TIMEOUT = 8ul
};

/// Constant 'AUX_PUMPS_FANS_TIMEOUT'.
enum
{
  turtle_interfaces__msg__CanStatus__AUX_PUMPS_FANS_TIMEOUT = 16ul
};

/// Constant 'DASH_BOOLS_TIMEOUT'.
enum
{
  turtle_interfaces__msg__CanStatus__DASH_BOOLS_TIMEOUT = 32ul
};

/// Constant 'EBS_TANK_PRESSURE_TIMEOUT'.
enum
{
  turtle_interfaces__msg__CanStatus__EBS_TANK_PRESSURE_TIMEOUT = 64ul
};

/// Constant 'AMI_SELECTED_MISSION_TIMEOUT'.
enum
{
  turtle_interfaces__msg__CanStatus__AMI_SELECTED_MISSION_TIMEOUT = 128ul
};

/// Constant 'SWA_STATUS_TIMEOUT'.
enum
{
  turtle_interfaces__msg__CanStatus__SWA_STATUS_TIMEOUT = 256ul
};

/// Constant 'EBS_SUPERVISOR_TIMEOUT'.
enum
{
  turtle_interfaces__msg__CanStatus__EBS_SUPERVISOR_TIMEOUT = 512ul
};

/// Constant 'EBS_SERVICE_BRAKE_TIMEOUT'.
enum
{
  turtle_interfaces__msg__CanStatus__EBS_SERVICE_BRAKE_TIMEOUT = 1024ul
};

/// Constant 'INVERTER_ADU_TIMEOUT'.
enum
{
  turtle_interfaces__msg__CanStatus__INVERTER_ADU_TIMEOUT = 2048ul
};

/// Constant 'ECU_PARAMS_ACTUAL_TIMEOUT'.
enum
{
  turtle_interfaces__msg__CanStatus__ECU_PARAMS_ACTUAL_TIMEOUT = 4096ul
};

/// Constant 'COOLING_INFO_TIMEOUT'.
enum
{
  turtle_interfaces__msg__CanStatus__COOLING_INFO_TIMEOUT = 8192ul
};

/// Constant 'ISABELLEN_TIMEOUT'.
enum
{
  turtle_interfaces__msg__CanStatus__ISABELLEN_TIMEOUT = 16384ul
};

/// Constant 'ECU_CONTROL_SYSTEMS_TIMEOUT'.
enum
{
  turtle_interfaces__msg__CanStatus__ECU_CONTROL_SYSTEMS_TIMEOUT = 32768ul
};

/// Constant 'ECU_ISABELLEN_TIMEOUT'.
enum
{
  turtle_interfaces__msg__CanStatus__ECU_ISABELLEN_TIMEOUT = 65536ul
};

/// Constant 'INV_LEFT_INFO_TIMEOUT'.
enum
{
  turtle_interfaces__msg__CanStatus__INV_LEFT_INFO_TIMEOUT = 131072ul
};

/// Constant 'INV_RIGHT_INFO_TIMEOUT'.
enum
{
  turtle_interfaces__msg__CanStatus__INV_RIGHT_INFO_TIMEOUT = 262144ul
};

/// Constant 'CAN_STATE_ERROR_ACTIVE'.
enum
{
  turtle_interfaces__msg__CanStatus__CAN_STATE_ERROR_ACTIVE = 0l
};

/// Constant 'CAN_STATE_ERROR_WARNING'.
enum
{
  turtle_interfaces__msg__CanStatus__CAN_STATE_ERROR_WARNING = 1l
};

/// Constant 'CAN_STATE_ERROR_PASSIVE'.
enum
{
  turtle_interfaces__msg__CanStatus__CAN_STATE_ERROR_PASSIVE = 2l
};

/// Constant 'CAN_STATE_BUS_OFF'.
enum
{
  turtle_interfaces__msg__CanStatus__CAN_STATE_BUS_OFF = 3l
};

/// Constant 'CAN_STATE_STOPPED'.
enum
{
  turtle_interfaces__msg__CanStatus__CAN_STATE_STOPPED = 4l
};

/// Constant 'CAN_STATE_SLEEPING'.
enum
{
  turtle_interfaces__msg__CanStatus__CAN_STATE_SLEEPING = 5l
};

/// Constant 'CAN_STATE_MAX'.
enum
{
  turtle_interfaces__msg__CanStatus__CAN_STATE_MAX = 6l
};

// Include directives for member types
// Member 'header'
#include "std_msgs/msg/detail/header__struct.h"

// Struct defined in msg/CanStatus in the package turtle_interfaces.
typedef struct turtle_interfaces__msg__CanStatus
{
  std_msgs__msg__Header header;
  uint32_t message_timeouts;
  uint16_t sensor_errors;
  uint16_t tx_berrors;
  uint16_t rx_berrors;
  uint64_t tx_terrors;
  uint64_t rx_terrors;
  uint32_t bus_errors;
  uint32_t restarts;
  int32_t can_state;
} turtle_interfaces__msg__CanStatus;

// Struct for a sequence of turtle_interfaces__msg__CanStatus.
typedef struct turtle_interfaces__msg__CanStatus__Sequence
{
  turtle_interfaces__msg__CanStatus * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} turtle_interfaces__msg__CanStatus__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // TURTLE_INTERFACES__MSG__DETAIL__CAN_STATUS__STRUCT_H_
