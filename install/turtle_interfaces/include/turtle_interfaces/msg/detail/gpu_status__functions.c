// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from turtle_interfaces:msg/GpuStatus.idl
// generated code does not contain a copyright notice
#include "turtle_interfaces/msg/detail/gpu_status__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>


// Include directives for member types
// Member `header`
#include "std_msgs/msg/detail/header__functions.h"

bool
turtle_interfaces__msg__GpuStatus__init(turtle_interfaces__msg__GpuStatus * msg)
{
  if (!msg) {
    return false;
  }
  // header
  if (!std_msgs__msg__Header__init(&msg->header)) {
    turtle_interfaces__msg__GpuStatus__fini(msg);
    return false;
  }
  // gpu_status
  // cu_device
  // free_memory
  // used_memory
  // total_memory
  // temp_c
  // speed_fan
  // power_usage
  return true;
}

void
turtle_interfaces__msg__GpuStatus__fini(turtle_interfaces__msg__GpuStatus * msg)
{
  if (!msg) {
    return;
  }
  // header
  std_msgs__msg__Header__fini(&msg->header);
  // gpu_status
  // cu_device
  // free_memory
  // used_memory
  // total_memory
  // temp_c
  // speed_fan
  // power_usage
}

bool
turtle_interfaces__msg__GpuStatus__are_equal(const turtle_interfaces__msg__GpuStatus * lhs, const turtle_interfaces__msg__GpuStatus * rhs)
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
  // gpu_status
  if (lhs->gpu_status != rhs->gpu_status) {
    return false;
  }
  // cu_device
  if (lhs->cu_device != rhs->cu_device) {
    return false;
  }
  // free_memory
  if (lhs->free_memory != rhs->free_memory) {
    return false;
  }
  // used_memory
  if (lhs->used_memory != rhs->used_memory) {
    return false;
  }
  // total_memory
  if (lhs->total_memory != rhs->total_memory) {
    return false;
  }
  // temp_c
  if (lhs->temp_c != rhs->temp_c) {
    return false;
  }
  // speed_fan
  if (lhs->speed_fan != rhs->speed_fan) {
    return false;
  }
  // power_usage
  if (lhs->power_usage != rhs->power_usage) {
    return false;
  }
  return true;
}

bool
turtle_interfaces__msg__GpuStatus__copy(
  const turtle_interfaces__msg__GpuStatus * input,
  turtle_interfaces__msg__GpuStatus * output)
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
  // gpu_status
  output->gpu_status = input->gpu_status;
  // cu_device
  output->cu_device = input->cu_device;
  // free_memory
  output->free_memory = input->free_memory;
  // used_memory
  output->used_memory = input->used_memory;
  // total_memory
  output->total_memory = input->total_memory;
  // temp_c
  output->temp_c = input->temp_c;
  // speed_fan
  output->speed_fan = input->speed_fan;
  // power_usage
  output->power_usage = input->power_usage;
  return true;
}

turtle_interfaces__msg__GpuStatus *
turtle_interfaces__msg__GpuStatus__create()
{
  turtle_interfaces__msg__GpuStatus * msg = (turtle_interfaces__msg__GpuStatus *)malloc(sizeof(turtle_interfaces__msg__GpuStatus));
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(turtle_interfaces__msg__GpuStatus));
  bool success = turtle_interfaces__msg__GpuStatus__init(msg);
  if (!success) {
    free(msg);
    return NULL;
  }
  return msg;
}

void
turtle_interfaces__msg__GpuStatus__destroy(turtle_interfaces__msg__GpuStatus * msg)
{
  if (msg) {
    turtle_interfaces__msg__GpuStatus__fini(msg);
  }
  free(msg);
}


bool
turtle_interfaces__msg__GpuStatus__Sequence__init(turtle_interfaces__msg__GpuStatus__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  turtle_interfaces__msg__GpuStatus * data = NULL;
  if (size) {
    data = (turtle_interfaces__msg__GpuStatus *)calloc(size, sizeof(turtle_interfaces__msg__GpuStatus));
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = turtle_interfaces__msg__GpuStatus__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        turtle_interfaces__msg__GpuStatus__fini(&data[i - 1]);
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
turtle_interfaces__msg__GpuStatus__Sequence__fini(turtle_interfaces__msg__GpuStatus__Sequence * array)
{
  if (!array) {
    return;
  }
  if (array->data) {
    // ensure that data and capacity values are consistent
    assert(array->capacity > 0);
    // finalize all array elements
    for (size_t i = 0; i < array->capacity; ++i) {
      turtle_interfaces__msg__GpuStatus__fini(&array->data[i]);
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

turtle_interfaces__msg__GpuStatus__Sequence *
turtle_interfaces__msg__GpuStatus__Sequence__create(size_t size)
{
  turtle_interfaces__msg__GpuStatus__Sequence * array = (turtle_interfaces__msg__GpuStatus__Sequence *)malloc(sizeof(turtle_interfaces__msg__GpuStatus__Sequence));
  if (!array) {
    return NULL;
  }
  bool success = turtle_interfaces__msg__GpuStatus__Sequence__init(array, size);
  if (!success) {
    free(array);
    return NULL;
  }
  return array;
}

void
turtle_interfaces__msg__GpuStatus__Sequence__destroy(turtle_interfaces__msg__GpuStatus__Sequence * array)
{
  if (array) {
    turtle_interfaces__msg__GpuStatus__Sequence__fini(array);
  }
  free(array);
}

bool
turtle_interfaces__msg__GpuStatus__Sequence__are_equal(const turtle_interfaces__msg__GpuStatus__Sequence * lhs, const turtle_interfaces__msg__GpuStatus__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!turtle_interfaces__msg__GpuStatus__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
turtle_interfaces__msg__GpuStatus__Sequence__copy(
  const turtle_interfaces__msg__GpuStatus__Sequence * input,
  turtle_interfaces__msg__GpuStatus__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(turtle_interfaces__msg__GpuStatus);
    turtle_interfaces__msg__GpuStatus * data =
      (turtle_interfaces__msg__GpuStatus *)realloc(output->data, allocation_size);
    if (!data) {
      return false;
    }
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!turtle_interfaces__msg__GpuStatus__init(&data[i])) {
        /* free currently allocated and return false */
        for (; i-- > output->capacity; ) {
          turtle_interfaces__msg__GpuStatus__fini(&data[i]);
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
    if (!turtle_interfaces__msg__GpuStatus__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
