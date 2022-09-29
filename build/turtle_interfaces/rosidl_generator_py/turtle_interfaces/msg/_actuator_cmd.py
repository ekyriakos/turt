# generated from rosidl_generator_py/resource/_idl.py.em
# with input from turtle_interfaces:msg/ActuatorCmd.idl
# generated code does not contain a copyright notice


# Import statements for member types

import rosidl_parser.definition  # noqa: E402, I100


class Metaclass_ActuatorCmd(type):
    """Metaclass of message 'ActuatorCmd'."""

    _CREATE_ROS_MESSAGE = None
    _CONVERT_FROM_PY = None
    _CONVERT_TO_PY = None
    _DESTROY_ROS_MESSAGE = None
    _TYPE_SUPPORT = None

    __constants = {
        'STEERING_MODE_POSITION': 13,
        'STEERING_MODE_VELOCITY': 0,
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
                'turtle_interfaces.msg.ActuatorCmd')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__msg__actuator_cmd
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__msg__actuator_cmd
            cls._CONVERT_TO_PY = module.convert_to_py_msg__msg__actuator_cmd
            cls._TYPE_SUPPORT = module.type_support_msg__msg__actuator_cmd
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__msg__actuator_cmd

            from std_msgs.msg import Header
            if Header.__class__._TYPE_SUPPORT is None:
                Header.__class__.__import_type_support__()

    @classmethod
    def __prepare__(cls, name, bases, **kwargs):
        # list constant names here so that they appear in the help text of
        # the message class under "Data and other attributes defined here:"
        # as well as populate each message instance
        return {
            'STEERING_MODE_POSITION': cls.__constants['STEERING_MODE_POSITION'],
            'STEERING_MODE_VELOCITY': cls.__constants['STEERING_MODE_VELOCITY'],
        }

    @property
    def STEERING_MODE_POSITION(self):
        """Message constant 'STEERING_MODE_POSITION'."""
        return Metaclass_ActuatorCmd.__constants['STEERING_MODE_POSITION']

    @property
    def STEERING_MODE_VELOCITY(self):
        """Message constant 'STEERING_MODE_VELOCITY'."""
        return Metaclass_ActuatorCmd.__constants['STEERING_MODE_VELOCITY']


class ActuatorCmd(metaclass=Metaclass_ActuatorCmd):
    """
    Message class 'ActuatorCmd'.

    Constants:
      STEERING_MODE_POSITION
      STEERING_MODE_VELOCITY
    """

    __slots__ = [
        '_header',
        '_throttle',
        '_steering',
        '_steering_mode',
    ]

    _fields_and_field_types = {
        'header': 'std_msgs/Header',
        'throttle': 'float',
        'steering': 'float',
        'steering_mode': 'uint8',
    }

    SLOT_TYPES = (
        rosidl_parser.definition.NamespacedType(['std_msgs', 'msg'], 'Header'),  # noqa: E501
        rosidl_parser.definition.BasicType('float'),  # noqa: E501
        rosidl_parser.definition.BasicType('float'),  # noqa: E501
        rosidl_parser.definition.BasicType('uint8'),  # noqa: E501
    )

    def __init__(self, **kwargs):
        assert all('_' + key in self.__slots__ for key in kwargs.keys()), \
            'Invalid arguments passed to constructor: %s' % \
            ', '.join(sorted(k for k in kwargs.keys() if '_' + k not in self.__slots__))
        from std_msgs.msg import Header
        self.header = kwargs.get('header', Header())
        self.throttle = kwargs.get('throttle', float())
        self.steering = kwargs.get('steering', float())
        self.steering_mode = kwargs.get('steering_mode', int())

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
        if self.throttle != other.throttle:
            return False
        if self.steering != other.steering:
            return False
        if self.steering_mode != other.steering_mode:
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
    def throttle(self):
        """Message field 'throttle'."""
        return self._throttle

    @throttle.setter
    def throttle(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'throttle' field must be of type 'float'"
        self._throttle = value

    @property
    def steering(self):
        """Message field 'steering'."""
        return self._steering

    @steering.setter
    def steering(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'steering' field must be of type 'float'"
        self._steering = value

    @property
    def steering_mode(self):
        """Message field 'steering_mode'."""
        return self._steering_mode

    @steering_mode.setter
    def steering_mode(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'steering_mode' field must be of type 'int'"
            assert value >= 0 and value < 256, \
                "The 'steering_mode' field must be an unsigned integer in [0, 255]"
        self._steering_mode = value
