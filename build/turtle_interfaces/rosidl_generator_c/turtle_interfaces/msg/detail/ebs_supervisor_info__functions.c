// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from turtle_interfaces:msg/EbsSupervisorInfo.idl
// generated code does not contain a copyright notice
#include "turtle_interfaces/msg/detail/ebs_supervisor_info__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>


// Include directives for member types
// Member `header`
#include "std_msgs/msg/detail/header__functions.h"

bool
turtle_interfaces__msg__EbsSupervisorInfo__init(turtle_interfaces__msg__EbsSupervisorInfo * msg)
{
  if (!msg) {
    return false;
  }
  // header
  if (!std_msgs__msg__Header__init(&msg->header)) {
    turtle_interfaces__msg__EbsSupervisorInfo__fini(msg);
    return false;
  }
  // asmsstate
  // tsmsout
  // ebsstatus
  // ebsled
  // servicebrakestatus
  // initialchecked
  // initialcheckstage
  // monitortankpressure
  // monitorbrakepressure
  // monitorservocheck
  // monitorapu
  return true;
}

void
turtle_interfaces__msg__EbsSupervisorInfo__fini(turtle_interfaces__msg__EbsSupervisorInfo * msg)
{
  if (!msg) {
    return;
  }
  // header
  std_msgs__msg__Header__fini(&msg->header);
  // asmsstate
  // tsmsout
  // ebsstatus
  // ebsled
  // servicebrakestatus
  // initialchecked
  // initialcheckstage
  // monitortankpressure
  // monitorbrakepressure
  // monitorservocheck
  // monitorapu
}

bool
turtle_interfaces__msg__EbsSupervisorInfo__are_equal(const turtle_interfaces__msg__EbsSupervisorInfo * lhs, const turtle_interfaces__msg__EbsSupervisorInfo * rhs)
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
  // asmsstate
  if (lhs->asmsstate != rhs->asmsstate) {
    return false;
  }
  // tsmsout
  if (lhs->tsmsout != rhs->tsmsout) {
    return false;
  }
  // ebsstatus
  if (lhs->ebsstatus != rhs->ebsstatus) {
    return false;
  }
  // ebsled
  if (lhs->ebsled != rhs->ebsled) {
    return false;
  }
  // servicebrakestatus
  if (lhs->servicebrakestatus != rhs->servicebrakestatus) {
    return false;
  }
  // initialchecked
  if (lhs->initialchecked != rhs->initialchecked) {
    return false;
  }
  // initialcheckstage
  if (lhs->initialcheckstage != rhs->initialcheckstage) {
    return false;
  }
  // monitortankpressure
  if (lhs->monitortankpressure != rhs->monitortankpressure) {
    return false;
  }
  // monitorbrakepressure
  if (lhs->monitorbrakepressure != rhs->monitorbrakepressure) {
    return false;
  }
  // monitorservocheck
  if (lhs->monitorservocheck != rhs->monitorservocheck) {
    return false;
  }
  // monitorapu
  if (lhs->monitorapu != rhs->monitorapu) {
    return false;
  }
  return true;
}

bool
turtle_interfaces__msg__EbsSupervisorInfo__copy(
  const turtle_interfaces__msg__EbsSupervisorInfo * input,
  turtle_interfaces__msg__EbsSupervisorInfo * output)
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
  // asmsstate
  output->asmsstate = input->asmsstate;
  // tsmsout
  output->tsmsout = input->tsmsout;
  // ebsstatus
  output->ebsstatus = input->ebsstatus;
  // ebsled
  output->ebsled = input->ebsled;
  // servicebrakestatus
  output->servicebrakestatus = input->servicebrakestatus;
  // initialchecked
  output->initialchecked = input->initialchecked;
  // initialcheckstage
  output->initialcheckstage = input->initialcheckstage;
  // monitortankpressure
  output->monitortankpressure = input->monitortankpressure;
  // monitorbrakepressure
  output->monitorbrakepressure = input->monitorbrakepressure;
  // monitorservocheck
  output->monitorservocheck = input->monitorservocheck;
  // monitorapu
  output->monitorapu = input->monitorapu;
  return true;
}

turtle_interfaces__msg__EbsSupervisorInfo *
turtle_interfaces__msg__EbsSupervisorInfo__create()
{
  turtle_interfaces__msg__EbsSupervisorInfo * msg = (turtle_interfaces__msg__EbsSupervisorInfo *)malloc(sizeof(turtle_interfaces__msg__EbsSupervisorInfo));
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(turtle_interfaces__msg__EbsSupervisorInfo));
  bool success = turtle_interfaces__msg__EbsSupervisorInfo__init(msg);
  if (!success) {
    free(msg);
    return NULL;
  }
  return msg;
}

void
turtle_interfaces__msg__EbsSupervisorInfo__destroy(turtle_interfaces__msg__EbsSupervisorInfo * msg)
{
  if (msg) {
    turtle_interfaces__msg__EbsSupervisorInfo__fini(msg);
  }
  free(msg);
}


bool
turtle_interfaces__msg__EbsSupervisorInfo__Sequence__init(turtle_interfaces__msg__EbsSupervisorInfo__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  turtle_interfaces__msg__EbsSupervisorInfo * data = NULL;
  if (size) {
    data = (turtle_interfaces__msg__EbsSupervisorInfo *)calloc(size, sizeof(turtle_interfaces__msg__EbsSupervisorInfo));
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = turtle_interfaces__msg__EbsSupervisorInfo__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        turtle_interfaces__msg__EbsSupervisorInfo__fini(&data[i - 1]);
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
turtle_interfaces__msg__EbsSupervisorInfo__Sequence__fini(turtle_interfaces__msg__EbsSupervisorInfo__Sequence * array)
{
  if (!array) {
    return;
  }
  if (array->data) {
    // ensure that data and capacity values are consistent
    assert(array->capacity > 0);
    // finalize all array elements
    for (size_t i = 0; i < array->capacity; ++i) {
      turtle_interfaces__msg__EbsSupervisorInfo__fini(&array->data[i]);
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

turtle_interfaces__msg__EbsSupervisorInfo__Sequence *
turtle_interfaces__msg__EbsSupervisorInfo__Sequence__create(size_t size)
{
  turtle_interfaces__msg__EbsSupervisorInfo__Sequence * array = (turtle_interfaces__msg__EbsSupervisorInfo__Sequence *)malloc(sizeof(turtle_interfaces__msg__EbsSupervisorInfo__Sequence));
  if (!array) {
    return NULL;
  }
  bool success = turtle_interfaces__msg__EbsSupervisorInfo__Sequence__init(array, size);
  if (!success) {
    free(array);
    return NULL;
  }
  return array;
}

void
turtle_interfaces__msg__EbsSupervisorInfo__Sequence__destroy(turtle_interfaces__msg__EbsSupervisorInfo__Sequence * array)
{
  if (array) {
    turtle_interfaces__msg__EbsSupervisorInfo__Sequence__fini(array);
  }
  free(array);
}

bool
turtle_interfaces__msg__EbsSupervisorInfo__Sequence__are_equal(const turtle_interfaces__msg__EbsSupervisorInfo__Sequence * lhs, const turtle_interfaces__msg__EbsSupervisorInfo__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!turtle_interfaces__msg__EbsSupervisorInfo__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
turtle_interfaces__msg__EbsSupervisorInfo__Sequence__copy(
  const turtle_interfaces__msg__EbsSupervisorInfo__Sequence * input,
  turtle_interfaces__msg__EbsSupervisorInfo__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(turtle_interfaces__msg__EbsSupervisorInfo);
    turtle_interfaces__msg__EbsSupervisorInfo * data =
      (turtle_interfaces__msg__EbsSupervisorInfo *)realloc(output->data, allocation_size);
    if (!data) {
      return false;
    }
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!turtle_interfaces__msg__EbsSupervisorInfo__init(&data[i])) {
        /* free currently allocated and return false */
        for (; i-- > output->capacity; ) {
          turtle_interfaces__msg__EbsSupervisorInfo__fini(&data[i]);
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
    if (!turtle_interfaces__msg__EbsSupervisorInfo__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
