// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from turtle_interfaces:msg/Apps.idl
// generated code does not contain a copyright notice

#ifndef TURTLE_INTERFACES__MSG__DETAIL__APPS__BUILDER_HPP_
#define TURTLE_INTERFACES__MSG__DETAIL__APPS__BUILDER_HPP_

#include "turtle_interfaces/msg/detail/apps__struct.hpp"
#include <rosidl_runtime_cpp/message_initialization.hpp>
#include <algorithm>
#include <utility>


namespace turtle_interfaces
{

namespace msg
{

namespace builder
{

class Init_Apps_apps
{
public:
  explicit Init_Apps_apps(::turtle_interfaces::msg::Apps & msg)
  : msg_(msg)
  {}
  ::turtle_interfaces::msg::Apps apps(::turtle_interfaces::msg::Apps::_apps_type arg)
  {
    msg_.apps = std::move(arg);
    return std::move(msg_);
  }

private:
  ::turtle_interfaces::msg::Apps msg_;
};

class Init_Apps_header
{
public:
  Init_Apps_header()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_Apps_apps header(::turtle_interfaces::msg::Apps::_header_type arg)
  {
    msg_.header = std::move(arg);
    return Init_Apps_apps(msg_);
  }

private:
  ::turtle_interfaces::msg::Apps msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::turtle_interfaces::msg::Apps>()
{
  return turtle_interfaces::msg::builder::Init_Apps_header();
}

}  // namespace turtle_interfaces

#endif  // TURTLE_INTERFACES__MSG__DETAIL__APPS__BUILDER_HPP_
