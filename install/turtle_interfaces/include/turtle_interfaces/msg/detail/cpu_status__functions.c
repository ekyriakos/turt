// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from turtle_interfaces:msg/CpuStatus.idl
// generated code does not contain a copyright notice
#include "turtle_interfaces/msg/detail/cpu_status__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>


// Include directives for member types
// Member `header`
#include "std_msgs/msg/detail/header__functions.h"
// Member `core_usage_percents`
// Member `node_cpu_usage_percents`
// Member `core_temperatures`
#include "rosidl_runtime_c/primitives_sequence_functions.h"
// Member `node_cpu_usage_names`
// Member `core_temperature_names`
#include "rosidl_runtime_c/string_functions.h"

bool
turtle_interfaces__msg__CpuStatus__init(turtle_interfaces__msg__CpuStatus * msg)
{
  if (!msg) {
    return false;
  }
  // header
  if (!std_msgs__msg__Header__init(&msg->header)) {
    turtle_interfaces__msg__CpuStatus__fini(msg);
    return false;
  }
  // cpu_usage_percent
  // number_of_cores
  // core_usage_percents
  if (!rosidl_runtime_c__float__Sequence__init(&msg->core_usage_percents, 0)) {
    turtle_interfaces__msg__CpuStatus__fini(msg);
    return false;
  }
  // number_of_ros_nodes
  // node_cpu_usage_percents
  if (!rosidl_runtime_c__float__Sequence__init(&msg->node_cpu_usage_percents, 0)) {
    turtle_interfaces__msg__CpuStatus__fini(msg);
    return false;
  }
  // node_cpu_usage_names
  if (!rosidl_runtime_c__String__Sequence__init(&msg->node_cpu_usage_names, 0)) {
    turtle_interfaces__msg__CpuStatus__fini(msg);
    return false;
  }
  // number_of_temperatures
  // core_temperatures
  if (!rosidl_runtime_c__float__Sequence__init(&msg->core_temperatures, 0)) {
    turtle_interfaces__msg__CpuStatus__fini(msg);
    return false;
  }
  // core_temperature_names
  if (!rosidl_runtime_c__String__Sequence__init(&msg->core_temperature_names, 0)) {
    turtle_interfaces__msg__CpuStatus__fini(msg);
    return false;
  }
  return true;
}

void
turtle_interfaces__msg__CpuStatus__fini(turtle_interfaces__msg__CpuStatus * msg)
{
  if (!msg) {
    return;
  }
  // header
  std_msgs__msg__Header__fini(&msg->header);
  // cpu_usage_percent
  // number_of_cores
  // core_usage_percents
  rosidl_runtime_c__float__Sequence__fini(&msg->core_usage_percents);
  // number_of_ros_nodes
  // node_cpu_usage_percents
  rosidl_runtime_c__float__Sequence__fini(&msg->node_cpu_usage_percents);
  // node_cpu_usage_names
  rosidl_runtime_c__String__Sequence__fini(&msg->node_cpu_usage_names);
  // number_of_temperatures
  // core_temperatures
  rosidl_runtime_c__float__Sequence__fini(&msg->core_temperatures);
  // core_temperature_names
  rosidl_runtime_c__String__Sequence__fini(&msg->core_temperature_names);
}

bool
turtle_interfaces__msg__CpuStatus__are_equal(const turtle_interfaces__msg__CpuStatus * lhs, const turtle_interfaces__msg__CpuStatus * rhs)
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
  // cpu_usage_percent
  if (lhs->cpu_usage_percent != rhs->cpu_usage_percent) {
    return false;
  }
  // number_of_cores
  if (lhs->number_of_cores != rhs->number_of_cores) {
    return false;
  }
  // core_usage_percents
  if (!rosidl_runtime_c__float__Sequence__are_equal(
      &(lhs->core_usage_percents), &(rhs->core_usage_percents)))
  {
    return false;
  }
  // number_of_ros_nodes
  if (lhs->number_of_ros_nodes != rhs->number_of_ros_nodes) {
    return false;
  }
  // node_cpu_usage_percents
  if (!rosidl_runtime_c__float__Sequence__are_equal(
      &(lhs->node_cpu_usage_percents), &(rhs->node_cpu_usage_percents)))
  {
    return false;
  }
  // node_cpu_usage_names
  if (!rosidl_runtime_c__String__Sequence__are_equal(
      &(lhs->node_cpu_usage_names), &(rhs->node_cpu_usage_names)))
  {
    return false;
  }
  // number_of_temperatures
  if (lhs->number_of_temperatures != rhs->number_of_temperatures) {
    return false;
  }
  // core_temperatures
  if (!rosidl_runtime_c__float__Sequence__are_equal(
      &(lhs->core_temperatures), &(rhs->core_temperatures)))
  {
    return false;
  }
  // core_temperature_names
  if (!rosidl_runtime_c__String__Sequence__are_equal(
      &(lhs->core_temperature_names), &(rhs->core_temperature_names)))
  {
    return false;
  }
  return true;
}

bool
turtle_interfaces__msg__CpuStatus__copy(
  const turtle_interfaces__msg__CpuStatus * input,
  turtle_interfaces__msg__CpuStatus * output)
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
  // cpu_usage_percent
  output->cpu_usage_percent = input->cpu_usage_percent;
  // number_of_cores
  output->number_of_cores = input->number_of_cores;
  // core_usage_percents
  if (!rosidl_runtime_c__float__Sequence__copy(
      &(input->core_usage_percents), &(output->core_usage_percents)))
  {
    return false;
  }
  // number_of_ros_nodes
  output->number_of_ros_nodes = input->number_of_ros_nodes;
  // node_cpu_usage_percents
  if (!rosidl_runtime_c__float__Sequence__copy(
      &(input->node_cpu_usage_percents), &(output->node_cpu_usage_percents)))
  {
    return false;
  }
  // node_cpu_usage_names
  if (!rosidl_runtime_c__String__Sequence__copy(
      &(input->node_cpu_usage_names), &(output->node_cpu_usage_names)))
  {
    return false;
  }
  // number_of_temperatures
  output->number_of_temperatures = input->number_of_temperatures;
  // core_temperatures
  if (!rosidl_runtime_c__float__Sequence__copy(
      &(input->core_temperatures), &(output->core_temperatures)))
  {
    return false;
  }
  // core_temperature_names
  if (!rosidl_runtime_c__String__Sequence__copy(
      &(input->core_temperature_names), &(output->core_temperature_names)))
  {
    return false;
  }
  return true;
}

turtle_interfaces__msg__CpuStatus *
turtle_interfaces__msg__CpuStatus__create()
{
  turtle_interfaces__msg__CpuStatus * msg = (turtle_interfaces__msg__CpuStatus *)malloc(sizeof(turtle_interfaces__msg__CpuStatus));
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(turtle_interfaces__msg__CpuStatus));
  bool success = turtle_interfaces__msg__CpuStatus__init(msg);
  if (!success) {
    free(msg);
    return NULL;
  }
  return msg;
}

void
turtle_interfaces__msg__CpuStatus__destroy(turtle_interfaces__msg__CpuStatus * msg)
{
  if (msg) {
    turtle_interfaces__msg__CpuStatus__fini(msg);
  }
  free(msg);
}


bool
turtle_interfaces__msg__CpuStatus__Sequence__init(turtle_interfaces__msg__CpuStatus__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  turtle_interfaces__msg__CpuStatus * data = NULL;
  if (size) {
    data = (turtle_interfaces__msg__CpuStatus *)calloc(size, sizeof(turtle_interfaces__msg__CpuStatus));
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = turtle_interfaces__msg__CpuStatus__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        turtle_interfaces__msg__CpuStatus__fini(&data[i - 1]);
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
turtle_interfaces__msg__CpuStatus__Sequence__fini(turtle_interfaces__msg__CpuStatus__Sequence * array)
{
  if (!array) {
    return;
  }
  if (array->data) {
    // ensure that data and capacity values are consistent
    assert(array->capacity > 0);
    // finalize all array elements
    for (size_t i = 0; i < array->capacity; ++i) {
      turtle_interfaces__msg__CpuStatus__fini(&array->data[i]);
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

turtle_interfaces__msg__CpuStatus__Sequence *
turtle_interfaces__msg__CpuStatus__Sequence__create(size_t size)
{
  turtle_interfaces__msg__CpuStatus__Sequence * array = (turtle_interfaces__msg__CpuStatus__Sequence *)malloc(sizeof(turtle_interfaces__msg__CpuStatus__Sequence));
  if (!array) {
    return NULL;
  }
  bool success = turtle_interfaces__msg__CpuStatus__Sequence__init(array, size);
  if (!success) {
    free(array);
    return NULL;
  }
  return array;
}

void
turtle_interfaces__msg__CpuStatus__Sequence__destroy(turtle_interfaces__msg__CpuStatus__Sequence * array)
{
  if (array) {
    turtle_interfaces__msg__CpuStatus__Sequence__fini(array);
  }
  free(array);
}

bool
turtle_interfaces__msg__CpuStatus__Sequence__are_equal(const turtle_interfaces__msg__CpuStatus__Sequence * lhs, const turtle_interfaces__msg__CpuStatus__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!turtle_interfaces__msg__CpuStatus__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
turtle_interfaces__msg__CpuStatus__Sequence__copy(
  const turtle_interfaces__msg__CpuStatus__Sequence * input,
  turtle_interfaces__msg__CpuStatus__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(turtle_interfaces__msg__CpuStatus);
    turtle_interfaces__msg__CpuStatus * data =
      (turtle_interfaces__msg__CpuStatus *)realloc(output->data, allocation_size);
    if (!data) {
      return false;
    }
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!turtle_interfaces__msg__CpuStatus__init(&data[i])) {
        /* free currently allocated and return false */
        for (; i-- > output->capacity; ) {
          turtle_interfaces__msg__CpuStatus__fini(&data[i]);
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
    if (!turtle_interfaces__msg__CpuStatus__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
