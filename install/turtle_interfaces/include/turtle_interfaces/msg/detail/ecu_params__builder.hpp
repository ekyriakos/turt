// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from turtle_interfaces:msg/ECUParams.idl
// generated code does not contain a copyright notice

#ifndef TURTLE_INTERFACES__MSG__DETAIL__ECU_PARAMS__BUILDER_HPP_
#define TURTLE_INTERFACES__MSG__DETAIL__ECU_PARAMS__BUILDER_HPP_

#include "turtle_interfaces/msg/detail/ecu_params__struct.hpp"
#include <rosidl_runtime_cpp/message_initialization.hpp>
#include <algorithm>
#include <utility>


namespace turtle_interfaces
{

namespace msg
{

namespace builder
{

class Init_ECUParams_tc_enable
{
public:
  explicit Init_ECUParams_tc_enable(::turtle_interfaces::msg::ECUParams & msg)
  : msg_(msg)
  {}
  ::turtle_interfaces::msg::ECUParams tc_enable(::turtle_interfaces::msg::ECUParams::_tc_enable_type arg)
  {
    msg_.tc_enable = std::move(arg);
    return std::move(msg_);
  }

private:
  ::turtle_interfaces::msg::ECUParams msg_;
};

class Init_ECUParams_ed_enable
{
public:
  explicit Init_ECUParams_ed_enable(::turtle_interfaces::msg::ECUParams & msg)
  : msg_(msg)
  {}
  Init_ECUParams_tc_enable ed_enable(::turtle_interfaces::msg::ECUParams::_ed_enable_type arg)
  {
    msg_.ed_enable = std::move(arg);
    return Init_ECUParams_tc_enable(msg_);
  }

private:
  ::turtle_interfaces::msg::ECUParams msg_;
};

class Init_ECUParams_regen_min_speed
{
public:
  explicit Init_ECUParams_regen_min_speed(::turtle_interfaces::msg::ECUParams & msg)
  : msg_(msg)
  {}
  Init_ECUParams_ed_enable regen_min_speed(::turtle_interfaces::msg::ECUParams::_regen_min_speed_type arg)
  {
    msg_.regen_min_speed = std::move(arg);
    return Init_ECUParams_ed_enable(msg_);
  }

private:
  ::turtle_interfaces::msg::ECUParams msg_;
};

class Init_ECUParams_servo_start_speed
{
public:
  explicit Init_ECUParams_servo_start_speed(::turtle_interfaces::msg::ECUParams & msg)
  : msg_(msg)
  {}
  Init_ECUParams_regen_min_speed servo_start_speed(::turtle_interfaces::msg::ECUParams::_servo_start_speed_type arg)
  {
    msg_.servo_start_speed = std::move(arg);
    return Init_ECUParams_regen_min_speed(msg_);
  }

private:
  ::turtle_interfaces::msg::ECUParams msg_;
};

class Init_ECUParams_power_target_kw
{
public:
  explicit Init_ECUParams_power_target_kw(::turtle_interfaces::msg::ECUParams & msg)
  : msg_(msg)
  {}
  Init_ECUParams_servo_start_speed power_target_kw(::turtle_interfaces::msg::ECUParams::_power_target_kw_type arg)
  {
    msg_.power_target_kw = std::move(arg);
    return Init_ECUParams_servo_start_speed(msg_);
  }

private:
  ::turtle_interfaces::msg::ECUParams msg_;
};

class Init_ECUParams_inverter_i_rms_max_brake
{
public:
  explicit Init_ECUParams_inverter_i_rms_max_brake(::turtle_interfaces::msg::ECUParams & msg)
  : msg_(msg)
  {}
  Init_ECUParams_power_target_kw inverter_i_rms_max_brake(::turtle_interfaces::msg::ECUParams::_inverter_i_rms_max_brake_type arg)
  {
    msg_.inverter_i_rms_max_brake = std::move(arg);
    return Init_ECUParams_power_target_kw(msg_);
  }

private:
  ::turtle_interfaces::msg::ECUParams msg_;
};

class Init_ECUParams_inverter_i_rms_max
{
public:
  explicit Init_ECUParams_inverter_i_rms_max(::turtle_interfaces::msg::ECUParams & msg)
  : msg_(msg)
  {}
  Init_ECUParams_inverter_i_rms_max_brake inverter_i_rms_max(::turtle_interfaces::msg::ECUParams::_inverter_i_rms_max_type arg)
  {
    msg_.inverter_i_rms_max = std::move(arg);
    return Init_ECUParams_inverter_i_rms_max_brake(msg_);
  }

private:
  ::turtle_interfaces::msg::ECUParams msg_;
};

class Init_ECUParams_inverter_rpm_percentage
{
public:
  explicit Init_ECUParams_inverter_rpm_percentage(::turtle_interfaces::msg::ECUParams & msg)
  : msg_(msg)
  {}
  Init_ECUParams_inverter_i_rms_max inverter_rpm_percentage(::turtle_interfaces::msg::ECUParams::_inverter_rpm_percentage_type arg)
  {
    msg_.inverter_rpm_percentage = std::move(arg);
    return Init_ECUParams_inverter_i_rms_max(msg_);
  }

private:
  ::turtle_interfaces::msg::ECUParams msg_;
};

class Init_ECUParams_header
{
public:
  Init_ECUParams_header()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_ECUParams_inverter_rpm_percentage header(::turtle_interfaces::msg::ECUParams::_header_type arg)
  {
    msg_.header = std::move(arg);
    return Init_ECUParams_inverter_rpm_percentage(msg_);
  }

private:
  ::turtle_interfaces::msg::ECUParams msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::turtle_interfaces::msg::ECUParams>()
{
  return turtle_interfaces::msg::builder::Init_ECUParams_header();
}

}  // namespace turtle_interfaces

#endif  // TURTLE_INTERFACES__MSG__DETAIL__ECU_PARAMS__BUILDER_HPP_
