# generated from rosidl_generator_py/resource/_idl.py.em
# with input from turtle_interfaces:msg/StateMachineState.idl
# generated code does not contain a copyright notice


# Import statements for member types

import rosidl_parser.definition  # noqa: E402, I100


class Metaclass_StateMachineState(type):
    """Metaclass of message 'StateMachineState'."""

    _CREATE_ROS_MESSAGE = None
    _CONVERT_FROM_PY = None
    _CONVERT_TO_PY = None
    _DESTROY_ROS_MESSAGE = None
    _TYPE_SUPPORT = None

    __constants = {
        'MANUAL_DRIVING': 0,
        'AS_OFF': 1,
        'AS_READY': 2,
        'AS_DRIVING': 3,
        'AS_FINISHED': 4,
        'AS_EMERGENCY': 5,
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
                'turtle_interfaces.msg.StateMachineState')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__msg__state_machine_state
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__msg__state_machine_state
            cls._CONVERT_TO_PY = module.convert_to_py_msg__msg__state_machine_state
            cls._TYPE_SUPPORT = module.type_support_msg__msg__state_machine_state
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__msg__state_machine_state

    @classmethod
    def __prepare__(cls, name, bases, **kwargs):
        # list constant names here so that they appear in the help text of
        # the message class under "Data and other attributes defined here:"
        # as well as populate each message instance
        return {
            'MANUAL_DRIVING': cls.__constants['MANUAL_DRIVING'],
            'AS_OFF': cls.__constants['AS_OFF'],
            'AS_READY': cls.__constants['AS_READY'],
            'AS_DRIVING': cls.__constants['AS_DRIVING'],
            'AS_FINISHED': cls.__constants['AS_FINISHED'],
            'AS_EMERGENCY': cls.__constants['AS_EMERGENCY'],
        }

    @property
    def MANUAL_DRIVING(self):
        """Message constant 'MANUAL_DRIVING'."""
        return Metaclass_StateMachineState.__constants['MANUAL_DRIVING']

    @property
    def AS_OFF(self):
        """Message constant 'AS_OFF'."""
        return Metaclass_StateMachineState.__constants['AS_OFF']

    @property
    def AS_READY(self):
        """Message constant 'AS_READY'."""
        return Metaclass_StateMachineState.__constants['AS_READY']

    @property
    def AS_DRIVING(self):
        """Message constant 'AS_DRIVING'."""
        return Metaclass_StateMachineState.__constants['AS_DRIVING']

    @property
    def AS_FINISHED(self):
        """Message constant 'AS_FINISHED'."""
        return Metaclass_StateMachineState.__constants['AS_FINISHED']

    @property
    def AS_EMERGENCY(self):
        """Message constant 'AS_EMERGENCY'."""
        return Metaclass_StateMachineState.__constants['AS_EMERGENCY']


class StateMachineState(metaclass=Metaclass_StateMachineState):
    """
    Message class 'StateMachineState'.

    Constants:
      MANUAL_DRIVING
      AS_OFF
      AS_READY
      AS_DRIVING
      AS_FINISHED
      AS_EMERGENCY
    """

    __slots__ = [
        '_state',
        '_setfinished',
    ]

    _fields_and_field_types = {
        'state': 'uint8',
        'setfinished': 'boolean',
    }

    SLOT_TYPES = (
        rosidl_parser.definition.BasicType('uint8'),  # noqa: E501
        rosidl_parser.definition.BasicType('boolean'),  # noqa: E501
    )

    def __init__(self, **kwargs):
        assert all('_' + key in self.__slots__ for key in kwargs.keys()), \
            'Invalid arguments passed to constructor: %s' % \
            ', '.join(sorted(k for k in kwargs.keys() if '_' + k not in self.__slots__))
        self.state = kwargs.get('state', int())
        self.setfinished = kwargs.get('setfinished', bool())

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
        if self.state != other.state:
            return False
        if self.setfinished != other.setfinished:
            return False
        return True

    @classmethod
    def get_fields_and_field_types(cls):
        from copy import copy
        return copy(cls._fields_and_field_types)

    @property
    def state(self):
        """Message field 'state'."""
        return self._state

    @state.setter
    def state(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'state' field must be of type 'int'"
            assert value >= 0 and value < 256, \
                "The 'state' field must be an unsigned integer in [0, 255]"
        self._state = value

    @property
    def setfinished(self):
        """Message field 'setfinished'."""
        return self._setfinished

    @setfinished.setter
    def setfinished(self, value):
        if __debug__:
            assert \
                isinstance(value, bool), \
                "The 'setfinished' field must be of type 'bool'"
        self._setfinished = value
