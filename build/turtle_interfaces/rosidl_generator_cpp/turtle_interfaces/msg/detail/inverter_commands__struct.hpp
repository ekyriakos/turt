// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from turtle_interfaces:msg/InverterCommands.idl
// generated code does not contain a copyright notice

#ifndef TURTLE_INTERFACES__MSG__DETAIL__INVERTER_COMMANDS__STRUCT_HPP_
#define TURTLE_INTERFACES__MSG__DETAIL__INVERTER_COMMANDS__STRUCT_HPP_

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
# define DEPRECATED__turtle_interfaces__msg__InverterCommands __attribute__((deprecated))
#else
# define DEPRECATED__turtle_interfaces__msg__InverterCommands __declspec(deprecated)
#endif

namespace turtle_interfaces
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct InverterCommands_
{
  using Type = InverterCommands_<ContainerAllocator>;

  explicit InverterCommands_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : header(_init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->torqueleft = 0;
      this->torqueright = 0;
    }
  }

  explicit InverterCommands_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : header(_alloc, _init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->torqueleft = 0;
      this->torqueright = 0;
    }
  }

  // field types and members
  using _header_type =
    std_msgs::msg::Header_<ContainerAllocator>;
  _header_type header;
  using _torqueleft_type =
    int16_t;
  _torqueleft_type torqueleft;
  using _torqueright_type =
    int16_t;
  _torqueright_type torqueright;

  // setters for named parameter idiom
  Type & set__header(
    const std_msgs::msg::Header_<ContainerAllocator> & _arg)
  {
    this->header = _arg;
    return *this;
  }
  Type & set__torqueleft(
    const int16_t & _arg)
  {
    this->torqueleft = _arg;
    return *this;
  }
  Type & set__torqueright(
    const int16_t & _arg)
  {
    this->torqueright = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    turtle_interfaces::msg::InverterCommands_<ContainerAllocator> *;
  using ConstRawPtr =
    const turtle_interfaces::msg::InverterCommands_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<turtle_interfaces::msg::InverterCommands_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<turtle_interfaces::msg::InverterCommands_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      turtle_interfaces::msg::InverterCommands_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<turtle_interfaces::msg::InverterCommands_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      turtle_interfaces::msg::InverterCommands_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<turtle_interfaces::msg::InverterCommands_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<turtle_interfaces::msg::InverterCommands_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<turtle_interfaces::msg::InverterCommands_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__turtle_interfaces__msg__InverterCommands
    std::shared_ptr<turtle_interfaces::msg::InverterCommands_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__turtle_interfaces__msg__InverterCommands
    std::shared_ptr<turtle_interfaces::msg::InverterCommands_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const InverterCommands_ & other) const
  {
    if (this->header != other.header) {
      return false;
    }
    if (this->torqueleft != other.torqueleft) {
      return false;
    }
    if (this->torqueright != other.torqueright) {
      return false;
    }
    return true;
  }
  bool operator!=(const InverterCommands_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct InverterCommands_

// alias to use template instance with default allocator
using InverterCommands =
  turtle_interfaces::msg::InverterCommands_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace turtle_interfaces

#endif  // TURTLE_INTERFACES__MSG__DETAIL__INVERTER_COMMANDS__STRUCT_HPP_
