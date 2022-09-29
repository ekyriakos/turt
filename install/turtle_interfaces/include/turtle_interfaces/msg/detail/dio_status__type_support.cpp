// generated from rosidl_typesupport_introspection_cpp/resource/idl__type_support.cpp.em
// with input from turtle_interfaces:msg/DioStatus.idl
// generated code does not contain a copyright notice

#include "array"
#include "cstddef"
#include "string"
#include "vector"
#include "rosidl_runtime_c/message_type_support_struct.h"
#include "rosidl_typesupport_cpp/message_type_support.hpp"
#include "rosidl_typesupport_interface/macros.h"
#include "turtle_interfaces/msg/detail/dio_status__struct.hpp"
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

void DioStatus_init_function(
  void * message_memory, rosidl_runtime_cpp::MessageInitialization _init)
{
  new (message_memory) turtle_interfaces::msg::DioStatus(_init);
}

void DioStatus_fini_function(void * message_memory)
{
  auto typed_message = static_cast<turtle_interfaces::msg::DioStatus *>(message_memory);
  typed_message->~DioStatus();
}

size_t size_function__DioStatus__do_state(const void * untyped_member)
{
  (void)untyped_member;
  return 8;
}

const void * get_const_function__DioStatus__do_state(const void * untyped_member, size_t index)
{
  const auto & member =
    *reinterpret_cast<const std::array<bool, 8> *>(untyped_member);
  return &member[index];
}

void * get_function__DioStatus__do_state(void * untyped_member, size_t index)
{
  auto & member =
    *reinterpret_cast<std::array<bool, 8> *>(untyped_member);
  return &member[index];
}

size_t size_function__DioStatus__di_state(const void * untyped_member)
{
  (void)untyped_member;
  return 8;
}

const void * get_const_function__DioStatus__di_state(const void * untyped_member, size_t index)
{
  const auto & member =
    *reinterpret_cast<const std::array<bool, 8> *>(untyped_member);
  return &member[index];
}

void * get_function__DioStatus__di_state(void * untyped_member, size_t index)
{
  auto & member =
    *reinterpret_cast<std::array<bool, 8> *>(untyped_member);
  return &member[index];
}

static const ::rosidl_typesupport_introspection_cpp::MessageMember DioStatus_message_member_array[3] = {
  {
    "header",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    ::rosidl_typesupport_introspection_cpp::get_message_type_support_handle<std_msgs::msg::Header>(),  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(turtle_interfaces::msg::DioStatus, header),  // bytes offset in struct
    nullptr,  // default value
    nullptr,  // size() function pointer
    nullptr,  // get_const(index) function pointer
    nullptr,  // get(index) function pointer
    nullptr  // resize(index) function pointer
  },
  {
    "do_state",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_BOOLEAN,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    true,  // is array
    8,  // array size
    false,  // is upper bound
    offsetof(turtle_interfaces::msg::DioStatus, do_state),  // bytes offset in struct
    nullptr,  // default value
    size_function__DioStatus__do_state,  // size() function pointer
    get_const_function__DioStatus__do_state,  // get_const(index) function pointer
    get_function__DioStatus__do_state,  // get(index) function pointer
    nullptr  // resize(index) function pointer
  },
  {
    "di_state",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_BOOLEAN,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    true,  // is array
    8,  // array size
    false,  // is upper bound
    offsetof(turtle_interfaces::msg::DioStatus, di_state),  // bytes offset in struct
    nullptr,  // default value
    size_function__DioStatus__di_state,  // size() function pointer
    get_const_function__DioStatus__di_state,  // get_const(index) function pointer
    get_function__DioStatus__di_state,  // get(index) function pointer
    nullptr  // resize(index) function pointer
  }
};

static const ::rosidl_typesupport_introspection_cpp::MessageMembers DioStatus_message_members = {
  "turtle_interfaces::msg",  // message namespace
  "DioStatus",  // message name
  3,  // number of fields
  sizeof(turtle_interfaces::msg::DioStatus),
  DioStatus_message_member_array,  // message members
  DioStatus_init_function,  // function to initialize message memory (memory has to be allocated)
  DioStatus_fini_function  // function to terminate message instance (will not free memory)
};

static const rosidl_message_type_support_t DioStatus_message_type_support_handle = {
  ::rosidl_typesupport_introspection_cpp::typesupport_identifier,
  &DioStatus_message_members,
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
get_message_type_support_handle<turtle_interfaces::msg::DioStatus>()
{
  return &::turtle_interfaces::msg::rosidl_typesupport_introspection_cpp::DioStatus_message_type_support_handle;
}

}  // namespace rosidl_typesupport_introspection_cpp

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_INTROSPECTION_CPP_PUBLIC
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_cpp, turtle_interfaces, msg, DioStatus)() {
  return &::turtle_interfaces::msg::rosidl_typesupport_introspection_cpp::DioStatus_message_type_support_handle;
}

#ifdef __cplusplus
}
#endif
