// generated from rosidl_typesupport_fastrtps_cpp/resource/idl__type_support.cpp.em
// with input from turtle_interfaces:msg/SlamInfo.idl
// generated code does not contain a copyright notice
#include "turtle_interfaces/msg/detail/slam_info__rosidl_typesupport_fastrtps_cpp.hpp"
#include "turtle_interfaces/msg/detail/slam_info__struct.hpp"

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
bool cdr_serialize(
  const turtle_interfaces::msg::SlamStatistics &,
  eprosima::fastcdr::Cdr &);
bool cdr_deserialize(
  eprosima::fastcdr::Cdr &,
  turtle_interfaces::msg::SlamStatistics &);
size_t get_serialized_size(
  const turtle_interfaces::msg::SlamStatistics &,
  size_t current_alignment);
size_t
max_serialized_size_SlamStatistics(
  bool & full_bounded,
  size_t current_alignment);
}  // namespace typesupport_fastrtps_cpp
}  // namespace msg
}  // namespace turtle_interfaces


namespace turtle_interfaces
{

namespace msg
{

namespace typesupport_fastrtps_cpp
{

bool
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_turtle_interfaces
cdr_serialize(
  const turtle_interfaces::msg::SlamInfo & ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  // Member: header
  std_msgs::msg::typesupport_fastrtps_cpp::cdr_serialize(
    ros_message.header,
    cdr);
  // Member: slam_statistics
  turtle_interfaces::msg::typesupport_fastrtps_cpp::cdr_serialize(
    ros_message.slam_statistics,
    cdr);
  // Member: localization_mode
  cdr << (ros_message.localization_mode ? true : false);
  // Member: sensor_cone_count
  cdr << ros_message.sensor_cone_count;
  // Member: total_cone_count
  cdr << ros_message.total_cone_count;
  return true;
}

bool
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_turtle_interfaces
cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  turtle_interfaces::msg::SlamInfo & ros_message)
{
  // Member: header
  std_msgs::msg::typesupport_fastrtps_cpp::cdr_deserialize(
    cdr, ros_message.header);

  // Member: slam_statistics
  turtle_interfaces::msg::typesupport_fastrtps_cpp::cdr_deserialize(
    cdr, ros_message.slam_statistics);

  // Member: localization_mode
  {
    uint8_t tmp;
    cdr >> tmp;
    ros_message.localization_mode = tmp ? true : false;
  }

  // Member: sensor_cone_count
  cdr >> ros_message.sensor_cone_count;

  // Member: total_cone_count
  cdr >> ros_message.total_cone_count;

  return true;
}

size_t
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_turtle_interfaces
get_serialized_size(
  const turtle_interfaces::msg::SlamInfo & ros_message,
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
  // Member: slam_statistics

  current_alignment +=
    turtle_interfaces::msg::typesupport_fastrtps_cpp::get_serialized_size(
    ros_message.slam_statistics, current_alignment);
  // Member: localization_mode
  {
    size_t item_size = sizeof(ros_message.localization_mode);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: sensor_cone_count
  {
    size_t item_size = sizeof(ros_message.sensor_cone_count);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: total_cone_count
  {
    size_t item_size = sizeof(ros_message.total_cone_count);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  return current_alignment - initial_alignment;
}

size_t
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_turtle_interfaces
max_serialized_size_SlamInfo(
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

  // Member: slam_statistics
  {
    size_t array_size = 1;


    for (size_t index = 0; index < array_size; ++index) {
      current_alignment +=
        turtle_interfaces::msg::typesupport_fastrtps_cpp::max_serialized_size_SlamStatistics(
        full_bounded, current_alignment);
    }
  }

  // Member: localization_mode
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint8_t);
  }

  // Member: sensor_cone_count
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }

  // Member: total_cone_count
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }

  return current_alignment - initial_alignment;
}

static bool _SlamInfo__cdr_serialize(
  const void * untyped_ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  auto typed_message =
    static_cast<const turtle_interfaces::msg::SlamInfo *>(
    untyped_ros_message);
  return cdr_serialize(*typed_message, cdr);
}

static bool _SlamInfo__cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  void * untyped_ros_message)
{
  auto typed_message =
    static_cast<turtle_interfaces::msg::SlamInfo *>(
    untyped_ros_message);
  return cdr_deserialize(cdr, *typed_message);
}

static uint32_t _SlamInfo__get_serialized_size(
  const void * untyped_ros_message)
{
  auto typed_message =
    static_cast<const turtle_interfaces::msg::SlamInfo *>(
    untyped_ros_message);
  return static_cast<uint32_t>(get_serialized_size(*typed_message, 0));
}

static size_t _SlamInfo__max_serialized_size(bool & full_bounded)
{
  return max_serialized_size_SlamInfo(full_bounded, 0);
}

static message_type_support_callbacks_t _SlamInfo__callbacks = {
  "turtle_interfaces::msg",
  "SlamInfo",
  _SlamInfo__cdr_serialize,
  _SlamInfo__cdr_deserialize,
  _SlamInfo__get_serialized_size,
  _SlamInfo__max_serialized_size
};

static rosidl_message_type_support_t _SlamInfo__handle = {
  rosidl_typesupport_fastrtps_cpp::typesupport_identifier,
  &_SlamInfo__callbacks,
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
get_message_type_support_handle<turtle_interfaces::msg::SlamInfo>()
{
  return &turtle_interfaces::msg::typesupport_fastrtps_cpp::_SlamInfo__handle;
}

}  // namespace rosidl_typesupport_fastrtps_cpp

#ifdef __cplusplus
extern "C"
{
#endif

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, turtle_interfaces, msg, SlamInfo)() {
  return &turtle_interfaces::msg::typesupport_fastrtps_cpp::_SlamInfo__handle;
}

#ifdef __cplusplus
}
#endif
