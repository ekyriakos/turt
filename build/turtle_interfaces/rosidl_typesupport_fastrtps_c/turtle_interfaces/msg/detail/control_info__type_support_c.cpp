// generated from rosidl_typesupport_fastrtps_c/resource/idl__type_support_c.cpp.em
// with input from turtle_interfaces:msg/ControlInfo.idl
// generated code does not contain a copyright notice
#include "turtle_interfaces/msg/detail/control_info__rosidl_typesupport_fastrtps_c.h"


#include <cassert>
#include <limits>
#include <string>
#include "rosidl_typesupport_fastrtps_c/identifier.h"
#include "rosidl_typesupport_fastrtps_c/wstring_conversion.hpp"
#include "rosidl_typesupport_fastrtps_cpp/message_type_support.h"
#include "turtle_interfaces/msg/rosidl_typesupport_fastrtps_c__visibility_control.h"
#include "turtle_interfaces/msg/detail/control_info__struct.h"
#include "turtle_interfaces/msg/detail/control_info__functions.h"
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


using _ControlInfo__ros_msg_type = turtle_interfaces__msg__ControlInfo;

static bool _ControlInfo__cdr_serialize(
  const void * untyped_ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  const _ControlInfo__ros_msg_type * ros_message = static_cast<const _ControlInfo__ros_msg_type *>(untyped_ros_message);
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

  // Field name: lookahead_distance
  {
    cdr << ros_message->lookahead_distance;
  }

  // Field name: vx_desired
  {
    cdr << ros_message->vx_desired;
  }

  // Field name: lap
  {
    cdr << ros_message->lap;
  }

  // Field name: map_available
  {
    cdr << (ros_message->map_available ? true : false);
  }

  // Field name: finalization_trigger
  {
    cdr << (ros_message->finalization_trigger ? true : false);
  }

  // Field name: seconds_to_cross_finish_line
  {
    cdr << ros_message->seconds_to_cross_finish_line;
  }

  // Field name: anti_delft_gain
  {
    cdr << ros_message->anti_delft_gain;
  }

  // Field name: finish_dist_thresh
  {
    cdr << ros_message->finish_dist_thresh;
  }

  // Field name: vx
  {
    cdr << ros_message->vx;
  }

  // Field name: seconds_passed_since_finalization_trigger
  {
    cdr << ros_message->seconds_passed_since_finalization_trigger;
  }

  // Field name: heading_condition
  {
    cdr << (ros_message->heading_condition ? true : false);
  }

  // Field name: startline_pose_heading
  {
    cdr << ros_message->startline_pose_heading;
  }

  return true;
}

static bool _ControlInfo__cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  void * untyped_ros_message)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  _ControlInfo__ros_msg_type * ros_message = static_cast<_ControlInfo__ros_msg_type *>(untyped_ros_message);
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

  // Field name: lookahead_distance
  {
    cdr >> ros_message->lookahead_distance;
  }

  // Field name: vx_desired
  {
    cdr >> ros_message->vx_desired;
  }

  // Field name: lap
  {
    cdr >> ros_message->lap;
  }

  // Field name: map_available
  {
    uint8_t tmp;
    cdr >> tmp;
    ros_message->map_available = tmp ? true : false;
  }

  // Field name: finalization_trigger
  {
    uint8_t tmp;
    cdr >> tmp;
    ros_message->finalization_trigger = tmp ? true : false;
  }

  // Field name: seconds_to_cross_finish_line
  {
    cdr >> ros_message->seconds_to_cross_finish_line;
  }

  // Field name: anti_delft_gain
  {
    cdr >> ros_message->anti_delft_gain;
  }

  // Field name: finish_dist_thresh
  {
    cdr >> ros_message->finish_dist_thresh;
  }

  // Field name: vx
  {
    cdr >> ros_message->vx;
  }

  // Field name: seconds_passed_since_finalization_trigger
  {
    cdr >> ros_message->seconds_passed_since_finalization_trigger;
  }

  // Field name: heading_condition
  {
    uint8_t tmp;
    cdr >> tmp;
    ros_message->heading_condition = tmp ? true : false;
  }

  // Field name: startline_pose_heading
  {
    cdr >> ros_message->startline_pose_heading;
  }

  return true;
}  // NOLINT(readability/fn_size)

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_turtle_interfaces
size_t get_serialized_size_turtle_interfaces__msg__ControlInfo(
  const void * untyped_ros_message,
  size_t current_alignment)
{
  const _ControlInfo__ros_msg_type * ros_message = static_cast<const _ControlInfo__ros_msg_type *>(untyped_ros_message);
  (void)ros_message;
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;

  // field.name header

  current_alignment += get_serialized_size_std_msgs__msg__Header(
    &(ros_message->header), current_alignment);
  // field.name lookahead_distance
  {
    size_t item_size = sizeof(ros_message->lookahead_distance);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name vx_desired
  {
    size_t item_size = sizeof(ros_message->vx_desired);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name lap
  {
    size_t item_size = sizeof(ros_message->lap);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name map_available
  {
    size_t item_size = sizeof(ros_message->map_available);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name finalization_trigger
  {
    size_t item_size = sizeof(ros_message->finalization_trigger);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name seconds_to_cross_finish_line
  {
    size_t item_size = sizeof(ros_message->seconds_to_cross_finish_line);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name anti_delft_gain
  {
    size_t item_size = sizeof(ros_message->anti_delft_gain);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name finish_dist_thresh
  {
    size_t item_size = sizeof(ros_message->finish_dist_thresh);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name vx
  {
    size_t item_size = sizeof(ros_message->vx);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name seconds_passed_since_finalization_trigger
  {
    size_t item_size = sizeof(ros_message->seconds_passed_since_finalization_trigger);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name heading_condition
  {
    size_t item_size = sizeof(ros_message->heading_condition);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name startline_pose_heading
  {
    size_t item_size = sizeof(ros_message->startline_pose_heading);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  return current_alignment - initial_alignment;
}

static uint32_t _ControlInfo__get_serialized_size(const void * untyped_ros_message)
{
  return static_cast<uint32_t>(
    get_serialized_size_turtle_interfaces__msg__ControlInfo(
      untyped_ros_message, 0));
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_turtle_interfaces
size_t max_serialized_size_turtle_interfaces__msg__ControlInfo(
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
  // member: lookahead_distance
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }
  // member: vx_desired
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }
  // member: lap
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint8_t);
  }
  // member: map_available
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint8_t);
  }
  // member: finalization_trigger
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint8_t);
  }
  // member: seconds_to_cross_finish_line
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }
  // member: anti_delft_gain
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }
  // member: finish_dist_thresh
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
  // member: seconds_passed_since_finalization_trigger
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }
  // member: heading_condition
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint8_t);
  }
  // member: startline_pose_heading
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }

  return current_alignment - initial_alignment;
}

static size_t _ControlInfo__max_serialized_size(bool & full_bounded)
{
  return max_serialized_size_turtle_interfaces__msg__ControlInfo(
    full_bounded, 0);
}


static message_type_support_callbacks_t __callbacks_ControlInfo = {
  "turtle_interfaces::msg",
  "ControlInfo",
  _ControlInfo__cdr_serialize,
  _ControlInfo__cdr_deserialize,
  _ControlInfo__get_serialized_size,
  _ControlInfo__max_serialized_size
};

static rosidl_message_type_support_t _ControlInfo__type_support = {
  rosidl_typesupport_fastrtps_c__identifier,
  &__callbacks_ControlInfo,
  get_message_typesupport_handle_function,
};

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, turtle_interfaces, msg, ControlInfo)() {
  return &_ControlInfo__type_support;
}

#if defined(__cplusplus)
}
#endif
