// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from turtle_interfaces:msg/StateMachineState.idl
// generated code does not contain a copyright notice
#include "turtle_interfaces/msg/detail/state_machine_state__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>


bool
turtle_interfaces__msg__StateMachineState__init(turtle_interfaces__msg__StateMachineState * msg)
{
  if (!msg) {
    return false;
  }
  // state
  // setfinished
  return true;
}

void
turtle_interfaces__msg__StateMachineState__fini(turtle_interfaces__msg__StateMachineState * msg)
{
  if (!msg) {
    return;
  }
  // state
  // setfinished
}

bool
turtle_interfaces__msg__StateMachineState__are_equal(const turtle_interfaces__msg__StateMachineState * lhs, const turtle_interfaces__msg__StateMachineState * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // state
  if (lhs->state != rhs->state) {
    return false;
  }
  // setfinished
  if (lhs->setfinished != rhs->setfinished) {
    return false;
  }
  return true;
}

bool
turtle_interfaces__msg__StateMachineState__copy(
  const turtle_interfaces__msg__StateMachineState * input,
  turtle_interfaces__msg__StateMachineState * output)
{
  if (!input || !output) {
    return false;
  }
  // state
  output->state = input->state;
  // setfinished
  output->setfinished = input->setfinished;
  return true;
}

turtle_interfaces__msg__StateMachineState *
turtle_interfaces__msg__StateMachineState__create()
{
  turtle_interfaces__msg__StateMachineState * msg = (turtle_interfaces__msg__StateMachineState *)malloc(sizeof(turtle_interfaces__msg__StateMachineState));
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(turtle_interfaces__msg__StateMachineState));
  bool success = turtle_interfaces__msg__StateMachineState__init(msg);
  if (!success) {
    free(msg);
    return NULL;
  }
  return msg;
}

void
turtle_interfaces__msg__StateMachineState__destroy(turtle_interfaces__msg__StateMachineState * msg)
{
  if (msg) {
    turtle_interfaces__msg__StateMachineState__fini(msg);
  }
  free(msg);
}


bool
turtle_interfaces__msg__StateMachineState__Sequence__init(turtle_interfaces__msg__StateMachineState__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  turtle_interfaces__msg__StateMachineState * data = NULL;
  if (size) {
    data = (turtle_interfaces__msg__StateMachineState *)calloc(size, sizeof(turtle_interfaces__msg__StateMachineState));
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = turtle_interfaces__msg__StateMachineState__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        turtle_interfaces__msg__StateMachineState__fini(&data[i - 1]);
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
turtle_interfaces__msg__StateMachineState__Sequence__fini(turtle_interfaces__msg__StateMachineState__Sequence * array)
{
  if (!array) {
    return;
  }
  if (array->data) {
    // ensure that data and capacity values are consistent
    assert(array->capacity > 0);
    // finalize all array elements
    for (size_t i = 0; i < array->capacity; ++i) {
      turtle_interfaces__msg__StateMachineState__fini(&array->data[i]);
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

turtle_interfaces__msg__StateMachineState__Sequence *
turtle_interfaces__msg__StateMachineState__Sequence__create(size_t size)
{
  turtle_interfaces__msg__StateMachineState__Sequence * array = (turtle_interfaces__msg__StateMachineState__Sequence *)malloc(sizeof(turtle_interfaces__msg__StateMachineState__Sequence));
  if (!array) {
    return NULL;
  }
  bool success = turtle_interfaces__msg__StateMachineState__Sequence__init(array, size);
  if (!success) {
    free(array);
    return NULL;
  }
  return array;
}

void
turtle_interfaces__msg__StateMachineState__Sequence__destroy(turtle_interfaces__msg__StateMachineState__Sequence * array)
{
  if (array) {
    turtle_interfaces__msg__StateMachineState__Sequence__fini(array);
  }
  free(array);
}

bool
turtle_interfaces__msg__StateMachineState__Sequence__are_equal(const turtle_interfaces__msg__StateMachineState__Sequence * lhs, const turtle_interfaces__msg__StateMachineState__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!turtle_interfaces__msg__StateMachineState__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
turtle_interfaces__msg__StateMachineState__Sequence__copy(
  const turtle_interfaces__msg__StateMachineState__Sequence * input,
  turtle_interfaces__msg__StateMachineState__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(turtle_interfaces__msg__StateMachineState);
    turtle_interfaces__msg__StateMachineState * data =
      (turtle_interfaces__msg__StateMachineState *)realloc(output->data, allocation_size);
    if (!data) {
      return false;
    }
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!turtle_interfaces__msg__StateMachineState__init(&data[i])) {
        /* free currently allocated and return false */
        for (; i-- > output->capacity; ) {
          turtle_interfaces__msg__StateMachineState__fini(&data[i]);
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
    if (!turtle_interfaces__msg__StateMachineState__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
