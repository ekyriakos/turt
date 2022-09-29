// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from turtle_interfaces:msg/RPM.idl
// generated code does not contain a copyright notice

#ifndef TURTLE_INTERFACES__MSG__DETAIL__RPM__BUILDER_HPP_
#define TURTLE_INTERFACES__MSG__DETAIL__RPM__BUILDER_HPP_

#include "turtle_interfaces/msg/detail/rpm__struct.hpp"
#include <rosidl_runtime_cpp/message_initialization.hpp>
#include <algorithm>
#include <utility>


namespace turtle_interfaces
{

namespace msg
{

namespace builder
{

class Init_RPM_right
{
public:
  explicit Init_RPM_right(::turtle_interfaces::msg::RPM & msg)
  : msg_(msg)
  {}
  ::turtle_interfaces::msg::RPM right(::turtle_interfaces::msg::RPM::_right_type arg)
  {
    msg_.right = std::move(arg);
    return std::move(msg_);
  }

private:
  ::turtle_interfaces::msg::RPM msg_;
};

class Init_RPM_left
{
public:
  explicit Init_RPM_left(::turtle_interfaces::msg::RPM & msg)
  : msg_(msg)
  {}
  Init_RPM_right left(::turtle_interfaces::msg::RPM::_left_type arg)
  {
    msg_.left = std::move(arg);
    return Init_RPM_right(msg_);
  }

private:
  ::turtle_interfaces::msg::RPM msg_;
};

class Init_RPM_header
{
public:
  Init_RPM_header()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_RPM_left header(::turtle_interfaces::msg::RPM::_header_type arg)
  {
    msg_.header = std::move(arg);
    return Init_RPM_left(msg_);
  }

private:
  ::turtle_interfaces::msg::RPM msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::turtle_interfaces::msg::RPM>()
{
  return turtle_interfaces::msg::builder::Init_RPM_header();
}

}  // namespace turtle_interfaces

#endif  // TURTLE_INTERFACES__MSG__DETAIL__RPM__BUILDER_HPP_
