// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from turtle_interfaces:msg/DioStatus.idl
// generated code does not contain a copyright notice

#ifndef TURTLE_INTERFACES__MSG__DETAIL__DIO_STATUS__STRUCT_H_
#define TURTLE_INTERFACES__MSG__DETAIL__DIO_STATUS__STRUCT_H_

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

// Struct defined in msg/DioStatus in the package turtle_interfaces.
typedef struct turtle_interfaces__msg__DioStatus
{
  std_msgs__msg__Header header;
  bool do_state[8];
  bool di_state[8];
} turtle_interfaces__msg__DioStatus;

// Struct for a sequence of turtle_interfaces__msg__DioStatus.
typedef struct turtle_interfaces__msg__DioStatus__Sequence
{
  turtle_interfaces__msg__DioStatus * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} turtle_interfaces__msg__DioStatus__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // TURTLE_INTERFACES__MSG__DETAIL__DIO_STATUS__STRUCT_H_
