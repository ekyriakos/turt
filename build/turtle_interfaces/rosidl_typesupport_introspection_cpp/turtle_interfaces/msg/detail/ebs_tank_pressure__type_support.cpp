// generated from rosidl_typesupport_introspection_cpp/resource/idl__type_support.cpp.em
// with input from turtle_interfaces:msg/EbsTankPressure.idl
// generated code does not contain a copyright notice

#include "array"
#include "cstddef"
#include "string"
#include "vector"
#include "rosidl_runtime_c/message_type_support_struct.h"
#include "rosidl_typesupport_cpp/message_type_support.hpp"
#include "rosidl_typesupport_interface/macros.h"
#include "turtle_interfaces/msg/detail/ebs_tank_pressure__struct.hpp"
#include "rosidl_typesupport_introspection_cpp/field_types.hpp"
#include "rosidl_typesupport_introspection_cpp/identifier.hpp"
#include "rosidl_typesupport_introspection_cpp/message_introspection.hpp"
#include "rosidl_typesupport_introspection_cpp/message_type_support_decl.hpp"
#include "rosidl_typesupport_introspection_cpp/visibility_control.h"

namespace turtle_interfaces
{

namespace msg
{

namespace rosidl_typesupport_introspection_cpp
{

void EbsTankPressure_init_function(
  void * message_memory, rosidl_runtime_cpp::MessageInitialization _init)
{
  new (message_memory) turtle_interfaces::msg::EbsTankPressure(_init);
}

void EbsTankPressure_fini_function(void * message_memory)
{
  auto typed_message = static_cast<turtle_interfaces::msg::EbsTankPressure *>(message_memory);
  typed_message->~EbsTankPressure();
}

static const ::rosidl_typesupport_introspection_cpp::MessageMember EbsTankPressure_message_member_array[2] = {
  {
    "header",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    ::rosidl_typesupport_introspection_cpp::get_message_type_support_handle<std_msgs::msg::Header>(),  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(turtle_interfaces::msg::EbsTankPressure, header),  // bytes offset in struct
    nullptr,  // default value
    nullptr,  // size() function pointer
    nullptr,  // get_const(index) function pointer
    nullptr,  // get(index) function pointer
    nullptr  // resize(index) function pointer
  },
  {
    "ebspressureraw",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_FLOAT,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(turtle_interfaces::msg::EbsTankPressure, ebspressureraw),  // bytes offset in struct
    nullptr,  // default value
    nullptr,  // size() function pointer
    nullptr,  // get_const(index) function pointer
    nullptr,  // get(index) function pointer
    nullptr  // resize(index) function pointer
  }
};

static const ::rosidl_typesupport_introspection_cpp::MessageMembers EbsTankPressure_message_members = {
  "turtle_interfaces::msg",  // message namespace
  "EbsTankPressure",  // message name
  2,  // number of fields
  sizeof(turtle_interfaces::msg::EbsTankPressure),
  EbsTankPressure_message_member_array,  // message members
  EbsTankPressure_init_function,  // function to initialize message memory (memory has to be allocated)
  EbsTankPressure_fini_function  // function to terminate message instance (will not free memory)
};

static const rosidl_message_type_support_t EbsTankPressure_message_type_support_handle = {
  ::rosidl_typesupport_introspection_cpp::typesupport_identifier,
  &EbsTankPressure_message_members,
  get_message_typesupport_handle_function,
};

}  // namespace rosidl_typesupport_introspection_cpp

}  // namespace msg

}  // namespace turtle_interfaces


namespace rosidl_typesupport_introspection_cpp
{

template<>
ROSIDL_TYPESUPPORT_INTROSPECTION_CPP_PUBLIC
const rosidl_message_type_support_t *
get_message_type_support_handle<turtle_interfaces::msg::EbsTankPressure>()
{
  return &::turtle_interfaces::msg::rosidl_typesupport_introspection_cpp::EbsTankPressure_message_type_support_handle;
}

}  // namespace rosidl_typesupport_introspection_cpp

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_INTROSPECTION_CPP_PUBLIC
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_cpp, turtle_interfaces, msg, EbsTankPressure)() {
  return &::turtle_interfaces::msg::rosidl_typesupport_introspection_cpp::EbsTankPressure_message_type_support_handle;
}

#ifdef __cplusplus
}
#endif
