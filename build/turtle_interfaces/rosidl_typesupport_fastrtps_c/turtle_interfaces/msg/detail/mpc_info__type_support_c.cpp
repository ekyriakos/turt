// generated from rosidl_typesupport_fastrtps_c/resource/idl__type_support_c.cpp.em
// with input from turtle_interfaces:msg/MPCInfo.idl
// generated code does not contain a copyright notice
#include "turtle_interfaces/msg/detail/mpc_info__rosidl_typesupport_fastrtps_c.h"


#include <cassert>
#include <limits>
#include <string>
#include "rosidl_typesupport_fastrtps_c/identifier.h"
#include "rosidl_typesupport_fastrtps_c/wstring_conversion.hpp"
#include "rosidl_typesupport_fastrtps_cpp/message_type_support.h"
#include "turtle_interfaces/msg/rosidl_typesupport_fastrtps_c__visibility_control.h"
#include "turtle_interfaces/msg/detail/mpc_info__struct.h"
#include "turtle_interfaces/msg/detail/mpc_info__functions.h"
#include "fastcdr/Cdr.h"

#ifndef _WIN32
# pragma GCC diagnostic push
# pragma GCC diagnostic ignored "-Wunused-parameter"
# ifdef __clang__
#  pragma clang diagnostic ignored "-Wdeprecated-register"
#  pragma clang diagnostic ignored "-Wreturn-type-c-linkage"
# endif
#endif
#ifndef _WIN32
# pragma GCC diagnostic pop
#endif

// includes and forward declarations of message dependencies and their conversion functions

#if defined(__cplusplus)
extern "C"
{
#endif

#include "rosidl_runtime_c/primitives_sequence.h"  // stages_force, stages_steering_angle, stages_velocity
#include "rosidl_runtime_c/primitives_sequence_functions.h"  // stages_force, stages_steering_angle, stages_velocity
#include "std_msgs/msg/detail/header__functions.h"  // header

// forward declare type support functions
ROSIDL_TYPESUPPORT_FASTRTPS_C_IMPORT_turtle_interfaces
size_t get_serialized_size_std_msgs__msg__Header(
  const void * untyped_ros_message,
  size_t current_alignment);

ROSIDL_TYPESUPPORT_FASTRTPS_C_IMPORT_turtle_interfaces
size_t max_serialized_size_std_msgs__msg__Header(
  bool & full_bounded,
  size_t current_alignment);

ROSIDL_TYPESUPPORT_FASTRTPS_C_IMPORT_turtle_interfaces
const rosidl_message_type_support_t *
  ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, std_msgs, msg, Header)();


using _MPCInfo__ros_msg_type = turtle_interfaces__msg__MPCInfo;

static bool _MPCInfo__cdr_serialize(
  const void * untyped_ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  const _MPCInfo__ros_msg_type * ros_message = static_cast<const _MPCInfo__ros_msg_type *>(untyped_ros_message);
  // Field name: header
  {
    const message_type_support_callbacks_t * callbacks =
      static_cast<const message_type_support_callbacks_t *>(
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(
        rosidl_typesupport_fastrtps_c, std_msgs, msg, Header
      )()->data);
    if (!callbacks->cdr_serialize(
        &ros_message->header, cdr))
    {
      return false;
    }
  }

  // Field name: mpc_was_used
  {
    cdr << ros_message->mpc_was_used;
  }

  // Field name: delta_commanded
  {
    cdr << ros_message->delta_commanded;
  }

  // Field name: delta_desired
  {
    cdr << ros_message->delta_desired;
  }

  // Field name: mpc_microseconds
  {
    cdr << ros_message->mpc_microseconds;
  }

  // Field name: mpc_milliseconds
  {
    cdr << ros_message->mpc_milliseconds;
  }

  // Field name: solver_milliseconds
  {
    cdr << ros_message->solver_milliseconds;
  }

  // Field name: velocity_desired
  {
    cdr << ros_message->velocity_desired;
  }

  // Field name: vx_max
  {
    cdr << ros_message->vx_max;
  }

  // Field name: vx
  {
    cdr << ros_message->vx;
  }

  // Field name: spline_length
  {
    cdr << ros_message->spline_length;
  }

  // Field name: number_of_waypoints
  {
    cdr << ros_message->number_of_waypoints;
  }

  // Field name: throttle_brake
  {
    cdr << ros_message->throttle_brake;
  }

  // Field name: torque
  {
    cdr << ros_message->torque;
  }

  // Field name: stages_velocity
  {
    size_t size = ros_message->stages_velocity.size;
    auto array_ptr = ros_message->stages_velocity.data;
    cdr << static_cast<uint32_t>(size);
    cdr.serializeArray(array_ptr, size);
  }

  // Field name: stages_steering_angle
  {
    size_t size = ros_message->stages_steering_angle.size;
    auto array_ptr = ros_message->stages_steering_angle.data;
    cdr << static_cast<uint32_t>(size);
    cdr.serializeArray(array_ptr, size);
  }

  // Field name: stages_force
  {
    size_t size = ros_message->stages_force.size;
    auto array_ptr = ros_message->stages_force.data;
    cdr << static_cast<uint32_t>(size);
    cdr.serializeArray(array_ptr, size);
  }

  return true;
}

static bool _MPCInfo__cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  void * untyped_ros_message)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  _MPCInfo__ros_msg_type * ros_message = static_cast<_MPCInfo__ros_msg_type *>(untyped_ros_message);
  // Field name: header
  {
    const message_type_support_callbacks_t * callbacks =
      static_cast<const message_type_support_callbacks_t *>(
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(
        rosidl_typesupport_fastrtps_c, std_msgs, msg, Header
      )()->data);
    if (!callbacks->cdr_deserialize(
        cdr, &ros_message->header))
    {
      return false;
    }
  }

  // Field name: mpc_was_used
  {
    cdr >> ros_message->mpc_was_used;
  }

  // Field name: delta_commanded
  {
    cdr >> ros_message->delta_commanded;
  }

  // Field name: delta_desired
  {
    cdr >> ros_message->delta_desired;
  }

  // Field name: mpc_microseconds
  {
    cdr >> ros_message->mpc_microseconds;
  }

  // Field name: mpc_milliseconds
  {
    cdr >> ros_message->mpc_milliseconds;
  }

  // Field name: solver_milliseconds
  {
    cdr >> ros_message->solver_milliseconds;
  }

  // Field name: velocity_desired
  {
    cdr >> ros_message->velocity_desired;
  }

  // Field name: vx_max
  {
    cdr >> ros_message->vx_max;
  }

  // Field name: vx
  {
    cdr >> ros_message->vx;
  }

  // Field name: spline_length
  {
    cdr >> ros_message->spline_length;
  }

  // Field name: number_of_waypoints
  {
    cdr >> ros_message->number_of_waypoints;
  }

  // Field name: throttle_brake
  {
    cdr >> ros_message->throttle_brake;
  }

  // Field name: torque
  {
    cdr >> ros_message->torque;
  }

  // Field name: stages_velocity
  {
    uint32_t cdrSize;
    cdr >> cdrSize;
    size_t size = static_cast<size_t>(cdrSize);
    if (ros_message->stages_velocity.data) {
      rosidl_runtime_c__float__Sequence__fini(&ros_message->stages_velocity);
    }
    if (!rosidl_runtime_c__float__Sequence__init(&ros_message->stages_velocity, size)) {
      fprintf(stderr, "failed to create array for field 'stages_velocity'");
      return false;
    }
    auto array_ptr = ros_message->stages_velocity.data;
    cdr.deserializeArray(array_ptr, size);
  }

  // Field name: stages_steering_angle
  {
    uint32_t cdrSize;
    cdr >> cdrSize;
    size_t size = static_cast<size_t>(cdrSize);
    if (ros_message->stages_steering_angle.data) {
      rosidl_runtime_c__float__Sequence__fini(&ros_message->stages_steering_angle);
    }
    if (!rosidl_runtime_c__float__Sequence__init(&ros_message->stages_steering_angle, size)) {
      fprintf(stderr, "failed to create array for field 'stages_steering_angle'");
      return false;
    }
    auto array_ptr = ros_message->stages_steering_angle.data;
    cdr.deserializeArray(array_ptr, size);
  }

  // Field name: stages_force
  {
    uint32_t cdrSize;
    cdr >> cdrSize;
    size_t size = static_cast<size_t>(cdrSize);
    if (ros_message->stages_force.data) {
      rosidl_runtime_c__float__Sequence__fini(&ros_message->stages_force);
    }
    if (!rosidl_runtime_c__float__Sequence__init(&ros_message->stages_force, size)) {
      fprintf(stderr, "failed to create array for field 'stages_force'");
      return false;
    }
    auto array_ptr = ros_message->stages_force.data;
    cdr.deserializeArray(array_ptr, size);
  }

  return true;
}  // NOLINT(readability/fn_size)

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_turtle_interfaces
size_t get_serialized_size_turtle_interfaces__msg__MPCInfo(
  const void * untyped_ros_message,
  size_t current_alignment)
{
  const _MPCInfo__ros_msg_type * ros_message = static_cast<const _MPCInfo__ros_msg_type *>(untyped_ros_message);
  (void)ros_message;
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;

  // field.name header

  current_alignment += get_serialized_size_std_msgs__msg__Header(
    &(ros_message->header), current_alignment);
  // field.name mpc_was_used
  {
    size_t item_size = sizeof(ros_message->mpc_was_used);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name delta_commanded
  {
    size_t item_size = sizeof(ros_message->delta_commanded);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name delta_desired
  {
    size_t item_size = sizeof(ros_message->delta_desired);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name mpc_microseconds
  {
    size_t item_size = sizeof(ros_message->mpc_microseconds);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name mpc_milliseconds
  {
    size_t item_size = sizeof(ros_message->mpc_milliseconds);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name solver_milliseconds
  {
    size_t item_size = sizeof(ros_message->solver_milliseconds);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name velocity_desired
  {
    size_t item_size = sizeof(ros_message->velocity_desired);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name vx_max
  {
    size_t item_size = sizeof(ros_message->vx_max);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name vx
  {
    size_t item_size = sizeof(ros_message->vx);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name spline_length
  {
    size_t item_size = sizeof(ros_message->spline_length);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name number_of_waypoints
  {
    size_t item_size = sizeof(ros_message->number_of_waypoints);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name throttle_brake
  {
    size_t item_size = sizeof(ros_message->throttle_brake);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name torque
  {
    size_t item_size = sizeof(ros_message->torque);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name stages_velocity
  {
    size_t array_size = ros_message->stages_velocity.size;
    auto array_ptr = ros_message->stages_velocity.data;
    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);
    (void)array_ptr;
    size_t item_size = sizeof(array_ptr[0]);
    current_alignment += array_size * item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name stages_steering_angle
  {
    size_t array_size = ros_message->stages_steering_angle.size;
    auto array_ptr = ros_message->stages_steering_angle.data;
    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);
    (void)array_ptr;
    size_t item_size = sizeof(array_ptr[0]);
    current_alignment += array_size * item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name stages_force
  {
    size_t array_size = ros_message->stages_force.size;
    auto array_ptr = ros_message->stages_force.data;
    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);
    (void)array_ptr;
    size_t item_size = sizeof(array_ptr[0]);
    current_alignment += array_size * item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  return current_alignment - initial_alignment;
}

static uint32_t _MPCInfo__get_serialized_size(const void * untyped_ros_message)
{
  return static_cast<uint32_t>(
    get_serialized_size_turtle_interfaces__msg__MPCInfo(
      untyped_ros_message, 0));
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_turtle_interfaces
size_t max_serialized_size_turtle_interfaces__msg__MPCInfo(
  bool & full_bounded,
  size_t current_alignment)
{
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;
  (void)full_bounded;

  // member: header
  {
    size_t array_size = 1;


    for (size_t index = 0; index < array_size; ++index) {
      current_alignment +=
        max_serialized_size_std_msgs__msg__Header(
        full_bounded, current_alignment);
    }
  }
  // member: mpc_was_used
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint8_t);
  }
  // member: delta_commanded
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }
  // member: delta_desired
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }
  // member: mpc_microseconds
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }
  // member: mpc_milliseconds
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }
  // member: solver_milliseconds
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }
  // member: velocity_desired
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }
  // member: vx_max
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }
  // member: vx
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }
  // member: spline_length
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }
  // member: number_of_waypoints
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint8_t);
  }
  // member: throttle_brake
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }
  // member: torque
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }
  // member: stages_velocity
  {
    size_t array_size = 0;
    full_bounded = false;
    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);

    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }
  // member: stages_steering_angle
  {
    size_t array_size = 0;
    full_bounded = false;
    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);

    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }
  // member: stages_force
  {
    size_t array_size = 0;
    full_bounded = false;
    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);

    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }

  return current_alignment - initial_alignment;
}

static size_t _MPCInfo__max_serialized_size(bool & full_bounded)
{
  return max_serialized_size_turtle_interfaces__msg__MPCInfo(
    full_bounded, 0);
}


static message_type_support_callbacks_t __callbacks_MPCInfo = {
  "turtle_interfaces::msg",
  "MPCInfo",
  _MPCInfo__cdr_serialize,
  _MPCInfo__cdr_deserialize,
  _MPCInfo__get_serialized_size,
  _MPCInfo__max_serialized_size
};

static rosidl_message_type_support_t _MPCInfo__type_support = {
  rosidl_typesupport_fastrtps_c__identifier,
  &__callbacks_MPCInfo,
  get_message_typesupport_handle_function,
};

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, turtle_interfaces, msg, MPCInfo)() {
  return &_MPCInfo__type_support;
}

#if defined(__cplusplus)
}
#endif
