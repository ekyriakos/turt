# generated from rosidl_generator_py/resource/_idl.py.em
# with input from turtle_interfaces:msg/CpuStatus.idl
# generated code does not contain a copyright notice


# Import statements for member types

# Member 'core_usage_percents'
# Member 'node_cpu_usage_percents'
# Member 'core_temperatures'
import array  # noqa: E402, I100

import rosidl_parser.definition  # noqa: E402, I100


class Metaclass_CpuStatus(type):
    """Metaclass of message 'CpuStatus'."""

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
                'turtle_interfaces.msg.CpuStatus')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__msg__cpu_status
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__msg__cpu_status
            cls._CONVERT_TO_PY = module.convert_to_py_msg__msg__cpu_status
            cls._TYPE_SUPPORT = module.type_support_msg__msg__cpu_status
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__msg__cpu_status

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


class CpuStatus(metaclass=Metaclass_CpuStatus):
    """Message class 'CpuStatus'."""

    __slots__ = [
        '_header',
        '_cpu_usage_percent',
        '_number_of_cores',
        '_core_usage_percents',
        '_number_of_ros_nodes',
        '_node_cpu_usage_percents',
        '_node_cpu_usage_names',
        '_number_of_temperatures',
        '_core_temperatures',
        '_core_temperature_names',
    ]

    _fields_and_field_types = {
        'header': 'std_msgs/Header',
        'cpu_usage_percent': 'float',
        'number_of_cores': 'uint16',
        'core_usage_percents': 'sequence<float>',
        'number_of_ros_nodes': 'uint32',
        'node_cpu_usage_percents': 'sequence<float>',
        'node_cpu_usage_names': 'sequence<string>',
        'number_of_temperatures': 'uint16',
        'core_temperatures': 'sequence<float>',
        'core_temperature_names': 'sequence<string>',
    }

    SLOT_TYPES = (
        rosidl_parser.definition.NamespacedType(['std_msgs', 'msg'], 'Header'),  # noqa: E501
        rosidl_parser.definition.BasicType('float'),  # noqa: E501
        rosidl_parser.definition.BasicType('uint16'),  # noqa: E501
        rosidl_parser.definition.UnboundedSequence(rosidl_parser.definition.BasicType('float')),  # noqa: E501
        rosidl_parser.definition.BasicType('uint32'),  # noqa: E501
        rosidl_parser.definition.UnboundedSequence(rosidl_parser.definition.BasicType('float')),  # noqa: E501
        rosidl_parser.definition.UnboundedSequence(rosidl_parser.definition.UnboundedString()),  # noqa: E501
        rosidl_parser.definition.BasicType('uint16'),  # noqa: E501
        rosidl_parser.definition.UnboundedSequence(rosidl_parser.definition.BasicType('float')),  # noqa: E501
        rosidl_parser.definition.UnboundedSequence(rosidl_parser.definition.UnboundedString()),  # noqa: E501
    )

    def __init__(self, **kwargs):
        assert all('_' + key in self.__slots__ for key in kwargs.keys()), \
            'Invalid arguments passed to constructor: %s' % \
            ', '.join(sorted(k for k in kwargs.keys() if '_' + k not in self.__slots__))
        from std_msgs.msg import Header
        self.header = kwargs.get('header', Header())
        self.cpu_usage_percent = kwargs.get('cpu_usage_percent', float())
        self.number_of_cores = kwargs.get('number_of_cores', int())
        self.core_usage_percents = array.array('f', kwargs.get('core_usage_percents', []))
        self.number_of_ros_nodes = kwargs.get('number_of_ros_nodes', int())
        self.node_cpu_usage_percents = array.array('f', kwargs.get('node_cpu_usage_percents', []))
        self.node_cpu_usage_names = kwargs.get('node_cpu_usage_names', [])
        self.number_of_temperatures = kwargs.get('number_of_temperatures', int())
        self.core_temperatures = array.array('f', kwargs.get('core_temperatures', []))
        self.core_temperature_names = kwargs.get('core_temperature_names', [])

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
        if self.cpu_usage_percent != other.cpu_usage_percent:
            return False
        if self.number_of_cores != other.number_of_cores:
            return False
        if self.core_usage_percents != other.core_usage_percents:
            return False
        if self.number_of_ros_nodes != other.number_of_ros_nodes:
            return False
        if self.node_cpu_usage_percents != other.node_cpu_usage_percents:
            return False
        if self.node_cpu_usage_names != other.node_cpu_usage_names:
            return False
        if self.number_of_temperatures != other.number_of_temperatures:
            return False
        if self.core_temperatures != other.core_temperatures:
            return False
        if self.core_temperature_names != other.core_temperature_names:
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
    def cpu_usage_percent(self):
        """Message field 'cpu_usage_percent'."""
        return self._cpu_usage_percent

    @cpu_usage_percent.setter
    def cpu_usage_percent(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'cpu_usage_percent' field must be of type 'float'"
        self._cpu_usage_percent = value

    @property
    def number_of_cores(self):
        """Message field 'number_of_cores'."""
        return self._number_of_cores

    @number_of_cores.setter
    def number_of_cores(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'number_of_cores' field must be of type 'int'"
            assert value >= 0 and value < 65536, \
                "The 'number_of_cores' field must be an unsigned integer in [0, 65535]"
        self._number_of_cores = value

    @property
    def core_usage_percents(self):
        """Message field 'core_usage_percents'."""
        return self._core_usage_percents

    @core_usage_percents.setter
    def core_usage_percents(self, value):
        if isinstance(value, array.array):
            assert value.typecode == 'f', \
                "The 'core_usage_percents' array.array() must have the type code of 'f'"
            self._core_usage_percents = value
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
                "The 'core_usage_percents' field must be a set or sequence and each value of type 'float'"
        self._core_usage_percents = array.array('f', value)

    @property
    def number_of_ros_nodes(self):
        """Message field 'number_of_ros_nodes'."""
        return self._number_of_ros_nodes

    @number_of_ros_nodes.setter
    def number_of_ros_nodes(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'number_of_ros_nodes' field must be of type 'int'"
            assert value >= 0 and value < 4294967296, \
                "The 'number_of_ros_nodes' field must be an unsigned integer in [0, 4294967295]"
        self._number_of_ros_nodes = value

    @property
    def node_cpu_usage_percents(self):
        """Message field 'node_cpu_usage_percents'."""
        return self._node_cpu_usage_percents

    @node_cpu_usage_percents.setter
    def node_cpu_usage_percents(self, value):
        if isinstance(value, array.array):
            assert value.typecode == 'f', \
                "The 'node_cpu_usage_percents' array.array() must have the type code of 'f'"
            self._node_cpu_usage_percents = value
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
                "The 'node_cpu_usage_percents' field must be a set or sequence and each value of type 'float'"
        self._node_cpu_usage_percents = array.array('f', value)

    @property
    def node_cpu_usage_names(self):
        """Message field 'node_cpu_usage_names'."""
        return self._node_cpu_usage_names

    @node_cpu_usage_names.setter
    def node_cpu_usage_names(self, value):
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
                 all(isinstance(v, str) for v in value) and
                 True), \
                "The 'node_cpu_usage_names' field must be a set or sequence and each value of type 'str'"
        self._node_cpu_usage_names = value

    @property
    def number_of_temperatures(self):
        """Message field 'number_of_temperatures'."""
        return self._number_of_temperatures

    @number_of_temperatures.setter
    def number_of_temperatures(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'number_of_temperatures' field must be of type 'int'"
            assert value >= 0 and value < 65536, \
                "The 'number_of_temperatures' field must be an unsigned integer in [0, 65535]"
        self._number_of_temperatures = value

    @property
    def core_temperatures(self):
        """Message field 'core_temperatures'."""
        return self._core_temperatures

    @core_temperatures.setter
    def core_temperatures(self, value):
        if isinstance(value, array.array):
            assert value.typecode == 'f', \
                "The 'core_temperatures' array.array() must have the type code of 'f'"
            self._core_temperatures = value
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
                "The 'core_temperatures' field must be a set or sequence and each value of type 'float'"
        self._core_temperatures = array.array('f', value)

    @property
    def core_temperature_names(self):
        """Message field 'core_temperature_names'."""
        return self._core_temperature_names

    @core_temperature_names.setter
    def core_temperature_names(self, value):
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
                 all(isinstance(v, str) for v in value) and
                 True), \
                "The 'core_temperature_names' field must be a set or sequence and each value of type 'str'"
        self._core_temperature_names = value
