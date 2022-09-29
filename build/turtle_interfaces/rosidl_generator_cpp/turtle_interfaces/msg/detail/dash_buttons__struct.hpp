// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from turtle_interfaces:msg/DashButtons.idl
// generated code does not contain a copyright notice

#ifndef TURTLE_INTERFACES__MSG__DETAIL__DASH_BUTTONS__STRUCT_HPP_
#define TURTLE_INTERFACES__MSG__DETAIL__DASH_BUTTONS__STRUCT_HPP_

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
# define DEPRECATED__turtle_interfaces__msg__DashButtons __attribute__((deprecated))
#else
# define DEPRECATED__turtle_interfaces__msg__DashButtons __declspec(deprecated)
#endif

namespace turtle_interfaces
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct DashButtons_
{
  using Type = DashButtons_<ContainerAllocator>;

  explicit DashButtons_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : header(_init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->enabletoggle = false;
      this->start = false;
      this->adact = false;
      this->cooling_button = false;
    }
  }

  explicit DashButtons_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : header(_alloc, _init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->enabletoggle = false;
      this->start = false;
      this->adact = false;
      this->cooling_button = false;
    }
  }

  // field types and members
  using _header_type =
    std_msgs::msg::Header_<ContainerAllocator>;
  _header_type header;
  using _enabletoggle_type =
    bool;
  _enabletoggle_type enabletoggle;
  using _start_type =
    bool;
  _start_type start;
  using _adact_type =
    bool;
  _adact_type adact;
  using _cooling_button_type =
    bool;
  _cooling_button_type cooling_button;

  // setters for named parameter idiom
  Type & set__header(
    const std_msgs::msg::Header_<ContainerAllocator> & _arg)
  {
    this->header = _arg;
    return *this;
  }
  Type & set__enabletoggle(
    const bool & _arg)
  {
    this->enabletoggle = _arg;
    return *this;
  }
  Type & set__start(
    const bool & _arg)
  {
    this->start = _arg;
    return *this;
  }
  Type & set__adact(
    const bool & _arg)
  {
    this->adact = _arg;
    return *this;
  }
  Type & set__cooling_button(
    const bool & _arg)
  {
    this->cooling_button = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    turtle_interfaces::msg::DashButtons_<ContainerAllocator> *;
  using ConstRawPtr =
    const turtle_interfaces::msg::DashButtons_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<turtle_interfaces::msg::DashButtons_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<turtle_interfaces::msg::DashButtons_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      turtle_interfaces::msg::DashButtons_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<turtle_interfaces::msg::DashButtons_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      turtle_interfaces::msg::DashButtons_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<turtle_interfaces::msg::DashButtons_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<turtle_interfaces::msg::DashButtons_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<turtle_interfaces::msg::DashButtons_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__turtle_interfaces__msg__DashButtons
    std::shared_ptr<turtle_interfaces::msg::DashButtons_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__turtle_interfaces__msg__DashButtons
    std::shared_ptr<turtle_interfaces::msg::DashButtons_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const DashButtons_ & other) const
  {
    if (this->header != other.header) {
      return false;
    }
    if (this->enabletoggle != other.enabletoggle) {
      return false;
    }
    if (this->start != other.start) {
      return false;
    }
    if (this->adact != other.adact) {
      return false;
    }
    if (this->cooling_button != other.cooling_button) {
      return false;
    }
    return true;
  }
  bool operator!=(const DashButtons_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct DashButtons_

// alias to use template instance with default allocator
using DashButtons =
  turtle_interfaces::msg::DashButtons_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace turtle_interfaces

#endif  // TURTLE_INTERFACES__MSG__DETAIL__DASH_BUTTONS__STRUCT_HPP_
