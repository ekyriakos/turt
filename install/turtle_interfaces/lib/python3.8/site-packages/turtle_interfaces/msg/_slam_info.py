# generated from rosidl_generator_py/resource/_idl.py.em
# with input from turtle_interfaces:msg/SlamInfo.idl
# generated code does not contain a copyright notice


# Import statements for member types

import rosidl_parser.definition  # noqa: E402, I100


class Metaclass_SlamInfo(type):
    """Metaclass of message 'SlamInfo'."""

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
                'turtle_interfaces.msg.SlamInfo')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__msg__slam_info
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__msg__slam_info
            cls._CONVERT_TO_PY = module.convert_to_py_msg__msg__slam_info
            cls._TYPE_SUPPORT = module.type_support_msg__msg__slam_info
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__msg__slam_info

            from std_msgs.msg import Header
            if Header.__class__._TYPE_SUPPORT is None:
                Header.__class__.__import_type_support__()

            from turtle_interfaces.msg import SlamStatistics
            if SlamStatistics.__class__._TYPE_SUPPORT is None:
                SlamStatistics.__class__.__import_type_support__()

    @classmethod
    def __prepare__(cls, name, bases, **kwargs):
        # list constant names here so that they appear in the help text of
        # the message class under "Data and other attributes defined here:"
        # as well as populate each message instance
        return {
        }


class SlamInfo(metaclass=Metaclass_SlamInfo):
    """Message class 'SlamInfo'."""

    __slots__ = [
        '_header',
        '_slam_statistics',
        '_localization_mode',
        '_sensor_cone_count',
        '_total_cone_count',
    ]

    _fields_and_field_types = {
        'header': 'std_msgs/Header',
        'slam_statistics': 'turtle_interfaces/SlamStatistics',
        'localization_mode': 'boolean',
        'sensor_cone_count': 'uint32',
        'total_cone_count': 'uint32',
    }

    SLOT_TYPES = (
        rosidl_parser.definition.NamespacedType(['std_msgs', 'msg'], 'Header'),  # noqa: E501
        rosidl_parser.definition.NamespacedType(['turtle_interfaces', 'msg'], 'SlamStatistics'),  # noqa: E501
        rosidl_parser.definition.BasicType('boolean'),  # noqa: E501
        rosidl_parser.definition.BasicType('uint32'),  # noqa: E501
        rosidl_parser.definition.BasicType('uint32'),  # noqa: E501
    )

    def __init__(self, **kwargs):
        assert all('_' + key in self.__slots__ for key in kwargs.keys()), \
            'Invalid arguments passed to constructor: %s' % \
            ', '.join(sorted(k for k in kwargs.keys() if '_' + k not in self.__slots__))
        from std_msgs.msg import Header
        self.header = kwargs.get('header', Header())
        from turtle_interfaces.msg import SlamStatistics
        self.slam_statistics = kwargs.get('slam_statistics', SlamStatistics())
        self.localization_mode = kwargs.get('localization_mode', bool())
        self.sensor_cone_count = kwargs.get('sensor_cone_count', int())
        self.total_cone_count = kwargs.get('total_cone_count', int())

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
        if self.slam_statistics != other.slam_statistics:
            return False
        if self.localization_mode != other.localization_mode:
            return False
        if self.sensor_cone_count != other.sensor_cone_count:
            return False
        if self.total_cone_count != other.total_cone_count:
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
    def slam_statistics(self):
        """Message field 'slam_statistics'."""
        return self._slam_statistics

    @slam_statistics.setter
    def slam_statistics(self, value):
        if __debug__:
            from turtle_interfaces.msg import SlamStatistics
            assert \
                isinstance(value, SlamStatistics), \
                "The 'slam_statistics' field must be a sub message of type 'SlamStatistics'"
        self._slam_statistics = value

    @property
    def localization_mode(self):
        """Message field 'localization_mode'."""
        return self._localization_mode

    @localization_mode.setter
    def localization_mode(self, value):
        if __debug__:
            assert \
                isinstance(value, bool), \
                "The 'localization_mode' field must be of type 'bool'"
        self._localization_mode = value

    @property
    def sensor_cone_count(self):
        """Message field 'sensor_cone_count'."""
        return self._sensor_cone_count

    @sensor_cone_count.setter
    def sensor_cone_count(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'sensor_cone_count' field must be of type 'int'"
            assert value >= 0 and value < 4294967296, \
                "The 'sensor_cone_count' field must be an unsigned integer in [0, 4294967295]"
        self._sensor_cone_count = value

    @property
    def total_cone_count(self):
        """Message field 'total_cone_count'."""
        return self._total_cone_count

    @total_cone_count.setter
    def total_cone_count(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'total_cone_count' field must be of type 'int'"
            assert value >= 0 and value < 4294967296, \
                "The 'total_cone_count' field must be an unsigned integer in [0, 4294967295]"
        self._total_cone_count = value
