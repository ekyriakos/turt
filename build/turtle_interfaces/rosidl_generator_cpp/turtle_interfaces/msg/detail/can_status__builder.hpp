// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from turtle_interfaces:msg/CanStatus.idl
// generated code does not contain a copyright notice

#ifndef TURTLE_INTERFACES__MSG__DETAIL__CAN_STATUS__BUILDER_HPP_
#define TURTLE_INTERFACES__MSG__DETAIL__CAN_STATUS__BUILDER_HPP_

#include "turtle_interfaces/msg/detail/can_status__struct.hpp"
#include <rosidl_runtime_cpp/message_initialization.hpp>
#include <algorithm>
#include <utility>


namespace turtle_interfaces
{

namespace msg
{

namespace builder
{

class Init_CanStatus_can_state
{
public:
  explicit Init_CanStatus_can_state(::turtle_interfaces::msg::CanStatus & msg)
  : msg_(msg)
  {}
  ::turtle_interfaces::msg::CanStatus can_state(::turtle_interfaces::msg::CanStatus::_can_state_type arg)
  {
    msg_.can_state = std::move(arg);
    return std::move(msg_);
  }

private:
  ::turtle_interfaces::msg::CanStatus msg_;
};

class Init_CanStatus_restarts
{
public:
  explicit Init_CanStatus_restarts(::turtle_interfaces::msg::CanStatus & msg)
  : msg_(msg)
  {}
  Init_CanStatus_can_state restarts(::turtle_interfaces::msg::CanStatus::_restarts_type arg)
  {
    msg_.restarts = std::move(arg);
    return Init_CanStatus_can_state(msg_);
  }

private:
  ::turtle_interfaces::msg::CanStatus msg_;
};

class Init_CanStatus_bus_errors
{
public:
  explicit Init_CanStatus_bus_errors(::turtle_interfaces::msg::CanStatus & msg)
  : msg_(msg)
  {}
  Init_CanStatus_restarts bus_errors(::turtle_interfaces::msg::CanStatus::_bus_errors_type arg)
  {
    msg_.bus_errors = std::move(arg);
    return Init_CanStatus_restarts(msg_);
  }

private:
  ::turtle_interfaces::msg::CanStatus msg_;
};

class Init_CanStatus_rx_terrors
{
public:
  explicit Init_CanStatus_rx_terrors(::turtle_interfaces::msg::CanStatus & msg)
  : msg_(msg)
  {}
  Init_CanStatus_bus_errors rx_terrors(::turtle_interfaces::msg::CanStatus::_rx_terrors_type arg)
  {
    msg_.rx_terrors = std::move(arg);
    return Init_CanStatus_bus_errors(msg_);
  }

private:
  ::turtle_interfaces::msg::CanStatus msg_;
};

class Init_CanStatus_tx_terrors
{
public:
  explicit Init_CanStatus_tx_terrors(::turtle_interfaces::msg::CanStatus & msg)
  : msg_(msg)
  {}
  Init_CanStatus_rx_terrors tx_terrors(::turtle_interfaces::msg::CanStatus::_tx_terrors_type arg)
  {
    msg_.tx_terrors = std::move(arg);
    return Init_CanStatus_rx_terrors(msg_);
  }

private:
  ::turtle_interfaces::msg::CanStatus msg_;
};

class Init_CanStatus_rx_berrors
{
public:
  explicit Init_CanStatus_rx_berrors(::turtle_interfaces::msg::CanStatus & msg)
  : msg_(msg)
  {}
  Init_CanStatus_tx_terrors rx_berrors(::turtle_interfaces::msg::CanStatus::_rx_berrors_type arg)
  {
    msg_.rx_berrors = std::move(arg);
    return Init_CanStatus_tx_terrors(msg_);
  }

private:
  ::turtle_interfaces::msg::CanStatus msg_;
};

class Init_CanStatus_tx_berrors
{
public:
  explicit Init_CanStatus_tx_berrors(::turtle_interfaces::msg::CanStatus & msg)
  : msg_(msg)
  {}
  Init_CanStatus_rx_berrors tx_berrors(::turtle_interfaces::msg::CanStatus::_tx_berrors_type arg)
  {
    msg_.tx_berrors = std::move(arg);
    return Init_CanStatus_rx_berrors(msg_);
  }

private:
  ::turtle_interfaces::msg::CanStatus msg_;
};

class Init_CanStatus_sensor_errors
{
public:
  explicit Init_CanStatus_sensor_errors(::turtle_interfaces::msg::CanStatus & msg)
  : msg_(msg)
  {}
  Init_CanStatus_tx_berrors sensor_errors(::turtle_interfaces::msg::CanStatus::_sensor_errors_type arg)
  {
    msg_.sensor_errors = std::move(arg);
    return Init_CanStatus_tx_berrors(msg_);
  }

private:
  ::turtle_interfaces::msg::CanStatus msg_;
};

class Init_CanStatus_message_timeouts
{
public:
  explicit Init_CanStatus_message_timeouts(::turtle_interfaces::msg::CanStatus & msg)
  : msg_(msg)
  {}
  Init_CanStatus_sensor_errors message_timeouts(::turtle_interfaces::msg::CanStatus::_message_timeouts_type arg)
  {
    msg_.message_timeouts = std::move(arg);
    return Init_CanStatus_sensor_errors(msg_);
  }

private:
  ::turtle_interfaces::msg::CanStatus msg_;
};

class Init_CanStatus_header
{
public:
  Init_CanStatus_header()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_CanStatus_message_timeouts header(::turtle_interfaces::msg::CanStatus::_header_type arg)
  {
    msg_.header = std::move(arg);
    return Init_CanStatus_message_timeouts(msg_);
  }

private:
  ::turtle_interfaces::msg::CanStatus msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::turtle_interfaces::msg::CanStatus>()
{
  return turtle_interfaces::msg::builder::Init_CanStatus_header();
}

}  // namespace turtle_interfaces

#endif  // TURTLE_INTERFACES__MSG__DETAIL__CAN_STATUS__BUILDER_HPP_
