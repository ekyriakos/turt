// generated from rosidl_typesupport_fastrtps_cpp/resource/idl__type_support.cpp.em
// with input from turtle_interfaces:msg/ECUParams.idl
// generated code does not contain a copyright notice
#include "turtle_interfaces/msg/detail/ecu_params__rosidl_typesupport_fastrtps_cpp.hpp"
#include "turtle_interfaces/msg/detail/ecu_params__struct.hpp"

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
  const turtle_interfaces::msg::ECUParams & ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  // Member: header
  std_msgs::msg::typesupport_fastrtps_cpp::cdr_serialize(
    ros_message.header,
    cdr);
  // Member: inverter_rpm_percentage
  cdr << ros_message.inverter_rpm_percentage;
  // Member: inverter_i_rms_max
  cdr << ros_message.inverter_i_rms_max;
  // Member: inverter_i_rms_max_brake
  cdr << ros_message.inverter_i_rms_max_brake;
  // Member: power_target_kw
  cdr << ros_message.power_target_kw;
  // Member: servo_start_speed
  cdr << ros_message.servo_start_speed;
  // Member: regen_min_speed
  cdr << ros_message.regen_min_speed;
  // Member: ed_enable
  cdr << (ros_message.ed_enable ? true : false);
  // Member: tc_enable
  cdr << (ros_message.tc_enable ? true : false);
  return true;
}

bool
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_turtle_interfaces
cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  turtle_interfaces::msg::ECUParams & ros_message)
{
  // Member: header
  std_msgs::msg::typesupport_fastrtps_cpp::cdr_deserialize(
    cdr, ros_message.header);

  // Member: inverter_rpm_percentage
  cdr >> ros_message.inverter_rpm_percentage;

  // Member: inverter_i_rms_max
  cdr >> ros_message.inverter_i_rms_max;

  // Member: inverter_i_rms_max_brake
  cdr >> ros_message.inverter_i_rms_max_brake;

  // Member: power_target_kw
  cdr >> ros_message.power_target_kw;

  // Member: servo_start_speed
  cdr >> ros_message.servo_start_speed;

  // Member: regen_min_speed
  cdr >> ros_message.regen_min_speed;

  // Member: ed_enable
  {
    uint8_t tmp;
    cdr >> tmp;
    ros_message.ed_enable = tmp ? true : false;
  }

  // Member: tc_enable
  {
    uint8_t tmp;
    cdr >> tmp;
    ros_message.tc_enable = tmp ? true : false;
  }

  return true;
}

size_t
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_turtle_interfaces
get_serialized_size(
  const turtle_interfaces::msg::ECUParams & ros_message,
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
  // Member: inverter_rpm_percentage
  {
    size_t item_size = sizeof(ros_message.inverter_rpm_percentage);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: inverter_i_rms_max
  {
    size_t item_size = sizeof(ros_message.inverter_i_rms_max);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: inverter_i_rms_max_brake
  {
    size_t item_size = sizeof(ros_message.inverter_i_rms_max_brake);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: power_target_kw
  {
    size_t item_size = sizeof(ros_message.power_target_kw);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: servo_start_speed
  {
    size_t item_size = sizeof(ros_message.servo_start_speed);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: regen_min_speed
  {
    size_t item_size = sizeof(ros_message.regen_min_speed);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: ed_enable
  {
    size_t item_size = sizeof(ros_message.ed_enable);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: tc_enable
  {
    size_t item_size = sizeof(ros_message.tc_enable);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  return current_alignment - initial_alignment;
}

size_t
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_turtle_interfaces
max_serialized_size_ECUParams(
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

  // Member: inverter_rpm_percentage
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }

  // Member: inverter_i_rms_max
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }

  // Member: inverter_i_rms_max_brake
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }

  // Member: power_target_kw
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }

  // Member: servo_start_speed
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }

  // Member: regen_min_speed
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }

  // Member: ed_enable
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint8_t);
  }

  // Member: tc_enable
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint8_t);
  }

  return current_alignment - initial_alignment;
}

static bool _ECUParams__cdr_serialize(
  const void * untyped_ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  auto typed_message =
    static_cast<const turtle_interfaces::msg::ECUParams *>(
    untyped_ros_message);
  return cdr_serialize(*typed_message, cdr);
}

static bool _ECUParams__cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  void * untyped_ros_message)
{
  auto typed_message =
    static_cast<turtle_interfaces::msg::ECUParams *>(
    untyped_ros_message);
  return cdr_deserialize(cdr, *typed_message);
}

static uint32_t _ECUParams__get_serialized_size(
  const void * untyped_ros_message)
{
  auto typed_message =
    static_cast<const turtle_interfaces::msg::ECUParams *>(
    untyped_ros_message);
  return static_cast<uint32_t>(get_serialized_size(*typed_message, 0));
}

static size_t _ECUParams__max_serialized_size(bool & full_bounded)
{
  return max_serialized_size_ECUParams(full_bounded, 0);
}

static message_type_support_callbacks_t _ECUParams__callbacks = {
  "turtle_interfaces::msg",
  "ECUParams",
  _ECUParams__cdr_serialize,
  _ECUParams__cdr_deserialize,
  _ECUParams__get_serialized_size,
  _ECUParams__max_serialized_size
};

static rosidl_message_type_support_t _ECUParams__handle = {
  rosidl_typesupport_fastrtps_cpp::typesupport_identifier,
  &_ECUParams__callbacks,
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
get_message_type_support_handle<turtle_interfaces::msg::ECUParams>()
{
  return &turtle_interfaces::msg::typesupport_fastrtps_cpp::_ECUParams__handle;
}

}  // namespace rosidl_typesupport_fastrtps_cpp

#ifdef __cplusplus
extern "C"
{
#endif

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, turtle_interfaces, msg, ECUParams)() {
  return &turtle_interfaces::msg::typesupport_fastrtps_cpp::_ECUParams__handle;
}

#ifdef __cplusplus
}
#endif