// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from turtle_interfaces:msg/RosStatus.idl
// generated code does not contain a copyright notice

#ifndef TURTLE_INTERFACES__MSG__DETAIL__ROS_STATUS__BUILDER_HPP_
#define TURTLE_INTERFACES__MSG__DETAIL__ROS_STATUS__BUILDER_HPP_

#include "turtle_interfaces/msg/detail/ros_status__struct.hpp"
#include <rosidl_runtime_cpp/message_initialization.hpp>
#include <algorithm>
#include <utility>


namespace turtle_interfaces
{

namespace msg
{

namespace builder
{

class Init_RosStatus_node_names
{
public:
  Init_RosStatus_node_names()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  ::turtle_interfaces::msg::RosStatus node_names(::turtle_interfaces::msg::RosStatus::_node_names_type arg)
  {
    msg_.node_names = std::move(arg);
    return std::move(msg_);
  }

private:
  ::turtle_interfaces::msg::RosStatus msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::turtle_interfaces::msg::RosStatus>()
{
  return turtle_interfaces::msg::builder::Init_RosStatus_node_names();
}

}  // namespace turtle_interfaces

#endif  // TURTLE_INTERFACES__MSG__DETAIL__ROS_STATUS__BUILDER_HPP_
