// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from turtle_interfaces:msg/CoolingInfo.idl
// generated code does not contain a copyright notice

#ifndef TURTLE_INTERFACES__MSG__DETAIL__COOLING_INFO__BUILDER_HPP_
#define TURTLE_INTERFACES__MSG__DETAIL__COOLING_INFO__BUILDER_HPP_

#include "turtle_interfaces/msg/detail/cooling_info__struct.hpp"
#include <rosidl_runtime_cpp/message_initialization.hpp>
#include <algorithm>
#include <utility>


namespace turtle_interfaces
{

namespace msg
{

namespace builder
{

class Init_CoolingInfo_chassisfans
{
public:
  explicit Init_CoolingInfo_chassisfans(::turtle_interfaces::msg::CoolingInfo & msg)
  : msg_(msg)
  {}
  ::turtle_interfaces::msg::CoolingInfo chassisfans(::turtle_interfaces::msg::CoolingInfo::_chassisfans_type arg)
  {
    msg_.chassisfans = std::move(arg);
    return std::move(msg_);
  }

private:
  ::turtle_interfaces::msg::CoolingInfo msg_;
};

class Init_CoolingInfo_hallfanpwm
{
public:
  explicit Init_CoolingInfo_hallfanpwm(::turtle_interfaces::msg::CoolingInfo & msg)
  : msg_(msg)
  {}
  Init_CoolingInfo_chassisfans hallfanpwm(::turtle_interfaces::msg::CoolingInfo::_hallfanpwm_type arg)
  {
    msg_.hallfanpwm = std::move(arg);
    return Init_CoolingInfo_chassisfans(msg_);
  }

private:
  ::turtle_interfaces::msg::CoolingInfo msg_;
};

class Init_CoolingInfo_accufanspwm
{
public:
  explicit Init_CoolingInfo_accufanspwm(::turtle_interfaces::msg::CoolingInfo & msg)
  : msg_(msg)
  {}
  Init_CoolingInfo_hallfanpwm accufanspwm(::turtle_interfaces::msg::CoolingInfo::_accufanspwm_type arg)
  {
    msg_.accufanspwm = std::move(arg);
    return Init_CoolingInfo_hallfanpwm(msg_);
  }

private:
  ::turtle_interfaces::msg::CoolingInfo msg_;
};

class Init_CoolingInfo_pumpsignal
{
public:
  explicit Init_CoolingInfo_pumpsignal(::turtle_interfaces::msg::CoolingInfo & msg)
  : msg_(msg)
  {}
  Init_CoolingInfo_accufanspwm pumpsignal(::turtle_interfaces::msg::CoolingInfo::_pumpsignal_type arg)
  {
    msg_.pumpsignal = std::move(arg);
    return Init_CoolingInfo_accufanspwm(msg_);
  }

private:
  ::turtle_interfaces::msg::CoolingInfo msg_;
};

class Init_CoolingInfo_header
{
public:
  Init_CoolingInfo_header()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_CoolingInfo_pumpsignal header(::turtle_interfaces::msg::CoolingInfo::_header_type arg)
  {
    msg_.header = std::move(arg);
    return Init_CoolingInfo_pumpsignal(msg_);
  }

private:
  ::turtle_interfaces::msg::CoolingInfo msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::turtle_interfaces::msg::CoolingInfo>()
{
  return turtle_interfaces::msg::builder::Init_CoolingInfo_header();
}

}  // namespace turtle_interfaces

#endif  // TURTLE_INTERFACES__MSG__DETAIL__COOLING_INFO__BUILDER_HPP_
