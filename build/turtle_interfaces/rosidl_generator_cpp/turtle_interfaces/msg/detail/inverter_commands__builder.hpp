// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from turtle_interfaces:msg/InverterCommands.idl
// generated code does not contain a copyright notice

#ifndef TURTLE_INTERFACES__MSG__DETAIL__INVERTER_COMMANDS__BUILDER_HPP_
#define TURTLE_INTERFACES__MSG__DETAIL__INVERTER_COMMANDS__BUILDER_HPP_

#include "turtle_interfaces/msg/detail/inverter_commands__struct.hpp"
#include <rosidl_runtime_cpp/message_initialization.hpp>
#include <algorithm>
#include <utility>


namespace turtle_interfaces
{

namespace msg
{

namespace builder
{

class Init_InverterCommands_torqueright
{
public:
  explicit Init_InverterCommands_torqueright(::turtle_interfaces::msg::InverterCommands & msg)
  : msg_(msg)
  {}
  ::turtle_interfaces::msg::InverterCommands torqueright(::turtle_interfaces::msg::InverterCommands::_torqueright_type arg)
  {
    msg_.torqueright = std::move(arg);
    return std::move(msg_);
  }

private:
  ::turtle_interfaces::msg::InverterCommands msg_;
};

class Init_InverterCommands_torqueleft
{
public:
  explicit Init_InverterCommands_torqueleft(::turtle_interfaces::msg::InverterCommands & msg)
  : msg_(msg)
  {}
  Init_InverterCommands_torqueright torqueleft(::turtle_interfaces::msg::InverterCommands::_torqueleft_type arg)
  {
    msg_.torqueleft = std::move(arg);
    return Init_InverterCommands_torqueright(msg_);
  }

private:
  ::turtle_interfaces::msg::InverterCommands msg_;
};

class Init_InverterCommands_header
{
public:
  Init_InverterCommands_header()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_InverterCommands_torqueleft header(::turtle_interfaces::msg::InverterCommands::_header_type arg)
  {
    msg_.header = std::move(arg);
    return Init_InverterCommands_torqueleft(msg_);
  }

private:
  ::turtle_interfaces::msg::InverterCommands msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::turtle_interfaces::msg::InverterCommands>()
{
  return turtle_interfaces::msg::builder::Init_InverterCommands_header();
}

}  // namespace turtle_interfaces

#endif  // TURTLE_INTERFACES__MSG__DETAIL__INVERTER_COMMANDS__BUILDER_HPP_
