# generated from rosidl_generator_py/resource/_idl.py.em
# with input from turtle_interfaces:msg/ControlInfo.idl
# generated code does not contain a copyright notice


# Import statements for member types

import rosidl_parser.definition  # noqa: E402, I100


class Metaclass_ControlInfo(type):
    """Metaclass of message 'ControlInfo'."""

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
                'turtle_interfaces.msg.ControlInfo')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__msg__control_info
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__msg__control_info
            cls._CONVERT_TO_PY = module.convert_to_py_msg__msg__control_info
            cls._TYPE_SUPPORT = module.type_support_msg__msg__control_info
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__msg__control_info

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


class ControlInfo(metaclass=Metaclass_ControlInfo):
    """Message class 'ControlInfo'."""

    __slots__ = [
        '_header',
        '_lookahead_distance',
        '_vx_desired',
        '_lap',
        '_map_available',
        '_finalization_trigger',
        '_seconds_to_cross_finish_line',
        '_anti_delft_gain',
        '_finish_dist_thresh',
        '_vx',
        '_seconds_passed_since_finalization_trigger',
        '_heading_condition',
        '_startline_pose_heading',
    ]

    _fields_and_field_types = {
        'header': 'std_msgs/Header',
        'lookahead_distance': 'float',
        'vx_desired': 'float',
        'lap': 'uint8',
        'map_available': 'boolean',
        'finalization_trigger': 'boolean',
        'seconds_to_cross_finish_line': 'float',
        'anti_delft_gain': 'float',
        'finish_dist_thresh': 'float',
        'vx': 'float',
        'seconds_passed_since_finalization_trigger': 'float',
        'heading_condition': 'boolean',
        'startline_pose_heading': 'float',
    }

    SLOT_TYPES = (
        rosidl_parser.definition.NamespacedType(['std_msgs', 'msg'], 'Header'),  # noqa: E501
        rosidl_parser.definition.BasicType('float'),  # noqa: E501
        rosidl_parser.definition.BasicType('float'),  # noqa: E501
        rosidl_parser.definition.BasicType('uint8'),  # noqa: E501
        rosidl_parser.definition.BasicType('boolean'),  # noqa: E501
        rosidl_parser.definition.BasicType('boolean'),  # noqa: E501
        rosidl_parser.definition.BasicType('float'),  # noqa: E501
        rosidl_parser.definition.BasicType('float'),  # noqa: E501
        rosidl_parser.definition.BasicType('float'),  # noqa: E501
        rosidl_parser.definition.BasicType('float'),  # noqa: E501
        rosidl_parser.definition.BasicType('float'),  # noqa: E501
        rosidl_parser.definition.BasicType('boolean'),  # noqa: E501
        rosidl_parser.definition.BasicType('float'),  # noqa: E501
    )

    def __init__(self, **kwargs):
        assert all('_' + key in self.__slots__ for key in kwargs.keys()), \
            'Invalid arguments passed to constructor: %s' % \
            ', '.join(sorted(k for k in kwargs.keys() if '_' + k not in self.__slots__))
        from std_msgs.msg import Header
        self.header = kwargs.get('header', Header())
        self.lookahead_distance = kwargs.get('lookahead_distance', float())
        self.vx_desired = kwargs.get('vx_desired', float())
        self.lap = kwargs.get('lap', int())
        self.map_available = kwargs.get('map_available', bool())
        self.finalization_trigger = kwargs.get('finalization_trigger', bool())
        self.seconds_to_cross_finish_line = kwargs.get('seconds_to_cross_finish_line', float())
        self.anti_delft_gain = kwargs.get('anti_delft_gain', float())
        self.finish_dist_thresh = kwargs.get('finish_dist_thresh', float())
        self.vx = kwargs.get('vx', float())
        self.seconds_passed_since_finalization_trigger = kwargs.get('seconds_passed_since_finalization_trigger', float())
        self.heading_condition = kwargs.get('heading_condition', bool())
        self.startline_pose_heading = kwargs.get('startline_pose_heading', float())

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
        if self.lookahead_distance != other.lookahead_distance:
            return False
        if self.vx_desired != other.vx_desired:
            return False
        if self.lap != other.lap:
            return False
        if self.map_available != other.map_available:
            return False
        if self.finalization_trigger != other.finalization_trigger:
            return False
        if self.seconds_to_cross_finish_line != other.seconds_to_cross_finish_line:
            return False
        if self.anti_delft_gain != other.anti_delft_gain:
            return False
        if self.finish_dist_thresh != other.finish_dist_thresh:
            return False
        if self.vx != other.vx:
            return False
        if self.seconds_passed_since_finalization_trigger != other.seconds_passed_since_finalization_trigger:
            return False
        if self.heading_condition != other.heading_condition:
            return False
        if self.startline_pose_heading != other.startline_pose_heading:
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
    def lookahead_distance(self):
        """Message field 'lookahead_distance'."""
        return self._lookahead_distance

    @lookahead_distance.setter
    def lookahead_distance(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'lookahead_distance' field must be of type 'float'"
        self._lookahead_distance = value

    @property
    def vx_desired(self):
        """Message field 'vx_desired'."""
        return self._vx_desired

    @vx_desired.setter
    def vx_desired(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'vx_desired' field must be of type 'float'"
        self._vx_desired = value

    @property
    def lap(self):
        """Message field 'lap'."""
        return self._lap

    @lap.setter
    def lap(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'lap' field must be of type 'int'"
            assert value >= 0 and value < 256, \
                "The 'lap' field must be an unsigned integer in [0, 255]"
        self._lap = value

    @property
    def map_available(self):
        """Message field 'map_available'."""
        return self._map_available

    @map_available.setter
    def map_available(self, value):
        if __debug__:
            assert \
                isinstance(value, bool), \
                "The 'map_available' field must be of type 'bool'"
        self._map_available = value

    @property
    def finalization_trigger(self):
        """Message field 'finalization_trigger'."""
        return self._finalization_trigger

    @finalization_trigger.setter
    def finalization_trigger(self, value):
        if __debug__:
            assert \
                isinstance(value, bool), \
                "The 'finalization_trigger' field must be of type 'bool'"
        self._finalization_trigger = value

    @property
    def seconds_to_cross_finish_line(self):
        """Message field 'seconds_to_cross_finish_line'."""
        return self._seconds_to_cross_finish_line

    @seconds_to_cross_finish_line.setter
    def seconds_to_cross_finish_line(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'seconds_to_cross_finish_line' field must be of type 'float'"
        self._seconds_to_cross_finish_line = value

    @property
    def anti_delft_gain(self):
        """Message field 'anti_delft_gain'."""
        return self._anti_delft_gain

    @anti_delft_gain.setter
    def anti_delft_gain(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'anti_delft_gain' field must be of type 'float'"
        self._anti_delft_gain = value

    @property
    def finish_dist_thresh(self):
        """Message field 'finish_dist_thresh'."""
        return self._finish_dist_thresh

    @finish_dist_thresh.setter
    def finish_dist_thresh(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'finish_dist_thresh' field must be of type 'float'"
        self._finish_dist_thresh = value

    @property
    def vx(self):
        """Message field 'vx'."""
        return self._vx

    @vx.setter
    def vx(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'vx' field must be of type 'float'"
        self._vx = value

    @property
    def seconds_passed_since_finalization_trigger(self):
        """Message field 'seconds_passed_since_finalization_trigger'."""
        return self._seconds_passed_since_finalization_trigger

    @seconds_passed_since_finalization_trigger.setter
    def seconds_passed_since_finalization_trigger(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'seconds_passed_since_finalization_trigger' field must be of type 'float'"
        self._seconds_passed_since_finalization_trigger = value

    @property
    def heading_condition(self):
        """Message field 'heading_condition'."""
        return self._heading_condition

    @heading_condition.setter
    def heading_condition(self, value):
        if __debug__:
            assert \
                isinstance(value, bool), \
                "The 'heading_condition' field must be of type 'bool'"
        self._heading_condition = value

    @property
    def startline_pose_heading(self):
        """Message field 'startline_pose_heading'."""
        return self._startline_pose_heading

    @startline_pose_heading.setter
    def startline_pose_heading(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'startline_pose_heading' field must be of type 'float'"
        self._startline_pose_heading = value
