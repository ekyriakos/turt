// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from turtle_interfaces:msg/VnEuler.idl
// generated code does not contain a copyright notice

#ifndef TURTLE_INTERFACES__MSG__DETAIL__VN_EULER__BUILDER_HPP_
#define TURTLE_INTERFACES__MSG__DETAIL__VN_EULER__BUILDER_HPP_

#include "turtle_interfaces/msg/detail/vn_euler__struct.hpp"
#include <rosidl_runtime_cpp/message_initialization.hpp>
#include <algorithm>
#include <utility>


namespace turtle_interfaces
{

namespace msg
{

namespace builder
{

class Init_VnEuler_accuracy
{
public:
  explicit Init_VnEuler_accuracy(::turtle_interfaces::msg::VnEuler & msg)
  : msg_(msg)
  {}
  ::turtle_interfaces::msg::VnEuler accuracy(::turtle_interfaces::msg::VnEuler::_accuracy_type arg)
  {
    msg_.accuracy = std::move(arg);
    return std::move(msg_);
  }

private:
  ::turtle_interfaces::msg::VnEuler msg_;
};

class Init_VnEuler_angle
{
public:
  explicit Init_VnEuler_angle(::turtle_interfaces::msg::VnEuler & msg)
  : msg_(msg)
  {}
  Init_VnEuler_accuracy angle(::turtle_interfaces::msg::VnEuler::_angle_type arg)
  {
    msg_.angle = std::move(arg);
    return Init_VnEuler_accuracy(msg_);
  }

private:
  ::turtle_interfaces::msg::VnEuler msg_;
};

class Init_VnEuler_header
{
public:
  Init_VnEuler_header()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_VnEuler_angle header(::turtle_interfaces::msg::VnEuler::_header_type arg)
  {
    msg_.header = std::move(arg);
    return Init_VnEuler_angle(msg_);
  }

private:
  ::turtle_interfaces::msg::VnEuler msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::turtle_interfaces::msg::VnEuler>()
{
  return turtle_interfaces::msg::builder::Init_VnEuler_header();
}

}  // namespace turtle_interfaces

#endif  // TURTLE_INTERFACES__MSG__DETAIL__VN_EULER__BUILDER_HPP_
