# generated from rosidl_generator_py/resource/_idl.py.em
# with input from sentry_interface:msg/SentryStatus.idl
# generated code does not contain a copyright notice


# Import statements for member types

import builtins  # noqa: E402, I100

import rosidl_parser.definition  # noqa: E402, I100


class Metaclass_SentryStatus(type):
    """Metaclass of message 'SentryStatus'."""

    _CREATE_ROS_MESSAGE = None
    _CONVERT_FROM_PY = None
    _CONVERT_TO_PY = None
    _DESTROY_ROS_MESSAGE = None
    _TYPE_SUPPORT = None

    __constants = {
        'STATUS_ATTACKING': 3,
        'STATUS_RETREATING': 4,
        'STATUS_DEFENDING': 5,
        'STATUS_HEALING': 6,
    }

    @classmethod
    def __import_type_support__(cls):
        try:
            from rosidl_generator_py import import_type_support
            module = import_type_support('sentry_interface')
        except ImportError:
            import logging
            import traceback
            logger = logging.getLogger(
                'sentry_interface.msg.SentryStatus')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__msg__sentry_status
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__msg__sentry_status
            cls._CONVERT_TO_PY = module.convert_to_py_msg__msg__sentry_status
            cls._TYPE_SUPPORT = module.type_support_msg__msg__sentry_status
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__msg__sentry_status

    @classmethod
    def __prepare__(cls, name, bases, **kwargs):
        # list constant names here so that they appear in the help text of
        # the message class under "Data and other attributes defined here:"
        # as well as populate each message instance
        return {
            'STATUS_ATTACKING': cls.__constants['STATUS_ATTACKING'],
            'STATUS_RETREATING': cls.__constants['STATUS_RETREATING'],
            'STATUS_DEFENDING': cls.__constants['STATUS_DEFENDING'],
            'STATUS_HEALING': cls.__constants['STATUS_HEALING'],
        }

    @property
    def STATUS_ATTACKING(self):
        """Message constant 'STATUS_ATTACKING'."""
        return Metaclass_SentryStatus.__constants['STATUS_ATTACKING']

    @property
    def STATUS_RETREATING(self):
        """Message constant 'STATUS_RETREATING'."""
        return Metaclass_SentryStatus.__constants['STATUS_RETREATING']

    @property
    def STATUS_DEFENDING(self):
        """Message constant 'STATUS_DEFENDING'."""
        return Metaclass_SentryStatus.__constants['STATUS_DEFENDING']

    @property
    def STATUS_HEALING(self):
        """Message constant 'STATUS_HEALING'."""
        return Metaclass_SentryStatus.__constants['STATUS_HEALING']


class SentryStatus(metaclass=Metaclass_SentryStatus):
    """
    Message class 'SentryStatus'.

    Constants:
      STATUS_ATTACKING
      STATUS_RETREATING
      STATUS_DEFENDING
      STATUS_HEALING
    """

    __slots__ = [
        '_game_stage',
        '_gain_area_detected',
        '_gain_area_status',
        '_supply_area_status',
        '_stage_time_remain',
        '_current_hp',
        '_rotate_flag',
    ]

    _fields_and_field_types = {
        'game_stage': 'int8',
        'gain_area_detected': 'int8',
        'gain_area_status': 'int8',
        'supply_area_status': 'int8',
        'stage_time_remain': 'int16',
        'current_hp': 'int16',
        'rotate_flag': 'int16',
    }

    SLOT_TYPES = (
        rosidl_parser.definition.BasicType('int8'),  # noqa: E501
        rosidl_parser.definition.BasicType('int8'),  # noqa: E501
        rosidl_parser.definition.BasicType('int8'),  # noqa: E501
        rosidl_parser.definition.BasicType('int8'),  # noqa: E501
        rosidl_parser.definition.BasicType('int16'),  # noqa: E501
        rosidl_parser.definition.BasicType('int16'),  # noqa: E501
        rosidl_parser.definition.BasicType('int16'),  # noqa: E501
    )

    def __init__(self, **kwargs):
        assert all('_' + key in self.__slots__ for key in kwargs.keys()), \
            'Invalid arguments passed to constructor: %s' % \
            ', '.join(sorted(k for k in kwargs.keys() if '_' + k not in self.__slots__))
        self.game_stage = kwargs.get('game_stage', int())
        self.gain_area_detected = kwargs.get('gain_area_detected', int())
        self.gain_area_status = kwargs.get('gain_area_status', int())
        self.supply_area_status = kwargs.get('supply_area_status', int())
        self.stage_time_remain = kwargs.get('stage_time_remain', int())
        self.current_hp = kwargs.get('current_hp', int())
        self.rotate_flag = kwargs.get('rotate_flag', int())

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
        if self.game_stage != other.game_stage:
            return False
        if self.gain_area_detected != other.gain_area_detected:
            return False
        if self.gain_area_status != other.gain_area_status:
            return False
        if self.supply_area_status != other.supply_area_status:
            return False
        if self.stage_time_remain != other.stage_time_remain:
            return False
        if self.current_hp != other.current_hp:
            return False
        if self.rotate_flag != other.rotate_flag:
            return False
        return True

    @classmethod
    def get_fields_and_field_types(cls):
        from copy import copy
        return copy(cls._fields_and_field_types)

    @builtins.property
    def game_stage(self):
        """Message field 'game_stage'."""
        return self._game_stage

    @game_stage.setter
    def game_stage(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'game_stage' field must be of type 'int'"
            assert value >= -128 and value < 128, \
                "The 'game_stage' field must be an integer in [-128, 127]"
        self._game_stage = value

    @builtins.property
    def gain_area_detected(self):
        """Message field 'gain_area_detected'."""
        return self._gain_area_detected

    @gain_area_detected.setter
    def gain_area_detected(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'gain_area_detected' field must be of type 'int'"
            assert value >= -128 and value < 128, \
                "The 'gain_area_detected' field must be an integer in [-128, 127]"
        self._gain_area_detected = value

    @builtins.property
    def gain_area_status(self):
        """Message field 'gain_area_status'."""
        return self._gain_area_status

    @gain_area_status.setter
    def gain_area_status(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'gain_area_status' field must be of type 'int'"
            assert value >= -128 and value < 128, \
                "The 'gain_area_status' field must be an integer in [-128, 127]"
        self._gain_area_status = value

    @builtins.property
    def supply_area_status(self):
        """Message field 'supply_area_status'."""
        return self._supply_area_status

    @supply_area_status.setter
    def supply_area_status(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'supply_area_status' field must be of type 'int'"
            assert value >= -128 and value < 128, \
                "The 'supply_area_status' field must be an integer in [-128, 127]"
        self._supply_area_status = value

    @builtins.property
    def stage_time_remain(self):
        """Message field 'stage_time_remain'."""
        return self._stage_time_remain

    @stage_time_remain.setter
    def stage_time_remain(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'stage_time_remain' field must be of type 'int'"
            assert value >= -32768 and value < 32768, \
                "The 'stage_time_remain' field must be an integer in [-32768, 32767]"
        self._stage_time_remain = value

    @builtins.property
    def current_hp(self):
        """Message field 'current_hp'."""
        return self._current_hp

    @current_hp.setter
    def current_hp(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'current_hp' field must be of type 'int'"
            assert value >= -32768 and value < 32768, \
                "The 'current_hp' field must be an integer in [-32768, 32767]"
        self._current_hp = value

    @builtins.property
    def rotate_flag(self):
        """Message field 'rotate_flag'."""
        return self._rotate_flag

    @rotate_flag.setter
    def rotate_flag(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'rotate_flag' field must be of type 'int'"
            assert value >= -32768 and value < 32768, \
                "The 'rotate_flag' field must be an integer in [-32768, 32767]"
        self._rotate_flag = value
