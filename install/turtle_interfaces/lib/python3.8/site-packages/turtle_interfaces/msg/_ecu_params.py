# generated from rosidl_generator_py/resource/_idl.py.em
# with input from turtle_interfaces:msg/ECUParams.idl
# generated code does not contain a copyright notice


# Import statements for member types

import rosidl_parser.definition  # noqa: E402, I100


class Metaclass_ECUParams(type):
    """Metaclass of message 'ECUParams'."""

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
                'turtle_interfaces.msg.ECUParams')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__msg__ecu_params
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__msg__ecu_params
            cls._CONVERT_TO_PY = module.convert_to_py_msg__msg__ecu_params
            cls._TYPE_SUPPORT = module.type_support_msg__msg__ecu_params
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__msg__ecu_params

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


class ECUParams(metaclass=Metaclass_ECUParams):
    """Message class 'ECUParams'."""

    __slots__ = [
        '_header',
        '_inverter_rpm_percentage',
        '_inverter_i_rms_max',
        '_inverter_i_rms_max_brake',
        '_power_target_kw',
        '_servo_start_speed',
        '_regen_min_speed',
        '_ed_enable',
        '_tc_enable',
    ]

    _fields_and_field_types = {
        'header': 'std_msgs/Header',
        'inverter_rpm_percentage': 'float',
        'inverter_i_rms_max': 'float',
        'inverter_i_rms_max_brake': 'float',
        'power_target_kw': 'float',
        'servo_start_speed': 'float',
        'regen_min_speed': 'float',
        'ed_enable': 'boolean',
        'tc_enable': 'boolean',
    }

    SLOT_TYPES = (
        rosidl_parser.definition.NamespacedType(['std_msgs', 'msg'], 'Header'),  # noqa: E501
        rosidl_parser.definition.BasicType('float'),  # noqa: E501
        rosidl_parser.definition.BasicType('float'),  # noqa: E501
        rosidl_parser.definition.BasicType('float'),  # noqa: E501
        rosidl_parser.definition.BasicType('float'),  # noqa: E501
        rosidl_parser.definition.BasicType('float'),  # noqa: E501
        rosidl_parser.definition.BasicType('float'),  # noqa: E501
        rosidl_parser.definition.BasicType('boolean'),  # noqa: E501
        rosidl_parser.definition.BasicType('boolean'),  # noqa: E501
    )

    def __init__(self, **kwargs):
        assert all('_' + key in self.__slots__ for key in kwargs.keys()), \
            'Invalid arguments passed to constructor: %s' % \
            ', '.join(sorted(k for k in kwargs.keys() if '_' + k not in self.__slots__))
        from std_msgs.msg import Header
        self.header = kwargs.get('header', Header())
        self.inverter_rpm_percentage = kwargs.get('inverter_rpm_percentage', float())
        self.inverter_i_rms_max = kwargs.get('inverter_i_rms_max', float())
        self.inverter_i_rms_max_brake = kwargs.get('inverter_i_rms_max_brake', float())
        self.power_target_kw = kwargs.get('power_target_kw', float())
        self.servo_start_speed = kwargs.get('servo_start_speed', float())
        self.regen_min_speed = kwargs.get('regen_min_speed', float())
        self.ed_enable = kwargs.get('ed_enable', bool())
        self.tc_enable = kwargs.get('tc_enable', bool())

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
        if self.inverter_rpm_percentage != other.inverter_rpm_percentage:
            return False
        if self.inverter_i_rms_max != other.inverter_i_rms_max:
            return False
        if self.inverter_i_rms_max_brake != other.inverter_i_rms_max_brake:
            return False
        if self.power_target_kw != other.power_target_kw:
            return False
        if self.servo_start_speed != other.servo_start_speed:
            return False
        if self.regen_min_speed != other.regen_min_speed:
            return False
        if self.ed_enable != other.ed_enable:
            return False
        if self.tc_enable != other.tc_enable:
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
    def inverter_rpm_percentage(self):
        """Message field 'inverter_rpm_percentage'."""
        return self._inverter_rpm_percentage

    @inverter_rpm_percentage.setter
    def inverter_rpm_percentage(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'inverter_rpm_percentage' field must be of type 'float'"
        self._inverter_rpm_percentage = value

    @property
    def inverter_i_rms_max(self):
        """Message field 'inverter_i_rms_max'."""
        return self._inverter_i_rms_max

    @inverter_i_rms_max.setter
    def inverter_i_rms_max(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'inverter_i_rms_max' field must be of type 'float'"
        self._inverter_i_rms_max = value

    @property
    def inverter_i_rms_max_brake(self):
        """Message field 'inverter_i_rms_max_brake'."""
        return self._inverter_i_rms_max_brake

    @inverter_i_rms_max_brake.setter
    def inverter_i_rms_max_brake(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'inverter_i_rms_max_brake' field must be of type 'float'"
        self._inverter_i_rms_max_brake = value

    @property
    def power_target_kw(self):
        """Message field 'power_target_kw'."""
        return self._power_target_kw

    @power_target_kw.setter
    def power_target_kw(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'power_target_kw' field must be of type 'float'"
        self._power_target_kw = value

    @property
    def servo_start_speed(self):
        """Message field 'servo_start_speed'."""
        return self._servo_start_speed

    @servo_start_speed.setter
    def servo_start_speed(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'servo_start_speed' field must be of type 'float'"
        self._servo_start_speed = value

    @property
    def regen_min_speed(self):
        """Message field 'regen_min_speed'."""
        return self._regen_min_speed

    @regen_min_speed.setter
    def regen_min_speed(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'regen_min_speed' field must be of type 'float'"
        self._regen_min_speed = value

    @property
    def ed_enable(self):
        """Message field 'ed_enable'."""
        return self._ed_enable

    @ed_enable.setter
    def ed_enable(self, value):
        if __debug__:
            assert \
                isinstance(value, bool), \
                "The 'ed_enable' field must be of type 'bool'"
        self._ed_enable = value

    @property
    def tc_enable(self):
        """Message field 'tc_enable'."""
        return self._tc_enable

    @tc_enable.setter
    def tc_enable(self, value):
        if __debug__:
            assert \
                isinstance(value, bool), \
                "The 'tc_enable' field must be of type 'bool'"
        self._tc_enable = value
