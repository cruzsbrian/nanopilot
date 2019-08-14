# generated from rosidl_generator_py/resource/_idl.py.em
# with input from autopilot_msgs:msg/AttitudeTrajectorySetpoint.idl
# generated code does not contain a copyright notice


# Import statements for member types

import rosidl_parser.definition  # noqa: E402, I100


class Metaclass_AttitudeTrajectorySetpoint(type):
    """Metaclass of message 'AttitudeTrajectorySetpoint'."""

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
                'autopilot_msgs.msg.AttitudeTrajectorySetpoint')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__msg__attitude_trajectory_setpoint
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__msg__attitude_trajectory_setpoint
            cls._CONVERT_TO_PY = module.convert_to_py_msg__msg__attitude_trajectory_setpoint
            cls._TYPE_SUPPORT = module.type_support_msg__msg__attitude_trajectory_setpoint
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__msg__attitude_trajectory_setpoint

            from geometry_msgs.msg import Quaternion
            if Quaternion.__class__._TYPE_SUPPORT is None:
                Quaternion.__class__.__import_type_support__()

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


class AttitudeTrajectorySetpoint(metaclass=Metaclass_AttitudeTrajectorySetpoint):
    """Message class 'AttitudeTrajectorySetpoint'."""

    __slots__ = [
        '_header',
        '_orientation',
        '_angular_rate',
        '_angular_acceleration',
        '_force',
    ]

    _fields_and_field_types = {
        'header': 'std_msgs/Header',
        'orientation': 'geometry_msgs/Quaternion',
        'angular_rate': 'geometry_msgs/Vector3',
        'angular_acceleration': 'geometry_msgs/Vector3',
        'force': 'geometry_msgs/Vector3',
    }

    SLOT_TYPES = (
        rosidl_parser.definition.NamespacedType(['std_msgs', 'msg'], 'Header'),  # noqa: E501
        rosidl_parser.definition.NamespacedType(['geometry_msgs', 'msg'], 'Quaternion'),  # noqa: E501
        rosidl_parser.definition.NamespacedType(['geometry_msgs', 'msg'], 'Vector3'),  # noqa: E501
        rosidl_parser.definition.NamespacedType(['geometry_msgs', 'msg'], 'Vector3'),  # noqa: E501
        rosidl_parser.definition.NamespacedType(['geometry_msgs', 'msg'], 'Vector3'),  # noqa: E501
    )

    def __init__(self, **kwargs):
        assert all('_' + key in self.__slots__ for key in kwargs.keys()), \
            'Invalid arguments passed to constructor: %s' % \
            ', '.join(sorted(k for k in kwargs.keys() if '_' + k not in self.__slots__))
        from std_msgs.msg import Header
        self.header = kwargs.get('header', Header())
        from geometry_msgs.msg import Quaternion
        self.orientation = kwargs.get('orientation', Quaternion())
        from geometry_msgs.msg import Vector3
        self.angular_rate = kwargs.get('angular_rate', Vector3())
        from geometry_msgs.msg import Vector3
        self.angular_acceleration = kwargs.get('angular_acceleration', Vector3())
        from geometry_msgs.msg import Vector3
        self.force = kwargs.get('force', Vector3())

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
        if self.orientation != other.orientation:
            return False
        if self.angular_rate != other.angular_rate:
            return False
        if self.angular_acceleration != other.angular_acceleration:
            return False
        if self.force != other.force:
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
    def orientation(self):
        """Message field 'orientation'."""
        return self._orientation

    @orientation.setter
    def orientation(self, value):
        if __debug__:
            from geometry_msgs.msg import Quaternion
            assert \
                isinstance(value, Quaternion), \
                "The 'orientation' field must be a sub message of type 'Quaternion'"
        self._orientation = value

    @property
    def angular_rate(self):
        """Message field 'angular_rate'."""
        return self._angular_rate

    @angular_rate.setter
    def angular_rate(self, value):
        if __debug__:
            from geometry_msgs.msg import Vector3
            assert \
                isinstance(value, Vector3), \
                "The 'angular_rate' field must be a sub message of type 'Vector3'"
        self._angular_rate = value

    @property
    def angular_acceleration(self):
        """Message field 'angular_acceleration'."""
        return self._angular_acceleration

    @angular_acceleration.setter
    def angular_acceleration(self, value):
        if __debug__:
            from geometry_msgs.msg import Vector3
            assert \
                isinstance(value, Vector3), \
                "The 'angular_acceleration' field must be a sub message of type 'Vector3'"
        self._angular_acceleration = value

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
