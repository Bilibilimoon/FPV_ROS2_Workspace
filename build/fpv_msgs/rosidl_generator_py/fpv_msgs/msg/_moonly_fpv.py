# generated from rosidl_generator_py/resource/_idl.py.em
# with input from fpv_msgs:msg/MoonlyFpv.idl
# generated code does not contain a copyright notice


# Import statements for member types

import rosidl_parser.definition  # noqa: E402, I100


class Metaclass_MoonlyFpv(type):
    """Metaclass of message 'MoonlyFpv'."""

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
                'fpv_msgs.msg.MoonlyFpv')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__msg__moonly_fpv
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__msg__moonly_fpv
            cls._CONVERT_TO_PY = module.convert_to_py_msg__msg__moonly_fpv
            cls._TYPE_SUPPORT = module.type_support_msg__msg__moonly_fpv
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__msg__moonly_fpv

    @classmethod
    def __prepare__(cls, name, bases, **kwargs):
        # list constant names here so that they appear in the help text of
        # the message class under "Data and other attributes defined here:"
        # as well as populate each message instance
        return {
        }


class MoonlyFpv(metaclass=Metaclass_MoonlyFpv):
    """Message class 'MoonlyFpv'."""

    __slots__ = [
        '_boat_linear_speed',
        '_boat_angular_speed',
        '_pwm_left',
        '_pwm_right',
        '_aim_gps_lng',
        '_aim_gps_lat',
        '_fpv_gps_lng',
        '_fpv_gps_lat',
        '_fpv_gps_hight',
        '_fpv_gps_face',
        '_manual_fpv_rol',
        '_manual_fpv_pit',
        '_manual_fpv_yaw',
        '_manual_fpv_thr',
        '_auto_fpv_rol',
        '_auto_fpv_pit',
        '_auto_fpv_yaw',
        '_auto_fpv_thr',
        '_control_model',
        '_fpv_model',
    ]

    _fields_and_field_types = {
        'boat_linear_speed': 'double',
        'boat_angular_speed': 'double',
        'pwm_left': 'int32',
        'pwm_right': 'int32',
        'aim_gps_lng': 'double',
        'aim_gps_lat': 'double',
        'fpv_gps_lng': 'double',
        'fpv_gps_lat': 'double',
        'fpv_gps_hight': 'double',
        'fpv_gps_face': 'double',
        'manual_fpv_rol': 'double',
        'manual_fpv_pit': 'double',
        'manual_fpv_yaw': 'double',
        'manual_fpv_thr': 'double',
        'auto_fpv_rol': 'double',
        'auto_fpv_pit': 'double',
        'auto_fpv_yaw': 'double',
        'auto_fpv_thr': 'double',
        'control_model': 'int32',
        'fpv_model': 'int32',
    }

    SLOT_TYPES = (
        rosidl_parser.definition.BasicType('double'),  # noqa: E501
        rosidl_parser.definition.BasicType('double'),  # noqa: E501
        rosidl_parser.definition.BasicType('int32'),  # noqa: E501
        rosidl_parser.definition.BasicType('int32'),  # noqa: E501
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
        rosidl_parser.definition.BasicType('int32'),  # noqa: E501
        rosidl_parser.definition.BasicType('int32'),  # noqa: E501
    )

    def __init__(self, **kwargs):
        assert all('_' + key in self.__slots__ for key in kwargs.keys()), \
            'Invalid arguments passed to constructor: %s' % \
            ', '.join(sorted(k for k in kwargs.keys() if '_' + k not in self.__slots__))
        self.boat_linear_speed = kwargs.get('boat_linear_speed', float())
        self.boat_angular_speed = kwargs.get('boat_angular_speed', float())
        self.pwm_left = kwargs.get('pwm_left', int())
        self.pwm_right = kwargs.get('pwm_right', int())
        self.aim_gps_lng = kwargs.get('aim_gps_lng', float())
        self.aim_gps_lat = kwargs.get('aim_gps_lat', float())
        self.fpv_gps_lng = kwargs.get('fpv_gps_lng', float())
        self.fpv_gps_lat = kwargs.get('fpv_gps_lat', float())
        self.fpv_gps_hight = kwargs.get('fpv_gps_hight', float())
        self.fpv_gps_face = kwargs.get('fpv_gps_face', float())
        self.manual_fpv_rol = kwargs.get('manual_fpv_rol', float())
        self.manual_fpv_pit = kwargs.get('manual_fpv_pit', float())
        self.manual_fpv_yaw = kwargs.get('manual_fpv_yaw', float())
        self.manual_fpv_thr = kwargs.get('manual_fpv_thr', float())
        self.auto_fpv_rol = kwargs.get('auto_fpv_rol', float())
        self.auto_fpv_pit = kwargs.get('auto_fpv_pit', float())
        self.auto_fpv_yaw = kwargs.get('auto_fpv_yaw', float())
        self.auto_fpv_thr = kwargs.get('auto_fpv_thr', float())
        self.control_model = kwargs.get('control_model', int())
        self.fpv_model = kwargs.get('fpv_model', int())

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
        if self.boat_linear_speed != other.boat_linear_speed:
            return False
        if self.boat_angular_speed != other.boat_angular_speed:
            return False
        if self.pwm_left != other.pwm_left:
            return False
        if self.pwm_right != other.pwm_right:
            return False
        if self.aim_gps_lng != other.aim_gps_lng:
            return False
        if self.aim_gps_lat != other.aim_gps_lat:
            return False
        if self.fpv_gps_lng != other.fpv_gps_lng:
            return False
        if self.fpv_gps_lat != other.fpv_gps_lat:
            return False
        if self.fpv_gps_hight != other.fpv_gps_hight:
            return False
        if self.fpv_gps_face != other.fpv_gps_face:
            return False
        if self.manual_fpv_rol != other.manual_fpv_rol:
            return False
        if self.manual_fpv_pit != other.manual_fpv_pit:
            return False
        if self.manual_fpv_yaw != other.manual_fpv_yaw:
            return False
        if self.manual_fpv_thr != other.manual_fpv_thr:
            return False
        if self.auto_fpv_rol != other.auto_fpv_rol:
            return False
        if self.auto_fpv_pit != other.auto_fpv_pit:
            return False
        if self.auto_fpv_yaw != other.auto_fpv_yaw:
            return False
        if self.auto_fpv_thr != other.auto_fpv_thr:
            return False
        if self.control_model != other.control_model:
            return False
        if self.fpv_model != other.fpv_model:
            return False
        return True

    @classmethod
    def get_fields_and_field_types(cls):
        from copy import copy
        return copy(cls._fields_and_field_types)

    @property
    def boat_linear_speed(self):
        """Message field 'boat_linear_speed'."""
        return self._boat_linear_speed

    @boat_linear_speed.setter
    def boat_linear_speed(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'boat_linear_speed' field must be of type 'float'"
        self._boat_linear_speed = value

    @property
    def boat_angular_speed(self):
        """Message field 'boat_angular_speed'."""
        return self._boat_angular_speed

    @boat_angular_speed.setter
    def boat_angular_speed(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'boat_angular_speed' field must be of type 'float'"
        self._boat_angular_speed = value

    @property
    def pwm_left(self):
        """Message field 'pwm_left'."""
        return self._pwm_left

    @pwm_left.setter
    def pwm_left(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'pwm_left' field must be of type 'int'"
            assert value >= -2147483648 and value < 2147483648, \
                "The 'pwm_left' field must be an integer in [-2147483648, 2147483647]"
        self._pwm_left = value

    @property
    def pwm_right(self):
        """Message field 'pwm_right'."""
        return self._pwm_right

    @pwm_right.setter
    def pwm_right(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'pwm_right' field must be of type 'int'"
            assert value >= -2147483648 and value < 2147483648, \
                "The 'pwm_right' field must be an integer in [-2147483648, 2147483647]"
        self._pwm_right = value

    @property
    def aim_gps_lng(self):
        """Message field 'aim_gps_lng'."""
        return self._aim_gps_lng

    @aim_gps_lng.setter
    def aim_gps_lng(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'aim_gps_lng' field must be of type 'float'"
        self._aim_gps_lng = value

    @property
    def aim_gps_lat(self):
        """Message field 'aim_gps_lat'."""
        return self._aim_gps_lat

    @aim_gps_lat.setter
    def aim_gps_lat(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'aim_gps_lat' field must be of type 'float'"
        self._aim_gps_lat = value

    @property
    def fpv_gps_lng(self):
        """Message field 'fpv_gps_lng'."""
        return self._fpv_gps_lng

    @fpv_gps_lng.setter
    def fpv_gps_lng(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'fpv_gps_lng' field must be of type 'float'"
        self._fpv_gps_lng = value

    @property
    def fpv_gps_lat(self):
        """Message field 'fpv_gps_lat'."""
        return self._fpv_gps_lat

    @fpv_gps_lat.setter
    def fpv_gps_lat(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'fpv_gps_lat' field must be of type 'float'"
        self._fpv_gps_lat = value

    @property
    def fpv_gps_hight(self):
        """Message field 'fpv_gps_hight'."""
        return self._fpv_gps_hight

    @fpv_gps_hight.setter
    def fpv_gps_hight(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'fpv_gps_hight' field must be of type 'float'"
        self._fpv_gps_hight = value

    @property
    def fpv_gps_face(self):
        """Message field 'fpv_gps_face'."""
        return self._fpv_gps_face

    @fpv_gps_face.setter
    def fpv_gps_face(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'fpv_gps_face' field must be of type 'float'"
        self._fpv_gps_face = value

    @property
    def manual_fpv_rol(self):
        """Message field 'manual_fpv_rol'."""
        return self._manual_fpv_rol

    @manual_fpv_rol.setter
    def manual_fpv_rol(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'manual_fpv_rol' field must be of type 'float'"
        self._manual_fpv_rol = value

    @property
    def manual_fpv_pit(self):
        """Message field 'manual_fpv_pit'."""
        return self._manual_fpv_pit

    @manual_fpv_pit.setter
    def manual_fpv_pit(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'manual_fpv_pit' field must be of type 'float'"
        self._manual_fpv_pit = value

    @property
    def manual_fpv_yaw(self):
        """Message field 'manual_fpv_yaw'."""
        return self._manual_fpv_yaw

    @manual_fpv_yaw.setter
    def manual_fpv_yaw(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'manual_fpv_yaw' field must be of type 'float'"
        self._manual_fpv_yaw = value

    @property
    def manual_fpv_thr(self):
        """Message field 'manual_fpv_thr'."""
        return self._manual_fpv_thr

    @manual_fpv_thr.setter
    def manual_fpv_thr(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'manual_fpv_thr' field must be of type 'float'"
        self._manual_fpv_thr = value

    @property
    def auto_fpv_rol(self):
        """Message field 'auto_fpv_rol'."""
        return self._auto_fpv_rol

    @auto_fpv_rol.setter
    def auto_fpv_rol(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'auto_fpv_rol' field must be of type 'float'"
        self._auto_fpv_rol = value

    @property
    def auto_fpv_pit(self):
        """Message field 'auto_fpv_pit'."""
        return self._auto_fpv_pit

    @auto_fpv_pit.setter
    def auto_fpv_pit(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'auto_fpv_pit' field must be of type 'float'"
        self._auto_fpv_pit = value

    @property
    def auto_fpv_yaw(self):
        """Message field 'auto_fpv_yaw'."""
        return self._auto_fpv_yaw

    @auto_fpv_yaw.setter
    def auto_fpv_yaw(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'auto_fpv_yaw' field must be of type 'float'"
        self._auto_fpv_yaw = value

    @property
    def auto_fpv_thr(self):
        """Message field 'auto_fpv_thr'."""
        return self._auto_fpv_thr

    @auto_fpv_thr.setter
    def auto_fpv_thr(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'auto_fpv_thr' field must be of type 'float'"
        self._auto_fpv_thr = value

    @property
    def control_model(self):
        """Message field 'control_model'."""
        return self._control_model

    @control_model.setter
    def control_model(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'control_model' field must be of type 'int'"
            assert value >= -2147483648 and value < 2147483648, \
                "The 'control_model' field must be an integer in [-2147483648, 2147483647]"
        self._control_model = value

    @property
    def fpv_model(self):
        """Message field 'fpv_model'."""
        return self._fpv_model

    @fpv_model.setter
    def fpv_model(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'fpv_model' field must be of type 'int'"
            assert value >= -2147483648 and value < 2147483648, \
                "The 'fpv_model' field must be an integer in [-2147483648, 2147483647]"
        self._fpv_model = value
