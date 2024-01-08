# generated from rosidl_generator_py/resource/_idl.py.em
# with input from detection_interfaces:msg/PotholeCordinate.idl
# generated code does not contain a copyright notice


# Import statements for member types

import builtins  # noqa: E402, I100

import rosidl_parser.definition  # noqa: E402, I100


class Metaclass_PotholeCordinate(type):
    """Metaclass of message 'PotholeCordinate'."""

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
            module = import_type_support('detection_interfaces')
        except ImportError:
            import logging
            import traceback
            logger = logging.getLogger(
                'detection_interfaces.msg.PotholeCordinate')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__msg__pothole_cordinate
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__msg__pothole_cordinate
            cls._CONVERT_TO_PY = module.convert_to_py_msg__msg__pothole_cordinate
            cls._TYPE_SUPPORT = module.type_support_msg__msg__pothole_cordinate
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__msg__pothole_cordinate

    @classmethod
    def __prepare__(cls, name, bases, **kwargs):
        # list constant names here so that they appear in the help text of
        # the message class under "Data and other attributes defined here:"
        # as well as populate each message instance
        return {
        }


class PotholeCordinate(metaclass=Metaclass_PotholeCordinate):
    """Message class 'PotholeCordinate'."""

    __slots__ = [
        '_id_pothole',
        '_x_cordinate',
        '_y_cordinate',
    ]

    _fields_and_field_types = {
        'id_pothole': 'int64',
        'x_cordinate': 'int64',
        'y_cordinate': 'int64',
    }

    SLOT_TYPES = (
        rosidl_parser.definition.BasicType('int64'),  # noqa: E501
        rosidl_parser.definition.BasicType('int64'),  # noqa: E501
        rosidl_parser.definition.BasicType('int64'),  # noqa: E501
    )

    def __init__(self, **kwargs):
        assert all('_' + key in self.__slots__ for key in kwargs.keys()), \
            'Invalid arguments passed to constructor: %s' % \
            ', '.join(sorted(k for k in kwargs.keys() if '_' + k not in self.__slots__))
        self.id_pothole = kwargs.get('id_pothole', int())
        self.x_cordinate = kwargs.get('x_cordinate', int())
        self.y_cordinate = kwargs.get('y_cordinate', int())

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
        if self.id_pothole != other.id_pothole:
            return False
        if self.x_cordinate != other.x_cordinate:
            return False
        if self.y_cordinate != other.y_cordinate:
            return False
        return True

    @classmethod
    def get_fields_and_field_types(cls):
        from copy import copy
        return copy(cls._fields_and_field_types)

    @builtins.property
    def id_pothole(self):
        """Message field 'id_pothole'."""
        return self._id_pothole

    @id_pothole.setter
    def id_pothole(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'id_pothole' field must be of type 'int'"
            assert value >= -9223372036854775808 and value < 9223372036854775808, \
                "The 'id_pothole' field must be an integer in [-9223372036854775808, 9223372036854775807]"
        self._id_pothole = value

    @builtins.property
    def x_cordinate(self):
        """Message field 'x_cordinate'."""
        return self._x_cordinate

    @x_cordinate.setter
    def x_cordinate(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'x_cordinate' field must be of type 'int'"
            assert value >= -9223372036854775808 and value < 9223372036854775808, \
                "The 'x_cordinate' field must be an integer in [-9223372036854775808, 9223372036854775807]"
        self._x_cordinate = value

    @builtins.property
    def y_cordinate(self):
        """Message field 'y_cordinate'."""
        return self._y_cordinate

    @y_cordinate.setter
    def y_cordinate(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'y_cordinate' field must be of type 'int'"
            assert value >= -9223372036854775808 and value < 9223372036854775808, \
                "The 'y_cordinate' field must be an integer in [-9223372036854775808, 9223372036854775807]"
        self._y_cordinate = value
