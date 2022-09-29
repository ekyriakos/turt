// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from turtle_interfaces:msg/BrakeLight.idl
// generated code does not contain a copyright notice

#ifndef TURTLE_INTERFACES__MSG__DETAIL__BRAKE_LIGHT__BUILDER_HPP_
#define TURTLE_INTERFACES__MSG__DETAIL__BRAKE_LIGHT__BUILDER_HPP_

#include "turtle_interfaces/msg/detail/brake_light__struct.hpp"
#include <rosidl_runtime_cpp/message_initialization.hpp>
#include <algorithm>
#include <utility>


namespace turtle_interfaces
{

namespace msg
{

namespace builder
{

class Init_BrakeLight_brakelight
{
public:
  explicit Init_BrakeLight_brakelight(::turtle_interfaces::msg::BrakeLight & msg)
  : msg_(msg)
  {}
  ::turtle_interfaces::msg::BrakeLight brakelight(::turtle_interfaces::msg::BrakeLight::_brakelight_type arg)
  {
    msg_.brakelight = std::move(arg);
    return std::move(msg_);
  }

private:
  ::turtle_interfaces::msg::BrakeLight msg_;
};

class Init_BrakeLight_header
{
public:
  Init_BrakeLight_header()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_BrakeLight_brakelight header(::turtle_interfaces::msg::BrakeLight::_header_type arg)
  {
    msg_.header = std::move(arg);
    return Init_BrakeLight_brakelight(msg_);
  }

private:
  ::turtle_interfaces::msg::BrakeLight msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::turtle_interfaces::msg::BrakeLight>()
{
  return turtle_interfaces::msg::builder::Init_BrakeLight_header();
}

}  // namespace turtle_interfaces

#endif  // TURTLE_INTERFACES__MSG__DETAIL__BRAKE_LIGHT__BUILDER_HPP_
