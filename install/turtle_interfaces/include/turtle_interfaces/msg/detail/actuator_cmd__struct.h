// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from turtle_interfaces:msg/ActuatorCmd.idl
// generated code does not contain a copyright notice

#ifndef TURTLE_INTERFACES__MSG__DETAIL__ACTUATOR_CMD__STRUCT_H_
#define TURTLE_INTERFACES__MSG__DETAIL__ACTUATOR_CMD__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

/// Constant 'STEERING_MODE_POSITION'.
enum
{
  turtle_interfaces__msg__ActuatorCmd__STEERING_MODE_POSITION = 13
};

/// Constant 'STEERING_MODE_VELOCITY'.
enum
{
  turtle_interfaces__msg__ActuatorCmd__STEERING_MODE_VELOCITY = 0
};

// Include directives for member types
// Member 'header'
#include "std_msgs/msg/detail/header__struct.h"

// Struct defined in msg/ActuatorCmd in the package turtle_interfaces.
typedef struct turtle_interfaces__msg__ActuatorCmd
{
  std_msgs__msg__Header header;
  float throttle;
  float steering;
  uint8_t steering_mode;
} turtle_interfaces__msg__ActuatorCmd;

// Struct for a sequence of turtle_interfaces__msg__ActuatorCmd.
typedef struct turtle_interfaces__msg__ActuatorCmd__Sequence
{
  turtle_interfaces__msg__ActuatorCmd * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} turtle_interfaces__msg__ActuatorCmd__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // TURTLE_INTERFACES__MSG__DETAIL__ACTUATOR_CMD__STRUCT_H_
