// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from turtle_interfaces:msg/CpuStatus.idl
// generated code does not contain a copyright notice

#ifndef TURTLE_INTERFACES__MSG__DETAIL__CPU_STATUS__STRUCT_H_
#define TURTLE_INTERFACES__MSG__DETAIL__CPU_STATUS__STRUCT_H_

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
// Member 'core_usage_percents'
// Member 'node_cpu_usage_percents'
// Member 'core_temperatures'
#include "rosidl_runtime_c/primitives_sequence.h"
// Member 'node_cpu_usage_names'
// Member 'core_temperature_names'
#include "rosidl_runtime_c/string.h"

// Struct defined in msg/CpuStatus in the package turtle_interfaces.
typedef struct turtle_interfaces__msg__CpuStatus
{
  std_msgs__msg__Header header;
  float cpu_usage_percent;
  uint16_t number_of_cores;
  rosidl_runtime_c__float__Sequence core_usage_percents;
  uint32_t number_of_ros_nodes;
  rosidl_runtime_c__float__Sequence node_cpu_usage_percents;
  rosidl_runtime_c__String__Sequence node_cpu_usage_names;
  uint16_t number_of_temperatures;
  rosidl_runtime_c__float__Sequence core_temperatures;
  rosidl_runtime_c__String__Sequence core_temperature_names;
} turtle_interfaces__msg__CpuStatus;

// Struct for a sequence of turtle_interfaces__msg__CpuStatus.
typedef struct turtle_interfaces__msg__CpuStatus__Sequence
{
  turtle_interfaces__msg__CpuStatus * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} turtle_interfaces__msg__CpuStatus__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // TURTLE_INTERFACES__MSG__DETAIL__CPU_STATUS__STRUCT_H_
