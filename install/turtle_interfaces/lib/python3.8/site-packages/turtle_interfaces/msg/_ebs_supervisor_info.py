# generated from rosidl_generator_py/resource/_idl.py.em
# with input from turtle_interfaces:msg/EbsSupervisorInfo.idl
# generated code does not contain a copyright notice


# Import statements for member types

import rosidl_parser.definition  # noqa: E402, I100


class Metaclass_EbsSupervisorInfo(type):
    """Metaclass of message 'EbsSupervisorInfo'."""

    _CREATE_ROS_MESSAGE = None
    _CONVERT_FROM_PY = None
    _CONVERT_TO_PY = None
    _DESTROY_ROS_MESSAGE = None
    _TYPE_SUPPORT = None

    __constants = {
        'EBS_UNAVAILABLE': 1,
        'EBS_ARMED': 2,
        'EBS_ACTIVATED': 3,
        'SERVICE_BRAKE_DISENGAGED': 1,
        'SERVICE_BRAKE_ENGAGED': 2,
        'SERVICE_BRAKE_AVAILABLE': 3,
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
                'turtle_interfaces.msg.EbsSupervisorInfo')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__msg__ebs_supervisor_info
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__msg__ebs_supervisor_info
            cls._CONVERT_TO_PY = module.convert_to_py_msg__msg__ebs_supervisor_info
            cls._TYPE_SUPPORT = module.type_support_msg__msg__ebs_supervisor_info
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__msg__ebs_supervisor_info

            from std_msgs.msg import Header
            if Header.__class__._TYPE_SUPPORT is None:
                Header.__class__.__import_type_support__()

    @classmethod
    def __prepare__(cls, name, bases, **kwargs):
        # list constant names here so that they appear in the help text of
        # the message class under "Data and other attributes defined here:"
        # as well as populate each message instance
        return {
            'EBS_UNAVAILABLE': cls.__constants['EBS_UNAVAILABLE'],
            'EBS_ARMED': cls.__constants['EBS_ARMED'],
            'EBS_ACTIVATED': cls.__constants['EBS_ACTIVATED'],
            'SERVICE_BRAKE_DISENGAGED': cls.__constants['SERVICE_BRAKE_DISENGAGED'],
            'SERVICE_BRAKE_ENGAGED': cls.__constants['SERVICE_BRAKE_ENGAGED'],
            'SERVICE_BRAKE_AVAILABLE': cls.__constants['SERVICE_BRAKE_AVAILABLE'],
        }

    @property
    def EBS_UNAVAILABLE(self):
        """Message constant 'EBS_UNAVAILABLE'."""
        return Metaclass_EbsSupervisorInfo.__constants['EBS_UNAVAILABLE']

    @property
    def EBS_ARMED(self):
        """Message constant 'EBS_ARMED'."""
        return Metaclass_EbsSupervisorInfo.__constants['EBS_ARMED']

    @property
    def EBS_ACTIVATED(self):
        """Message constant 'EBS_ACTIVATED'."""
        return Metaclass_EbsSupervisorInfo.__constants['EBS_ACTIVATED']

    @property
    def SERVICE_BRAKE_DISENGAGED(self):
        """Message constant 'SERVICE_BRAKE_DISENGAGED'."""
        return Metaclass_EbsSupervisorInfo.__constants['SERVICE_BRAKE_DISENGAGED']

    @property
    def SERVICE_BRAKE_ENGAGED(self):
        """Message constant 'SERVICE_BRAKE_ENGAGED'."""
        return Metaclass_EbsSupervisorInfo.__constants['SERVICE_BRAKE_ENGAGED']

    @property
    def SERVICE_BRAKE_AVAILABLE(self):
        """Message constant 'SERVICE_BRAKE_AVAILABLE'."""
        return Metaclass_EbsSupervisorInfo.__constants['SERVICE_BRAKE_AVAILABLE']


class EbsSupervisorInfo(metaclass=Metaclass_EbsSupervisorInfo):
    """
    Message class 'EbsSupervisorInfo'.

    Constants:
      EBS_UNAVAILABLE
      EBS_ARMED
      EBS_ACTIVATED
      SERVICE_BRAKE_DISENGAGED
      SERVICE_BRAKE_ENGAGED
      SERVICE_BRAKE_AVAILABLE
    """

    __slots__ = [
        '_header',
        '_asmsstate',
        '_tsmsout',
        '_ebsstatus',
        '_ebsled',
        '_servicebrakestatus',
        '_initialchecked',
        '_initialcheckstage',
        '_monitortankpressure',
        '_monitorbrakepressure',
        '_monitorservocheck',
        '_monitorapu',
    ]

    _fields_and_field_types = {
        'header': 'std_msgs/Header',
        'asmsstate': 'boolean',
        'tsmsout': 'boolean',
        'ebsstatus': 'uint8',
        'ebsled': 'boolean',
        'servicebrakestatus': 'uint8',
        'initialchecked': 'boolean',
        'initialcheckstage': 'int8',
        'monitortankpressure': 'boolean',
        'monitorbrakepressure': 'boolean',
        'monitorservocheck': 'boolean',
        'monitorapu': 'boolean',
    }

    SLOT_TYPES = (
        rosidl_parser.definition.NamespacedType(['std_msgs', 'msg'], 'Header'),  # noqa: E501
        rosidl_parser.definition.BasicType('boolean'),  # noqa: E501
        rosidl_parser.definition.BasicType('boolean'),  # noqa: E501
        rosidl_parser.definition.BasicType('uint8'),  # noqa: E501
        rosidl_parser.definition.BasicType('boolean'),  # noqa: E501
        rosidl_parser.definition.BasicType('uint8'),  # noqa: E501
        rosidl_parser.definition.BasicType('boolean'),  # noqa: E501
        rosidl_parser.definition.BasicType('int8'),  # noqa: E501
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
        self.asmsstate = kwargs.get('asmsstate', bool())
        self.tsmsout = kwargs.get('tsmsout', bool())
        self.ebsstatus = kwargs.get('ebsstatus', int())
        self.ebsled = kwargs.get('ebsled', bool())
        self.servicebrakestatus = kwargs.get('servicebrakestatus', int())
        self.initialchecked = kwargs.get('initialchecked', bool())
        self.initialcheckstage = kwargs.get('initialcheckstage', int())
        self.monitortankpressure = kwargs.get('monitortankpressure', bool())
        self.monitorbrakepressure = kwargs.get('monitorbrakepressure', bool())
        self.monitorservocheck = kwargs.get('monitorservocheck', bool())
        self.monitorapu = kwargs.get('monitorapu', bool())

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
        if self.asmsstate != other.asmsstate:
            return False
        if self.tsmsout != other.tsmsout:
            return False
        if self.ebsstatus != other.ebsstatus:
            return False
        if self.ebsled != other.ebsled:
            return False
        if self.servicebrakestatus != other.servicebrakestatus:
            return False
        if self.initialchecked != other.initialchecked:
            return False
        if self.initialcheckstage != other.initialcheckstage:
            return False
        if self.monitortankpressure != other.monitortankpressure:
            return False
        if self.monitorbrakepressure != other.monitorbrakepressure:
            return False
        if self.monitorservocheck != other.monitorservocheck:
            return False
        if self.monitorapu != other.monitorapu:
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
    def asmsstate(self):
        """Message field 'asmsstate'."""
        return self._asmsstate

    @asmsstate.setter
    def asmsstate(self, value):
        if __debug__:
            assert \
                isinstance(value, bool), \
                "The 'asmsstate' field must be of type 'bool'"
        self._asmsstate = value

    @property
    def tsmsout(self):
        """Message field 'tsmsout'."""
        return self._tsmsout

    @tsmsout.setter
    def tsmsout(self, value):
        if __debug__:
            assert \
                isinstance(value, bool), \
                "The 'tsmsout' field must be of type 'bool'"
        self._tsmsout = value

    @property
    def ebsstatus(self):
        """Message field 'ebsstatus'."""
        return self._ebsstatus

    @ebsstatus.setter
    def ebsstatus(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'ebsstatus' field must be of type 'int'"
            assert value >= 0 and value < 256, \
                "The 'ebsstatus' field must be an unsigned integer in [0, 255]"
        self._ebsstatus = value

    @property
    def ebsled(self):
        """Message field 'ebsled'."""
        return self._ebsled

    @ebsled.setter
    def ebsled(self, value):
        if __debug__:
            assert \
                isinstance(value, bool), \
                "The 'ebsled' field must be of type 'bool'"
        self._ebsled = value

    @property
    def servicebrakestatus(self):
        """Message field 'servicebrakestatus'."""
        return self._servicebrakestatus

    @servicebrakestatus.setter
    def servicebrakestatus(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'servicebrakestatus' field must be of type 'int'"
            assert value >= 0 and value < 256, \
                "The 'servicebrakestatus' field must be an unsigned integer in [0, 255]"
        self._servicebrakestatus = value

    @property
    def initialchecked(self):
        """Message field 'initialchecked'."""
        return self._initialchecked

    @initialchecked.setter
    def initialchecked(self, value):
        if __debug__:
            assert \
                isinstance(value, bool), \
                "The 'initialchecked' field must be of type 'bool'"
        self._initialchecked = value

    @property
    def initialcheckstage(self):
        """Message field 'initialcheckstage'."""
        return self._initialcheckstage

    @initialcheckstage.setter
    def initialcheckstage(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'initialcheckstage' field must be of type 'int'"
            assert value >= -128 and value < 128, \
                "The 'initialcheckstage' field must be an integer in [-128, 127]"
        self._initialcheckstage = value

    @property
    def monitortankpressure(self):
        """Message field 'monitortankpressure'."""
        return self._monitortankpressure

    @monitortankpressure.setter
    def monitortankpressure(self, value):
        if __debug__:
            assert \
                isinstance(value, bool), \
                "The 'monitortankpressure' field must be of type 'bool'"
        self._monitortankpressure = value

    @property
    def monitorbrakepressure(self):
        """Message field 'monitorbrakepressure'."""
        return self._monitorbrakepressure

    @monitorbrakepressure.setter
    def monitorbrakepressure(self, value):
        if __debug__:
            assert \
                isinstance(value, bool), \
                "The 'monitorbrakepressure' field must be of type 'bool'"
        self._monitorbrakepressure = value

    @property
    def monitorservocheck(self):
        """Message field 'monitorservocheck'."""
        return self._monitorservocheck

    @monitorservocheck.setter
    def monitorservocheck(self, value):
        if __debug__:
            assert \
                isinstance(value, bool), \
                "The 'monitorservocheck' field must be of type 'bool'"
        self._monitorservocheck = value

    @property
    def monitorapu(self):
        """Message field 'monitorapu'."""
        return self._monitorapu

    @monitorapu.setter
    def monitorapu(self, value):
        if __debug__:
            assert \
                isinstance(value, bool), \
                "The 'monitorapu' field must be of type 'bool'"
        self._monitorapu = value
