// generated from rosidl_typesupport_fastrtps_cpp/resource/idl__type_support.cpp.em
// with input from turtle_interfaces:msg/EbsSupervisorInfo.idl
// generated code does not contain a copyright notice
#include "turtle_interfaces/msg/detail/ebs_supervisor_info__rosidl_typesupport_fastrtps_cpp.hpp"
#include "turtle_interfaces/msg/detail/ebs_supervisor_info__struct.hpp"

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
  const turtle_interfaces::msg::EbsSupervisorInfo & ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  // Member: header
  std_msgs::msg::typesupport_fastrtps_cpp::cdr_serialize(
    ros_message.header,
    cdr);
  // Member: asmsstate
  cdr << (ros_message.asmsstate ? true : false);
  // Member: tsmsout
  cdr << (ros_message.tsmsout ? true : false);
  // Member: ebsstatus
  cdr << ros_message.ebsstatus;
  // Member: ebsled
  cdr << (ros_message.ebsled ? true : false);
  // Member: servicebrakestatus
  cdr << ros_message.servicebrakestatus;
  // Member: initialchecked
  cdr << (ros_message.initialchecked ? true : false);
  // Member: initialcheckstage
  cdr << ros_message.initialcheckstage;
  // Member: monitortankpressure
  cdr << (ros_message.monitortankpressure ? true : false);
  // Member: monitorbrakepressure
  cdr << (ros_message.monitorbrakepressure ? true : false);
  // Member: monitorservocheck
  cdr << (ros_message.monitorservocheck ? true : false);
  // Member: monitorapu
  cdr << (ros_message.monitorapu ? true : false);
  return true;
}

bool
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_turtle_interfaces
cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  turtle_interfaces::msg::EbsSupervisorInfo & ros_message)
{
  // Member: header
  std_msgs::msg::typesupport_fastrtps_cpp::cdr_deserialize(
    cdr, ros_message.header);

  // Member: asmsstate
  {
    uint8_t tmp;
    cdr >> tmp;
    ros_message.asmsstate = tmp ? true : false;
  }

  // Member: tsmsout
  {
    uint8_t tmp;
    cdr >> tmp;
    ros_message.tsmsout = tmp ? true : false;
  }

  // Member: ebsstatus
  cdr >> ros_message.ebsstatus;

  // Member: ebsled
  {
    uint8_t tmp;
    cdr >> tmp;
    ros_message.ebsled = tmp ? true : false;
  }

  // Member: servicebrakestatus
  cdr >> ros_message.servicebrakestatus;

  // Member: initialchecked
  {
    uint8_t tmp;
    cdr >> tmp;
    ros_message.initialchecked = tmp ? true : false;
  }

  // Member: initialcheckstage
  cdr >> ros_message.initialcheckstage;

  // Member: monitortankpressure
  {
    uint8_t tmp;
    cdr >> tmp;
    ros_message.monitortankpressure = tmp ? true : false;
  }

  // Member: monitorbrakepressure
  {
    uint8_t tmp;
    cdr >> tmp;
    ros_message.monitorbrakepressure = tmp ? true : false;
  }

  // Member: monitorservocheck
  {
    uint8_t tmp;
    cdr >> tmp;
    ros_message.monitorservocheck = tmp ? true : false;
  }

  // Member: monitorapu
  {
    uint8_t tmp;
    cdr >> tmp;
    ros_message.monitorapu = tmp ? true : false;
  }

  return true;
}

size_t
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_turtle_interfaces
get_serialized_size(
  const turtle_interfaces::msg::EbsSupervisorInfo & ros_message,
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
  // Member: asmsstate
  {
    size_t item_size = sizeof(ros_message.asmsstate);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: tsmsout
  {
    size_t item_size = sizeof(ros_message.tsmsout);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: ebsstatus
  {
    size_t item_size = sizeof(ros_message.ebsstatus);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: ebsled
  {
    size_t item_size = sizeof(ros_message.ebsled);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: servicebrakestatus
  {
    size_t item_size = sizeof(ros_message.servicebrakestatus);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: initialchecked
  {
    size_t item_size = sizeof(ros_message.initialchecked);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: initialcheckstage
  {
    size_t item_size = sizeof(ros_message.initialcheckstage);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: monitortankpressure
  {
    size_t item_size = sizeof(ros_message.monitortankpressure);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: monitorbrakepressure
  {
    size_t item_size = sizeof(ros_message.monitorbrakepressure);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: monitorservocheck
  {
    size_t item_size = sizeof(ros_message.monitorservocheck);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: monitorapu
  {
    size_t item_size = sizeof(ros_message.monitorapu);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  return current_alignment - initial_alignment;
}

size_t
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_turtle_interfaces
max_serialized_size_EbsSupervisorInfo(
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

  // Member: asmsstate
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint8_t);
  }

  // Member: tsmsout
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint8_t);
  }

  // Member: ebsstatus
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint8_t);
  }

  // Member: ebsled
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint8_t);
  }

  // Member: servicebrakestatus
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint8_t);
  }

  // Member: initialchecked
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint8_t);
  }

  // Member: initialcheckstage
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint8_t);
  }

  // Member: monitortankpressure
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint8_t);
  }

  // Member: monitorbrakepressure
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint8_t);
  }

  // Member: monitorservocheck
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint8_t);
  }

  // Member: monitorapu
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint8_t);
  }

  return current_alignment - initial_alignment;
}

static bool _EbsSupervisorInfo__cdr_serialize(
  const void * untyped_ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  auto typed_message =
    static_cast<const turtle_interfaces::msg::EbsSupervisorInfo *>(
    untyped_ros_message);
  return cdr_serialize(*typed_message, cdr);
}

static bool _EbsSupervisorInfo__cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  void * untyped_ros_message)
{
  auto typed_message =
    static_cast<turtle_interfaces::msg::EbsSupervisorInfo *>(
    untyped_ros_message);
  return cdr_deserialize(cdr, *typed_message);
}

static uint32_t _EbsSupervisorInfo__get_serialized_size(
  const void * untyped_ros_message)
{
  auto typed_message =
    static_cast<const turtle_interfaces::msg::EbsSupervisorInfo *>(
    untyped_ros_message);
  return static_cast<uint32_t>(get_serialized_size(*typed_message, 0));
}

static size_t _EbsSupervisorInfo__max_serialized_size(bool & full_bounded)
{
  return max_serialized_size_EbsSupervisorInfo(full_bounded, 0);
}

static message_type_support_callbacks_t _EbsSupervisorInfo__callbacks = {
  "turtle_interfaces::msg",
  "EbsSupervisorInfo",
  _EbsSupervisorInfo__cdr_serialize,
  _EbsSupervisorInfo__cdr_deserialize,
  _EbsSupervisorInfo__get_serialized_size,
  _EbsSupervisorInfo__max_serialized_size
};

static rosidl_message_type_support_t _EbsSupervisorInfo__handle = {
  rosidl_typesupport_fastrtps_cpp::typesupport_identifier,
  &_EbsSupervisorInfo__callbacks,
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
get_message_type_support_handle<turtle_interfaces::msg::EbsSupervisorInfo>()
{
  return &turtle_interfaces::msg::typesupport_fastrtps_cpp::_EbsSupervisorInfo__handle;
}

}  // namespace rosidl_typesupport_fastrtps_cpp

#ifdef __cplusplus
extern "C"
{
#endif

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, turtle_interfaces, msg, EbsSupervisorInfo)() {
  return &turtle_interfaces::msg::typesupport_fastrtps_cpp::_EbsSupervisorInfo__handle;
}

#ifdef __cplusplus
}
#endif
