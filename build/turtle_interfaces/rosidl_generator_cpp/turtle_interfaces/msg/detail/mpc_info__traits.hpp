// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from turtle_interfaces:msg/MPCInfo.idl
// generated code does not contain a copyright notice

#ifndef TURTLE_INTERFACES__MSG__DETAIL__MPC_INFO__TRAITS_HPP_
#define TURTLE_INTERFACES__MSG__DETAIL__MPC_INFO__TRAITS_HPP_

#include "turtle_interfaces/msg/detail/mpc_info__struct.hpp"
#include <stdint.h>
#include <rosidl_runtime_cpp/traits.hpp>
#include <sstream>
#include <string>
#include <type_traits>

// Include directives for member types
// Member 'header'
#include "std_msgs/msg/detail/header__traits.hpp"

namespace rosidl_generator_traits
{

inline void to_yaml(
  const turtle_interfaces::msg::MPCInfo & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: header
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "header:\n";
    to_yaml(msg.header, out, indentation + 2);
  }

  // member: mpc_was_used
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "mpc_was_used: ";
    value_to_yaml(msg.mpc_was_used, out);
    out << "\n";
  }

  // member: delta_commanded
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "delta_commanded: ";
    value_to_yaml(msg.delta_commanded, out);
    out << "\n";
  }

  // member: delta_desired
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "delta_desired: ";
    value_to_yaml(msg.delta_desired, out);
    out << "\n";
  }

  // member: mpc_microseconds
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "mpc_microseconds: ";
    value_to_yaml(msg.mpc_microseconds, out);
    out << "\n";
  }

  // member: mpc_milliseconds
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "mpc_milliseconds: ";
    value_to_yaml(msg.mpc_milliseconds, out);
    out << "\n";
  }

  // member: solver_milliseconds
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "solver_milliseconds: ";
    value_to_yaml(msg.solver_milliseconds, out);
    out << "\n";
  }

  // member: velocity_desired
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "velocity_desired: ";
    value_to_yaml(msg.velocity_desired, out);
    out << "\n";
  }

  // member: vx_max
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "vx_max: ";
    value_to_yaml(msg.vx_max, out);
    out << "\n";
  }

  // member: vx
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "vx: ";
    value_to_yaml(msg.vx, out);
    out << "\n";
  }

  // member: spline_length
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "spline_length: ";
    value_to_yaml(msg.spline_length, out);
    out << "\n";
  }

  // member: number_of_waypoints
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "number_of_waypoints: ";
    value_to_yaml(msg.number_of_waypoints, out);
    out << "\n";
  }

  // member: throttle_brake
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "throttle_brake: ";
    value_to_yaml(msg.throttle_brake, out);
    out << "\n";
  }

  // member: torque
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "torque: ";
    value_to_yaml(msg.torque, out);
    out << "\n";
  }

  // member: stages_velocity
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.stages_velocity.size() == 0) {
      out << "stages_velocity: []\n";
    } else {
      out << "stages_velocity:\n";
      for (auto item : msg.stages_velocity) {
        if (indentation > 0) {
          out << std::string(indentation, ' ');
        }
        out << "- ";
        value_to_yaml(item, out);
        out << "\n";
      }
    }
  }

  // member: stages_steering_angle
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.stages_steering_angle.size() == 0) {
      out << "stages_steering_angle: []\n";
    } else {
      out << "stages_steering_angle:\n";
      for (auto item : msg.stages_steering_angle) {
        if (indentation > 0) {
          out << std::string(indentation, ' ');
        }
        out << "- ";
        value_to_yaml(item, out);
        out << "\n";
      }
    }
  }

  // member: stages_force
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.stages_force.size() == 0) {
      out << "stages_force: []\n";
    } else {
      out << "stages_force:\n";
      for (auto item : msg.stages_force) {
        if (indentation > 0) {
          out << std::string(indentation, ' ');
        }
        out << "- ";
        value_to_yaml(item, out);
        out << "\n";
      }
    }
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const turtle_interfaces::msg::MPCInfo & msg)
{
  std::ostringstream out;
  to_yaml(msg, out);
  return out.str();
}

template<>
inline const char * data_type<turtle_interfaces::msg::MPCInfo>()
{
  return "turtle_interfaces::msg::MPCInfo";
}

template<>
inline const char * name<turtle_interfaces::msg::MPCInfo>()
{
  return "turtle_interfaces/msg/MPCInfo";
}

template<>
struct has_fixed_size<turtle_interfaces::msg::MPCInfo>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<turtle_interfaces::msg::MPCInfo>
  : std::integral_constant<bool, false> {};

template<>
struct is_message<turtle_interfaces::msg::MPCInfo>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // TURTLE_INTERFACES__MSG__DETAIL__MPC_INFO__TRAITS_HPP_
