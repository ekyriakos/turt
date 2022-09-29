// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from turtle_interfaces:msg/ECUControlSystems.idl
// generated code does not contain a copyright notice

#ifndef TURTLE_INTERFACES__MSG__DETAIL__ECU_CONTROL_SYSTEMS__BUILDER_HPP_
#define TURTLE_INTERFACES__MSG__DETAIL__ECU_CONTROL_SYSTEMS__BUILDER_HPP_

#include "turtle_interfaces/msg/detail/ecu_control_systems__struct.hpp"
#include <rosidl_runtime_cpp/message_initialization.hpp>
#include <algorithm>
#include <utility>


namespace turtle_interfaces
{

namespace msg
{

namespace builder
{

class Init_ECUControlSystems_regen_active
{
public:
  explicit Init_ECUControlSystems_regen_active(::turtle_interfaces::msg::ECUControlSystems & msg)
  : msg_(msg)
  {}
  ::turtle_interfaces::msg::ECUControlSystems regen_active(::turtle_interfaces::msg::ECUControlSystems::_regen_active_type arg)
  {
    msg_.regen_active = std::move(arg);
    return std::move(msg_);
  }

private:
  ::turtle_interfaces::msg::ECUControlSystems msg_;
};

class Init_ECUControlSystems_pl_active
{
public:
  explicit Init_ECUControlSystems_pl_active(::turtle_interfaces::msg::ECUControlSystems & msg)
  : msg_(msg)
  {}
  Init_ECUControlSystems_regen_active pl_active(::turtle_interfaces::msg::ECUControlSystems::_pl_active_type arg)
  {
    msg_.pl_active = std::move(arg);
    return Init_ECUControlSystems_regen_active(msg_);
  }

private:
  ::turtle_interfaces::msg::ECUControlSystems msg_;
};

class Init_ECUControlSystems_tc_active
{
public:
  explicit Init_ECUControlSystems_tc_active(::turtle_interfaces::msg::ECUControlSystems & msg)
  : msg_(msg)
  {}
  Init_ECUControlSystems_pl_active tc_active(::turtle_interfaces::msg::ECUControlSystems::_tc_active_type arg)
  {
    msg_.tc_active = std::move(arg);
    return Init_ECUControlSystems_pl_active(msg_);
  }

private:
  ::turtle_interfaces::msg::ECUControlSystems msg_;
};

class Init_ECUControlSystems_ed_active
{
public:
  explicit Init_ECUControlSystems_ed_active(::turtle_interfaces::msg::ECUControlSystems & msg)
  : msg_(msg)
  {}
  Init_ECUControlSystems_tc_active ed_active(::turtle_interfaces::msg::ECUControlSystems::_ed_active_type arg)
  {
    msg_.ed_active = std::move(arg);
    return Init_ECUControlSystems_tc_active(msg_);
  }

private:
  ::turtle_interfaces::msg::ECUControlSystems msg_;
};

class Init_ECUControlSystems_header
{
public:
  Init_ECUControlSystems_header()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_ECUControlSystems_ed_active header(::turtle_interfaces::msg::ECUControlSystems::_header_type arg)
  {
    msg_.header = std::move(arg);
    return Init_ECUControlSystems_ed_active(msg_);
  }

private:
  ::turtle_interfaces::msg::ECUControlSystems msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::turtle_interfaces::msg::ECUControlSystems>()
{
  return turtle_interfaces::msg::builder::Init_ECUControlSystems_header();
}

}  // namespace turtle_interfaces

#endif  // TURTLE_INTERFACES__MSG__DETAIL__ECU_CONTROL_SYSTEMS__BUILDER_HPP_
