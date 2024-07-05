# generated from rosidl_generator_py/resource/_idl.py.em
# with input from fpv_msgs:msg/Temp.idl
# generated code does not contain a copyright notice


# Import statements for member types

import rosidl_parser.definition  # noqa: E402, I100


class Metaclass_Temp(type):
    """Metaclass of message 'Temp'."""

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
            module = import_type_support('fpv_msgs')
        except ImportError:
            import logging
            import traceback
            logger = logging.getLogger(
                'fpv_msgs.msg.Temp')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__msg__temp
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__msg__temp
            cls._CONVERT_TO_PY = module.convert_to_py_msg__msg__temp
            cls._TYPE_SUPPORT = module.type_support_msg__msg__temp
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__msg__temp

    @classmethod
    def __prepare__(cls, name, bases, **kwargs):
        # list constant names here so that they appear in the help text of
        # the message class under "Data and other attributes defined here:"
        # as well as populate each message instance
        return {
        }


class Temp(metaclass=Metaclass_Temp):
    """Message class 'Temp'."""

    __slots__ = [
        '_left_up_w',
        '_left_up_j',
        '_right_up_w',
        '_right_up_j',
        '_left_down_w',
        '_left_down_j',
        '_right_down_w',
        '_right_down_j',
        '_x_min',
        '_y_min',
        '_x_max',
        '_y_max',
        '_output_w',
        '_output_j',
    ]

    _fields_and_field_types = {
        'left_up_w': 'double',
        'left_up_j': 'double',
        'right_up_w': 'double',
        'right_up_j': 'double',
        'left_down_w': 'double',
        'left_down_j': 'double',
        'right_down_w': 'double',
        'right_down_j': 'double',
        'x_min': 'double',
        'y_min': 'double',
        'x_max': 'double',
        'y_max': 'double',
        'output_w': 'double',
        'output_j': 'double',
    }

    SLOT_TYPES = (
        rosidl_parser.definition.BasicType('double'),  # noqa: E501
        rosidl_parser.definition.BasicType('double'),  # noqa: E501
        rosidl_parser.definition.BasicType('double'),  # noqa: E501
        rosidl_parser.definition.BasicType('double'),  # noqa: E501
        rosidl_parser.definition.BasicType('double'),  # noqa: E501
        rosidl_parser.definition.BasicType('double'),  # noqa: E501
        rosidl_parser.definition.BasicType('double'),  # noqa: E501
        rosidl_parser.definition.BasicType('double'),  # noqa: E501
        rosidl_parser.definition.BasicType('double'),  # noqa: E501
        rosidl_parser.definition.BasicType('double'),  # noqa: E501
        rosidl_parser.definition.BasicType('double'),  # noqa: E501
        rosidl_parser.definition.BasicType('double'),  # noqa: E501
        rosidl_parser.definition.BasicType('double'),  # noqa: E501
        rosidl_parser.definition.BasicType('double'),  # noqa: E501
    )

    def __init__(self, **kwargs):
        assert all('_' + key in self.__slots__ for key in kwargs.keys()), \
            'Invalid arguments passed to constructor: %s' % \
            ', '.join(sorted(k for k in kwargs.keys() if '_' + k not in self.__slots__))
        self.left_up_w = kwargs.get('left_up_w', float())
        self.left_up_j = kwargs.get('left_up_j', float())
        self.right_up_w = kwargs.get('right_up_w', float())
        self.right_up_j = kwargs.get('right_up_j', float())
        self.left_down_w = kwargs.get('left_down_w', float())
        self.left_down_j = kwargs.get('left_down_j', float())
        self.right_down_w = kwargs.get('right_down_w', float())
        self.right_down_j = kwargs.get('right_down_j', float())
        self.x_min = kwargs.get('x_min', float())
        self.y_min = kwargs.get('y_min', float())
        self.x_max = kwargs.get('x_max', float())
        self.y_max = kwargs.get('y_max', float())
        self.output_w = kwargs.get('output_w', float())
        self.output_j = kwargs.get('output_j', float())

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
        if self.left_up_w != other.left_up_w:
            return False
        if self.left_up_j != other.left_up_j:
            return False
        if self.right_up_w != other.right_up_w:
            return False
        if self.right_up_j != other.right_up_j:
            return False
        if self.left_down_w != other.left_down_w:
            return False
        if self.left_down_j != other.left_down_j:
            return False
        if self.right_down_w != other.right_down_w:
            return False
        if self.right_down_j != other.right_down_j:
            return False
        if self.x_min != other.x_min:
            return False
        if self.y_min != other.y_min:
            return False
        if self.x_max != other.x_max:
            return False
        if self.y_max != other.y_max:
            return False
        if self.output_w != other.output_w:
            return False
        if self.output_j != other.output_j:
            return False
        return True

    @classmethod
    def get_fields_and_field_types(cls):
        from copy import copy
        return copy(cls._fields_and_field_types)

    @property
    def left_up_w(self):
        """Message field 'left_up_w'."""
        return self._left_up_w

    @left_up_w.setter
    def left_up_w(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'left_up_w' field must be of type 'float'"
        self._left_up_w = value

    @property
    def left_up_j(self):
        """Message field 'left_up_j'."""
        return self._left_up_j

    @left_up_j.setter
    def left_up_j(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'left_up_j' field must be of type 'float'"
        self._left_up_j = value

    @property
    def right_up_w(self):
        """Message field 'right_up_w'."""
        return self._right_up_w

    @right_up_w.setter
    def right_up_w(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'right_up_w' field must be of type 'float'"
        self._right_up_w = value

    @property
    def right_up_j(self):
        """Message field 'right_up_j'."""
        return self._right_up_j

    @right_up_j.setter
    def right_up_j(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'right_up_j' field must be of type 'float'"
        self._right_up_j = value

    @property
    def left_down_w(self):
        """Message field 'left_down_w'."""
        return self._left_down_w

    @left_down_w.setter
    def left_down_w(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'left_down_w' field must be of type 'float'"
        self._left_down_w = value

    @property
    def left_down_j(self):
        """Message field 'left_down_j'."""
        return self._left_down_j

    @left_down_j.setter
    def left_down_j(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'left_down_j' field must be of type 'float'"
        self._left_down_j = value

    @property
    def right_down_w(self):
        """Message field 'right_down_w'."""
        return self._right_down_w

    @right_down_w.setter
    def right_down_w(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'right_down_w' field must be of type 'float'"
        self._right_down_w = value

    @property
    def right_down_j(self):
        """Message field 'right_down_j'."""
        return self._right_down_j

    @right_down_j.setter
    def right_down_j(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'right_down_j' field must be of type 'float'"
        self._right_down_j = value

    @property
    def x_min(self):
        """Message field 'x_min'."""
        return self._x_min

    @x_min.setter
    def x_min(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'x_min' field must be of type 'float'"
        self._x_min = value

    @property
    def y_min(self):
        """Message field 'y_min'."""
        return self._y_min

    @y_min.setter
    def y_min(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'y_min' field must be of type 'float'"
        self._y_min = value

    @property
    def x_max(self):
        """Message field 'x_max'."""
        return self._x_max

    @x_max.setter
    def x_max(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'x_max' field must be of type 'float'"
        self._x_max = value

    @property
    def y_max(self):
        """Message field 'y_max'."""
        return self._y_max

    @y_max.setter
    def y_max(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'y_max' field must be of type 'float'"
        self._y_max = value

    @property
    def output_w(self):
        """Message field 'output_w'."""
        return self._output_w

    @output_w.setter
    def output_w(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'output_w' field must be of type 'float'"
        self._output_w = value

    @property
    def output_j(self):
        """Message field 'output_j'."""
        return self._output_j

    @output_j.setter
    def output_j(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'output_j' field must be of type 'float'"
        self._output_j = value
