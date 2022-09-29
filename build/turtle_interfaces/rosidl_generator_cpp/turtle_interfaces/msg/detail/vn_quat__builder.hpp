// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from turtle_interfaces:msg/VnQuat.idl
// generated code does not contain a copyright notice

#ifndef TURTLE_INTERFACES__MSG__DETAIL__VN_QUAT__BUILDER_HPP_
#define TURTLE_INTERFACES__MSG__DETAIL__VN_QUAT__BUILDER_HPP_

#include "turtle_interfaces/msg/detail/vn_quat__struct.hpp"
#include <rosidl_runtime_cpp/message_initialization.hpp>
#include <algorithm>
#include <utility>


namespace turtle_interfaces
{

namespace msg
{

namespace builder
{

class Init_VnQuat_quaternion
{
public:
  explicit Init_VnQuat_quaternion(::turtle_interfaces::msg::VnQuat & msg)
  : msg_(msg)
  {}
  ::turtle_interfaces::msg::VnQuat quaternion(::turtle_interfaces::msg::VnQuat::_quaternion_type arg)
  {
    msg_.quaternion = std::move(arg);
    return std::move(msg_);
  }

private:
  ::turtle_interfaces::msg::VnQuat msg_;
};

class Init_VnQuat_header
{
public:
  Init_VnQuat_header()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_VnQuat_quaternion header(::turtle_interfaces::msg::VnQuat::_header_type arg)
  {
    msg_.header = std::move(arg);
    return Init_VnQuat_quaternion(msg_);
  }

private:
  ::turtle_interfaces::msg::VnQuat msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::turtle_interfaces::msg::VnQuat>()
{
  return turtle_interfaces::msg::builder::Init_VnQuat_header();
}

}  // namespace turtle_interfaces

#endif  // TURTLE_INTERFACES__MSG__DETAIL__VN_QUAT__BUILDER_HPP_
