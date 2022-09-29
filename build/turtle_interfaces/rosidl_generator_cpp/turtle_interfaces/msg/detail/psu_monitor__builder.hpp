// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from turtle_interfaces:msg/PsuMonitor.idl
// generated code does not contain a copyright notice

#ifndef TURTLE_INTERFACES__MSG__DETAIL__PSU_MONITOR__BUILDER_HPP_
#define TURTLE_INTERFACES__MSG__DETAIL__PSU_MONITOR__BUILDER_HPP_

#include "turtle_interfaces/msg/detail/psu_monitor__struct.hpp"
#include <rosidl_runtime_cpp/message_initialization.hpp>
#include <algorithm>
#include <utility>


namespace turtle_interfaces
{

namespace msg
{

namespace builder
{

class Init_PsuMonitor_temperature
{
public:
  explicit Init_PsuMonitor_temperature(::turtle_interfaces::msg::PsuMonitor & msg)
  : msg_(msg)
  {}
  ::turtle_interfaces::msg::PsuMonitor temperature(::turtle_interfaces::msg::PsuMonitor::_temperature_type arg)
  {
    msg_.temperature = std::move(arg);
    return std::move(msg_);
  }

private:
  ::turtle_interfaces::msg::PsuMonitor msg_;
};

class Init_PsuMonitor_v12_0
{
public:
  explicit Init_PsuMonitor_v12_0(::turtle_interfaces::msg::PsuMonitor & msg)
  : msg_(msg)
  {}
  Init_PsuMonitor_temperature v12_0(::turtle_interfaces::msg::PsuMonitor::_v12_0_type arg)
  {
    msg_.v12_0 = std::move(arg);
    return Init_PsuMonitor_temperature(msg_);
  }

private:
  ::turtle_interfaces::msg::PsuMonitor msg_;
};

class Init_PsuMonitor_v5_0
{
public:
  explicit Init_PsuMonitor_v5_0(::turtle_interfaces::msg::PsuMonitor & msg)
  : msg_(msg)
  {}
  Init_PsuMonitor_v12_0 v5_0(::turtle_interfaces::msg::PsuMonitor::_v5_0_type arg)
  {
    msg_.v5_0 = std::move(arg);
    return Init_PsuMonitor_v12_0(msg_);
  }

private:
  ::turtle_interfaces::msg::PsuMonitor msg_;
};

class Init_PsuMonitor_v3_3
{
public:
  explicit Init_PsuMonitor_v3_3(::turtle_interfaces::msg::PsuMonitor & msg)
  : msg_(msg)
  {}
  Init_PsuMonitor_v5_0 v3_3(::turtle_interfaces::msg::PsuMonitor::_v3_3_type arg)
  {
    msg_.v3_3 = std::move(arg);
    return Init_PsuMonitor_v5_0(msg_);
  }

private:
  ::turtle_interfaces::msg::PsuMonitor msg_;
};

class Init_PsuMonitor_v_ignition
{
public:
  explicit Init_PsuMonitor_v_ignition(::turtle_interfaces::msg::PsuMonitor & msg)
  : msg_(msg)
  {}
  Init_PsuMonitor_v3_3 v_ignition(::turtle_interfaces::msg::PsuMonitor::_v_ignition_type arg)
  {
    msg_.v_ignition = std::move(arg);
    return Init_PsuMonitor_v3_3(msg_);
  }

private:
  ::turtle_interfaces::msg::PsuMonitor msg_;
};

class Init_PsuMonitor_v_in
{
public:
  explicit Init_PsuMonitor_v_in(::turtle_interfaces::msg::PsuMonitor & msg)
  : msg_(msg)
  {}
  Init_PsuMonitor_v_ignition v_in(::turtle_interfaces::msg::PsuMonitor::_v_in_type arg)
  {
    msg_.v_in = std::move(arg);
    return Init_PsuMonitor_v_ignition(msg_);
  }

private:
  ::turtle_interfaces::msg::PsuMonitor msg_;
};

class Init_PsuMonitor_header
{
public:
  Init_PsuMonitor_header()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_PsuMonitor_v_in header(::turtle_interfaces::msg::PsuMonitor::_header_type arg)
  {
    msg_.header = std::move(arg);
    return Init_PsuMonitor_v_in(msg_);
  }

private:
  ::turtle_interfaces::msg::PsuMonitor msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::turtle_interfaces::msg::PsuMonitor>()
{
  return turtle_interfaces::msg::builder::Init_PsuMonitor_header();
}

}  // namespace turtle_interfaces

#endif  // TURTLE_INTERFACES__MSG__DETAIL__PSU_MONITOR__BUILDER_HPP_
