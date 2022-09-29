// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from turtle_interfaces:msg/MissionStatus.idl
// generated code does not contain a copyright notice

#ifndef TURTLE_INTERFACES__MSG__DETAIL__MISSION_STATUS__BUILDER_HPP_
#define TURTLE_INTERFACES__MSG__DETAIL__MISSION_STATUS__BUILDER_HPP_

#include "turtle_interfaces/msg/detail/mission_status__struct.hpp"
#include <rosidl_runtime_cpp/message_initialization.hpp>
#include <algorithm>
#include <utility>


namespace turtle_interfaces
{

namespace msg
{

namespace builder
{

class Init_MissionStatus_mission_status
{
public:
  Init_MissionStatus_mission_status()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  ::turtle_interfaces::msg::MissionStatus mission_status(::turtle_interfaces::msg::MissionStatus::_mission_status_type arg)
  {
    msg_.mission_status = std::move(arg);
    return std::move(msg_);
  }

private:
  ::turtle_interfaces::msg::MissionStatus msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::turtle_interfaces::msg::MissionStatus>()
{
  return turtle_interfaces::msg::builder::Init_MissionStatus_mission_status();
}

}  // namespace turtle_interfaces

#endif  // TURTLE_INTERFACES__MSG__DETAIL__MISSION_STATUS__BUILDER_HPP_
