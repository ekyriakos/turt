# generated from rosidl_generator_py/resource/_idl.py.em
# with input from turtle_interfaces:msg/PsuMonitor.idl
# generated code does not contain a copyright notice


# Import statements for member types

import rosidl_parser.definition  # noqa: E402, I100


class Metaclass_PsuMonitor(type):
    """Metaclass of message 'PsuMonitor'."""

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
                'turtle_interfaces.msg.PsuMonitor')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__msg__psu_monitor
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__msg__psu_monitor
            cls._CONVERT_TO_PY = module.convert_to_py_msg__msg__psu_monitor
            cls._TYPE_SUPPORT = module.type_support_msg__msg__psu_monitor
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__msg__psu_monitor

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


class PsuMonitor(metaclass=Metaclass_PsuMonitor):
    """Message class 'PsuMonitor'."""

    __slots__ = [
        '_header',
        '_v_in',
        '_v_ignition',
        '_v3_3',
        '_v5_0',
        '_v12_0',
        '_temperature',
    ]

    _fields_and_field_types = {
        'header': 'std_msgs/Header',
        'v_in': 'float',
        'v_ignition': 'float',
        'v3_3': 'float',
        'v5_0': 'float',
        'v12_0': 'float',
        'temperature': 'float',
    }

    SLOT_TYPES = (
        rosidl_parser.definition.NamespacedType(['std_msgs', 'msg'], 'Header'),  # noqa: E501
        rosidl_parser.definition.BasicType('float'),  # noqa: E501
        rosidl_parser.definition.BasicType('float'),  # noqa: E501
        rosidl_parser.definition.BasicType('float'),  # noqa: E501
        rosidl_parser.definition.BasicType('float'),  # noqa: E501
        rosidl_parser.definition.BasicType('float'),  # noqa: E501
        rosidl_parser.definition.BasicType('float'),  # noqa: E501
    )

    def __init__(self, **kwargs):
        assert all('_' + key in self.__slots__ for key in kwargs.keys()), \
            'Invalid arguments passed to constructor: %s' % \
            ', '.join(sorted(k for k in kwargs.keys() if '_' + k not in self.__slots__))
        from std_msgs.msg import Header
        self.header = kwargs.get('header', Header())
        self.v_in = kwargs.get('v_in', float())
        self.v_ignition = kwargs.get('v_ignition', float())
        self.v3_3 = kwargs.get('v3_3', float())
        self.v5_0 = kwargs.get('v5_0', float())
        self.v12_0 = kwargs.get('v12_0', float())
        self.temperature = kwargs.get('temperature', float())

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
        if self.v_in != other.v_in:
            return False
        if self.v_ignition != other.v_ignition:
            return False
        if self.v3_3 != other.v3_3:
            return False
        if self.v5_0 != other.v5_0:
            return False
        if self.v12_0 != other.v12_0:
            return False
        if self.temperature != other.temperature:
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
    def v_in(self):
        """Message field 'v_in'."""
        return self._v_in

    @v_in.setter
    def v_in(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'v_in' field must be of type 'float'"
        self._v_in = value

    @property
    def v_ignition(self):
        """Message field 'v_ignition'."""
        return self._v_ignition

    @v_ignition.setter
    def v_ignition(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'v_ignition' field must be of type 'float'"
        self._v_ignition = value

    @property
    def v3_3(self):
        """Message field 'v3_3'."""
        return self._v3_3

    @v3_3.setter
    def v3_3(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'v3_3' field must be of type 'float'"
        self._v3_3 = value

    @property
    def v5_0(self):
        """Message field 'v5_0'."""
        return self._v5_0

    @v5_0.setter
    def v5_0(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'v5_0' field must be of type 'float'"
        self._v5_0 = value

    @property
    def v12_0(self):
        """Message field 'v12_0'."""
        return self._v12_0

    @v12_0.setter
    def v12_0(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'v12_0' field must be of type 'float'"
        self._v12_0 = value

    @property
    def temperature(self):
        """Message field 'temperature'."""
        return self._temperature

    @temperature.setter
    def temperature(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'temperature' field must be of type 'float'"
        self._temperature = value
