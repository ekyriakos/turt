# generated from rosidl_generator_py/resource/_idl.py.em
# with input from turtle_interfaces:msg/ECUControlSystems.idl
# generated code does not contain a copyright notice


# Import statements for member types

import rosidl_parser.definition  # noqa: E402, I100


class Metaclass_ECUControlSystems(type):
    """Metaclass of message 'ECUControlSystems'."""

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
                'turtle_interfaces.msg.ECUControlSystems')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__msg__ecu_control_systems
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__msg__ecu_control_systems
            cls._CONVERT_TO_PY = module.convert_to_py_msg__msg__ecu_control_systems
            cls._TYPE_SUPPORT = module.type_support_msg__msg__ecu_control_systems
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__msg__ecu_control_systems

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


class ECUControlSystems(metaclass=Metaclass_ECUControlSystems):
    """Message class 'ECUControlSystems'."""

    __slots__ = [
        '_header',
        '_ed_active',
        '_tc_active',
        '_pl_active',
        '_regen_active',
    ]

    _fields_and_field_types = {
        'header': 'std_msgs/Header',
        'ed_active': 'boolean',
        'tc_active': 'boolean',
        'pl_active': 'boolean',
        'regen_active': 'boolean',
    }

    SLOT_TYPES = (
        rosidl_parser.definition.NamespacedType(['std_msgs', 'msg'], 'Header'),  # noqa: E501
        rosidl_parser.definition.BasicType('boolean'),  # noqa: E501
        rosidl_parser.definition.BasicType('boolean'),  # noqa: E501
        rosidl_parser.definition.BasicType('boolean'),  # noqa: E501
        rosidl_parser.definition.BasicType('boolean'),  # noqa: E501
    )

    def __init__(self, **kwargs):
        assert all('_' + key in self.__slots__ for key in kwargs.keys()), \
            'Invalid arguments passed to constructor: %s' % \
            ', '.join(sorted(k for k in kwargs.keys() if '_' + k not in self.__slots__))
        from std_msgs.msg import Header
        self.header = kwargs.get('header', Header())
        self.ed_active = kwargs.get('ed_active', bool())
        self.tc_active = kwargs.get('tc_active', bool())
        self.pl_active = kwargs.get('pl_active', bool())
        self.regen_active = kwargs.get('regen_active', bool())

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
        if self.ed_active != other.ed_active:
            return False
        if self.tc_active != other.tc_active:
            return False
        if self.pl_active != other.pl_active:
            return False
        if self.regen_active != other.regen_active:
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
    def ed_active(self):
        """Message field 'ed_active'."""
        return self._ed_active

    @ed_active.setter
    def ed_active(self, value):
        if __debug__:
            assert \
                isinstance(value, bool), \
                "The 'ed_active' field must be of type 'bool'"
        self._ed_active = value

    @property
    def tc_active(self):
        """Message field 'tc_active'."""
        return self._tc_active

    @tc_active.setter
    def tc_active(self, value):
        if __debug__:
            assert \
                isinstance(value, bool), \
                "The 'tc_active' field must be of type 'bool'"
        self._tc_active = value

    @property
    def pl_active(self):
        """Message field 'pl_active'."""
        return self._pl_active

    @pl_active.setter
    def pl_active(self, value):
        if __debug__:
            assert \
                isinstance(value, bool), \
                "The 'pl_active' field must be of type 'bool'"
        self._pl_active = value

    @property
    def regen_active(self):
        """Message field 'regen_active'."""
        return self._regen_active

    @regen_active.setter
    def regen_active(self, value):
        if __debug__:
            assert \
                isinstance(value, bool), \
                "The 'regen_active' field must be of type 'bool'"
        self._regen_active = value
