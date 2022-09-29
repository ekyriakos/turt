// generated from rosidl_typesupport_introspection_cpp/resource/idl__type_support.cpp.em
// with input from turtle_interfaces:msg/CpuStatus.idl
// generated code does not contain a copyright notice

#include "array"
#include "cstddef"
#include "string"
#include "vector"
#include "rosidl_runtime_c/message_type_support_struct.h"
#include "rosidl_typesupport_cpp/message_type_support.hpp"
#include "rosidl_typesupport_interface/macros.h"
#include "turtle_interfaces/msg/detail/cpu_status__struct.hpp"
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

void CpuStatus_init_function(
  void * message_memory, rosidl_runtime_cpp::MessageInitialization _init)
{
  new (message_memory) turtle_interfaces::msg::CpuStatus(_init);
}

void CpuStatus_fini_function(void * message_memory)
{
  auto typed_message = static_cast<turtle_interfaces::msg::CpuStatus *>(message_memory);
  typed_message->~CpuStatus();
}

size_t size_function__CpuStatus__core_usage_percents(const void * untyped_member)
{
  const auto * member = reinterpret_cast<const std::vector<float> *>(untyped_member);
  return member->size();
}

const void * get_const_function__CpuStatus__core_usage_percents(const void * untyped_member, size_t index)
{
  const auto & member =
    *reinterpret_cast<const std::vector<float> *>(untyped_member);
  return &member[index];
}

void * get_function__CpuStatus__core_usage_percents(void * untyped_member, size_t index)
{
  auto & member =
    *reinterpret_cast<std::vector<float> *>(untyped_member);
  return &member[index];
}

void resize_function__CpuStatus__core_usage_percents(void * untyped_member, size_t size)
{
  auto * member =
    reinterpret_cast<std::vector<float> *>(untyped_member);
  member->resize(size);
}

size_t size_function__CpuStatus__node_cpu_usage_percents(const void * untyped_member)
{
  const auto * member = reinterpret_cast<const std::vector<float> *>(untyped_member);
  return member->size();
}

const void * get_const_function__CpuStatus__node_cpu_usage_percents(const void * untyped_member, size_t index)
{
  const auto & member =
    *reinterpret_cast<const std::vector<float> *>(untyped_member);
  return &member[index];
}

void * get_function__CpuStatus__node_cpu_usage_percents(void * untyped_member, size_t index)
{
  auto & member =
    *reinterpret_cast<std::vector<float> *>(untyped_member);
  return &member[index];
}

void resize_function__CpuStatus__node_cpu_usage_percents(void * untyped_member, size_t size)
{
  auto * member =
    reinterpret_cast<std::vector<float> *>(untyped_member);
  member->resize(size);
}

size_t size_function__CpuStatus__node_cpu_usage_names(const void * untyped_member)
{
  const auto * member = reinterpret_cast<const std::vector<std::string> *>(untyped_member);
  return member->size();
}

const void * get_const_function__CpuStatus__node_cpu_usage_names(const void * untyped_member, size_t index)
{
  const auto & member =
    *reinterpret_cast<const std::vector<std::string> *>(untyped_member);
  return &member[index];
}

void * get_function__CpuStatus__node_cpu_usage_names(void * untyped_member, size_t index)
{
  auto & member =
    *reinterpret_cast<std::vector<std::string> *>(untyped_member);
  return &member[index];
}

void resize_function__CpuStatus__node_cpu_usage_names(void * untyped_member, size_t size)
{
  auto * member =
    reinterpret_cast<std::vector<std::string> *>(untyped_member);
  member->resize(size);
}

size_t size_function__CpuStatus__core_temperatures(const void * untyped_member)
{
  const auto * member = reinterpret_cast<const std::vector<float> *>(untyped_member);
  return member->size();
}

const void * get_const_function__CpuStatus__core_temperatures(const void * untyped_member, size_t index)
{
  const auto & member =
    *reinterpret_cast<const std::vector<float> *>(untyped_member);
  return &member[index];
}

void * get_function__CpuStatus__core_temperatures(void * untyped_member, size_t index)
{
  auto & member =
    *reinterpret_cast<std::vector<float> *>(untyped_member);
  return &member[index];
}

void resize_function__CpuStatus__core_temperatures(void * untyped_member, size_t size)
{
  auto * member =
    reinterpret_cast<std::vector<float> *>(untyped_member);
  member->resize(size);
}

size_t size_function__CpuStatus__core_temperature_names(const void * untyped_member)
{
  const auto * member = reinterpret_cast<const std::vector<std::string> *>(untyped_member);
  return member->size();
}

const void * get_const_function__CpuStatus__core_temperature_names(const void * untyped_member, size_t index)
{
  const auto & member =
    *reinterpret_cast<const std::vector<std::string> *>(untyped_member);
  return &member[index];
}

void * get_function__CpuStatus__core_temperature_names(void * untyped_member, size_t index)
{
  auto & member =
    *reinterpret_cast<std::vector<std::string> *>(untyped_member);
  return &member[index];
}

void resize_function__CpuStatus__core_temperature_names(void * untyped_member, size_t size)
{
  auto * member =
    reinterpret_cast<std::vector<std::string> *>(untyped_member);
  member->resize(size);
}

static const ::rosidl_typesupport_introspection_cpp::MessageMember CpuStatus_message_member_array[10] = {
  {
    "header",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    ::rosidl_typesupport_introspection_cpp::get_message_type_support_handle<std_msgs::msg::Header>(),  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(turtle_interfaces::msg::CpuStatus, header),  // bytes offset in struct
    nullptr,  // default value
    nullptr,  // size() function pointer
    nullptr,  // get_const(index) function pointer
    nullptr,  // get(index) function pointer
    nullptr  // resize(index) function pointer
  },
  {
    "cpu_usage_percent",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_FLOAT,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(turtle_interfaces::msg::CpuStatus, cpu_usage_percent),  // bytes offset in struct
    nullptr,  // default value
    nullptr,  // size() function pointer
    nullptr,  // get_const(index) function pointer
    nullptr,  // get(index) function pointer
    nullptr  // resize(index) function pointer
  },
  {
    "number_of_cores",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_UINT16,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(turtle_interfaces::msg::CpuStatus, number_of_cores),  // bytes offset in struct
    nullptr,  // default value
    nullptr,  // size() function pointer
    nullptr,  // get_const(index) function pointer
    nullptr,  // get(index) function pointer
    nullptr  // resize(index) function pointer
  },
  {
    "core_usage_percents",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_FLOAT,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(turtle_interfaces::msg::CpuStatus, core_usage_percents),  // bytes offset in struct
    nullptr,  // default value
    size_function__CpuStatus__core_usage_percents,  // size() function pointer
    get_const_function__CpuStatus__core_usage_percents,  // get_const(index) function pointer
    get_function__CpuStatus__core_usage_percents,  // get(index) function pointer
    resize_function__CpuStatus__core_usage_percents  // resize(index) function pointer
  },
  {
    "number_of_ros_nodes",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_UINT32,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(turtle_interfaces::msg::CpuStatus, number_of_ros_nodes),  // bytes offset in struct
    nullptr,  // default value
    nullptr,  // size() function pointer
    nullptr,  // get_const(index) function pointer
    nullptr,  // get(index) function pointer
    nullptr  // resize(index) function pointer
  },
  {
    "node_cpu_usage_percents",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_FLOAT,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(turtle_interfaces::msg::CpuStatus, node_cpu_usage_percents),  // bytes offset in struct
    nullptr,  // default value
    size_function__CpuStatus__node_cpu_usage_percents,  // size() function pointer
    get_const_function__CpuStatus__node_cpu_usage_percents,  // get_const(index) function pointer
    get_function__CpuStatus__node_cpu_usage_percents,  // get(index) function pointer
    resize_function__CpuStatus__node_cpu_usage_percents  // resize(index) function pointer
  },
  {
    "node_cpu_usage_names",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_STRING,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(turtle_interfaces::msg::CpuStatus, node_cpu_usage_names),  // bytes offset in struct
    nullptr,  // default value
    size_function__CpuStatus__node_cpu_usage_names,  // size() function pointer
    get_const_function__CpuStatus__node_cpu_usage_names,  // get_const(index) function pointer
    get_function__CpuStatus__node_cpu_usage_names,  // get(index) function pointer
    resize_function__CpuStatus__node_cpu_usage_names  // resize(index) function pointer
  },
  {
    "number_of_temperatures",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_UINT16,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(turtle_interfaces::msg::CpuStatus, number_of_temperatures),  // bytes offset in struct
    nullptr,  // default value
    nullptr,  // size() function pointer
    nullptr,  // get_const(index) function pointer
    nullptr,  // get(index) function pointer
    nullptr  // resize(index) function pointer
  },
  {
    "core_temperatures",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_FLOAT,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(turtle_interfaces::msg::CpuStatus, core_temperatures),  // bytes offset in struct
    nullptr,  // default value
    size_function__CpuStatus__core_temperatures,  // size() function pointer
    get_const_function__CpuStatus__core_temperatures,  // get_const(index) function pointer
    get_function__CpuStatus__core_temperatures,  // get(index) function pointer
    resize_function__CpuStatus__core_temperatures  // resize(index) function pointer
  },
  {
    "core_temperature_names",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_STRING,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(turtle_interfaces::msg::CpuStatus, core_temperature_names),  // bytes offset in struct
    nullptr,  // default value
    size_function__CpuStatus__core_temperature_names,  // size() function pointer
    get_const_function__CpuStatus__core_temperature_names,  // get_const(index) function pointer
    get_function__CpuStatus__core_temperature_names,  // get(index) function pointer
    resize_function__CpuStatus__core_temperature_names  // resize(index) function pointer
  }
};

static const ::rosidl_typesupport_introspection_cpp::MessageMembers CpuStatus_message_members = {
  "turtle_interfaces::msg",  // message namespace
  "CpuStatus",  // message name
  10,  // number of fields
  sizeof(turtle_interfaces::msg::CpuStatus),
  CpuStatus_message_member_array,  // message members
  CpuStatus_init_function,  // function to initialize message memory (memory has to be allocated)
  CpuStatus_fini_function  // function to terminate message instance (will not free memory)
};

static const rosidl_message_type_support_t CpuStatus_message_type_support_handle = {
  ::rosidl_typesupport_introspection_cpp::typesupport_identifier,
  &CpuStatus_message_members,
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
get_message_type_support_handle<turtle_interfaces::msg::CpuStatus>()
{
  return &::turtle_interfaces::msg::rosidl_typesupport_introspection_cpp::CpuStatus_message_type_support_handle;
}

}  // namespace rosidl_typesupport_introspection_cpp

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_INTROSPECTION_CPP_PUBLIC
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_cpp, turtle_interfaces, msg, CpuStatus)() {
  return &::turtle_interfaces::msg::rosidl_typesupport_introspection_cpp::CpuStatus_message_type_support_handle;
}

#ifdef __cplusplus
}
#endif
