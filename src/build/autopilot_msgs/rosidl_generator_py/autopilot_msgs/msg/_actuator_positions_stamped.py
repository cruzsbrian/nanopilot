# generated from rosidl_generator_py/resource/_idl.py.em
# with input from autopilot_msgs:msg/ActuatorPositionsStamped.idl
# generated code does not contain a copyright notice


# Import statements for member types

import rosidl_parser.definition  # noqa: E402, I100


class Metaclass_ActuatorPositionsStamped(type):
    """Metaclass of message 'ActuatorPositionsStamped'."""

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
            module = import_type_support('autopilot_msgs')
        except ImportError:
            import logging
            import traceback
            logger = logging.getLogger(
                'autopilot_msgs.msg.ActuatorPositionsStamped')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__msg__actuator_positions_stamped
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__msg__actuator_positions_stamped
            cls._CONVERT_TO_PY = module.convert_to_py_msg__msg__actuator_positions_stamped
            cls._TYPE_SUPPORT = module.type_support_msg__msg__actuator_positions_stamped
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__msg__actuator_positions_stamped

            from autopilot_msgs.msg import ActuatorPositions
            if ActuatorPositions.__class__._TYPE_SUPPORT is None:
                ActuatorPositions.__class__.__import_type_support__()

            from builtin_interfaces.msg import Time
            if Time.__class__._TYPE_SUPPORT is None:
                Time.__class__.__import_type_support__()

    @classmethod
    def __prepare__(cls, name, bases, **kwargs):
        # list constant names here so that they appear in the help text of
        # the message class under "Data and other attributes defined here:"
        # as well as populate each message instance
        return {
        }


class ActuatorPositionsStamped(metaclass=Metaclass_ActuatorPositionsStamped):
    """Message class 'ActuatorPositionsStamped'."""

    __slots__ = [
        '_stamp',
        '_actuators',
    ]

    _fields_and_field_types = {
        'stamp': 'builtin_interfaces/Time',
        'actuators': 'autopilot_msgs/ActuatorPositions',
    }

    SLOT_TYPES = (
        rosidl_parser.definition.NamespacedType(['builtin_interfaces', 'msg'], 'Time'),  # noqa: E501
        rosidl_parser.definition.NamespacedType(['autopilot_msgs', 'msg'], 'ActuatorPositions'),  # noqa: E501
    )

    def __init__(self, **kwargs):
        assert all('_' + key in self.__slots__ for key in kwargs.keys()), \
            'Invalid arguments passed to constructor: %s' % \
            ', '.join(sorted(k for k in kwargs.keys() if '_' + k not in self.__slots__))
        from builtin_interfaces.msg import Time
        self.stamp = kwargs.get('stamp', Time())
        from autopilot_msgs.msg import ActuatorPositions
        self.actuators = kwargs.get('actuators', ActuatorPositions())

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
        if self.actuators != other.actuators:
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
    def actuators(self):
        """Message field 'actuators'."""
        return self._actuators

    @actuators.setter
    def actuators(self, value):
        if __debug__:
            from autopilot_msgs.msg import ActuatorPositions
            assert \
                isinstance(value, ActuatorPositions), \
                "The 'actuators' field must be a sub message of type 'ActuatorPositions'"
        self._actuators = value
