// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from turtle_interfaces:msg/EbsSupervisorInfo.idl
// generated code does not contain a copyright notice

#ifndef TURTLE_INTERFACES__MSG__DETAIL__EBS_SUPERVISOR_INFO__STRUCT_H_
#define TURTLE_INTERFACES__MSG__DETAIL__EBS_SUPERVISOR_INFO__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

/// Constant 'EBS_UNAVAILABLE'.
enum
{
  turtle_interfaces__msg__EbsSupervisorInfo__EBS_UNAVAILABLE = 1
};

/// Constant 'EBS_ARMED'.
enum
{
  turtle_interfaces__msg__EbsSupervisorInfo__EBS_ARMED = 2
};

/// Constant 'EBS_ACTIVATED'.
enum
{
  turtle_interfaces__msg__EbsSupervisorInfo__EBS_ACTIVATED = 3
};

/// Constant 'SERVICE_BRAKE_DISENGAGED'.
enum
{
  turtle_interfaces__msg__EbsSupervisorInfo__SERVICE_BRAKE_DISENGAGED = 1
};

/// Constant 'SERVICE_BRAKE_ENGAGED'.
enum
{
  turtle_interfaces__msg__EbsSupervisorInfo__SERVICE_BRAKE_ENGAGED = 2
};

/// Constant 'SERVICE_BRAKE_AVAILABLE'.
enum
{
  turtle_interfaces__msg__EbsSupervisorInfo__SERVICE_BRAKE_AVAILABLE = 3
};

// Include directives for member types
// Member 'header'
#include "std_msgs/msg/detail/header__struct.h"

// Struct defined in msg/EbsSupervisorInfo in the package turtle_interfaces.
typedef struct turtle_interfaces__msg__EbsSupervisorInfo
{
  std_msgs__msg__Header header;
  bool asmsstate;
  bool tsmsout;
  uint8_t ebsstatus;
  bool ebsled;
  uint8_t servicebrakestatus;
  bool initialchecked;
  int8_t initialcheckstage;
  bool monitortankpressure;
  bool monitorbrakepressure;
  bool monitorservocheck;
  bool monitorapu;
} turtle_interfaces__msg__EbsSupervisorInfo;

// Struct for a sequence of turtle_interfaces__msg__EbsSupervisorInfo.
typedef struct turtle_interfaces__msg__EbsSupervisorInfo__Sequence
{
  turtle_interfaces__msg__EbsSupervisorInfo * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} turtle_interfaces__msg__EbsSupervisorInfo__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // TURTLE_INTERFACES__MSG__DETAIL__EBS_SUPERVISOR_INFO__STRUCT_H_
