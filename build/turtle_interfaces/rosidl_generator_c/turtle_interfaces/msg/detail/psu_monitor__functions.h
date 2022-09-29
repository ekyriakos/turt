// generated from rosidl_generator_c/resource/idl__functions.h.em
// with input from turtle_interfaces:msg/PsuMonitor.idl
// generated code does not contain a copyright notice

#ifndef TURTLE_INTERFACES__MSG__DETAIL__PSU_MONITOR__FUNCTIONS_H_
#define TURTLE_INTERFACES__MSG__DETAIL__PSU_MONITOR__FUNCTIONS_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stdlib.h>

#include "rosidl_runtime_c/visibility_control.h"
#include "turtle_interfaces/msg/rosidl_generator_c__visibility_control.h"

#include "turtle_interfaces/msg/detail/psu_monitor__struct.h"

/// Initialize msg/PsuMonitor message.
/**
 * If the init function is called twice for the same message without
 * calling fini inbetween previously allocated memory will be leaked.
 * \param[in,out] msg The previously allocated message pointer.
 * Fields without a default value will not be initialized by this function.
 * You might want to call memset(msg, 0, sizeof(
 * turtle_interfaces__msg__PsuMonitor
 * )) before or use
 * turtle_interfaces__msg__PsuMonitor__create()
 * to allocate and initialize the message.
 * \return true if initialization was successful, otherwise false
 */
ROSIDL_GENERATOR_C_PUBLIC_turtle_interfaces
bool
turtle_interfaces__msg__PsuMonitor__init(turtle_interfaces__msg__PsuMonitor * msg);

/// Finalize msg/PsuMonitor message.
/**
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_turtle_interfaces
void
turtle_interfaces__msg__PsuMonitor__fini(turtle_interfaces__msg__PsuMonitor * msg);

/// Create msg/PsuMonitor message.
/**
 * It allocates the memory for the message, sets the memory to zero, and
 * calls
 * turtle_interfaces__msg__PsuMonitor__init().
 * \return The pointer to the initialized message if successful,
 * otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_turtle_interfaces
turtle_interfaces__msg__PsuMonitor *
turtle_interfaces__msg__PsuMonitor__create();

/// Destroy msg/PsuMonitor message.
/**
 * It calls
 * turtle_interfaces__msg__PsuMonitor__fini()
 * and frees the memory of the message.
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_turtle_interfaces
void
turtle_interfaces__msg__PsuMonitor__destroy(turtle_interfaces__msg__PsuMonitor * msg);

/// Check for msg/PsuMonitor message equality.
/**
 * \param[in] lhs The message on the left hand size of the equality operator.
 * \param[in] rhs The message on the right hand size of the equality operator.
 * \return true if messages are equal, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_turtle_interfaces
bool
turtle_interfaces__msg__PsuMonitor__are_equal(const turtle_interfaces__msg__PsuMonitor * lhs, const turtle_interfaces__msg__PsuMonitor * rhs);

/// Copy a msg/PsuMonitor message.
/**
 * This functions performs a deep copy, as opposed to the shallow copy that
 * plain assignment yields.
 *
 * \param[in] input The source message pointer.
 * \param[out] output The target message pointer, which must
 *   have been initialized before calling this function.
 * \return true if successful, or false if either pointer is null
 *   or memory allocation fails.
 */
ROSIDL_GENERATOR_C_PUBLIC_turtle_interfaces
bool
turtle_interfaces__msg__PsuMonitor__copy(
  const turtle_interfaces__msg__PsuMonitor * input,
  turtle_interfaces__msg__PsuMonitor * output);

/// Initialize array of msg/PsuMonitor messages.
/**
 * It allocates the memory for the number of elements and calls
 * turtle_interfaces__msg__PsuMonitor__init()
 * for each element of the array.
 * \param[in,out] array The allocated array pointer.
 * \param[in] size The size / capacity of the array.
 * \return true if initialization was successful, otherwise false
 * If the array pointer is valid and the size is zero it is guaranteed
 # to return true.
 */
ROSIDL_GENERATOR_C_PUBLIC_turtle_interfaces
bool
turtle_interfaces__msg__PsuMonitor__Sequence__init(turtle_interfaces__msg__PsuMonitor__Sequence * array, size_t size);

/// Finalize array of msg/PsuMonitor messages.
/**
 * It calls
 * turtle_interfaces__msg__PsuMonitor__fini()
 * for each element of the array and frees the memory for the number of
 * elements.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_turtle_interfaces
void
turtle_interfaces__msg__PsuMonitor__Sequence__fini(turtle_interfaces__msg__PsuMonitor__Sequence * array);

/// Create array of msg/PsuMonitor messages.
/**
 * It allocates the memory for the array and calls
 * turtle_interfaces__msg__PsuMonitor__Sequence__init().
 * \param[in] size The size / capacity of the array.
 * \return The pointer to the initialized array if successful, otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_turtle_interfaces
turtle_interfaces__msg__PsuMonitor__Sequence *
turtle_interfaces__msg__PsuMonitor__Sequence__create(size_t size);

/// Destroy array of msg/PsuMonitor messages.
/**
 * It calls
 * turtle_interfaces__msg__PsuMonitor__Sequence__fini()
 * on the array,
 * and frees the memory of the array.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_turtle_interfaces
void
turtle_interfaces__msg__PsuMonitor__Sequence__destroy(turtle_interfaces__msg__PsuMonitor__Sequence * array);

/// Check for msg/PsuMonitor message array equality.
/**
 * \param[in] lhs The message array on the left hand size of the equality operator.
 * \param[in] rhs The message array on the right hand size of the equality operator.
 * \return true if message arrays are equal in size and content, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_turtle_interfaces
bool
turtle_interfaces__msg__PsuMonitor__Sequence__are_equal(const turtle_interfaces__msg__PsuMonitor__Sequence * lhs, const turtle_interfaces__msg__PsuMonitor__Sequence * rhs);

/// Copy an array of msg/PsuMonitor messages.
/**
 * This functions performs a deep copy, as opposed to the shallow copy that
 * plain assignment yields.
 *
 * \param[in] input The source array pointer.
 * \param[out] output The target array pointer, which must
 *   have been initialized before calling this function.
 * \return true if successful, or false if either pointer
 *   is null or memory allocation fails.
 */
ROSIDL_GENERATOR_C_PUBLIC_turtle_interfaces
bool
turtle_interfaces__msg__PsuMonitor__Sequence__copy(
  const turtle_interfaces__msg__PsuMonitor__Sequence * input,
  turtle_interfaces__msg__PsuMonitor__Sequence * output);

#ifdef __cplusplus
}
#endif

#endif  // TURTLE_INTERFACES__MSG__DETAIL__PSU_MONITOR__FUNCTIONS_H_
