// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from turtle_interfaces:msg/Mission.idl
// generated code does not contain a copyright notice

#ifndef TURTLE_INTERFACES__MSG__DETAIL__MISSION__STRUCT_H_
#define TURTLE_INTERFACES__MSG__DETAIL__MISSION__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

/// Constant 'ERROR_MISSION'.
enum
{
  turtle_interfaces__msg__Mission__ERROR_MISSION = -1
};

/// Constant 'NO_MISSION'.
enum
{
  turtle_interfaces__msg__Mission__NO_MISSION = 0
};

/// Constant 'ACCELERATION'.
enum
{
  turtle_interfaces__msg__Mission__ACCELERATION = 1
};

/// Constant 'SKIDPAD'.
enum
{
  turtle_interfaces__msg__Mission__SKIDPAD = 2
};

/// Constant 'AUTOCROSS'.
enum
{
  turtle_interfaces__msg__Mission__AUTOCROSS = 3
};

/// Constant 'TRACKDRIVE'.
enum
{
  turtle_interfaces__msg__Mission__TRACKDRIVE = 4
};

/// Constant 'EBS_TEST'.
enum
{
  turtle_interfaces__msg__Mission__EBS_TEST = 5
};

/// Constant 'INSPECTION'.
enum
{
  turtle_interfaces__msg__Mission__INSPECTION = 6
};

/// Constant 'MANUAL_MISSION'.
enum
{
  turtle_interfaces__msg__Mission__MANUAL_MISSION = 7
};

// Include directives for member types
// Member 'header'
#include "std_msgs/msg/detail/header__struct.h"

// Struct defined in msg/Mission in the package turtle_interfaces.
typedef struct turtle_interfaces__msg__Mission
{
  std_msgs__msg__Header header;
  int8_t mission;
} turtle_interfaces__msg__Mission;

// Struct for a sequence of turtle_interfaces__msg__Mission.
typedef struct turtle_interfaces__msg__Mission__Sequence
{
  turtle_interfaces__msg__Mission * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} turtle_interfaces__msg__Mission__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // TURTLE_INTERFACES__MSG__DETAIL__MISSION__STRUCT_H_
