// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from turtle_interfaces:msg/StateMachineState.idl
// generated code does not contain a copyright notice

#ifndef TURTLE_INTERFACES__MSG__DETAIL__STATE_MACHINE_STATE__STRUCT_H_
#define TURTLE_INTERFACES__MSG__DETAIL__STATE_MACHINE_STATE__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

/// Constant 'MANUAL_DRIVING'.
enum
{
  turtle_interfaces__msg__StateMachineState__MANUAL_DRIVING = 0
};

/// Constant 'AS_OFF'.
enum
{
  turtle_interfaces__msg__StateMachineState__AS_OFF = 1
};

/// Constant 'AS_READY'.
enum
{
  turtle_interfaces__msg__StateMachineState__AS_READY = 2
};

/// Constant 'AS_DRIVING'.
enum
{
  turtle_interfaces__msg__StateMachineState__AS_DRIVING = 3
};

/// Constant 'AS_FINISHED'.
enum
{
  turtle_interfaces__msg__StateMachineState__AS_FINISHED = 4
};

/// Constant 'AS_EMERGENCY'.
enum
{
  turtle_interfaces__msg__StateMachineState__AS_EMERGENCY = 5
};

// Struct defined in msg/StateMachineState in the package turtle_interfaces.
typedef struct turtle_interfaces__msg__StateMachineState
{
  uint8_t state;
  bool setfinished;
} turtle_interfaces__msg__StateMachineState;

// Struct for a sequence of turtle_interfaces__msg__StateMachineState.
typedef struct turtle_interfaces__msg__StateMachineState__Sequence
{
  turtle_interfaces__msg__StateMachineState * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} turtle_interfaces__msg__StateMachineState__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // TURTLE_INTERFACES__MSG__DETAIL__STATE_MACHINE_STATE__STRUCT_H_
