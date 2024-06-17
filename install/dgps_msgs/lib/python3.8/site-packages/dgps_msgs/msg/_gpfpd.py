# generated from rosidl_generator_py/resource/_idl.py.em
# with input from dgps_msgs:msg/Gpfpd.idl
# generated code does not contain a copyright notice


# Import statements for member types

import rosidl_parser.definition  # noqa: E402, I100


class Metaclass_Gpfpd(type):
    """Metaclass of message 'Gpfpd'."""

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
                'dgps_msgs.msg.Gpfpd')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__msg__gpfpd
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__msg__gpfpd
            cls._CONVERT_TO_PY = module.convert_to_py_msg__msg__gpfpd
            cls._TYPE_SUPPORT = module.type_support_msg__msg__gpfpd
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__msg__gpfpd

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


class Gpfpd(metaclass=Metaclass_Gpfpd):
    """Message class 'Gpfpd'."""

    __slots__ = [
        '_header',
        '_gpfpd',
        '_heading',
        '_pitch',
        '_roll',
        '_lattitude',
        '_longitude',
        '_altitude',
        '_velocity_east',
        '_velocity_north',
        '_velocity_up',
        '_baseline',
        '_nsv1',
        '_nsv2',
        '_status',
    ]

    _fields_and_field_types = {
        'header': 'std_msgs/Header',
        'gpfpd': 'string',
        'heading': 'double',
        'pitch': 'double',
        'roll': 'double',
        'lattitude': 'double',
        'longitude': 'double',
        'altitude': 'double',
        'velocity_east': 'double',
        'velocity_north': 'double',
        'velocity_up': 'double',
        'baseline': 'double',
        'nsv1': 'uint8',
        'nsv2': 'uint8',
        'status': 'uint8',
    }

    SLOT_TYPES = (
        rosidl_parser.definition.NamespacedType(['std_msgs', 'msg'], 'Header'),  # noqa: E501
        rosidl_parser.definition.UnboundedString(),  # noqa: E501
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
        rosidl_parser.definition.BasicType('uint8'),  # noqa: E501
        rosidl_parser.definition.BasicType('uint8'),  # noqa: E501
        rosidl_parser.definition.BasicType('uint8'),  # noqa: E501
    )

    def __init__(self, **kwargs):
        assert all('_' + key in self.__slots__ for key in kwargs.keys()), \
            'Invalid arguments passed to constructor: %s' % \
            ', '.join(sorted(k for k in kwargs.keys() if '_' + k not in self.__slots__))
        from std_msgs.msg import Header
        self.header = kwargs.get('header', Header())
        self.gpfpd = kwargs.get('gpfpd', str())
        self.heading = kwargs.get('heading', float())
        self.pitch = kwargs.get('pitch', float())
        self.roll = kwargs.get('roll', float())
        self.lattitude = kwargs.get('lattitude', float())
        self.longitude = kwargs.get('longitude', float())
        self.altitude = kwargs.get('altitude', float())
        self.velocity_east = kwargs.get('velocity_east', float())
        self.velocity_north = kwargs.get('velocity_north', float())
        self.velocity_up = kwargs.get('velocity_up', float())
        self.baseline = kwargs.get('baseline', float())
        self.nsv1 = kwargs.get('nsv1', int())
        self.nsv2 = kwargs.get('nsv2', int())
        self.status = kwargs.get('status', int())

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
        if self.gpfpd != other.gpfpd:
            return False
        if self.heading != other.heading:
            return False
        if self.pitch != other.pitch:
            return False
        if self.roll != other.roll:
            return False
        if self.lattitude != other.lattitude:
            return False
        if self.longitude != other.longitude:
            return False
        if self.altitude != other.altitude:
            return False
        if self.velocity_east != other.velocity_east:
            return False
        if self.velocity_north != other.velocity_north:
            return False
        if self.velocity_up != other.velocity_up:
            return False
        if self.baseline != other.baseline:
            return False
        if self.nsv1 != other.nsv1:
            return False
        if self.nsv2 != other.nsv2:
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
    def gpfpd(self):
        """Message field 'gpfpd'."""
        return self._gpfpd

    @gpfpd.setter
    def gpfpd(self, value):
        if __debug__:
            assert \
                isinstance(value, str), \
                "The 'gpfpd' field must be of type 'str'"
        self._gpfpd = value

    @property
    def heading(self):
        """Message field 'heading'."""
        return self._heading

    @heading.setter
    def heading(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'heading' field must be of type 'float'"
        self._heading = value

    @property
    def pitch(self):
        """Message field 'pitch'."""
        return self._pitch

    @pitch.setter
    def pitch(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'pitch' field must be of type 'float'"
        self._pitch = value

    @property
    def roll(self):
        """Message field 'roll'."""
        return self._roll

    @roll.setter
    def roll(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'roll' field must be of type 'float'"
        self._roll = value

    @property
    def lattitude(self):
        """Message field 'lattitude'."""
        return self._lattitude

    @lattitude.setter
    def lattitude(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'lattitude' field must be of type 'float'"
        self._lattitude = value

    @property
    def longitude(self):
        """Message field 'longitude'."""
        return self._longitude

    @longitude.setter
    def longitude(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'longitude' field must be of type 'float'"
        self._longitude = value

    @property
    def altitude(self):
        """Message field 'altitude'."""
        return self._altitude

    @altitude.setter
    def altitude(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'altitude' field must be of type 'float'"
        self._altitude = value

    @property
    def velocity_east(self):
        """Message field 'velocity_east'."""
        return self._velocity_east

    @velocity_east.setter
    def velocity_east(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'velocity_east' field must be of type 'float'"
        self._velocity_east = value

    @property
    def velocity_north(self):
        """Message field 'velocity_north'."""
        return self._velocity_north

    @velocity_north.setter
    def velocity_north(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'velocity_north' field must be of type 'float'"
        self._velocity_north = value

    @property
    def velocity_up(self):
        """Message field 'velocity_up'."""
        return self._velocity_up

    @velocity_up.setter
    def velocity_up(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'velocity_up' field must be of type 'float'"
        self._velocity_up = value

    @property
    def baseline(self):
        """Message field 'baseline'."""
        return self._baseline

    @baseline.setter
    def baseline(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'baseline' field must be of type 'float'"
        self._baseline = value

    @property
    def nsv1(self):
        """Message field 'nsv1'."""
        return self._nsv1

    @nsv1.setter
    def nsv1(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'nsv1' field must be of type 'int'"
            assert value >= 0 and value < 256, \
                "The 'nsv1' field must be an unsigned integer in [0, 255]"
        self._nsv1 = value

    @property
    def nsv2(self):
        """Message field 'nsv2'."""
        return self._nsv2

    @nsv2.setter
    def nsv2(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'nsv2' field must be of type 'int'"
            assert value >= 0 and value < 256, \
                "The 'nsv2' field must be an unsigned integer in [0, 255]"
        self._nsv2 = value

    @property
    def status(self):
        """Message field 'status'."""
        return self._status

    @status.setter
    def status(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'status' field must be of type 'int'"
            assert value >= 0 and value < 256, \
                "The 'status' field must be an unsigned integer in [0, 255]"
        self._status = value
