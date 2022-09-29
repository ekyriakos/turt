// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from turtle_interfaces:msg/ControlInfo.idl
// generated code does not contain a copyright notice
#include "turtle_interfaces/msg/detail/control_info__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>


// Include directives for member types
// Member `header`
#include "std_msgs/msg/detail/header__functions.h"

bool
turtle_interfaces__msg__ControlInfo__init(turtle_interfaces__msg__ControlInfo * msg)
{
  if (!msg) {
    return false;
  }
  // header
  if (!std_msgs__msg__Header__init(&msg->header)) {
    turtle_interfaces__msg__ControlInfo__fini(msg);
    return false;
  }
  // lookahead_distance
  // vx_desired
  // lap
  // map_available
  // finalization_trigger
  // seconds_to_cross_finish_line
  // anti_delft_gain
  // finish_dist_thresh
  // vx
  // seconds_passed_since_finalization_trigger
  // heading_condition
  // startline_pose_heading
  return true;
}

void
turtle_interfaces__msg__ControlInfo__fini(turtle_interfaces__msg__ControlInfo * msg)
{
  if (!msg) {
    return;
  }
  // header
  std_msgs__msg__Header__fini(&msg->header);
  // lookahead_distance
  // vx_desired
  // lap
  // map_available
  // finalization_trigger
  // seconds_to_cross_finish_line
  // anti_delft_gain
  // finish_dist_thresh
  // vx
  // seconds_passed_since_finalization_trigger
  // heading_condition
  // startline_pose_heading
}

bool
turtle_interfaces__msg__ControlInfo__are_equal(const turtle_interfaces__msg__ControlInfo * lhs, const turtle_interfaces__msg__ControlInfo * rhs)
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
  // lookahead_distance
  if (lhs->lookahead_distance != rhs->lookahead_distance) {
    return false;
  }
  // vx_desired
  if (lhs->vx_desired != rhs->vx_desired) {
    return false;
  }
  // lap
  if (lhs->lap != rhs->lap) {
    return false;
  }
  // map_available
  if (lhs->map_available != rhs->map_available) {
    return false;
  }
  // finalization_trigger
  if (lhs->finalization_trigger != rhs->finalization_trigger) {
    return false;
  }
  // seconds_to_cross_finish_line
  if (lhs->seconds_to_cross_finish_line != rhs->seconds_to_cross_finish_line) {
    return false;
  }
  // anti_delft_gain
  if (lhs->anti_delft_gain != rhs->anti_delft_gain) {
    return false;
  }
  // finish_dist_thresh
  if (lhs->finish_dist_thresh != rhs->finish_dist_thresh) {
    return false;
  }
  // vx
  if (lhs->vx != rhs->vx) {
    return false;
  }
  // seconds_passed_since_finalization_trigger
  if (lhs->seconds_passed_since_finalization_trigger != rhs->seconds_passed_since_finalization_trigger) {
    return false;
  }
  // heading_condition
  if (lhs->heading_condition != rhs->heading_condition) {
    return false;
  }
  // startline_pose_heading
  if (lhs->startline_pose_heading != rhs->startline_pose_heading) {
    return false;
  }
  return true;
}

bool
turtle_interfaces__msg__ControlInfo__copy(
  const turtle_interfaces__msg__ControlInfo * input,
  turtle_interfaces__msg__ControlInfo * output)
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
  // lookahead_distance
  output->lookahead_distance = input->lookahead_distance;
  // vx_desired
  output->vx_desired = input->vx_desired;
  // lap
  output->lap = input->lap;
  // map_available
  output->map_available = input->map_available;
  // finalization_trigger
  output->finalization_trigger = input->finalization_trigger;
  // seconds_to_cross_finish_line
  output->seconds_to_cross_finish_line = input->seconds_to_cross_finish_line;
  // anti_delft_gain
  output->anti_delft_gain = input->anti_delft_gain;
  // finish_dist_thresh
  output->finish_dist_thresh = input->finish_dist_thresh;
  // vx
  output->vx = input->vx;
  // seconds_passed_since_finalization_trigger
  output->seconds_passed_since_finalization_trigger = input->seconds_passed_since_finalization_trigger;
  // heading_condition
  output->heading_condition = input->heading_condition;
  // startline_pose_heading
  output->startline_pose_heading = input->startline_pose_heading;
  return true;
}

turtle_interfaces__msg__ControlInfo *
turtle_interfaces__msg__ControlInfo__create()
{
  turtle_interfaces__msg__ControlInfo * msg = (turtle_interfaces__msg__ControlInfo *)malloc(sizeof(turtle_interfaces__msg__ControlInfo));
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(turtle_interfaces__msg__ControlInfo));
  bool success = turtle_interfaces__msg__ControlInfo__init(msg);
  if (!success) {
    free(msg);
    return NULL;
  }
  return msg;
}

void
turtle_interfaces__msg__ControlInfo__destroy(turtle_interfaces__msg__ControlInfo * msg)
{
  if (msg) {
    turtle_interfaces__msg__ControlInfo__fini(msg);
  }
  free(msg);
}


bool
turtle_interfaces__msg__ControlInfo__Sequence__init(turtle_interfaces__msg__ControlInfo__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  turtle_interfaces__msg__ControlInfo * data = NULL;
  if (size) {
    data = (turtle_interfaces__msg__ControlInfo *)calloc(size, sizeof(turtle_interfaces__msg__ControlInfo));
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = turtle_interfaces__msg__ControlInfo__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        turtle_interfaces__msg__ControlInfo__fini(&data[i - 1]);
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
turtle_interfaces__msg__ControlInfo__Sequence__fini(turtle_interfaces__msg__ControlInfo__Sequence * array)
{
  if (!array) {
    return;
  }
  if (array->data) {
    // ensure that data and capacity values are consistent
    assert(array->capacity > 0);
    // finalize all array elements
    for (size_t i = 0; i < array->capacity; ++i) {
      turtle_interfaces__msg__ControlInfo__fini(&array->data[i]);
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

turtle_interfaces__msg__ControlInfo__Sequence *
turtle_interfaces__msg__ControlInfo__Sequence__create(size_t size)
{
  turtle_interfaces__msg__ControlInfo__Sequence * array = (turtle_interfaces__msg__ControlInfo__Sequence *)malloc(sizeof(turtle_interfaces__msg__ControlInfo__Sequence));
  if (!array) {
    return NULL;
  }
  bool success = turtle_interfaces__msg__ControlInfo__Sequence__init(array, size);
  if (!success) {
    free(array);
    return NULL;
  }
  return array;
}

void
turtle_interfaces__msg__ControlInfo__Sequence__destroy(turtle_interfaces__msg__ControlInfo__Sequence * array)
{
  if (array) {
    turtle_interfaces__msg__ControlInfo__Sequence__fini(array);
  }
  free(array);
}

bool
turtle_interfaces__msg__ControlInfo__Sequence__are_equal(const turtle_interfaces__msg__ControlInfo__Sequence * lhs, const turtle_interfaces__msg__ControlInfo__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!turtle_interfaces__msg__ControlInfo__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
turtle_interfaces__msg__ControlInfo__Sequence__copy(
  const turtle_interfaces__msg__ControlInfo__Sequence * input,
  turtle_interfaces__msg__ControlInfo__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(turtle_interfaces__msg__ControlInfo);
    turtle_interfaces__msg__ControlInfo * data =
      (turtle_interfaces__msg__ControlInfo *)realloc(output->data, allocation_size);
    if (!data) {
      return false;
    }
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!turtle_interfaces__msg__ControlInfo__init(&data[i])) {
        /* free currently allocated and return false */
        for (; i-- > output->capacity; ) {
          turtle_interfaces__msg__ControlInfo__fini(&data[i]);
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
    if (!turtle_interfaces__msg__ControlInfo__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
