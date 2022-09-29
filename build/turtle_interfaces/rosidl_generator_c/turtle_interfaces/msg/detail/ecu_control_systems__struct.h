// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from turtle_interfaces:msg/ECUControlSystems.idl
// generated code does not contain a copyright notice

#ifndef TURTLE_INTERFACES__MSG__DETAIL__ECU_CONTROL_SYSTEMS__STRUCT_H_
#define TURTLE_INTERFACES__MSG__DETAIL__ECU_CONTROL_SYSTEMS__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

// Include directives for member types
// Member 'header'
#include "std_msgs/msg/detail/header__struct.h"

// Struct defined in msg/ECUControlSystems in the package turtle_interfaces.
typedef struct turtle_interfaces__msg__ECUControlSystems
{
  std_msgs__msg__Header header;
  bool ed_active;
  bool tc_active;
  bool pl_active;
  bool regen_active;
} turtle_interfaces__msg__ECUControlSystems;

// Struct for a sequence of turtle_interfaces__msg__ECUControlSystems.
typedef struct turtle_interfaces__msg__ECUControlSystems__Sequence
{
  turtle_interfaces__msg__ECUControlSystems * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} turtle_interfaces__msg__ECUControlSystems__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // TURTLE_INTERFACES__MSG__DETAIL__ECU_CONTROL_SYSTEMS__STRUCT_H_
