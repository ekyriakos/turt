// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from turtle_interfaces:msg/DashBools.idl
// generated code does not contain a copyright notice

#ifndef TURTLE_INTERFACES__MSG__DETAIL__DASH_BOOLS__STRUCT_HPP_
#define TURTLE_INTERFACES__MSG__DETAIL__DASH_BOOLS__STRUCT_HPP_

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
# define DEPRECATED__turtle_interfaces__msg__DashBools __attribute__((deprecated))
#else
# define DEPRECATED__turtle_interfaces__msg__DashBools __declspec(deprecated)
#endif

namespace turtle_interfaces
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct DashBools_
{
  using Type = DashBools_<ContainerAllocator>;

  explicit DashBools_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : header(_init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->buzzer = false;
      this->safestate = false;
      this->enableout = false;
      this->asbled = false;
      this->greentsal = false;
    }
  }

  explicit DashBools_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : header(_alloc, _init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->buzzer = false;
      this->safestate = false;
      this->enableout = false;
      this->asbled = false;
      this->greentsal = false;
    }
  }

  // field types and members
  using _header_type =
    std_msgs::msg::Header_<ContainerAllocator>;
  _header_type header;
  using _buzzer_type =
    bool;
  _buzzer_type buzzer;
  using _safestate_type =
    bool;
  _safestate_type safestate;
  using _enableout_type =
    bool;
  _enableout_type enableout;
  using _asbled_type =
    bool;
  _asbled_type asbled;
  using _greentsal_type =
    bool;
  _greentsal_type greentsal;

  // setters for named parameter idiom
  Type & set__header(
    const std_msgs::msg::Header_<ContainerAllocator> & _arg)
  {
    this->header = _arg;
    return *this;
  }
  Type & set__buzzer(
    const bool & _arg)
  {
    this->buzzer = _arg;
    return *this;
  }
  Type & set__safestate(
    const bool & _arg)
  {
    this->safestate = _arg;
    return *this;
  }
  Type & set__enableout(
    const bool & _arg)
  {
    this->enableout = _arg;
    return *this;
  }
  Type & set__asbled(
    const bool & _arg)
  {
    this->asbled = _arg;
    return *this;
  }
  Type & set__greentsal(
    const bool & _arg)
  {
    this->greentsal = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    turtle_interfaces::msg::DashBools_<ContainerAllocator> *;
  using ConstRawPtr =
    const turtle_interfaces::msg::DashBools_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<turtle_interfaces::msg::DashBools_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<turtle_interfaces::msg::DashBools_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      turtle_interfaces::msg::DashBools_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<turtle_interfaces::msg::DashBools_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      turtle_interfaces::msg::DashBools_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<turtle_interfaces::msg::DashBools_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<turtle_interfaces::msg::DashBools_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<turtle_interfaces::msg::DashBools_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__turtle_interfaces__msg__DashBools
    std::shared_ptr<turtle_interfaces::msg::DashBools_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__turtle_interfaces__msg__DashBools
    std::shared_ptr<turtle_interfaces::msg::DashBools_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const DashBools_ & other) const
  {
    if (this->header != other.header) {
      return false;
    }
    if (this->buzzer != other.buzzer) {
      return false;
    }
    if (this->safestate != other.safestate) {
      return false;
    }
    if (this->enableout != other.enableout) {
      return false;
    }
    if (this->asbled != other.asbled) {
      return false;
    }
    if (this->greentsal != other.greentsal) {
      return false;
    }
    return true;
  }
  bool operator!=(const DashBools_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct DashBools_

// alias to use template instance with default allocator
using DashBools =
  turtle_interfaces::msg::DashBools_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace turtle_interfaces

#endif  // TURTLE_INTERFACES__MSG__DETAIL__DASH_BOOLS__STRUCT_HPP_
