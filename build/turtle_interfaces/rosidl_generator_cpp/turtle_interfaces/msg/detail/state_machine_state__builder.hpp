// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from turtle_interfaces:msg/StateMachineState.idl
// generated code does not contain a copyright notice

#ifndef TURTLE_INTERFACES__MSG__DETAIL__STATE_MACHINE_STATE__BUILDER_HPP_
#define TURTLE_INTERFACES__MSG__DETAIL__STATE_MACHINE_STATE__BUILDER_HPP_

#include "turtle_interfaces/msg/detail/state_machine_state__struct.hpp"
#include <rosidl_runtime_cpp/message_initialization.hpp>
#include <algorithm>
#include <utility>


namespace turtle_interfaces
{

namespace msg
{

namespace builder
{

class Init_StateMachineState_setfinished
{
public:
  explicit Init_StateMachineState_setfinished(::turtle_interfaces::msg::StateMachineState & msg)
  : msg_(msg)
  {}
  ::turtle_interfaces::msg::StateMachineState setfinished(::turtle_interfaces::msg::StateMachineState::_setfinished_type arg)
  {
    msg_.setfinished = std::move(arg);
    return std::move(msg_);
  }

private:
  ::turtle_interfaces::msg::StateMachineState msg_;
};

class Init_StateMachineState_state
{
public:
  Init_StateMachineState_state()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_StateMachineState_setfinished state(::turtle_interfaces::msg::StateMachineState::_state_type arg)
  {
    msg_.state = std::move(arg);
    return Init_StateMachineState_setfinished(msg_);
  }

private:
  ::turtle_interfaces::msg::StateMachineState msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::turtle_interfaces::msg::StateMachineState>()
{
  return turtle_interfaces::msg::builder::Init_StateMachineState_state();
}

}  // namespace turtle_interfaces

#endif  // TURTLE_INTERFACES__MSG__DETAIL__STATE_MACHINE_STATE__BUILDER_HPP_
