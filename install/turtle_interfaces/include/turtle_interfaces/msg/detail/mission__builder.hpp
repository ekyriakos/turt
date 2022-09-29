// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from turtle_interfaces:msg/Mission.idl
// generated code does not contain a copyright notice

#ifndef TURTLE_INTERFACES__MSG__DETAIL__MISSION__BUILDER_HPP_
#define TURTLE_INTERFACES__MSG__DETAIL__MISSION__BUILDER_HPP_

#include "turtle_interfaces/msg/detail/mission__struct.hpp"
#include <rosidl_runtime_cpp/message_initialization.hpp>
#include <algorithm>
#include <utility>


namespace turtle_interfaces
{

namespace msg
{

namespace builder
{

class Init_Mission_mission
{
public:
  explicit Init_Mission_mission(::turtle_interfaces::msg::Mission & msg)
  : msg_(msg)
  {}
  ::turtle_interfaces::msg::Mission mission(::turtle_interfaces::msg::Mission::_mission_type arg)
  {
    msg_.mission = std::move(arg);
    return std::move(msg_);
  }

private:
  ::turtle_interfaces::msg::Mission msg_;
};

class Init_Mission_header
{
public:
  Init_Mission_header()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_Mission_mission header(::turtle_interfaces::msg::Mission::_header_type arg)
  {
    msg_.header = std::move(arg);
    return Init_Mission_mission(msg_);
  }

private:
  ::turtle_interfaces::msg::Mission msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::turtle_interfaces::msg::Mission>()
{
  return turtle_interfaces::msg::builder::Init_Mission_header();
}

}  // namespace turtle_interfaces

#endif  // TURTLE_INTERFACES__MSG__DETAIL__MISSION__BUILDER_HPP_
