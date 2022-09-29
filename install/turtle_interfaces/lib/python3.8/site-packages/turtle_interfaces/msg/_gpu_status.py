# generated from rosidl_generator_py/resource/_idl.py.em
# with input from turtle_interfaces:msg/GpuStatus.idl
# generated code does not contain a copyright notice


# Import statements for member types

import rosidl_parser.definition  # noqa: E402, I100


class Metaclass_GpuStatus(type):
    """Metaclass of message 'GpuStatus'."""

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
                'turtle_interfaces.msg.GpuStatus')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__msg__gpu_status
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__msg__gpu_status
            cls._CONVERT_TO_PY = module.convert_to_py_msg__msg__gpu_status
            cls._TYPE_SUPPORT = module.type_support_msg__msg__gpu_status
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__msg__gpu_status

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


class GpuStatus(metaclass=Metaclass_GpuStatus):
    """Message class 'GpuStatus'."""

    __slots__ = [
        '_header',
        '_gpu_status',
        '_cu_device',
        '_free_memory',
        '_used_memory',
        '_total_memory',
        '_temp_c',
        '_speed_fan',
        '_power_usage',
    ]

    _fields_and_field_types = {
        'header': 'std_msgs/Header',
        'gpu_status': 'boolean',
        'cu_device': 'int16',
        'free_memory': 'float',
        'used_memory': 'float',
        'total_memory': 'float',
        'temp_c': 'float',
        'speed_fan': 'float',
        'power_usage': 'float',
    }

    SLOT_TYPES = (
        rosidl_parser.definition.NamespacedType(['std_msgs', 'msg'], 'Header'),  # noqa: E501
        rosidl_parser.definition.BasicType('boolean'),  # noqa: E501
        rosidl_parser.definition.BasicType('int16'),  # noqa: E501
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
        self.gpu_status = kwargs.get('gpu_status', bool())
        self.cu_device = kwargs.get('cu_device', int())
        self.free_memory = kwargs.get('free_memory', float())
        self.used_memory = kwargs.get('used_memory', float())
        self.total_memory = kwargs.get('total_memory', float())
        self.temp_c = kwargs.get('temp_c', float())
        self.speed_fan = kwargs.get('speed_fan', float())
        self.power_usage = kwargs.get('power_usage', float())

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
        if self.gpu_status != other.gpu_status:
            return False
        if self.cu_device != other.cu_device:
            return False
        if self.free_memory != other.free_memory:
            return False
        if self.used_memory != other.used_memory:
            return False
        if self.total_memory != other.total_memory:
            return False
        if self.temp_c != other.temp_c:
            return False
        if self.speed_fan != other.speed_fan:
            return False
        if self.power_usage != other.power_usage:
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
    def gpu_status(self):
        """Message field 'gpu_status'."""
        return self._gpu_status

    @gpu_status.setter
    def gpu_status(self, value):
        if __debug__:
            assert \
                isinstance(value, bool), \
                "The 'gpu_status' field must be of type 'bool'"
        self._gpu_status = value

    @property
    def cu_device(self):
        """Message field 'cu_device'."""
        return self._cu_device

    @cu_device.setter
    def cu_device(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'cu_device' field must be of type 'int'"
            assert value >= -32768 and value < 32768, \
                "The 'cu_device' field must be an integer in [-32768, 32767]"
        self._cu_device = value

    @property
    def free_memory(self):
        """Message field 'free_memory'."""
        return self._free_memory

    @free_memory.setter
    def free_memory(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'free_memory' field must be of type 'float'"
        self._free_memory = value

    @property
    def used_memory(self):
        """Message field 'used_memory'."""
        return self._used_memory

    @used_memory.setter
    def used_memory(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'used_memory' field must be of type 'float'"
        self._used_memory = value

    @property
    def total_memory(self):
        """Message field 'total_memory'."""
        return self._total_memory

    @total_memory.setter
    def total_memory(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'total_memory' field must be of type 'float'"
        self._total_memory = value

    @property
    def temp_c(self):
        """Message field 'temp_c'."""
        return self._temp_c

    @temp_c.setter
    def temp_c(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'temp_c' field must be of type 'float'"
        self._temp_c = value

    @property
    def speed_fan(self):
        """Message field 'speed_fan'."""
        return self._speed_fan

    @speed_fan.setter
    def speed_fan(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'speed_fan' field must be of type 'float'"
        self._speed_fan = value

    @property
    def power_usage(self):
        """Message field 'power_usage'."""
        return self._power_usage

    @power_usage.setter
    def power_usage(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'power_usage' field must be of type 'float'"
        self._power_usage = value
