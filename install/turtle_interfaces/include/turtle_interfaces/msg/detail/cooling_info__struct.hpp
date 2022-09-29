// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from turtle_interfaces:msg/CoolingInfo.idl
// generated code does not contain a copyright notice

#ifndef TURTLE_INTERFACES__MSG__DETAIL__COOLING_INFO__STRUCT_HPP_
#define TURTLE_INTERFACES__MSG__DETAIL__COOLING_INFO__STRUCT_HPP_

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
# define DEPRECATED__turtle_interfaces__msg__CoolingInfo __attribute__((deprecated))
#else
# define DEPRECATED__turtle_interfaces__msg__CoolingInfo __declspec(deprecated)
#endif

namespace turtle_interfaces
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct CoolingInfo_
{
  using Type = CoolingInfo_<ContainerAllocator>;

  explicit CoolingInfo_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : header(_init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->pumpsignal = 0;
      this->accufanspwm = 0;
      this->hallfanpwm = 0;
      this->chassisfans = 0;
    }
  }

  explicit CoolingInfo_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : header(_alloc, _init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->pumpsignal = 0;
      this->accufanspwm = 0;
      this->hallfanpwm = 0;
      this->chassisfans = 0;
    }
  }

  // field types and members
  using _header_type =
    std_msgs::msg::Header_<ContainerAllocator>;
  _header_type header;
  using _pumpsignal_type =
    uint8_t;
  _pumpsignal_type pumpsignal;
  using _accufanspwm_type =
    uint8_t;
  _accufanspwm_type accufanspwm;
  using _hallfanpwm_type =
    uint8_t;
  _hallfanpwm_type hallfanpwm;
  using _chassisfans_type =
    uint8_t;
  _chassisfans_type chassisfans;

  // setters for named parameter idiom
  Type & set__header(
    const std_msgs::msg::Header_<ContainerAllocator> & _arg)
  {
    this->header = _arg;
    return *this;
  }
  Type & set__pumpsignal(
    const uint8_t & _arg)
  {
    this->pumpsignal = _arg;
    return *this;
  }
  Type & set__accufanspwm(
    const uint8_t & _arg)
  {
    this->accufanspwm = _arg;
    return *this;
  }
  Type & set__hallfanpwm(
    const uint8_t & _arg)
  {
    this->hallfanpwm = _arg;
    return *this;
  }
  Type & set__chassisfans(
    const uint8_t & _arg)
  {
    this->chassisfans = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    turtle_interfaces::msg::CoolingInfo_<ContainerAllocator> *;
  using ConstRawPtr =
    const turtle_interfaces::msg::CoolingInfo_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<turtle_interfaces::msg::CoolingInfo_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<turtle_interfaces::msg::CoolingInfo_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      turtle_interfaces::msg::CoolingInfo_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<turtle_interfaces::msg::CoolingInfo_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      turtle_interfaces::msg::CoolingInfo_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<turtle_interfaces::msg::CoolingInfo_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<turtle_interfaces::msg::CoolingInfo_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<turtle_interfaces::msg::CoolingInfo_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__turtle_interfaces__msg__CoolingInfo
    std::shared_ptr<turtle_interfaces::msg::CoolingInfo_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__turtle_interfaces__msg__CoolingInfo
    std::shared_ptr<turtle_interfaces::msg::CoolingInfo_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const CoolingInfo_ & other) const
  {
    if (this->header != other.header) {
      return false;
    }
    if (this->pumpsignal != other.pumpsignal) {
      return false;
    }
    if (this->accufanspwm != other.accufanspwm) {
      return false;
    }
    if (this->hallfanpwm != other.hallfanpwm) {
      return false;
    }
    if (this->chassisfans != other.chassisfans) {
      return false;
    }
    return true;
  }
  bool operator!=(const CoolingInfo_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct CoolingInfo_

// alias to use template instance with default allocator
using CoolingInfo =
  turtle_interfaces::msg::CoolingInfo_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace turtle_interfaces

#endif  // TURTLE_INTERFACES__MSG__DETAIL__COOLING_INFO__STRUCT_HPP_
