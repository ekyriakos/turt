// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from turtle_interfaces:msg/Brake.idl
// generated code does not contain a copyright notice

#ifndef TURTLE_INTERFACES__MSG__DETAIL__BRAKE__BUILDER_HPP_
#define TURTLE_INTERFACES__MSG__DETAIL__BRAKE__BUILDER_HPP_

#include "turtle_interfaces/msg/detail/brake__struct.hpp"
#include <rosidl_runtime_cpp/message_initialization.hpp>
#include <algorithm>
#include <utility>


namespace turtle_interfaces
{

namespace msg
{

namespace builder
{

class Init_Brake_brake
{
public:
  explicit Init_Brake_brake(::turtle_interfaces::msg::Brake & msg)
  : msg_(msg)
  {}
  ::turtle_interfaces::msg::Brake brake(::turtle_interfaces::msg::Brake::_brake_type arg)
  {
    msg_.brake = std::move(arg);
    return std::move(msg_);
  }

private:
  ::turtle_interfaces::msg::Brake msg_;
};

class Init_Brake_header
{
public:
  Init_Brake_header()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_Brake_brake header(::turtle_interfaces::msg::Brake::_header_type arg)
  {
    msg_.header = std::move(arg);
    return Init_Brake_brake(msg_);
  }

private:
  ::turtle_interfaces::msg::Brake msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::turtle_interfaces::msg::Brake>()
{
  return turtle_interfaces::msg::builder::Init_Brake_header();
}

}  // namespace turtle_interfaces

#endif  // TURTLE_INTERFACES__MSG__DETAIL__BRAKE__BUILDER_HPP_
