// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from turtle_interfaces:msg/CanStatus.idl
// generated code does not contain a copyright notice
#include "turtle_interfaces/msg/detail/can_status__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>


// Include directives for member types
// Member `header`
#include "std_msgs/msg/detail/header__functions.h"

bool
turtle_interfaces__msg__CanStatus__init(turtle_interfaces__msg__CanStatus * msg)
{
  if (!msg) {
    return false;
  }
  // header
  if (!std_msgs__msg__Header__init(&msg->header)) {
    turtle_interfaces__msg__CanStatus__fini(msg);
    return false;
  }
  // message_timeouts
  // sensor_errors
  // tx_berrors
  // rx_berrors
  // tx_terrors
  // rx_terrors
  // bus_errors
  // restarts
  // can_state
  return true;
}

void
turtle_interfaces__msg__CanStatus__fini(turtle_interfaces__msg__CanStatus * msg)
{
  if (!msg) {
    return;
  }
  // header
  std_msgs__msg__Header__fini(&msg->header);
  // message_timeouts
  // sensor_errors
  // tx_berrors
  // rx_berrors
  // tx_terrors
  // rx_terrors
  // bus_errors
  // restarts
  // can_state
}

bool
turtle_interfaces__msg__CanStatus__are_equal(const turtle_interfaces__msg__CanStatus * lhs, const turtle_interfaces__msg__CanStatus * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // header
  if (!std_msgs__msg__Header__are_equal(
      &(lhs->header), &(rhs->header)))
  {
    return false;
  }
  // message_timeouts
  if (lhs->message_timeouts != rhs->message_timeouts) {
    return false;
  }
  // sensor_errors
  if (lhs->sensor_errors != rhs->sensor_errors) {
    return false;
  }
  // tx_berrors
  if (lhs->tx_berrors != rhs->tx_berrors) {
    return false;
  }
  // rx_berrors
  if (lhs->rx_berrors != rhs->rx_berrors) {
    return false;
  }
  // tx_terrors
  if (lhs->tx_terrors != rhs->tx_terrors) {
    return false;
  }
  // rx_terrors
  if (lhs->rx_terrors != rhs->rx_terrors) {
    return false;
  }
  // bus_errors
  if (lhs->bus_errors != rhs->bus_errors) {
    return false;
  }
  // restarts
  if (lhs->restarts != rhs->restarts) {
    return false;
  }
  // can_state
  if (lhs->can_state != rhs->can_state) {
    return false;
  }
  return true;
}

bool
turtle_interfaces__msg__CanStatus__copy(
  const turtle_interfaces__msg__CanStatus * input,
  turtle_interfaces__msg__CanStatus * output)
{
  if (!input || !output) {
    return false;
  }
  // header
  if (!std_msgs__msg__Header__copy(
      &(input->header), &(output->header)))
  {
    return false;
  }
  // message_timeouts
  output->message_timeouts = input->message_timeouts;
  // sensor_errors
  output->sensor_errors = input->sensor_errors;
  // tx_berrors
  output->tx_berrors = input->tx_berrors;
  // rx_berrors
  output->rx_berrors = input->rx_berrors;
  // tx_terrors
  output->tx_terrors = input->tx_terrors;
  // rx_terrors
  output->rx_terrors = input->rx_terrors;
  // bus_errors
  output->bus_errors = input->bus_errors;
  // restarts
  output->restarts = input->restarts;
  // can_state
  output->can_state = input->can_state;
  return true;
}

turtle_interfaces__msg__CanStatus *
turtle_interfaces__msg__CanStatus__create()
{
  turtle_interfaces__msg__CanStatus * msg = (turtle_interfaces__msg__CanStatus *)malloc(sizeof(turtle_interfaces__msg__CanStatus));
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(turtle_interfaces__msg__CanStatus));
  bool success = turtle_interfaces__msg__CanStatus__init(msg);
  if (!success) {
    free(msg);
    return NULL;
  }
  return msg;
}

void
turtle_interfaces__msg__CanStatus__destroy(turtle_interfaces__msg__CanStatus * msg)
{
  if (msg) {
    turtle_interfaces__msg__CanStatus__fini(msg);
  }
  free(msg);
}


bool
turtle_interfaces__msg__CanStatus__Sequence__init(turtle_interfaces__msg__CanStatus__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  turtle_interfaces__msg__CanStatus * data = NULL;
  if (size) {
    data = (turtle_interfaces__msg__CanStatus *)calloc(size, sizeof(turtle_interfaces__msg__CanStatus));
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = turtle_interfaces__msg__CanStatus__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        turtle_interfaces__msg__CanStatus__fini(&data[i - 1]);
      }
      free(data);
      return false;
    }
  }
  array->data = data;
  array->size = size;
  array->capacity = size;
  return true;
}

void
turtle_interfaces__msg__CanStatus__Sequence__fini(turtle_interfaces__msg__CanStatus__Sequence * array)
{
  if (!array) {
    return;
  }
  if (array->data) {
    // ensure that data and capacity values are consistent
    assert(array->capacity > 0);
    // finalize all array elements
    for (size_t i = 0; i < array->capacity; ++i) {
      turtle_interfaces__msg__CanStatus__fini(&array->data[i]);
    }
    free(array->data);
    array->data = NULL;
    array->size = 0;
    array->capacity = 0;
  } else {
    // ensure that data, size, and capacity values are consistent
    assert(0 == array->size);
    assert(0 == array->capacity);
  }
}

turtle_interfaces__msg__CanStatus__Sequence *
turtle_interfaces__msg__CanStatus__Sequence__create(size_t size)
{
  turtle_interfaces__msg__CanStatus__Sequence * array = (turtle_interfaces__msg__CanStatus__Sequence *)malloc(sizeof(turtle_interfaces__msg__CanStatus__Sequence));
  if (!array) {
    return NULL;
  }
  bool success = turtle_interfaces__msg__CanStatus__Sequence__init(array, size);
  if (!success) {
    free(array);
    return NULL;
  }
  return array;
}

void
turtle_interfaces__msg__CanStatus__Sequence__destroy(turtle_interfaces__msg__CanStatus__Sequence * array)
{
  if (array) {
    turtle_interfaces__msg__CanStatus__Sequence__fini(array);
  }
  free(array);
}

bool
turtle_interfaces__msg__CanStatus__Sequence__are_equal(const turtle_interfaces__msg__CanStatus__Sequence * lhs, const turtle_interfaces__msg__CanStatus__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!turtle_interfaces__msg__CanStatus__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
turtle_interfaces__msg__CanStatus__Sequence__copy(
  const turtle_interfaces__msg__CanStatus__Sequence * input,
  turtle_interfaces__msg__CanStatus__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(turtle_interfaces__msg__CanStatus);
    turtle_interfaces__msg__CanStatus * data =
      (turtle_interfaces__msg__CanStatus *)realloc(output->data, allocation_size);
    if (!data) {
      return false;
    }
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!turtle_interfaces__msg__CanStatus__init(&data[i])) {
        /* free currently allocated and return false */
        for (; i-- > output->capacity; ) {
          turtle_interfaces__msg__CanStatus__fini(&data[i]);
        }
        free(data);
        return false;
      }
    }
    output->data = data;
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!turtle_interfaces__msg__CanStatus__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
