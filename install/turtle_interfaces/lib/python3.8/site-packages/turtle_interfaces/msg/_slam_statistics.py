# generated from rosidl_generator_py/resource/_idl.py.em
# with input from turtle_interfaces:msg/SlamStatistics.idl
# generated code does not contain a copyright notice


# Import statements for member types

import rosidl_parser.definition  # noqa: E402, I100


class Metaclass_SlamStatistics(type):
    """Metaclass of message 'SlamStatistics'."""

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
                'turtle_interfaces.msg.SlamStatistics')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__msg__slam_statistics
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__msg__slam_statistics
            cls._CONVERT_TO_PY = module.convert_to_py_msg__msg__slam_statistics
            cls._TYPE_SUPPORT = module.type_support_msg__msg__slam_statistics
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__msg__slam_statistics

    @classmethod
    def __prepare__(cls, name, bases, **kwargs):
        # list constant names here so that they appear in the help text of
        # the message class under "Data and other attributes defined here:"
        # as well as populate each message instance
        return {
        }


class SlamStatistics(metaclass=Metaclass_SlamStatistics):
    """Message class 'SlamStatistics'."""

    __slots__ = [
        '_chi2',
        '_num_vertices',
        '_num_edges',
        '_total_optimizer_time',
        '_hessian_dim',
        '_cholesky_nnz',
        '_num_iterations',
    ]

    _fields_and_field_types = {
        'chi2': 'double',
        'num_vertices': 'uint32',
        'num_edges': 'uint32',
        'total_optimizer_time': 'double',
        'hessian_dim': 'uint32',
        'cholesky_nnz': 'uint32',
        'num_iterations': 'uint32',
    }

    SLOT_TYPES = (
        rosidl_parser.definition.BasicType('double'),  # noqa: E501
        rosidl_parser.definition.BasicType('uint32'),  # noqa: E501
        rosidl_parser.definition.BasicType('uint32'),  # noqa: E501
        rosidl_parser.definition.BasicType('double'),  # noqa: E501
        rosidl_parser.definition.BasicType('uint32'),  # noqa: E501
        rosidl_parser.definition.BasicType('uint32'),  # noqa: E501
        rosidl_parser.definition.BasicType('uint32'),  # noqa: E501
    )

    def __init__(self, **kwargs):
        assert all('_' + key in self.__slots__ for key in kwargs.keys()), \
            'Invalid arguments passed to constructor: %s' % \
            ', '.join(sorted(k for k in kwargs.keys() if '_' + k not in self.__slots__))
        self.chi2 = kwargs.get('chi2', float())
        self.num_vertices = kwargs.get('num_vertices', int())
        self.num_edges = kwargs.get('num_edges', int())
        self.total_optimizer_time = kwargs.get('total_optimizer_time', float())
        self.hessian_dim = kwargs.get('hessian_dim', int())
        self.cholesky_nnz = kwargs.get('cholesky_nnz', int())
        self.num_iterations = kwargs.get('num_iterations', int())

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
        if self.chi2 != other.chi2:
            return False
        if self.num_vertices != other.num_vertices:
            return False
        if self.num_edges != other.num_edges:
            return False
        if self.total_optimizer_time != other.total_optimizer_time:
            return False
        if self.hessian_dim != other.hessian_dim:
            return False
        if self.cholesky_nnz != other.cholesky_nnz:
            return False
        if self.num_iterations != other.num_iterations:
            return False
        return True

    @classmethod
    def get_fields_and_field_types(cls):
        from copy import copy
        return copy(cls._fields_and_field_types)

    @property
    def chi2(self):
        """Message field 'chi2'."""
        return self._chi2

    @chi2.setter
    def chi2(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'chi2' field must be of type 'float'"
        self._chi2 = value

    @property
    def num_vertices(self):
        """Message field 'num_vertices'."""
        return self._num_vertices

    @num_vertices.setter
    def num_vertices(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'num_vertices' field must be of type 'int'"
            assert value >= 0 and value < 4294967296, \
                "The 'num_vertices' field must be an unsigned integer in [0, 4294967295]"
        self._num_vertices = value

    @property
    def num_edges(self):
        """Message field 'num_edges'."""
        return self._num_edges

    @num_edges.setter
    def num_edges(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'num_edges' field must be of type 'int'"
            assert value >= 0 and value < 4294967296, \
                "The 'num_edges' field must be an unsigned integer in [0, 4294967295]"
        self._num_edges = value

    @property
    def total_optimizer_time(self):
        """Message field 'total_optimizer_time'."""
        return self._total_optimizer_time

    @total_optimizer_time.setter
    def total_optimizer_time(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'total_optimizer_time' field must be of type 'float'"
        self._total_optimizer_time = value

    @property
    def hessian_dim(self):
        """Message field 'hessian_dim'."""
        return self._hessian_dim

    @hessian_dim.setter
    def hessian_dim(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'hessian_dim' field must be of type 'int'"
            assert value >= 0 and value < 4294967296, \
                "The 'hessian_dim' field must be an unsigned integer in [0, 4294967295]"
        self._hessian_dim = value

    @property
    def cholesky_nnz(self):
        """Message field 'cholesky_nnz'."""
        return self._cholesky_nnz

    @cholesky_nnz.setter
    def cholesky_nnz(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'cholesky_nnz' field must be of type 'int'"
            assert value >= 0 and value < 4294967296, \
                "The 'cholesky_nnz' field must be an unsigned integer in [0, 4294967295]"
        self._cholesky_nnz = value

    @property
    def num_iterations(self):
        """Message field 'num_iterations'."""
        return self._num_iterations

    @num_iterations.setter
    def num_iterations(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'num_iterations' field must be of type 'int'"
            assert value >= 0 and value < 4294967296, \
                "The 'num_iterations' field must be an unsigned integer in [0, 4294967295]"
        self._num_iterations = value
