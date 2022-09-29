// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from turtle_interfaces:msg/MissionStatus.idl
// generated code does not contain a copyright notice

#ifndef TURTLE_INTERFACES__MSG__DETAIL__MISSION_STATUS__STRUCT_H_
#define TURTLE_INTERFACES__MSG__DETAIL__MISSION_STATUS__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

/// Constant 'CONFIGURING'.
enum
{
  turtle_interfaces__msg__MissionStatus__CONFIGURING = 0
};

/// Constant 'STANDBY'.
enum
{
  turtle_interfaces__msg__MissionStatus__STANDBY = 1
};

/// Constant 'INITIALIZING'.
enum
{
  turtle_interfaces__msg__MissionStatus__INITIALIZING = 2
};

/// Constant 'RUNNING'.
enum
{
  turtle_interfaces__msg__MissionStatus__RUNNING = 3
};

/// Constant 'FINALIZING'.
enum
{
  turtle_interfaces__msg__MissionStatus__FINALIZING = 4
};

/// Constant 'FINISHED'.
enum
{
  turtle_interfaces__msg__MissionStatus__FINISHED = 5
};

// Struct defined in msg/MissionStatus in the package turtle_interfaces.
typedef struct turtle_interfaces__msg__MissionStatus
{
  uint8_t mission_status;
} turtle_interfaces__msg__MissionStatus;

// Struct for a sequence of turtle_interfaces__msg__MissionStatus.
typedef struct turtle_interfaces__msg__MissionStatus__Sequence
{
  turtle_interfaces__msg__MissionStatus * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} turtle_interfaces__msg__MissionStatus__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // TURTLE_INTERFACES__MSG__DETAIL__MISSION_STATUS__STRUCT_H_
