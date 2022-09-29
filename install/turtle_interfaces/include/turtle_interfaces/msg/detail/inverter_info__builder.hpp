// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from turtle_interfaces:msg/InverterInfo.idl
// generated code does not contain a copyright notice

#ifndef TURTLE_INTERFACES__MSG__DETAIL__INVERTER_INFO__BUILDER_HPP_
#define TURTLE_INTERFACES__MSG__DETAIL__INVERTER_INFO__BUILDER_HPP_

#include "turtle_interfaces/msg/detail/inverter_info__struct.hpp"
#include <rosidl_runtime_cpp/message_initialization.hpp>
#include <algorithm>
#include <utility>


namespace turtle_interfaces
{

namespace msg
{

namespace builder
{

class Init_InverterInfo_max_rpm
{
public:
  explicit Init_InverterInfo_max_rpm(::turtle_interfaces::msg::InverterInfo & msg)
  : msg_(msg)
  {}
  ::turtle_interfaces::msg::InverterInfo max_rpm(::turtle_interfaces::msg::InverterInfo::_max_rpm_type arg)
  {
    msg_.max_rpm = std::move(arg);
    return std::move(msg_);
  }

private:
  ::turtle_interfaces::msg::InverterInfo msg_;
};

class Init_InverterInfo_irms
{
public:
  explicit Init_InverterInfo_irms(::turtle_interfaces::msg::InverterInfo & msg)
  : msg_(msg)
  {}
  Init_InverterInfo_max_rpm irms(::turtle_interfaces::msg::InverterInfo::_irms_type arg)
  {
    msg_.irms = std::move(arg);
    return Init_InverterInfo_max_rpm(msg_);
  }

private:
  ::turtle_interfaces::msg::InverterInfo msg_;
};

class Init_InverterInfo_motor_temp
{
public:
  explicit Init_InverterInfo_motor_temp(::turtle_interfaces::msg::InverterInfo & msg)
  : msg_(msg)
  {}
  Init_InverterInfo_irms motor_temp(::turtle_interfaces::msg::InverterInfo::_motor_temp_type arg)
  {
    msg_.motor_temp = std::move(arg);
    return Init_InverterInfo_irms(msg_);
  }

private:
  ::turtle_interfaces::msg::InverterInfo msg_;
};

class Init_InverterInfo_i_lim_in_use
{
public:
  explicit Init_InverterInfo_i_lim_in_use(::turtle_interfaces::msg::InverterInfo & msg)
  : msg_(msg)
  {}
  Init_InverterInfo_motor_temp i_lim_in_use(::turtle_interfaces::msg::InverterInfo::_i_lim_in_use_type arg)
  {
    msg_.i_lim_in_use = std::move(arg);
    return Init_InverterInfo_motor_temp(msg_);
  }

private:
  ::turtle_interfaces::msg::InverterInfo msg_;
};

class Init_InverterInfo_irms_max
{
public:
  explicit Init_InverterInfo_irms_max(::turtle_interfaces::msg::InverterInfo & msg)
  : msg_(msg)
  {}
  Init_InverterInfo_i_lim_in_use irms_max(::turtle_interfaces::msg::InverterInfo::_irms_max_type arg)
  {
    msg_.irms_max = std::move(arg);
    return Init_InverterInfo_i_lim_in_use(msg_);
  }

private:
  ::turtle_interfaces::msg::InverterInfo msg_;
};

class Init_InverterInfo_igbts_temp
{
public:
  explicit Init_InverterInfo_igbts_temp(::turtle_interfaces::msg::InverterInfo & msg)
  : msg_(msg)
  {}
  Init_InverterInfo_irms_max igbts_temp(::turtle_interfaces::msg::InverterInfo::_igbts_temp_type arg)
  {
    msg_.igbts_temp = std::move(arg);
    return Init_InverterInfo_irms_max(msg_);
  }

private:
  ::turtle_interfaces::msg::InverterInfo msg_;
};

class Init_InverterInfo_header
{
public:
  Init_InverterInfo_header()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_InverterInfo_igbts_temp header(::turtle_interfaces::msg::InverterInfo::_header_type arg)
  {
    msg_.header = std::move(arg);
    return Init_InverterInfo_igbts_temp(msg_);
  }

private:
  ::turtle_interfaces::msg::InverterInfo msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::turtle_interfaces::msg::InverterInfo>()
{
  return turtle_interfaces::msg::builder::Init_InverterInfo_header();
}

}  // namespace turtle_interfaces

#endif  // TURTLE_INTERFACES__MSG__DETAIL__INVERTER_INFO__BUILDER_HPP_
