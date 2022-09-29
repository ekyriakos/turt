// generated from rosidl_generator_c/resource/idl__functions.h.em
// with input from turtle_interfaces:msg/TsalSafeState.idl
// generated code does not contain a copyright notice

#ifndef TURTLE_INTERFACES__MSG__DETAIL__TSAL_SAFE_STATE__FUNCTIONS_H_
#define TURTLE_INTERFACES__MSG__DETAIL__TSAL_SAFE_STATE__FUNCTIONS_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stdlib.h>

#include "rosidl_runtime_c/visibility_control.h"
#include "turtle_interfaces/msg/rosidl_generator_c__visibility_control.h"

#include "turtle_interfaces/msg/detail/tsal_safe_state__struct.h"

/// Initialize msg/TsalSafeState message.
/**
 * If the init function is called twice for the same message without
 * calling fini inbetween previously allocated memory will be leaked.
 * \param[in,out] msg The previously allocated message pointer.
 * Fields without a default value will not be initialized by this function.
 * You might want to call memset(msg, 0, sizeof(
 * turtle_interfaces__msg__TsalSafeState
 * )) before or use
 * turtle_interfaces__msg__TsalSafeState__create()
 * to allocate and initialize the message.
 * \return true if initialization was successful, otherwise false
 */
ROSIDL_GENERATOR_C_PUBLIC_turtle_interfaces
bool
turtle_interfaces__msg__TsalSafeState__init(turtle_interfaces__msg__TsalSafeState * msg);

/// Finalize msg/TsalSafeState message.
/**
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_turtle_interfaces
void
turtle_interfaces__msg__TsalSafeState__fini(turtle_interfaces__msg__TsalSafeState * msg);

/// Create msg/TsalSafeState message.
/**
 * It allocates the memory for the message, sets the memory to zero, and
 * calls
 * turtle_interfaces__msg__TsalSafeState__init().
 * \return The pointer to the initialized message if successful,
 * otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_turtle_interfaces
turtle_interfaces__msg__TsalSafeState *
turtle_interfaces__msg__TsalSafeState__create();

/// Destroy msg/TsalSafeState message.
/**
 * It calls
 * turtle_interfaces__msg__TsalSafeState__fini()
 * and frees the memory of the message.
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_turtle_interfaces
void
turtle_interfaces__msg__TsalSafeState__destroy(turtle_interfaces__msg__TsalSafeState * msg);

/// Check for msg/TsalSafeState message equality.
/**
 * \param[in] lhs The message on the left hand size of the equality operator.
 * \param[in] rhs The message on the right hand size of the equality operator.
 * \return true if messages are equal, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_turtle_interfaces
bool
turtle_interfaces__msg__TsalSafeState__are_equal(const turtle_interfaces__msg__TsalSafeState * lhs, const turtle_interfaces__msg__TsalSafeState * rhs);

/// Copy a msg/TsalSafeState message.
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
turtle_interfaces__msg__TsalSafeState__copy(
  const turtle_interfaces__msg__TsalSafeState * input,
  turtle_interfaces__msg__TsalSafeState * output);

/// Initialize array of msg/TsalSafeState messages.
/**
 * It allocates the memory for the number of elements and calls
 * turtle_interfaces__msg__TsalSafeState__init()
 * for each element of the array.
 * \param[in,out] array The allocated array pointer.
 * \param[in] size The size / capacity of the array.
 * \return true if initialization was successful, otherwise false
 * If the array pointer is valid and the size is zero it is guaranteed
 # to return true.
 */
ROSIDL_GENERATOR_C_PUBLIC_turtle_interfaces
bool
turtle_interfaces__msg__TsalSafeState__Sequence__init(turtle_interfaces__msg__TsalSafeState__Sequence * array, size_t size);

/// Finalize array of msg/TsalSafeState messages.
/**
 * It calls
 * turtle_interfaces__msg__TsalSafeState__fini()
 * for each element of the array and frees the memory for the number of
 * elements.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_turtle_interfaces
void
turtle_interfaces__msg__TsalSafeState__Sequence__fini(turtle_interfaces__msg__TsalSafeState__Sequence * array);

/// Create array of msg/TsalSafeState messages.
/**
 * It allocates the memory for the array and calls
 * turtle_interfaces__msg__TsalSafeState__Sequence__init().
 * \param[in] size The size / capacity of the array.
 * \return The pointer to the initialized array if successful, otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_turtle_interfaces
turtle_interfaces__msg__TsalSafeState__Sequence *
turtle_interfaces__msg__TsalSafeState__Sequence__create(size_t size);

/// Destroy array of msg/TsalSafeState messages.
/**
 * It calls
 * turtle_interfaces__msg__TsalSafeState__Sequence__fini()
 * on the array,
 * and frees the memory of the array.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_turtle_interfaces
void
turtle_interfaces__msg__TsalSafeState__Sequence__destroy(turtle_interfaces__msg__TsalSafeState__Sequence * array);

/// Check for msg/TsalSafeState message array equality.
/**
 * \param[in] lhs The message array on the left hand size of the equality operator.
 * \param[in] rhs The message array on the right hand size of the equality operator.
 * \return true if message arrays are equal in size and content, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_turtle_interfaces
bool
turtle_interfaces__msg__TsalSafeState__Sequence__are_equal(const turtle_interfaces__msg__TsalSafeState__Sequence * lhs, const turtle_interfaces__msg__TsalSafeState__Sequence * rhs);

/// Copy an array of msg/TsalSafeState messages.
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
turtle_interfaces__msg__TsalSafeState__Sequence__copy(
  const turtle_interfaces__msg__TsalSafeState__Sequence * input,
  turtle_interfaces__msg__TsalSafeState__Sequence * output);

#ifdef __cplusplus
}
#endif

#endif  // TURTLE_INTERFACES__MSG__DETAIL__TSAL_SAFE_STATE__FUNCTIONS_H_
