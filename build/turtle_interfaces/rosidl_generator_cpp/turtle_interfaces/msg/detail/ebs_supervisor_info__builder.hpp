// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from turtle_interfaces:msg/EbsSupervisorInfo.idl
// generated code does not contain a copyright notice

#ifndef TURTLE_INTERFACES__MSG__DETAIL__EBS_SUPERVISOR_INFO__BUILDER_HPP_
#define TURTLE_INTERFACES__MSG__DETAIL__EBS_SUPERVISOR_INFO__BUILDER_HPP_

#include "turtle_interfaces/msg/detail/ebs_supervisor_info__struct.hpp"
#include <rosidl_runtime_cpp/message_initialization.hpp>
#include <algorithm>
#include <utility>


namespace turtle_interfaces
{

namespace msg
{

namespace builder
{

class Init_EbsSupervisorInfo_monitorapu
{
public:
  explicit Init_EbsSupervisorInfo_monitorapu(::turtle_interfaces::msg::EbsSupervisorInfo & msg)
  : msg_(msg)
  {}
  ::turtle_interfaces::msg::EbsSupervisorInfo monitorapu(::turtle_interfaces::msg::EbsSupervisorInfo::_monitorapu_type arg)
  {
    msg_.monitorapu = std::move(arg);
    return std::move(msg_);
  }

private:
  ::turtle_interfaces::msg::EbsSupervisorInfo msg_;
};

class Init_EbsSupervisorInfo_monitorservocheck
{
public:
  explicit Init_EbsSupervisorInfo_monitorservocheck(::turtle_interfaces::msg::EbsSupervisorInfo & msg)
  : msg_(msg)
  {}
  Init_EbsSupervisorInfo_monitorapu monitorservocheck(::turtle_interfaces::msg::EbsSupervisorInfo::_monitorservocheck_type arg)
  {
    msg_.monitorservocheck = std::move(arg);
    return Init_EbsSupervisorInfo_monitorapu(msg_);
  }

private:
  ::turtle_interfaces::msg::EbsSupervisorInfo msg_;
};

class Init_EbsSupervisorInfo_monitorbrakepressure
{
public:
  explicit Init_EbsSupervisorInfo_monitorbrakepressure(::turtle_interfaces::msg::EbsSupervisorInfo & msg)
  : msg_(msg)
  {}
  Init_EbsSupervisorInfo_monitorservocheck monitorbrakepressure(::turtle_interfaces::msg::EbsSupervisorInfo::_monitorbrakepressure_type arg)
  {
    msg_.monitorbrakepressure = std::move(arg);
    return Init_EbsSupervisorInfo_monitorservocheck(msg_);
  }

private:
  ::turtle_interfaces::msg::EbsSupervisorInfo msg_;
};

class Init_EbsSupervisorInfo_monitortankpressure
{
public:
  explicit Init_EbsSupervisorInfo_monitortankpressure(::turtle_interfaces::msg::EbsSupervisorInfo & msg)
  : msg_(msg)
  {}
  Init_EbsSupervisorInfo_monitorbrakepressure monitortankpressure(::turtle_interfaces::msg::EbsSupervisorInfo::_monitortankpressure_type arg)
  {
    msg_.monitortankpressure = std::move(arg);
    return Init_EbsSupervisorInfo_monitorbrakepressure(msg_);
  }

private:
  ::turtle_interfaces::msg::EbsSupervisorInfo msg_;
};

class Init_EbsSupervisorInfo_initialcheckstage
{
public:
  explicit Init_EbsSupervisorInfo_initialcheckstage(::turtle_interfaces::msg::EbsSupervisorInfo & msg)
  : msg_(msg)
  {}
  Init_EbsSupervisorInfo_monitortankpressure initialcheckstage(::turtle_interfaces::msg::EbsSupervisorInfo::_initialcheckstage_type arg)
  {
    msg_.initialcheckstage = std::move(arg);
    return Init_EbsSupervisorInfo_monitortankpressure(msg_);
  }

private:
  ::turtle_interfaces::msg::EbsSupervisorInfo msg_;
};

class Init_EbsSupervisorInfo_initialchecked
{
public:
  explicit Init_EbsSupervisorInfo_initialchecked(::turtle_interfaces::msg::EbsSupervisorInfo & msg)
  : msg_(msg)
  {}
  Init_EbsSupervisorInfo_initialcheckstage initialchecked(::turtle_interfaces::msg::EbsSupervisorInfo::_initialchecked_type arg)
  {
    msg_.initialchecked = std::move(arg);
    return Init_EbsSupervisorInfo_initialcheckstage(msg_);
  }

private:
  ::turtle_interfaces::msg::EbsSupervisorInfo msg_;
};

class Init_EbsSupervisorInfo_servicebrakestatus
{
public:
  explicit Init_EbsSupervisorInfo_servicebrakestatus(::turtle_interfaces::msg::EbsSupervisorInfo & msg)
  : msg_(msg)
  {}
  Init_EbsSupervisorInfo_initialchecked servicebrakestatus(::turtle_interfaces::msg::EbsSupervisorInfo::_servicebrakestatus_type arg)
  {
    msg_.servicebrakestatus = std::move(arg);
    return Init_EbsSupervisorInfo_initialchecked(msg_);
  }

private:
  ::turtle_interfaces::msg::EbsSupervisorInfo msg_;
};

class Init_EbsSupervisorInfo_ebsled
{
public:
  explicit Init_EbsSupervisorInfo_ebsled(::turtle_interfaces::msg::EbsSupervisorInfo & msg)
  : msg_(msg)
  {}
  Init_EbsSupervisorInfo_servicebrakestatus ebsled(::turtle_interfaces::msg::EbsSupervisorInfo::_ebsled_type arg)
  {
    msg_.ebsled = std::move(arg);
    return Init_EbsSupervisorInfo_servicebrakestatus(msg_);
  }

private:
  ::turtle_interfaces::msg::EbsSupervisorInfo msg_;
};

class Init_EbsSupervisorInfo_ebsstatus
{
public:
  explicit Init_EbsSupervisorInfo_ebsstatus(::turtle_interfaces::msg::EbsSupervisorInfo & msg)
  : msg_(msg)
  {}
  Init_EbsSupervisorInfo_ebsled ebsstatus(::turtle_interfaces::msg::EbsSupervisorInfo::_ebsstatus_type arg)
  {
    msg_.ebsstatus = std::move(arg);
    return Init_EbsSupervisorInfo_ebsled(msg_);
  }

private:
  ::turtle_interfaces::msg::EbsSupervisorInfo msg_;
};

class Init_EbsSupervisorInfo_tsmsout
{
public:
  explicit Init_EbsSupervisorInfo_tsmsout(::turtle_interfaces::msg::EbsSupervisorInfo & msg)
  : msg_(msg)
  {}
  Init_EbsSupervisorInfo_ebsstatus tsmsout(::turtle_interfaces::msg::EbsSupervisorInfo::_tsmsout_type arg)
  {
    msg_.tsmsout = std::move(arg);
    return Init_EbsSupervisorInfo_ebsstatus(msg_);
  }

private:
  ::turtle_interfaces::msg::EbsSupervisorInfo msg_;
};

class Init_EbsSupervisorInfo_asmsstate
{
public:
  explicit Init_EbsSupervisorInfo_asmsstate(::turtle_interfaces::msg::EbsSupervisorInfo & msg)
  : msg_(msg)
  {}
  Init_EbsSupervisorInfo_tsmsout asmsstate(::turtle_interfaces::msg::EbsSupervisorInfo::_asmsstate_type arg)
  {
    msg_.asmsstate = std::move(arg);
    return Init_EbsSupervisorInfo_tsmsout(msg_);
  }

private:
  ::turtle_interfaces::msg::EbsSupervisorInfo msg_;
};

class Init_EbsSupervisorInfo_header
{
public:
  Init_EbsSupervisorInfo_header()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_EbsSupervisorInfo_asmsstate header(::turtle_interfaces::msg::EbsSupervisorInfo::_header_type arg)
  {
    msg_.header = std::move(arg);
    return Init_EbsSupervisorInfo_asmsstate(msg_);
  }

private:
  ::turtle_interfaces::msg::EbsSupervisorInfo msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::turtle_interfaces::msg::EbsSupervisorInfo>()
{
  return turtle_interfaces::msg::builder::Init_EbsSupervisorInfo_header();
}

}  // namespace turtle_interfaces

#endif  // TURTLE_INTERFACES__MSG__DETAIL__EBS_SUPERVISOR_INFO__BUILDER_HPP_
