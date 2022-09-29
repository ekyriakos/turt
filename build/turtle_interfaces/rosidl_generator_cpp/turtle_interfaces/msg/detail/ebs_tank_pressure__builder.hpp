// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from turtle_interfaces:msg/EbsTankPressure.idl
// generated code does not contain a copyright notice

#ifndef TURTLE_INTERFACES__MSG__DETAIL__EBS_TANK_PRESSURE__BUILDER_HPP_
#define TURTLE_INTERFACES__MSG__DETAIL__EBS_TANK_PRESSURE__BUILDER_HPP_

#include "turtle_interfaces/msg/detail/ebs_tank_pressure__struct.hpp"
#include <rosidl_runtime_cpp/message_initialization.hpp>
#include <algorithm>
#include <utility>


namespace turtle_interfaces
{

namespace msg
{

namespace builder
{

class Init_EbsTankPressure_ebspressureraw
{
public:
  explicit Init_EbsTankPressure_ebspressureraw(::turtle_interfaces::msg::EbsTankPressure & msg)
  : msg_(msg)
  {}
  ::turtle_interfaces::msg::EbsTankPressure ebspressureraw(::turtle_interfaces::msg::EbsTankPressure::_ebspressureraw_type arg)
  {
    msg_.ebspressureraw = std::move(arg);
    return std::move(msg_);
  }

private:
  ::turtle_interfaces::msg::EbsTankPressure msg_;
};

class Init_EbsTankPressure_header
{
public:
  Init_EbsTankPressure_header()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_EbsTankPressure_ebspressureraw header(::turtle_interfaces::msg::EbsTankPressure::_header_type arg)
  {
    msg_.header = std::move(arg);
    return Init_EbsTankPressure_ebspressureraw(msg_);
  }

private:
  ::turtle_interfaces::msg::EbsTankPressure msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::turtle_interfaces::msg::EbsTankPressure>()
{
  return turtle_interfaces::msg::builder::Init_EbsTankPressure_header();
}

}  // namespace turtle_interfaces

#endif  // TURTLE_INTERFACES__MSG__DETAIL__EBS_TANK_PRESSURE__BUILDER_HPP_
