// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from turtle_interfaces:msg/EbsServiceBrake.idl
// generated code does not contain a copyright notice

#ifndef TURTLE_INTERFACES__MSG__DETAIL__EBS_SERVICE_BRAKE__BUILDER_HPP_
#define TURTLE_INTERFACES__MSG__DETAIL__EBS_SERVICE_BRAKE__BUILDER_HPP_

#include "turtle_interfaces/msg/detail/ebs_service_brake__struct.hpp"
#include <rosidl_runtime_cpp/message_initialization.hpp>
#include <algorithm>
#include <utility>


namespace turtle_interfaces
{

namespace msg
{

namespace builder
{

class Init_EbsServiceBrake_servo_commanded_enable
{
public:
  explicit Init_EbsServiceBrake_servo_commanded_enable(::turtle_interfaces::msg::EbsServiceBrake & msg)
  : msg_(msg)
  {}
  ::turtle_interfaces::msg::EbsServiceBrake servo_commanded_enable(::turtle_interfaces::msg::EbsServiceBrake::_servo_commanded_enable_type arg)
  {
    msg_.servo_commanded_enable = std::move(arg);
    return std::move(msg_);
  }

private:
  ::turtle_interfaces::msg::EbsServiceBrake msg_;
};

class Init_EbsServiceBrake_header
{
public:
  Init_EbsServiceBrake_header()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_EbsServiceBrake_servo_commanded_enable header(::turtle_interfaces::msg::EbsServiceBrake::_header_type arg)
  {
    msg_.header = std::move(arg);
    return Init_EbsServiceBrake_servo_commanded_enable(msg_);
  }

private:
  ::turtle_interfaces::msg::EbsServiceBrake msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::turtle_interfaces::msg::EbsServiceBrake>()
{
  return turtle_interfaces::msg::builder::Init_EbsServiceBrake_header();
}

}  // namespace turtle_interfaces

#endif  // TURTLE_INTERFACES__MSG__DETAIL__EBS_SERVICE_BRAKE__BUILDER_HPP_
