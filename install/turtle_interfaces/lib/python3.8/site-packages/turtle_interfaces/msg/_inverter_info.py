# generated from rosidl_generator_py/resource/_idl.py.em
# with input from turtle_interfaces:msg/InverterInfo.idl
# generated code does not contain a copyright notice


# Import statements for member types

import rosidl_parser.definition  # noqa: E402, I100


class Metaclass_InverterInfo(type):
    """Metaclass of message 'InverterInfo'."""

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
                'turtle_interfaces.msg.InverterInfo')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__msg__inverter_info
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__msg__inverter_info
            cls._CONVERT_TO_PY = module.convert_to_py_msg__msg__inverter_info
            cls._TYPE_SUPPORT = module.type_support_msg__msg__inverter_info
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__msg__inverter_info

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


class InverterInfo(metaclass=Metaclass_InverterInfo):
    """Message class 'InverterInfo'."""

    __slots__ = [
        '_header',
        '_igbts_temp',
        '_irms_max',
        '_i_lim_in_use',
        '_motor_temp',
        '_irms',
        '_max_rpm',
    ]

    _fields_and_field_types = {
        'header': 'std_msgs/Header',
        'igbts_temp': 'float',
        'irms_max': 'float',
        'i_lim_in_use': 'float',
        'motor_temp': 'float',
        'irms': 'float',
        'max_rpm': 'float',
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
        self.igbts_temp = kwargs.get('igbts_temp', float())
        self.irms_max = kwargs.get('irms_max', float())
        self.i_lim_in_use = kwargs.get('i_lim_in_use', float())
        self.motor_temp = kwargs.get('motor_temp', float())
        self.irms = kwargs.get('irms', float())
        self.max_rpm = kwargs.get('max_rpm', float())

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
        if self.igbts_temp != other.igbts_temp:
            return False
        if self.irms_max != other.irms_max:
            return False
        if self.i_lim_in_use != other.i_lim_in_use:
            return False
        if self.motor_temp != other.motor_temp:
            return False
        if self.irms != other.irms:
            return False
        if self.max_rpm != other.max_rpm:
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
    def igbts_temp(self):
        """Message field 'igbts_temp'."""
        return self._igbts_temp

    @igbts_temp.setter
    def igbts_temp(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'igbts_temp' field must be of type 'float'"
        self._igbts_temp = value

    @property
    def irms_max(self):
        """Message field 'irms_max'."""
        return self._irms_max

    @irms_max.setter
    def irms_max(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'irms_max' field must be of type 'float'"
        self._irms_max = value

    @property
    def i_lim_in_use(self):
        """Message field 'i_lim_in_use'."""
        return self._i_lim_in_use

    @i_lim_in_use.setter
    def i_lim_in_use(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'i_lim_in_use' field must be of type 'float'"
        self._i_lim_in_use = value

    @property
    def motor_temp(self):
        """Message field 'motor_temp'."""
        return self._motor_temp

    @motor_temp.setter
    def motor_temp(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'motor_temp' field must be of type 'float'"
        self._motor_temp = value

    @property
    def irms(self):
        """Message field 'irms'."""
        return self._irms

    @irms.setter
    def irms(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'irms' field must be of type 'float'"
        self._irms = value

    @property
    def max_rpm(self):
        """Message field 'max_rpm'."""
        return self._max_rpm

    @max_rpm.setter
    def max_rpm(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'max_rpm' field must be of type 'float'"
        self._max_rpm = value
