# generated from rosidl_generator_py/resource/_idl.py.em
# with input from turtle_interfaces:msg/CanStatus.idl
# generated code does not contain a copyright notice


# Import statements for member types

import rosidl_parser.definition  # noqa: E402, I100


class Metaclass_CanStatus(type):
    """Metaclass of message 'CanStatus'."""

    _CREATE_ROS_MESSAGE = None
    _CONVERT_FROM_PY = None
    _CONVERT_TO_PY = None
    _DESTROY_ROS_MESSAGE = None
    _TYPE_SUPPORT = None

    __constants = {
        'DASH_APPS_TIMEOUT': 1,
        'DASH_BRAKE_TIMEOUT': 2,
        'DASH_BUTTONS_TIMEOUT': 4,
        'DASH_FRONT_HALL_TIMEOUT': 8,
        'AUX_PUMPS_FANS_TIMEOUT': 16,
        'DASH_BOOLS_TIMEOUT': 32,
        'EBS_TANK_PRESSURE_TIMEOUT': 64,
        'AMI_SELECTED_MISSION_TIMEOUT': 128,
        'SWA_STATUS_TIMEOUT': 256,
        'EBS_SUPERVISOR_TIMEOUT': 512,
        'EBS_SERVICE_BRAKE_TIMEOUT': 1024,
        'INVERTER_ADU_TIMEOUT': 2048,
        'ECU_PARAMS_ACTUAL_TIMEOUT': 4096,
        'COOLING_INFO_TIMEOUT': 8192,
        'ISABELLEN_TIMEOUT': 16384,
        'ECU_CONTROL_SYSTEMS_TIMEOUT': 32768,
        'ECU_ISABELLEN_TIMEOUT': 65536,
        'INV_LEFT_INFO_TIMEOUT': 131072,
        'INV_RIGHT_INFO_TIMEOUT': 262144,
        'CAN_STATE_ERROR_ACTIVE': 0,
        'CAN_STATE_ERROR_WARNING': 1,
        'CAN_STATE_ERROR_PASSIVE': 2,
        'CAN_STATE_BUS_OFF': 3,
        'CAN_STATE_STOPPED': 4,
        'CAN_STATE_SLEEPING': 5,
        'CAN_STATE_MAX': 6,
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
                'turtle_interfaces.msg.CanStatus')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__msg__can_status
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__msg__can_status
            cls._CONVERT_TO_PY = module.convert_to_py_msg__msg__can_status
            cls._TYPE_SUPPORT = module.type_support_msg__msg__can_status
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__msg__can_status

            from std_msgs.msg import Header
            if Header.__class__._TYPE_SUPPORT is None:
                Header.__class__.__import_type_support__()

    @classmethod
    def __prepare__(cls, name, bases, **kwargs):
        # list constant names here so that they appear in the help text of
        # the message class under "Data and other attributes defined here:"
        # as well as populate each message instance
        return {
            'DASH_APPS_TIMEOUT': cls.__constants['DASH_APPS_TIMEOUT'],
            'DASH_BRAKE_TIMEOUT': cls.__constants['DASH_BRAKE_TIMEOUT'],
            'DASH_BUTTONS_TIMEOUT': cls.__constants['DASH_BUTTONS_TIMEOUT'],
            'DASH_FRONT_HALL_TIMEOUT': cls.__constants['DASH_FRONT_HALL_TIMEOUT'],
            'AUX_PUMPS_FANS_TIMEOUT': cls.__constants['AUX_PUMPS_FANS_TIMEOUT'],
            'DASH_BOOLS_TIMEOUT': cls.__constants['DASH_BOOLS_TIMEOUT'],
            'EBS_TANK_PRESSURE_TIMEOUT': cls.__constants['EBS_TANK_PRESSURE_TIMEOUT'],
            'AMI_SELECTED_MISSION_TIMEOUT': cls.__constants['AMI_SELECTED_MISSION_TIMEOUT'],
            'SWA_STATUS_TIMEOUT': cls.__constants['SWA_STATUS_TIMEOUT'],
            'EBS_SUPERVISOR_TIMEOUT': cls.__constants['EBS_SUPERVISOR_TIMEOUT'],
            'EBS_SERVICE_BRAKE_TIMEOUT': cls.__constants['EBS_SERVICE_BRAKE_TIMEOUT'],
            'INVERTER_ADU_TIMEOUT': cls.__constants['INVERTER_ADU_TIMEOUT'],
            'ECU_PARAMS_ACTUAL_TIMEOUT': cls.__constants['ECU_PARAMS_ACTUAL_TIMEOUT'],
            'COOLING_INFO_TIMEOUT': cls.__constants['COOLING_INFO_TIMEOUT'],
            'ISABELLEN_TIMEOUT': cls.__constants['ISABELLEN_TIMEOUT'],
            'ECU_CONTROL_SYSTEMS_TIMEOUT': cls.__constants['ECU_CONTROL_SYSTEMS_TIMEOUT'],
            'ECU_ISABELLEN_TIMEOUT': cls.__constants['ECU_ISABELLEN_TIMEOUT'],
            'INV_LEFT_INFO_TIMEOUT': cls.__constants['INV_LEFT_INFO_TIMEOUT'],
            'INV_RIGHT_INFO_TIMEOUT': cls.__constants['INV_RIGHT_INFO_TIMEOUT'],
            'CAN_STATE_ERROR_ACTIVE': cls.__constants['CAN_STATE_ERROR_ACTIVE'],
            'CAN_STATE_ERROR_WARNING': cls.__constants['CAN_STATE_ERROR_WARNING'],
            'CAN_STATE_ERROR_PASSIVE': cls.__constants['CAN_STATE_ERROR_PASSIVE'],
            'CAN_STATE_BUS_OFF': cls.__constants['CAN_STATE_BUS_OFF'],
            'CAN_STATE_STOPPED': cls.__constants['CAN_STATE_STOPPED'],
            'CAN_STATE_SLEEPING': cls.__constants['CAN_STATE_SLEEPING'],
            'CAN_STATE_MAX': cls.__constants['CAN_STATE_MAX'],
        }

    @property
    def DASH_APPS_TIMEOUT(self):
        """Message constant 'DASH_APPS_TIMEOUT'."""
        return Metaclass_CanStatus.__constants['DASH_APPS_TIMEOUT']

    @property
    def DASH_BRAKE_TIMEOUT(self):
        """Message constant 'DASH_BRAKE_TIMEOUT'."""
        return Metaclass_CanStatus.__constants['DASH_BRAKE_TIMEOUT']

    @property
    def DASH_BUTTONS_TIMEOUT(self):
        """Message constant 'DASH_BUTTONS_TIMEOUT'."""
        return Metaclass_CanStatus.__constants['DASH_BUTTONS_TIMEOUT']

    @property
    def DASH_FRONT_HALL_TIMEOUT(self):
        """Message constant 'DASH_FRONT_HALL_TIMEOUT'."""
        return Metaclass_CanStatus.__constants['DASH_FRONT_HALL_TIMEOUT']

    @property
    def AUX_PUMPS_FANS_TIMEOUT(self):
        """Message constant 'AUX_PUMPS_FANS_TIMEOUT'."""
        return Metaclass_CanStatus.__constants['AUX_PUMPS_FANS_TIMEOUT']

    @property
    def DASH_BOOLS_TIMEOUT(self):
        """Message constant 'DASH_BOOLS_TIMEOUT'."""
        return Metaclass_CanStatus.__constants['DASH_BOOLS_TIMEOUT']

    @property
    def EBS_TANK_PRESSURE_TIMEOUT(self):
        """Message constant 'EBS_TANK_PRESSURE_TIMEOUT'."""
        return Metaclass_CanStatus.__constants['EBS_TANK_PRESSURE_TIMEOUT']

    @property
    def AMI_SELECTED_MISSION_TIMEOUT(self):
        """Message constant 'AMI_SELECTED_MISSION_TIMEOUT'."""
        return Metaclass_CanStatus.__constants['AMI_SELECTED_MISSION_TIMEOUT']

    @property
    def SWA_STATUS_TIMEOUT(self):
        """Message constant 'SWA_STATUS_TIMEOUT'."""
        return Metaclass_CanStatus.__constants['SWA_STATUS_TIMEOUT']

    @property
    def EBS_SUPERVISOR_TIMEOUT(self):
        """Message constant 'EBS_SUPERVISOR_TIMEOUT'."""
        return Metaclass_CanStatus.__constants['EBS_SUPERVISOR_TIMEOUT']

    @property
    def EBS_SERVICE_BRAKE_TIMEOUT(self):
        """Message constant 'EBS_SERVICE_BRAKE_TIMEOUT'."""
        return Metaclass_CanStatus.__constants['EBS_SERVICE_BRAKE_TIMEOUT']

    @property
    def INVERTER_ADU_TIMEOUT(self):
        """Message constant 'INVERTER_ADU_TIMEOUT'."""
        return Metaclass_CanStatus.__constants['INVERTER_ADU_TIMEOUT']

    @property
    def ECU_PARAMS_ACTUAL_TIMEOUT(self):
        """Message constant 'ECU_PARAMS_ACTUAL_TIMEOUT'."""
        return Metaclass_CanStatus.__constants['ECU_PARAMS_ACTUAL_TIMEOUT']

    @property
    def COOLING_INFO_TIMEOUT(self):
        """Message constant 'COOLING_INFO_TIMEOUT'."""
        return Metaclass_CanStatus.__constants['COOLING_INFO_TIMEOUT']

    @property
    def ISABELLEN_TIMEOUT(self):
        """Message constant 'ISABELLEN_TIMEOUT'."""
        return Metaclass_CanStatus.__constants['ISABELLEN_TIMEOUT']

    @property
    def ECU_CONTROL_SYSTEMS_TIMEOUT(self):
        """Message constant 'ECU_CONTROL_SYSTEMS_TIMEOUT'."""
        return Metaclass_CanStatus.__constants['ECU_CONTROL_SYSTEMS_TIMEOUT']

    @property
    def ECU_ISABELLEN_TIMEOUT(self):
        """Message constant 'ECU_ISABELLEN_TIMEOUT'."""
        return Metaclass_CanStatus.__constants['ECU_ISABELLEN_TIMEOUT']

    @property
    def INV_LEFT_INFO_TIMEOUT(self):
        """Message constant 'INV_LEFT_INFO_TIMEOUT'."""
        return Metaclass_CanStatus.__constants['INV_LEFT_INFO_TIMEOUT']

    @property
    def INV_RIGHT_INFO_TIMEOUT(self):
        """Message constant 'INV_RIGHT_INFO_TIMEOUT'."""
        return Metaclass_CanStatus.__constants['INV_RIGHT_INFO_TIMEOUT']

    @property
    def CAN_STATE_ERROR_ACTIVE(self):
        """Message constant 'CAN_STATE_ERROR_ACTIVE'."""
        return Metaclass_CanStatus.__constants['CAN_STATE_ERROR_ACTIVE']

    @property
    def CAN_STATE_ERROR_WARNING(self):
        """Message constant 'CAN_STATE_ERROR_WARNING'."""
        return Metaclass_CanStatus.__constants['CAN_STATE_ERROR_WARNING']

    @property
    def CAN_STATE_ERROR_PASSIVE(self):
        """Message constant 'CAN_STATE_ERROR_PASSIVE'."""
        return Metaclass_CanStatus.__constants['CAN_STATE_ERROR_PASSIVE']

    @property
    def CAN_STATE_BUS_OFF(self):
        """Message constant 'CAN_STATE_BUS_OFF'."""
        return Metaclass_CanStatus.__constants['CAN_STATE_BUS_OFF']

    @property
    def CAN_STATE_STOPPED(self):
        """Message constant 'CAN_STATE_STOPPED'."""
        return Metaclass_CanStatus.__constants['CAN_STATE_STOPPED']

    @property
    def CAN_STATE_SLEEPING(self):
        """Message constant 'CAN_STATE_SLEEPING'."""
        return Metaclass_CanStatus.__constants['CAN_STATE_SLEEPING']

    @property
    def CAN_STATE_MAX(self):
        """Message constant 'CAN_STATE_MAX'."""
        return Metaclass_CanStatus.__constants['CAN_STATE_MAX']


class CanStatus(metaclass=Metaclass_CanStatus):
    """
    Message class 'CanStatus'.

    Constants:
      DASH_APPS_TIMEOUT
      DASH_BRAKE_TIMEOUT
      DASH_BUTTONS_TIMEOUT
      DASH_FRONT_HALL_TIMEOUT
      AUX_PUMPS_FANS_TIMEOUT
      DASH_BOOLS_TIMEOUT
      EBS_TANK_PRESSURE_TIMEOUT
      AMI_SELECTED_MISSION_TIMEOUT
      SWA_STATUS_TIMEOUT
      EBS_SUPERVISOR_TIMEOUT
      EBS_SERVICE_BRAKE_TIMEOUT
      INVERTER_ADU_TIMEOUT
      ECU_PARAMS_ACTUAL_TIMEOUT
      COOLING_INFO_TIMEOUT
      ISABELLEN_TIMEOUT
      ECU_CONTROL_SYSTEMS_TIMEOUT
      ECU_ISABELLEN_TIMEOUT
      INV_LEFT_INFO_TIMEOUT
      INV_RIGHT_INFO_TIMEOUT
      CAN_STATE_ERROR_ACTIVE
      CAN_STATE_ERROR_WARNING
      CAN_STATE_ERROR_PASSIVE
      CAN_STATE_BUS_OFF
      CAN_STATE_STOPPED
      CAN_STATE_SLEEPING
      CAN_STATE_MAX
    """

    __slots__ = [
        '_header',
        '_message_timeouts',
        '_sensor_errors',
        '_tx_berrors',
        '_rx_berrors',
        '_tx_terrors',
        '_rx_terrors',
        '_bus_errors',
        '_restarts',
        '_can_state',
    ]

    _fields_and_field_types = {
        'header': 'std_msgs/Header',
        'message_timeouts': 'uint32',
        'sensor_errors': 'uint16',
        'tx_berrors': 'uint16',
        'rx_berrors': 'uint16',
        'tx_terrors': 'uint64',
        'rx_terrors': 'uint64',
        'bus_errors': 'uint32',
        'restarts': 'uint32',
        'can_state': 'int32',
    }

    SLOT_TYPES = (
        rosidl_parser.definition.NamespacedType(['std_msgs', 'msg'], 'Header'),  # noqa: E501
        rosidl_parser.definition.BasicType('uint32'),  # noqa: E501
        rosidl_parser.definition.BasicType('uint16'),  # noqa: E501
        rosidl_parser.definition.BasicType('uint16'),  # noqa: E501
        rosidl_parser.definition.BasicType('uint16'),  # noqa: E501
        rosidl_parser.definition.BasicType('uint64'),  # noqa: E501
        rosidl_parser.definition.BasicType('uint64'),  # noqa: E501
        rosidl_parser.definition.BasicType('uint32'),  # noqa: E501
        rosidl_parser.definition.BasicType('uint32'),  # noqa: E501
        rosidl_parser.definition.BasicType('int32'),  # noqa: E501
    )

    def __init__(self, **kwargs):
        assert all('_' + key in self.__slots__ for key in kwargs.keys()), \
            'Invalid arguments passed to constructor: %s' % \
            ', '.join(sorted(k for k in kwargs.keys() if '_' + k not in self.__slots__))
        from std_msgs.msg import Header
        self.header = kwargs.get('header', Header())
        self.message_timeouts = kwargs.get('message_timeouts', int())
        self.sensor_errors = kwargs.get('sensor_errors', int())
        self.tx_berrors = kwargs.get('tx_berrors', int())
        self.rx_berrors = kwargs.get('rx_berrors', int())
        self.tx_terrors = kwargs.get('tx_terrors', int())
        self.rx_terrors = kwargs.get('rx_terrors', int())
        self.bus_errors = kwargs.get('bus_errors', int())
        self.restarts = kwargs.get('restarts', int())
        self.can_state = kwargs.get('can_state', int())

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
        if self.message_timeouts != other.message_timeouts:
            return False
        if self.sensor_errors != other.sensor_errors:
            return False
        if self.tx_berrors != other.tx_berrors:
            return False
        if self.rx_berrors != other.rx_berrors:
            return False
        if self.tx_terrors != other.tx_terrors:
            return False
        if self.rx_terrors != other.rx_terrors:
            return False
        if self.bus_errors != other.bus_errors:
            return False
        if self.restarts != other.restarts:
            return False
        if self.can_state != other.can_state:
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
    def message_timeouts(self):
        """Message field 'message_timeouts'."""
        return self._message_timeouts

    @message_timeouts.setter
    def message_timeouts(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'message_timeouts' field must be of type 'int'"
            assert value >= 0 and value < 4294967296, \
                "The 'message_timeouts' field must be an unsigned integer in [0, 4294967295]"
        self._message_timeouts = value

    @property
    def sensor_errors(self):
        """Message field 'sensor_errors'."""
        return self._sensor_errors

    @sensor_errors.setter
    def sensor_errors(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'sensor_errors' field must be of type 'int'"
            assert value >= 0 and value < 65536, \
                "The 'sensor_errors' field must be an unsigned integer in [0, 65535]"
        self._sensor_errors = value

    @property
    def tx_berrors(self):
        """Message field 'tx_berrors'."""
        return self._tx_berrors

    @tx_berrors.setter
    def tx_berrors(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'tx_berrors' field must be of type 'int'"
            assert value >= 0 and value < 65536, \
                "The 'tx_berrors' field must be an unsigned integer in [0, 65535]"
        self._tx_berrors = value

    @property
    def rx_berrors(self):
        """Message field 'rx_berrors'."""
        return self._rx_berrors

    @rx_berrors.setter
    def rx_berrors(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'rx_berrors' field must be of type 'int'"
            assert value >= 0 and value < 65536, \
                "The 'rx_berrors' field must be an unsigned integer in [0, 65535]"
        self._rx_berrors = value

    @property
    def tx_terrors(self):
        """Message field 'tx_terrors'."""
        return self._tx_terrors

    @tx_terrors.setter
    def tx_terrors(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'tx_terrors' field must be of type 'int'"
            assert value >= 0 and value < 18446744073709551616, \
                "The 'tx_terrors' field must be an unsigned integer in [0, 18446744073709551615]"
        self._tx_terrors = value

    @property
    def rx_terrors(self):
        """Message field 'rx_terrors'."""
        return self._rx_terrors

    @rx_terrors.setter
    def rx_terrors(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'rx_terrors' field must be of type 'int'"
            assert value >= 0 and value < 18446744073709551616, \
                "The 'rx_terrors' field must be an unsigned integer in [0, 18446744073709551615]"
        self._rx_terrors = value

    @property
    def bus_errors(self):
        """Message field 'bus_errors'."""
        return self._bus_errors

    @bus_errors.setter
    def bus_errors(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'bus_errors' field must be of type 'int'"
            assert value >= 0 and value < 4294967296, \
                "The 'bus_errors' field must be an unsigned integer in [0, 4294967295]"
        self._bus_errors = value

    @property
    def restarts(self):
        """Message field 'restarts'."""
        return self._restarts

    @restarts.setter
    def restarts(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'restarts' field must be of type 'int'"
            assert value >= 0 and value < 4294967296, \
                "The 'restarts' field must be an unsigned integer in [0, 4294967295]"
        self._restarts = value

    @property
    def can_state(self):
        """Message field 'can_state'."""
        return self._can_state

    @can_state.setter
    def can_state(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'can_state' field must be of type 'int'"
            assert value >= -2147483648 and value < 2147483648, \
                "The 'can_state' field must be an integer in [-2147483648, 2147483647]"
        self._can_state = value
