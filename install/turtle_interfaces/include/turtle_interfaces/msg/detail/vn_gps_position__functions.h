// generated from rosidl_generator_c/resource/idl__functions.h.em
// with input from turtle_interfaces:msg/VnGpsPosition.idl
// generated code does not contain a copyright notice

#ifndef TURTLE_INTERFACES__MSG__DETAIL__VN_GPS_POSITION__FUNCTIONS_H_
#define TURTLE_INTERFACES__MSG__DETAIL__VN_GPS_POSITION__FUNCTIONS_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stdlib.h>

#include "rosidl_runtime_c/visibility_control.h"
#include "turtle_interfaces/msg/rosidl_generator_c__visibility_control.h"

#include "turtle_interfaces/msg/detail/vn_gps_position__struct.h"

/// Initialize msg/VnGpsPosition message.
/**
 * If the init function is called twice for the same message without
 * calling fini inbetween previously allocated memory will be leaked.
 * \param[in,out] msg The previously allocated message pointer.
 * Fields without a default value will not be initialized by this function.
 * You might want to call memset(msg, 0, sizeof(
 * turtle_interfaces__msg__VnGpsPosition
 * )) before or use
 * turtle_interfaces__msg__VnGpsPosition__create()
 * to allocate and initialize the message.
 * \return true if initialization was successful, otherwise false
 */
ROSIDL_GENERATOR_C_PUBLIC_turtle_interfaces
bool
turtle_interfaces__msg__VnGpsPosition__init(turtle_interfaces__msg__VnGpsPosition * msg);

/// Finalize msg/VnGpsPosition message.
/**
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_turtle_interfaces
void
turtle_interfaces__msg__VnGpsPosition__fini(turtle_interfaces__msg__VnGpsPosition * msg);

/// Create msg/VnGpsPosition message.
/**
 * It allocates the memory for the message, sets the memory to zero, and
 * calls
 * turtle_interfaces__msg__VnGpsPosition__init().
 * \return The pointer to the initialized message if successful,
 * otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_turtle_interfaces
turtle_interfaces__msg__VnGpsPosition *
turtle_interfaces__msg__VnGpsPosition__create();

/// Destroy msg/VnGpsPosition message.
/**
 * It calls
 * turtle_interfaces__msg__VnGpsPosition__fini()
 * and frees the memory of the message.
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_turtle_interfaces
void
turtle_interfaces__msg__VnGpsPosition__destroy(turtle_interfaces__msg__VnGpsPosition * msg);

/// Check for msg/VnGpsPosition message equality.
/**
 * \param[in] lhs The message on the left hand size of the equality operator.
 * \param[in] rhs The message on the right hand size of the equality operator.
 * \return true if messages are equal, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_turtle_interfaces
bool
turtle_interfaces__msg__VnGpsPosition__are_equal(const turtle_interfaces__msg__VnGpsPosition * lhs, const turtle_interfaces__msg__VnGpsPosition * rhs);

/// Copy a msg/VnGpsPosition message.
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
turtle_interfaces__msg__VnGpsPosition__copy(
  const turtle_interfaces__msg__VnGpsPosition * input,
  turtle_interfaces__msg__VnGpsPosition * output);

/// Initialize array of msg/VnGpsPosition messages.
/**
 * It allocates the memory for the number of elements and calls
 * turtle_interfaces__msg__VnGpsPosition__init()
 * for each element of the array.
 * \param[in,out] array The allocated array pointer.
 * \param[in] size The size / capacity of the array.
 * \return true if initialization was successful, otherwise false
 * If the array pointer is valid and the size is zero it is guaranteed
 # to return true.
 */
ROSIDL_GENERATOR_C_PUBLIC_turtle_interfaces
bool
turtle_interfaces__msg__VnGpsPosition__Sequence__init(turtle_interfaces__msg__VnGpsPosition__Sequence * array, size_t size);

/// Finalize array of msg/VnGpsPosition messages.
/**
 * It calls
 * turtle_interfaces__msg__VnGpsPosition__fini()
 * for each element of the array and frees the memory for the number of
 * elements.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_turtle_interfaces
void
turtle_interfaces__msg__VnGpsPosition__Sequence__fini(turtle_interfaces__msg__VnGpsPosition__Sequence * array);

/// Create array of msg/VnGpsPosition messages.
/**
 * It allocates the memory for the array and calls
 * turtle_interfaces__msg__VnGpsPosition__Sequence__init().
 * \param[in] size The size / capacity of the array.
 * \return The pointer to the initialized array if successful, otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_turtle_interfaces
turtle_interfaces__msg__VnGpsPosition__Sequence *
turtle_interfaces__msg__VnGpsPosition__Sequence__create(size_t size);

/// Destroy array of msg/VnGpsPosition messages.
/**
 * It calls
 * turtle_interfaces__msg__VnGpsPosition__Sequence__fini()
 * on the array,
 * and frees the memory of the array.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_turtle_interfaces
void
turtle_interfaces__msg__VnGpsPosition__Sequence__destroy(turtle_interfaces__msg__VnGpsPosition__Sequence * array);

/// Check for msg/VnGpsPosition message array equality.
/**
 * \param[in] lhs The message array on the left hand size of the equality operator.
 * \param[in] rhs The message array on the right hand size of the equality operator.
 * \return true if message arrays are equal in size and content, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_turtle_interfaces
bool
turtle_interfaces__msg__VnGpsPosition__Sequence__are_equal(const turtle_interfaces__msg__VnGpsPosition__Sequence * lhs, const turtle_interfaces__msg__VnGpsPosition__Sequence * rhs);

/// Copy an array of msg/VnGpsPosition messages.
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
turtle_interfaces__msg__VnGpsPosition__Sequence__copy(
  const turtle_interfaces__msg__VnGpsPosition__Sequence * input,
  turtle_interfaces__msg__VnGpsPosition__Sequence * output);

#ifdef __cplusplus
}
#endif

#endif  // TURTLE_INTERFACES__MSG__DETAIL__VN_GPS_POSITION__FUNCTIONS_H_
