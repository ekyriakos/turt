// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from turtle_interfaces:msg/EbsSupervisorInfo.idl
// generated code does not contain a copyright notice

#ifndef TURTLE_INTERFACES__MSG__DETAIL__EBS_SUPERVISOR_INFO__STRUCT_HPP_
#define TURTLE_INTERFACES__MSG__DETAIL__EBS_SUPERVISOR_INFO__STRUCT_HPP_

#include <rosidl_runtime_cpp/bounded_vector.hpp>
#include <rosidl_runtime_cpp/message_initialization.hpp>
#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>


// Include directives for member types
// Member 'header'
#include "std_msgs/msg/detail/header__struct.hpp"

#ifndef _WIN32
# define DEPRECATED__turtle_interfaces__msg__EbsSupervisorInfo __attribute__((deprecated))
#else
# define DEPRECATED__turtle_interfaces__msg__EbsSupervisorInfo __declspec(deprecated)
#endif

namespace turtle_interfaces
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct EbsSupervisorInfo_
{
  using Type = EbsSupervisorInfo_<ContainerAllocator>;

  explicit EbsSupervisorInfo_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : header(_init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->asmsstate = false;
      this->tsmsout = false;
      this->ebsstatus = 0;
      this->ebsled = false;
      this->servicebrakestatus = 0;
      this->initialchecked = false;
      this->initialcheckstage = 0;
      this->monitortankpressure = false;
      this->monitorbrakepressure = false;
      this->monitorservocheck = false;
      this->monitorapu = false;
    }
  }

  explicit EbsSupervisorInfo_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : header(_alloc, _init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->asmsstate = false;
      this->tsmsout = false;
      this->ebsstatus = 0;
      this->ebsled = false;
      this->servicebrakestatus = 0;
      this->initialchecked = false;
      this->initialcheckstage = 0;
      this->monitortankpressure = false;
      this->monitorbrakepressure = false;
      this->monitorservocheck = false;
      this->monitorapu = false;
    }
  }

  // field types and members
  using _header_type =
    std_msgs::msg::Header_<ContainerAllocator>;
  _header_type header;
  using _asmsstate_type =
    bool;
  _asmsstate_type asmsstate;
  using _tsmsout_type =
    bool;
  _tsmsout_type tsmsout;
  using _ebsstatus_type =
    uint8_t;
  _ebsstatus_type ebsstatus;
  using _ebsled_type =
    bool;
  _ebsled_type ebsled;
  using _servicebrakestatus_type =
    uint8_t;
  _servicebrakestatus_type servicebrakestatus;
  using _initialchecked_type =
    bool;
  _initialchecked_type initialchecked;
  using _initialcheckstage_type =
    int8_t;
  _initialcheckstage_type initialcheckstage;
  using _monitortankpressure_type =
    bool;
  _monitortankpressure_type monitortankpressure;
  using _monitorbrakepressure_type =
    bool;
  _monitorbrakepressure_type monitorbrakepressure;
  using _monitorservocheck_type =
    bool;
  _monitorservocheck_type monitorservocheck;
  using _monitorapu_type =
    bool;
  _monitorapu_type monitorapu;

  // setters for named parameter idiom
  Type & set__header(
    const std_msgs::msg::Header_<ContainerAllocator> & _arg)
  {
    this->header = _arg;
    return *this;
  }
  Type & set__asmsstate(
    const bool & _arg)
  {
    this->asmsstate = _arg;
    return *this;
  }
  Type & set__tsmsout(
    const bool & _arg)
  {
    this->tsmsout = _arg;
    return *this;
  }
  Type & set__ebsstatus(
    const uint8_t & _arg)
  {
    this->ebsstatus = _arg;
    return *this;
  }
  Type & set__ebsled(
    const bool & _arg)
  {
    this->ebsled = _arg;
    return *this;
  }
  Type & set__servicebrakestatus(
    const uint8_t & _arg)
  {
    this->servicebrakestatus = _arg;
    return *this;
  }
  Type & set__initialchecked(
    const bool & _arg)
  {
    this->initialchecked = _arg;
    return *this;
  }
  Type & set__initialcheckstage(
    const int8_t & _arg)
  {
    this->initialcheckstage = _arg;
    return *this;
  }
  Type & set__monitortankpressure(
    const bool & _arg)
  {
    this->monitortankpressure = _arg;
    return *this;
  }
  Type & set__monitorbrakepressure(
    const bool & _arg)
  {
    this->monitorbrakepressure = _arg;
    return *this;
  }
  Type & set__monitorservocheck(
    const bool & _arg)
  {
    this->monitorservocheck = _arg;
    return *this;
  }
  Type & set__monitorapu(
    const bool & _arg)
  {
    this->monitorapu = _arg;
    return *this;
  }

  // constant declarations
  static constexpr uint8_t EBS_UNAVAILABLE =
    1u;
  static constexpr uint8_t EBS_ARMED =
    2u;
  static constexpr uint8_t EBS_ACTIVATED =
    3u;
  static constexpr uint8_t SERVICE_BRAKE_DISENGAGED =
    1u;
  static constexpr uint8_t SERVICE_BRAKE_ENGAGED =
    2u;
  static constexpr uint8_t SERVICE_BRAKE_AVAILABLE =
    3u;

  // pointer types
  using RawPtr =
    turtle_interfaces::msg::EbsSupervisorInfo_<ContainerAllocator> *;
  using ConstRawPtr =
    const turtle_interfaces::msg::EbsSupervisorInfo_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<turtle_interfaces::msg::EbsSupervisorInfo_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<turtle_interfaces::msg::EbsSupervisorInfo_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      turtle_interfaces::msg::EbsSupervisorInfo_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<turtle_interfaces::msg::EbsSupervisorInfo_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      turtle_interfaces::msg::EbsSupervisorInfo_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<turtle_interfaces::msg::EbsSupervisorInfo_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<turtle_interfaces::msg::EbsSupervisorInfo_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<turtle_interfaces::msg::EbsSupervisorInfo_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__turtle_interfaces__msg__EbsSupervisorInfo
    std::shared_ptr<turtle_interfaces::msg::EbsSupervisorInfo_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__turtle_interfaces__msg__EbsSupervisorInfo
    std::shared_ptr<turtle_interfaces::msg::EbsSupervisorInfo_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const EbsSupervisorInfo_ & other) const
  {
    if (this->header != other.header) {
      return false;
    }
    if (this->asmsstate != other.asmsstate) {
      return false;
    }
    if (this->tsmsout != other.tsmsout) {
      return false;
    }
    if (this->ebsstatus != other.ebsstatus) {
      return false;
    }
    if (this->ebsled != other.ebsled) {
      return false;
    }
    if (this->servicebrakestatus != other.servicebrakestatus) {
      return false;
    }
    if (this->initialchecked != other.initialchecked) {
      return false;
    }
    if (this->initialcheckstage != other.initialcheckstage) {
      return false;
    }
    if (this->monitortankpressure != other.monitortankpressure) {
      return false;
    }
    if (this->monitorbrakepressure != other.monitorbrakepressure) {
      return false;
    }
    if (this->monitorservocheck != other.monitorservocheck) {
      return false;
    }
    if (this->monitorapu != other.monitorapu) {
      return false;
    }
    return true;
  }
  bool operator!=(const EbsSupervisorInfo_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct EbsSupervisorInfo_

// alias to use template instance with default allocator
using EbsSupervisorInfo =
  turtle_interfaces::msg::EbsSupervisorInfo_<std::allocator<void>>;

// constant definitions
template<typename ContainerAllocator>
constexpr uint8_t EbsSupervisorInfo_<ContainerAllocator>::EBS_UNAVAILABLE;
template<typename ContainerAllocator>
constexpr uint8_t EbsSupervisorInfo_<ContainerAllocator>::EBS_ARMED;
template<typename ContainerAllocator>
constexpr uint8_t EbsSupervisorInfo_<ContainerAllocator>::EBS_ACTIVATED;
template<typename ContainerAllocator>
constexpr uint8_t EbsSupervisorInfo_<ContainerAllocator>::SERVICE_BRAKE_DISENGAGED;
template<typename ContainerAllocator>
constexpr uint8_t EbsSupervisorInfo_<ContainerAllocator>::SERVICE_BRAKE_ENGAGED;
template<typename ContainerAllocator>
constexpr uint8_t EbsSupervisorInfo_<ContainerAllocator>::SERVICE_BRAKE_AVAILABLE;

}  // namespace msg

}  // namespace turtle_interfaces

#endif  // TURTLE_INTERFACES__MSG__DETAIL__EBS_SUPERVISOR_INFO__STRUCT_HPP_
