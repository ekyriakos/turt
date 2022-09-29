// generated from rosidl_typesupport_fastrtps_cpp/resource/idl__type_support.cpp.em
// with input from turtle_interfaces:msg/ControlInfo.idl
// generated code does not contain a copyright notice
#include "turtle_interfaces/msg/detail/control_info__rosidl_typesupport_fastrtps_cpp.hpp"
#include "turtle_interfaces/msg/detail/control_info__struct.hpp"

#include <limits>
#include <stdexcept>
#include <string>
#include "rosidl_typesupport_cpp/message_type_support.hpp"
#include "rosidl_typesupport_fastrtps_cpp/identifier.hpp"
#include "rosidl_typesupport_fastrtps_cpp/message_type_support.h"
#include "rosidl_typesupport_fastrtps_cpp/message_type_support_decl.hpp"
#include "rosidl_typesupport_fastrtps_cpp/wstring_conversion.hpp"
#include "fastcdr/Cdr.h"


// forward declaration of message dependencies and their conversion functions
namespace std_msgs
{
namespace msg
{
namespace typesupport_fastrtps_cpp
{
bool cdr_serialize(
  const std_msgs::msg::Header &,
  eprosima::fastcdr::Cdr &);
bool cdr_deserialize(
  eprosima::fastcdr::Cdr &,
  std_msgs::msg::Header &);
size_t get_serialized_size(
  const std_msgs::msg::Header &,
  size_t current_alignment);
size_t
max_serialized_size_Header(
  bool & full_bounded,
  size_t current_alignment);
}  // namespace typesupport_fastrtps_cpp
}  // namespace msg
}  // namespace std_msgs


namespace turtle_interfaces
{

namespace msg
{

namespace typesupport_fastrtps_cpp
{

bool
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_turtle_interfaces
cdr_serialize(
  const turtle_interfaces::msg::ControlInfo & ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  // Member: header
  std_msgs::msg::typesupport_fastrtps_cpp::cdr_serialize(
    ros_message.header,
    cdr);
  // Member: lookahead_distance
  cdr << ros_message.lookahead_distance;
  // Member: vx_desired
  cdr << ros_message.vx_desired;
  // Member: lap
  cdr << ros_message.lap;
  // Member: map_available
  cdr << (ros_message.map_available ? true : false);
  // Member: finalization_trigger
  cdr << (ros_message.finalization_trigger ? true : false);
  // Member: seconds_to_cross_finish_line
  cdr << ros_message.seconds_to_cross_finish_line;
  // Member: anti_delft_gain
  cdr << ros_message.anti_delft_gain;
  // Member: finish_dist_thresh
  cdr << ros_message.finish_dist_thresh;
  // Member: vx
  cdr << ros_message.vx;
  // Member: seconds_passed_since_finalization_trigger
  cdr << ros_message.seconds_passed_since_finalization_trigger;
  // Member: heading_condition
  cdr << (ros_message.heading_condition ? true : false);
  // Member: startline_pose_heading
  cdr << ros_message.startline_pose_heading;
  return true;
}

bool
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_turtle_interfaces
cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  turtle_interfaces::msg::ControlInfo & ros_message)
{
  // Member: header
  std_msgs::msg::typesupport_fastrtps_cpp::cdr_deserialize(
    cdr, ros_message.header);

  // Member: lookahead_distance
  cdr >> ros_message.lookahead_distance;

  // Member: vx_desired
  cdr >> ros_message.vx_desired;

  // Member: lap
  cdr >> ros_message.lap;

  // Member: map_available
  {
    uint8_t tmp;
    cdr >> tmp;
    ros_message.map_available = tmp ? true : false;
  }

  // Member: finalization_trigger
  {
    uint8_t tmp;
    cdr >> tmp;
    ros_message.finalization_trigger = tmp ? true : false;
  }

  // Member: seconds_to_cross_finish_line
  cdr >> ros_message.seconds_to_cross_finish_line;

  // Member: anti_delft_gain
  cdr >> ros_message.anti_delft_gain;

  // Member: finish_dist_thresh
  cdr >> ros_message.finish_dist_thresh;

  // Member: vx
  cdr >> ros_message.vx;

  // Member: seconds_passed_since_finalization_trigger
  cdr >> ros_message.seconds_passed_since_finalization_trigger;

  // Member: heading_condition
  {
    uint8_t tmp;
    cdr >> tmp;
    ros_message.heading_condition = tmp ? true : false;
  }

  // Member: startline_pose_heading
  cdr >> ros_message.startline_pose_heading;

  return true;
}

size_t
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_turtle_interfaces
get_serialized_size(
  const turtle_interfaces::msg::ControlInfo & ros_message,
  size_t current_alignment)
{
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;

  // Member: header

  current_alignment +=
    std_msgs::msg::typesupport_fastrtps_cpp::get_serialized_size(
    ros_message.header, current_alignment);
  // Member: lookahead_distance
  {
    size_t item_size = sizeof(ros_message.lookahead_distance);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: vx_desired
  {
    size_t item_size = sizeof(ros_message.vx_desired);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: lap
  {
    size_t item_size = sizeof(ros_message.lap);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: map_available
  {
    size_t item_size = sizeof(ros_message.map_available);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: finalization_trigger
  {
    size_t item_size = sizeof(ros_message.finalization_trigger);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: seconds_to_cross_finish_line
  {
    size_t item_size = sizeof(ros_message.seconds_to_cross_finish_line);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: anti_delft_gain
  {
    size_t item_size = sizeof(ros_message.anti_delft_gain);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: finish_dist_thresh
  {
    size_t item_size = sizeof(ros_message.finish_dist_thresh);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: vx
  {
    size_t item_size = sizeof(ros_message.vx);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: seconds_passed_since_finalization_trigger
  {
    size_t item_size = sizeof(ros_message.seconds_passed_since_finalization_trigger);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: heading_condition
  {
    size_t item_size = sizeof(ros_message.heading_condition);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: startline_pose_heading
  {
    size_t item_size = sizeof(ros_message.startline_pose_heading);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  return current_alignment - initial_alignment;
}

size_t
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_turtle_interfaces
max_serialized_size_ControlInfo(
  bool & full_bounded,
  size_t current_alignment)
{
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;
  (void)full_bounded;


  // Member: header
  {
    size_t array_size = 1;


    for (size_t index = 0; index < array_size; ++index) {
      current_alignment +=
        std_msgs::msg::typesupport_fastrtps_cpp::max_serialized_size_Header(
        full_bounded, current_alignment);
    }
  }

  // Member: lookahead_distance
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }

  // Member: vx_desired
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }

  // Member: lap
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint8_t);
  }

  // Member: map_available
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint8_t);
  }

  // Member: finalization_trigger
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint8_t);
  }

  // Member: seconds_to_cross_finish_line
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }

  // Member: anti_delft_gain
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }

  // Member: finish_dist_thresh
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }

  // Member: vx
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }

  // Member: seconds_passed_since_finalization_trigger
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }

  // Member: heading_condition
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint8_t);
  }

  // Member: startline_pose_heading
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }

  return current_alignment - initial_alignment;
}

static bool _ControlInfo__cdr_serialize(
  const void * untyped_ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  auto typed_message =
    static_cast<const turtle_interfaces::msg::ControlInfo *>(
    untyped_ros_message);
  return cdr_serialize(*typed_message, cdr);
}

static bool _ControlInfo__cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  void * untyped_ros_message)
{
  auto typed_message =
    static_cast<turtle_interfaces::msg::ControlInfo *>(
    untyped_ros_message);
  return cdr_deserialize(cdr, *typed_message);
}

static uint32_t _ControlInfo__get_serialized_size(
  const void * untyped_ros_message)
{
  auto typed_message =
    static_cast<const turtle_interfaces::msg::ControlInfo *>(
    untyped_ros_message);
  return static_cast<uint32_t>(get_serialized_size(*typed_message, 0));
}

static size_t _ControlInfo__max_serialized_size(bool & full_bounded)
{
  return max_serialized_size_ControlInfo(full_bounded, 0);
}

static message_type_support_callbacks_t _ControlInfo__callbacks = {
  "turtle_interfaces::msg",
  "ControlInfo",
  _ControlInfo__cdr_serialize,
  _ControlInfo__cdr_deserialize,
  _ControlInfo__get_serialized_size,
  _ControlInfo__max_serialized_size
};

static rosidl_message_type_support_t _ControlInfo__handle = {
  rosidl_typesupport_fastrtps_cpp::typesupport_identifier,
  &_ControlInfo__callbacks,
  get_message_typesupport_handle_function,
};

}  // namespace typesupport_fastrtps_cpp

}  // namespace msg

}  // namespace turtle_interfaces

namespace rosidl_typesupport_fastrtps_cpp
{

template<>
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_EXPORT_turtle_interfaces
const rosidl_message_type_support_t *
get_message_type_support_handle<turtle_interfaces::msg::ControlInfo>()
{
  return &turtle_interfaces::msg::typesupport_fastrtps_cpp::_ControlInfo__handle;
}

}  // namespace rosidl_typesupport_fastrtps_cpp

#ifdef __cplusplus
extern "C"
{
#endif

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, turtle_interfaces, msg, ControlInfo)() {
  return &turtle_interfaces::msg::typesupport_fastrtps_cpp::_ControlInfo__handle;
}

#ifdef __cplusplus
}
#endif
