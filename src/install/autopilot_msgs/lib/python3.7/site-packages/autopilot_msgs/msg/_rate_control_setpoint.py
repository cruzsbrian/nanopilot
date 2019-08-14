# generated from rosidl_generator_py/resource/_idl.py.em
# with input from autopilot_msgs:msg/RateControlSetpoint.idl
# generated code does not contain a copyright notice


# Import statements for member types

import rosidl_parser.definition  # noqa: E402, I100


class Metaclass_RateControlSetpoint(type):
    """Metaclass of message 'RateControlSetpoint'."""

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
                'autopilot_msgs.msg.RateControlSetpoint')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__msg__rate_control_setpoint
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__msg__rate_control_setpoint
            cls._CONVERT_TO_PY = module.convert_to_py_msg__msg__rate_control_setpoint
            cls._TYPE_SUPPORT = module.type_support_msg__msg__rate_control_setpoint
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__msg__rate_control_setpoint

            from autopilot_msgs.msg import ActuatorPositions
            if ActuatorPositions.__class__._TYPE_SUPPORT is None:
                ActuatorPositions.__class__.__import_type_support__()

            from geometry_msgs.msg import Vector3
            if Vector3.__class__._TYPE_SUPPORT is None:
                Vector3.__class__.__import_type_support__()

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


class RateControlSetpoint(metaclass=Metaclass_RateControlSetpoint):
    """Message class 'RateControlSetpoint'."""

    __slots__ = [
        '_header',
        '_rate_control_setpoint',
        '_feed_forward_torque',
        '_force',
        '_actuators',
    ]

    _fields_and_field_types = {
        'header': 'std_msgs/Header',
        'rate_control_setpoint': 'geometry_msgs/Vector3',
        'feed_forward_torque': 'geometry_msgs/Vector3',
        'force': 'geometry_msgs/Vector3',
        'actuators': 'autopilot_msgs/ActuatorPositions',
    }

    SLOT_TYPES = (
        rosidl_parser.definition.NamespacedType(['std_msgs', 'msg'], 'Header'),  # noqa: E501
        rosidl_parser.definition.NamespacedType(['geometry_msgs', 'msg'], 'Vector3'),  # noqa: E501
        rosidl_parser.definition.NamespacedType(['geometry_msgs', 'msg'], 'Vector3'),  # noqa: E501
        rosidl_parser.definition.NamespacedType(['geometry_msgs', 'msg'], 'Vector3'),  # noqa: E501
        rosidl_parser.definition.NamespacedType(['autopilot_msgs', 'msg'], 'ActuatorPositions'),  # noqa: E501
    )

    def __init__(self, **kwargs):
        assert all('_' + key in self.__slots__ for key in kwargs.keys()), \
            'Invalid arguments passed to constructor: %s' % \
            ', '.join(sorted(k for k in kwargs.keys() if '_' + k not in self.__slots__))
        from std_msgs.msg import Header
        self.header = kwargs.get('header', Header())
        from geometry_msgs.msg import Vector3
        self.rate_control_setpoint = kwargs.get('rate_control_setpoint', Vector3())
        from geometry_msgs.msg import Vector3
        self.feed_forward_torque = kwargs.get('feed_forward_torque', Vector3())
        from geometry_msgs.msg import Vector3
        self.force = kwargs.get('force', Vector3())
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
        if self.header != other.header:
            return False
        if self.rate_control_setpoint != other.rate_control_setpoint:
            return False
        if self.feed_forward_torque != other.feed_forward_torque:
            return False
        if self.force != other.force:
            return False
        if self.actuators != other.actuators:
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
    def rate_control_setpoint(self):
        """Message field 'rate_control_setpoint'."""
        return self._rate_control_setpoint

    @rate_control_setpoint.setter
    def rate_control_setpoint(self, value):
        if __debug__:
            from geometry_msgs.msg import Vector3
            assert \
                isinstance(value, Vector3), \
                "The 'rate_control_setpoint' field must be a sub message of type 'Vector3'"
        self._rate_control_setpoint = value

    @property
    def feed_forward_torque(self):
        """Message field 'feed_forward_torque'."""
        return self._feed_forward_torque

    @feed_forward_torque.setter
    def feed_forward_torque(self, value):
        if __debug__:
            from geometry_msgs.msg import Vector3
            assert \
                isinstance(value, Vector3), \
                "The 'feed_forward_torque' field must be a sub message of type 'Vector3'"
        self._feed_forward_torque = value

    @property
    def force(self):
        """Message field 'force'."""
        return self._force

    @force.setter
    def force(self, value):
        if __debug__:
            from geometry_msgs.msg import Vector3
            assert \
                isinstance(value, Vector3), \
                "The 'force' field must be a sub message of type 'Vector3'"
        self._force = value

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
