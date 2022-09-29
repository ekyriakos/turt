// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from turtle_interfaces:msg/Steering.idl
// generated code does not contain a copyright notice

#ifndef TURTLE_INTERFACES__MSG__DETAIL__STEERING__BUILDER_HPP_
#define TURTLE_INTERFACES__MSG__DETAIL__STEERING__BUILDER_HPP_

#include "turtle_interfaces/msg/detail/steering__struct.hpp"
#include <rosidl_runtime_cpp/message_initialization.hpp>
#include <algorithm>
#include <utility>


namespace turtle_interfaces
{

namespace msg
{

namespace builder
{

class Init_Steering_steering
{
public:
  explicit Init_Steering_steering(::turtle_interfaces::msg::Steering & msg)
  : msg_(msg)
  {}
  ::turtle_interfaces::msg::Steering steering(::turtle_interfaces::msg::Steering::_steering_type arg)
  {
    msg_.steering = std::move(arg);
    return std::move(msg_);
  }

private:
  ::turtle_interfaces::msg::Steering msg_;
};

class Init_Steering_header
{
public:
  Init_Steering_header()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_Steering_steering header(::turtle_interfaces::msg::Steering::_header_type arg)
  {
    msg_.header = std::move(arg);
    return Init_Steering_steering(msg_);
  }

private:
  ::turtle_interfaces::msg::Steering msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::turtle_interfaces::msg::Steering>()
{
  return turtle_interfaces::msg::builder::Init_Steering_header();
}

}  // namespace turtle_interfaces

#endif  // TURTLE_INTERFACES__MSG__DETAIL__STEERING__BUILDER_HPP_
