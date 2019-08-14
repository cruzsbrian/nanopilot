# generated from rosidl_generator_py/resource/_idl.py.em
# with input from autopilot_msgs:srv/SendMsgpackConfig.idl
# generated code does not contain a copyright notice


# Import statements for member types

import rosidl_parser.definition  # noqa: E402, I100


class Metaclass_SendMsgpackConfig_Request(type):
    """Metaclass of message 'SendMsgpackConfig_Request'."""

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
                'autopilot_msgs.srv.SendMsgpackConfig_Request')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__srv__send_msgpack_config__request
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__srv__send_msgpack_config__request
            cls._CONVERT_TO_PY = module.convert_to_py_msg__srv__send_msgpack_config__request
            cls._TYPE_SUPPORT = module.type_support_msg__srv__send_msgpack_config__request
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__srv__send_msgpack_config__request

    @classmethod
    def __prepare__(cls, name, bases, **kwargs):
        # list constant names here so that they appear in the help text of
        # the message class under "Data and other attributes defined here:"
        # as well as populate each message instance
        return {
        }


class SendMsgpackConfig_Request(metaclass=Metaclass_SendMsgpackConfig_Request):
    """Message class 'SendMsgpackConfig_Request'."""

    __slots__ = [
        '_msgpack_config',
    ]

    _fields_and_field_types = {
        'msgpack_config': 'sequence<octet>',
    }

    SLOT_TYPES = (
        rosidl_parser.definition.UnboundedSequence(rosidl_parser.definition.BasicType('octet')),  # noqa: E501
    )

    def __init__(self, **kwargs):
        assert all('_' + key in self.__slots__ for key in kwargs.keys()), \
            'Invalid arguments passed to constructor: %s' % \
            ', '.join(sorted(k for k in kwargs.keys() if '_' + k not in self.__slots__))
        self.msgpack_config = kwargs.get('msgpack_config', [])

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
        if self.msgpack_config != other.msgpack_config:
            return False
        return True

    @classmethod
    def get_fields_and_field_types(cls):
        from copy import copy
        return copy(cls._fields_and_field_types)

    @property
    def msgpack_config(self):
        """Message field 'msgpack_config'."""
        return self._msgpack_config

    @msgpack_config.setter
    def msgpack_config(self, value):
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
                 all(isinstance(v, bytes) for v in value) and
                 True), \
                "The 'msgpack_config' field must be a set or sequence and each value of type 'bytes'"
        self._msgpack_config = value


# Import statements for member types

# already imported above
# import rosidl_parser.definition


class Metaclass_SendMsgpackConfig_Response(type):
    """Metaclass of message 'SendMsgpackConfig_Response'."""

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
                'autopilot_msgs.srv.SendMsgpackConfig_Response')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__srv__send_msgpack_config__response
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__srv__send_msgpack_config__response
            cls._CONVERT_TO_PY = module.convert_to_py_msg__srv__send_msgpack_config__response
            cls._TYPE_SUPPORT = module.type_support_msg__srv__send_msgpack_config__response
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__srv__send_msgpack_config__response

    @classmethod
    def __prepare__(cls, name, bases, **kwargs):
        # list constant names here so that they appear in the help text of
        # the message class under "Data and other attributes defined here:"
        # as well as populate each message instance
        return {
        }


class SendMsgpackConfig_Response(metaclass=Metaclass_SendMsgpackConfig_Response):
    """Message class 'SendMsgpackConfig_Response'."""

    __slots__ = [
        '_success',
        '_error_message',
    ]

    _fields_and_field_types = {
        'success': 'boolean',
        'error_message': 'string',
    }

    SLOT_TYPES = (
        rosidl_parser.definition.BasicType('boolean'),  # noqa: E501
        rosidl_parser.definition.UnboundedString(),  # noqa: E501
    )

    def __init__(self, **kwargs):
        assert all('_' + key in self.__slots__ for key in kwargs.keys()), \
            'Invalid arguments passed to constructor: %s' % \
            ', '.join(sorted(k for k in kwargs.keys() if '_' + k not in self.__slots__))
        self.success = kwargs.get('success', bool())
        self.error_message = kwargs.get('error_message', str())

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
        if self.success != other.success:
            return False
        if self.error_message != other.error_message:
            return False
        return True

    @classmethod
    def get_fields_and_field_types(cls):
        from copy import copy
        return copy(cls._fields_and_field_types)

    @property
    def success(self):
        """Message field 'success'."""
        return self._success

    @success.setter
    def success(self, value):
        if __debug__:
            assert \
                isinstance(value, bool), \
                "The 'success' field must be of type 'bool'"
        self._success = value

    @property
    def error_message(self):
        """Message field 'error_message'."""
        return self._error_message

    @error_message.setter
    def error_message(self, value):
        if __debug__:
            assert \
                isinstance(value, str), \
                "The 'error_message' field must be of type 'str'"
        self._error_message = value


class Metaclass_SendMsgpackConfig(type):
    """Metaclass of service 'SendMsgpackConfig'."""

    _TYPE_SUPPORT = None

    @classmethod
    def __import_type_support__(cls):
        try:
            from rosidl_generator_py import import_type_support
            module = import_type_support('autopilot_msgs')
        except ImportError:
            import logging
            import traceback
            logger = logging.getLogger(
                'autopilot_msgs.srv.SendMsgpackConfig')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._TYPE_SUPPORT = module.type_support_srv__srv__send_msgpack_config

            from autopilot_msgs.srv import _send_msgpack_config
            if _send_msgpack_config.Metaclass_SendMsgpackConfig_Request._TYPE_SUPPORT is None:
                _send_msgpack_config.Metaclass_SendMsgpackConfig_Request.__import_type_support__()
            if _send_msgpack_config.Metaclass_SendMsgpackConfig_Response._TYPE_SUPPORT is None:
                _send_msgpack_config.Metaclass_SendMsgpackConfig_Response.__import_type_support__()


class SendMsgpackConfig(metaclass=Metaclass_SendMsgpackConfig):
    from autopilot_msgs.srv._send_msgpack_config import SendMsgpackConfig_Request as Request
    from autopilot_msgs.srv._send_msgpack_config import SendMsgpackConfig_Response as Response

    def __init__(self):
        raise NotImplementedError('Service classes can not be instantiated')
