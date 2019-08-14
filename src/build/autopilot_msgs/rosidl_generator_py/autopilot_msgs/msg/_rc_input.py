# generated from rosidl_generator_py/resource/_idl.py.em
# with input from autopilot_msgs:msg/RCInput.idl
# generated code does not contain a copyright notice


# Import statements for member types

# Member 'channels'
import array  # noqa: E402, I100

import rosidl_parser.definition  # noqa: E402, I100


class Metaclass_RCInput(type):
    """Metaclass of message 'RCInput'."""

    _CREATE_ROS_MESSAGE = None
    _CONVERT_FROM_PY = None
    _CONVERT_TO_PY = None
    _DESTROY_ROS_MESSAGE = None
    _TYPE_SUPPORT = None

    __constants = {
        'MAX_NB_CHANNELS': 16,
    }

    @classmethod
    def __import_type_support__(cls):
        try:
            from rosidl_generator_py import import_type_support
            module = import_type_support('autopilot_msgs')
        except ImportError:
            import logging
            import traceback
            logger = logging.getLogger(
                'autopilot_msgs.msg.RCInput')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__msg__rc_input
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__msg__rc_input
            cls._CONVERT_TO_PY = module.convert_to_py_msg__msg__rc_input
            cls._TYPE_SUPPORT = module.type_support_msg__msg__rc_input
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__msg__rc_input

            from builtin_interfaces.msg import Time
            if Time.__class__._TYPE_SUPPORT is None:
                Time.__class__.__import_type_support__()

    @classmethod
    def __prepare__(cls, name, bases, **kwargs):
        # list constant names here so that they appear in the help text of
        # the message class under "Data and other attributes defined here:"
        # as well as populate each message instance
        return {
            'MAX_NB_CHANNELS': cls.__constants['MAX_NB_CHANNELS'],
        }

    @property
    def MAX_NB_CHANNELS(self):
        """Message constant 'MAX_NB_CHANNELS'."""
        return Metaclass_RCInput.__constants['MAX_NB_CHANNELS']


class RCInput(metaclass=Metaclass_RCInput):
    """
    Message class 'RCInput'.

    Constants:
      MAX_NB_CHANNELS
    """

    __slots__ = [
        '_stamp',
        '_channels',
        '_signal',
    ]

    _fields_and_field_types = {
        'stamp': 'builtin_interfaces/Time',
        'channels': 'sequence<float, 16>',
        'signal': 'boolean',
    }

    SLOT_TYPES = (
        rosidl_parser.definition.NamespacedType(['builtin_interfaces', 'msg'], 'Time'),  # noqa: E501
        rosidl_parser.definition.BoundedSequence(rosidl_parser.definition.BasicType('float'), 16),  # noqa: E501
        rosidl_parser.definition.BasicType('boolean'),  # noqa: E501
    )

    def __init__(self, **kwargs):
        assert all('_' + key in self.__slots__ for key in kwargs.keys()), \
            'Invalid arguments passed to constructor: %s' % \
            ', '.join(sorted(k for k in kwargs.keys() if '_' + k not in self.__slots__))
        from builtin_interfaces.msg import Time
        self.stamp = kwargs.get('stamp', Time())
        self.channels = array.array('f', kwargs.get('channels', []))
        self.signal = kwargs.get('signal', bool())

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
        if self.stamp != other.stamp:
            return False
        if self.channels != other.channels:
            return False
        if self.signal != other.signal:
            return False
        return True

    @classmethod
    def get_fields_and_field_types(cls):
        from copy import copy
        return copy(cls._fields_and_field_types)

    @property
    def stamp(self):
        """Message field 'stamp'."""
        return self._stamp

    @stamp.setter
    def stamp(self, value):
        if __debug__:
            from builtin_interfaces.msg import Time
            assert \
                isinstance(value, Time), \
                "The 'stamp' field must be a sub message of type 'Time'"
        self._stamp = value

    @property
    def channels(self):
        """Message field 'channels'."""
        return self._channels

    @channels.setter
    def channels(self, value):
        if isinstance(value, array.array):
            assert value.typecode == 'f', \
                "The 'channels' array.array() must have the type code of 'f'"
            assert len(value) <= 16, \
                "The 'channels' array.array() must have a size <= 16"
            self._channels = value
            return
        if __debug__:
            from collections.abc import Sequence
            from collections.abc import Set
            from collections import UserList
            from collections import UserString
            assert \
                ((isinstance(value, Sequence) or
                  isinstance(value, Set) or
                  isinstance(value, UserList)) and
                 not isinstance(value, str) and
                 not isinstance(value, UserString) and
                 len(value) <= 16 and
                 all(isinstance(v, float) for v in value) and
                 True), \
                "The 'channels' field must be a set or sequence with length <= 16 and each value of type 'float'"
        self._channels = array.array('f', value)

    @property
    def signal(self):
        """Message field 'signal'."""
        return self._signal

    @signal.setter
    def signal(self, value):
        if __debug__:
            assert \
                isinstance(value, bool), \
                "The 'signal' field must be of type 'bool'"
        self._signal = value
