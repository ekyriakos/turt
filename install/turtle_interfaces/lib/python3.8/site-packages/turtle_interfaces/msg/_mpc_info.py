# generated from rosidl_generator_py/resource/_idl.py.em
# with input from turtle_interfaces:msg/MPCInfo.idl
# generated code does not contain a copyright notice


# Import statements for member types

# Member 'stages_velocity'
# Member 'stages_steering_angle'
# Member 'stages_force'
import array  # noqa: E402, I100

import rosidl_parser.definition  # noqa: E402, I100


class Metaclass_MPCInfo(type):
    """Metaclass of message 'MPCInfo'."""

    _CREATE_ROS_MESSAGE = None
    _CONVERT_FROM_PY = None
    _CONVERT_TO_PY = None
    _DESTROY_ROS_MESSAGE = None
    _TYPE_SUPPORT = None

    __constants = {
    }

    @classmethod
    def __import_type_support__(cls):
        try:
            from rosidl_generator_py import import_type_support
            module = import_type_support('turtle_interfaces')
        except ImportError:
            import logging
            import traceback
            logger = logging.getLogger(
                'turtle_interfaces.msg.MPCInfo')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__msg__mpc_info
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__msg__mpc_info
            cls._CONVERT_TO_PY = module.convert_to_py_msg__msg__mpc_info
            cls._TYPE_SUPPORT = module.type_support_msg__msg__mpc_info
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__msg__mpc_info

            from std_msgs.msg import Header
            if Header.__class__._TYPE_SUPPORT is None:
                Header.__class__.__import_type_support__()

    @classmethod
    def __prepare__(cls, name, bases, **kwargs):
        # list constant names here so that they appear in the help text of
        # the message class under "Data and other attributes defined here:"
        # as well as populate each message instance
        return {
        }


class MPCInfo(metaclass=Metaclass_MPCInfo):
    """Message class 'MPCInfo'."""

    __slots__ = [
        '_header',
        '_mpc_was_used',
        '_delta_commanded',
        '_delta_desired',
        '_mpc_microseconds',
        '_mpc_milliseconds',
        '_solver_milliseconds',
        '_velocity_desired',
        '_vx_max',
        '_vx',
        '_spline_length',
        '_number_of_waypoints',
        '_throttle_brake',
        '_torque',
        '_stages_velocity',
        '_stages_steering_angle',
        '_stages_force',
    ]

    _fields_and_field_types = {
        'header': 'std_msgs/Header',
        'mpc_was_used': 'uint8',
        'delta_commanded': 'float',
        'delta_desired': 'float',
        'mpc_microseconds': 'float',
        'mpc_milliseconds': 'float',
        'solver_milliseconds': 'float',
        'velocity_desired': 'float',
        'vx_max': 'float',
        'vx': 'float',
        'spline_length': 'float',
        'number_of_waypoints': 'uint8',
        'throttle_brake': 'float',
        'torque': 'float',
        'stages_velocity': 'sequence<float>',
        'stages_steering_angle': 'sequence<float>',
        'stages_force': 'sequence<float>',
    }

    SLOT_TYPES = (
        rosidl_parser.definition.NamespacedType(['std_msgs', 'msg'], 'Header'),  # noqa: E501
        rosidl_parser.definition.BasicType('uint8'),  # noqa: E501
        rosidl_parser.definition.BasicType('float'),  # noqa: E501
        rosidl_parser.definition.BasicType('float'),  # noqa: E501
        rosidl_parser.definition.BasicType('float'),  # noqa: E501
        rosidl_parser.definition.BasicType('float'),  # noqa: E501
        rosidl_parser.definition.BasicType('float'),  # noqa: E501
        rosidl_parser.definition.BasicType('float'),  # noqa: E501
        rosidl_parser.definition.BasicType('float'),  # noqa: E501
        rosidl_parser.definition.BasicType('float'),  # noqa: E501
        rosidl_parser.definition.BasicType('float'),  # noqa: E501
        rosidl_parser.definition.BasicType('uint8'),  # noqa: E501
        rosidl_parser.definition.BasicType('float'),  # noqa: E501
        rosidl_parser.definition.BasicType('float'),  # noqa: E501
        rosidl_parser.definition.UnboundedSequence(rosidl_parser.definition.BasicType('float')),  # noqa: E501
        rosidl_parser.definition.UnboundedSequence(rosidl_parser.definition.BasicType('float')),  # noqa: E501
        rosidl_parser.definition.UnboundedSequence(rosidl_parser.definition.BasicType('float')),  # noqa: E501
    )

    def __init__(self, **kwargs):
        assert all('_' + key in self.__slots__ for key in kwargs.keys()), \
            'Invalid arguments passed to constructor: %s' % \
            ', '.join(sorted(k for k in kwargs.keys() if '_' + k not in self.__slots__))
        from std_msgs.msg import Header
        self.header = kwargs.get('header', Header())
        self.mpc_was_used = kwargs.get('mpc_was_used', int())
        self.delta_commanded = kwargs.get('delta_commanded', float())
        self.delta_desired = kwargs.get('delta_desired', float())
        self.mpc_microseconds = kwargs.get('mpc_microseconds', float())
        self.mpc_milliseconds = kwargs.get('mpc_milliseconds', float())
        self.solver_milliseconds = kwargs.get('solver_milliseconds', float())
        self.velocity_desired = kwargs.get('velocity_desired', float())
        self.vx_max = kwargs.get('vx_max', float())
        self.vx = kwargs.get('vx', float())
        self.spline_length = kwargs.get('spline_length', float())
        self.number_of_waypoints = kwargs.get('number_of_waypoints', int())
        self.throttle_brake = kwargs.get('throttle_brake', float())
        self.torque = kwargs.get('torque', float())
        self.stages_velocity = array.array('f', kwargs.get('stages_velocity', []))
        self.stages_steering_angle = array.array('f', kwargs.get('stages_steering_angle', []))
        self.stages_force = array.array('f', kwargs.get('stages_force', []))

    def __repr__(self):
        typename = self.__class__.__module__.split('.')
        typename.pop()
        typename.append(self.__class__.__name__)
        args = []
        for s, t in zip(self.__slots__, self.SLOT_TYPES):
            field = getattr(self, s)
            fieldstr = repr(field)
            # We use Python array type for fields that can be directly stored
            # in them, and "normal" sequences for everything else.  If it is
            # a type that we store in an array, strip off the 'array' portion.
            if (
                isinstance(t, rosidl_parser.definition.AbstractSequence) and
                isinstance(t.value_type, rosidl_parser.definition.BasicType) and
                t.value_type.typename in ['float', 'double', 'int8', 'uint8', 'int16', 'uint16', 'int32', 'uint32', 'int64', 'uint64']
            ):
                if len(field) == 0:
                    fieldstr = '[]'
                else:
                    assert fieldstr.startswith('array(')
                    prefix = "array('X', "
                    suffix = ')'
                    fieldstr = fieldstr[len(prefix):-len(suffix)]
            args.append(s[1:] + '=' + fieldstr)
        return '%s(%s)' % ('.'.join(typename), ', '.join(args))

    def __eq__(self, other):
        if not isinstance(other, self.__class__):
            return False
        if self.header != other.header:
            return False
        if self.mpc_was_used != other.mpc_was_used:
            return False
        if self.delta_commanded != other.delta_commanded:
            return False
        if self.delta_desired != other.delta_desired:
            return False
        if self.mpc_microseconds != other.mpc_microseconds:
            return False
        if self.mpc_milliseconds != other.mpc_milliseconds:
            return False
        if self.solver_milliseconds != other.solver_milliseconds:
            return False
        if self.velocity_desired != other.velocity_desired:
            return False
        if self.vx_max != other.vx_max:
            return False
        if self.vx != other.vx:
            return False
        if self.spline_length != other.spline_length:
            return False
        if self.number_of_waypoints != other.number_of_waypoints:
            return False
        if self.throttle_brake != other.throttle_brake:
            return False
        if self.torque != other.torque:
            return False
        if self.stages_velocity != other.stages_velocity:
            return False
        if self.stages_steering_angle != other.stages_steering_angle:
            return False
        if self.stages_force != other.stages_force:
            return False
        return True

    @classmethod
    def get_fields_and_field_types(cls):
        from copy import copy
        return copy(cls._fields_and_field_types)

    @property
    def header(self):
        """Message field 'header'."""
        return self._header

    @header.setter
    def header(self, value):
        if __debug__:
            from std_msgs.msg import Header
            assert \
                isinstance(value, Header), \
                "The 'header' field must be a sub message of type 'Header'"
        self._header = value

    @property
    def mpc_was_used(self):
        """Message field 'mpc_was_used'."""
        return self._mpc_was_used

    @mpc_was_used.setter
    def mpc_was_used(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'mpc_was_used' field must be of type 'int'"
            assert value >= 0 and value < 256, \
                "The 'mpc_was_used' field must be an unsigned integer in [0, 255]"
        self._mpc_was_used = value

    @property
    def delta_commanded(self):
        """Message field 'delta_commanded'."""
        return self._delta_commanded

    @delta_commanded.setter
    def delta_commanded(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'delta_commanded' field must be of type 'float'"
        self._delta_commanded = value

    @property
    def delta_desired(self):
        """Message field 'delta_desired'."""
        return self._delta_desired

    @delta_desired.setter
    def delta_desired(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'delta_desired' field must be of type 'float'"
        self._delta_desired = value

    @property
    def mpc_microseconds(self):
        """Message field 'mpc_microseconds'."""
        return self._mpc_microseconds

    @mpc_microseconds.setter
    def mpc_microseconds(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'mpc_microseconds' field must be of type 'float'"
        self._mpc_microseconds = value

    @property
    def mpc_milliseconds(self):
        """Message field 'mpc_milliseconds'."""
        return self._mpc_milliseconds

    @mpc_milliseconds.setter
    def mpc_milliseconds(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'mpc_milliseconds' field must be of type 'float'"
        self._mpc_milliseconds = value

    @property
    def solver_milliseconds(self):
        """Message field 'solver_milliseconds'."""
        return self._solver_milliseconds

    @solver_milliseconds.setter
    def solver_milliseconds(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'solver_milliseconds' field must be of type 'float'"
        self._solver_milliseconds = value

    @property
    def velocity_desired(self):
        """Message field 'velocity_desired'."""
        return self._velocity_desired

    @velocity_desired.setter
    def velocity_desired(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'velocity_desired' field must be of type 'float'"
        self._velocity_desired = value

    @property
    def vx_max(self):
        """Message field 'vx_max'."""
        return self._vx_max

    @vx_max.setter
    def vx_max(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'vx_max' field must be of type 'float'"
        self._vx_max = value

    @property
    def vx(self):
        """Message field 'vx'."""
        return self._vx

    @vx.setter
    def vx(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'vx' field must be of type 'float'"
        self._vx = value

    @property
    def spline_length(self):
        """Message field 'spline_length'."""
        return self._spline_length

    @spline_length.setter
    def spline_length(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'spline_length' field must be of type 'float'"
        self._spline_length = value

    @property
    def number_of_waypoints(self):
        """Message field 'number_of_waypoints'."""
        return self._number_of_waypoints

    @number_of_waypoints.setter
    def number_of_waypoints(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'number_of_waypoints' field must be of type 'int'"
            assert value >= 0 and value < 256, \
                "The 'number_of_waypoints' field must be an unsigned integer in [0, 255]"
        self._number_of_waypoints = value

    @property
    def throttle_brake(self):
        """Message field 'throttle_brake'."""
        return self._throttle_brake

    @throttle_brake.setter
    def throttle_brake(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'throttle_brake' field must be of type 'float'"
        self._throttle_brake = value

    @property
    def torque(self):
        """Message field 'torque'."""
        return self._torque

    @torque.setter
    def torque(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'torque' field must be of type 'float'"
        self._torque = value

    @property
    def stages_velocity(self):
        """Message field 'stages_velocity'."""
        return self._stages_velocity

    @stages_velocity.setter
    def stages_velocity(self, value):
        if isinstance(value, array.array):
            assert value.typecode == 'f', \
                "The 'stages_velocity' array.array() must have the type code of 'f'"
            self._stages_velocity = value
            return
        if __debug__:
            from collections.abc import Sequence
            from collections.abc import Set
            from collections import UserList
            from collections import UserString
            assert \
                ((isinstance(value, Sequence) or
                  isinstance(value, Set) or
                  isinstance(value, UserList)) and
                 not isinstance(value, str) and
                 not isinstance(value, UserString) and
                 all(isinstance(v, float) for v in value) and
                 True), \
                "The 'stages_velocity' field must be a set or sequence and each value of type 'float'"
        self._stages_velocity = array.array('f', value)

    @property
    def stages_steering_angle(self):
        """Message field 'stages_steering_angle'."""
        return self._stages_steering_angle

    @stages_steering_angle.setter
    def stages_steering_angle(self, value):
        if isinstance(value, array.array):
            assert value.typecode == 'f', \
                "The 'stages_steering_angle' array.array() must have the type code of 'f'"
            self._stages_steering_angle = value
            return
        if __debug__:
            from collections.abc import Sequence
            from collections.abc import Set
            from collections import UserList
            from collections import UserString
            assert \
                ((isinstance(value, Sequence) or
                  isinstance(value, Set) or
                  isinstance(value, UserList)) and
                 not isinstance(value, str) and
                 not isinstance(value, UserString) and
                 all(isinstance(v, float) for v in value) and
                 True), \
                "The 'stages_steering_angle' field must be a set or sequence and each value of type 'float'"
        self._stages_steering_angle = array.array('f', value)

    @property
    def stages_force(self):
        """Message field 'stages_force'."""
        return self._stages_force

    @stages_force.setter
    def stages_force(self, value):
        if isinstance(value, array.array):
            assert value.typecode == 'f', \
                "The 'stages_force' array.array() must have the type code of 'f'"
            self._stages_force = value
            return
        if __debug__:
            from collections.abc import Sequence
            from collections.abc import Set
            from collections import UserList
            from collections import UserString
            assert \
                ((isinstance(value, Sequence) or
                  isinstance(value, Set) or
                  isinstance(value, UserList)) and
                 not isinstance(value, str) and
                 not isinstance(value, UserString) and
                 all(isinstance(v, float) for v in value) and
                 True), \
                "The 'stages_force' field must be a set or sequence and each value of type 'float'"
        self._stages_force = array.array('f', value)
