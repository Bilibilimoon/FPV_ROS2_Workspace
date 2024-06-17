# generated from rosidl_generator_py/resource/_idl.py.em
# with input from dgps_msgs:msg/Gnvtg.idl
# generated code does not contain a copyright notice


# Import statements for member types

import rosidl_parser.definition  # noqa: E402, I100


class Metaclass_Gnvtg(type):
    """Metaclass of message 'Gnvtg'."""

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
            module = import_type_support('dgps_msgs')
        except ImportError:
            import logging
            import traceback
            logger = logging.getLogger(
                'dgps_msgs.msg.Gnvtg')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__msg__gnvtg
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__msg__gnvtg
            cls._CONVERT_TO_PY = module.convert_to_py_msg__msg__gnvtg
            cls._TYPE_SUPPORT = module.type_support_msg__msg__gnvtg
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__msg__gnvtg

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


class Gnvtg(metaclass=Metaclass_Gnvtg):
    """Message class 'Gnvtg'."""

    __slots__ = [
        '_header',
        '_gnvtg',
        '_heading1',
        '_heading2',
        '_speed1',
        '_speed2',
        '_status',
    ]

    _fields_and_field_types = {
        'header': 'std_msgs/Header',
        'gnvtg': 'string',
        'heading1': 'double',
        'heading2': 'double',
        'speed1': 'double',
        'speed2': 'double',
        'status': 'string',
    }

    SLOT_TYPES = (
        rosidl_parser.definition.NamespacedType(['std_msgs', 'msg'], 'Header'),  # noqa: E501
        rosidl_parser.definition.UnboundedString(),  # noqa: E501
        rosidl_parser.definition.BasicType('double'),  # noqa: E501
        rosidl_parser.definition.BasicType('double'),  # noqa: E501
        rosidl_parser.definition.BasicType('double'),  # noqa: E501
        rosidl_parser.definition.BasicType('double'),  # noqa: E501
        rosidl_parser.definition.UnboundedString(),  # noqa: E501
    )

    def __init__(self, **kwargs):
        assert all('_' + key in self.__slots__ for key in kwargs.keys()), \
            'Invalid arguments passed to constructor: %s' % \
            ', '.join(sorted(k for k in kwargs.keys() if '_' + k not in self.__slots__))
        from std_msgs.msg import Header
        self.header = kwargs.get('header', Header())
        self.gnvtg = kwargs.get('gnvtg', str())
        self.heading1 = kwargs.get('heading1', float())
        self.heading2 = kwargs.get('heading2', float())
        self.speed1 = kwargs.get('speed1', float())
        self.speed2 = kwargs.get('speed2', float())
        self.status = kwargs.get('status', str())

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
        if self.gnvtg != other.gnvtg:
            return False
        if self.heading1 != other.heading1:
            return False
        if self.heading2 != other.heading2:
            return False
        if self.speed1 != other.speed1:
            return False
        if self.speed2 != other.speed2:
            return False
        if self.status != other.status:
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
    def gnvtg(self):
        """Message field 'gnvtg'."""
        return self._gnvtg

    @gnvtg.setter
    def gnvtg(self, value):
        if __debug__:
            assert \
                isinstance(value, str), \
                "The 'gnvtg' field must be of type 'str'"
        self._gnvtg = value

    @property
    def heading1(self):
        """Message field 'heading1'."""
        return self._heading1

    @heading1.setter
    def heading1(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'heading1' field must be of type 'float'"
        self._heading1 = value

    @property
    def heading2(self):
        """Message field 'heading2'."""
        return self._heading2

    @heading2.setter
    def heading2(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'heading2' field must be of type 'float'"
        self._heading2 = value

    @property
    def speed1(self):
        """Message field 'speed1'."""
        return self._speed1

    @speed1.setter
    def speed1(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'speed1' field must be of type 'float'"
        self._speed1 = value

    @property
    def speed2(self):
        """Message field 'speed2'."""
        return self._speed2

    @speed2.setter
    def speed2(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'speed2' field must be of type 'float'"
        self._speed2 = value

    @property
    def status(self):
        """Message field 'status'."""
        return self._status

    @status.setter
    def status(self, value):
        if __debug__:
            assert \
                isinstance(value, str), \
                "The 'status' field must be of type 'str'"
        self._status = value
