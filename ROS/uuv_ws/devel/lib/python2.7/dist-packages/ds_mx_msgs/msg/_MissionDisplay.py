# This Python file uses the following encoding: utf-8
"""autogenerated by genpy from ds_mx_msgs/MissionDisplay.msg. Do not edit."""
import codecs
import sys
python3 = True if sys.hexversion > 0x03000000 else False
import genpy
import struct

import ds_mx_msgs.msg

class MissionDisplay(genpy.Message):
  _md5sum = "8519cea0fd55c3a90b83ceb74bd96ef3"
  _type = "ds_mx_msgs/MissionDisplay"
  _has_header = False  # flag to mark the presence of a Header object
  _full_text = """
# This message is simply a list of things to draw.  Individual tasks can draw
# as many or as few elements as they like.
MissionElementDisplay[] elements
================================================================================
MSG: ds_mx_msgs/MissionElementDisplay
# This includes instructions on how to draw a single mission element
string role
string label         # An annotation label to add; generally blank
string wellknowntext # Well-known text, ALWAYS in lat/lon;
                     # see https://en.wikipedia.org/wiki/Well-known_text_representation_of_geometry
                     # Currently, only Point, LineString, and Polygon are supported
uint8[16] task_uuid

# Numbers are assigned somewhat randomly
string ROLE_POINT_LAUNCH="launch"
string ROLE_IDLE="idle"
string ROLE_JOYSTICK="joystick"

string ROLE_TRACKLINE="trackline"
string ROLE_TRACKLINE_CONNECTING="connecting_trackline"
string ROLE_TRACKLINE_COMPLETED="completed_trackline"
string ROLE_TRACKLINE_CURRENT="current_trackline"

string ROLE_OPERATING_AREA="operating_area"

string ROLE_GEOFENCE="geofence"
string ROLE_LOITER="loiter"
string ROLE_MANUAL="manual"
"""
  __slots__ = ['elements']
  _slot_types = ['ds_mx_msgs/MissionElementDisplay[]']

  def __init__(self, *args, **kwds):
    """
    Constructor. Any message fields that are implicitly/explicitly
    set to None will be assigned a default value. The recommend
    use is keyword arguments as this is more robust to future message
    changes.  You cannot mix in-order arguments and keyword arguments.

    The available fields are:
       elements

    :param args: complete set of field values, in .msg order
    :param kwds: use keyword arguments corresponding to message field names
    to set specific fields.
    """
    if args or kwds:
      super(MissionDisplay, self).__init__(*args, **kwds)
      # message fields cannot be None, assign default values for those that are
      if self.elements is None:
        self.elements = []
    else:
      self.elements = []

  def _get_types(self):
    """
    internal API method
    """
    return self._slot_types

  def serialize(self, buff):
    """
    serialize message into buffer
    :param buff: buffer, ``StringIO``
    """
    try:
      length = len(self.elements)
      buff.write(_struct_I.pack(length))
      for val1 in self.elements:
        _x = val1.role
        length = len(_x)
        if python3 or type(_x) == unicode:
          _x = _x.encode('utf-8')
          length = len(_x)
        buff.write(struct.Struct('<I%ss'%length).pack(length, _x))
        _x = val1.label
        length = len(_x)
        if python3 or type(_x) == unicode:
          _x = _x.encode('utf-8')
          length = len(_x)
        buff.write(struct.Struct('<I%ss'%length).pack(length, _x))
        _x = val1.wellknowntext
        length = len(_x)
        if python3 or type(_x) == unicode:
          _x = _x.encode('utf-8')
          length = len(_x)
        buff.write(struct.Struct('<I%ss'%length).pack(length, _x))
        _x = val1.task_uuid
        # - if encoded as a list instead, serialize as bytes instead of string
        if type(_x) in [list, tuple]:
          buff.write(_get_struct_16B().pack(*_x))
        else:
          buff.write(_get_struct_16s().pack(_x))
    except struct.error as se: self._check_types(struct.error("%s: '%s' when writing '%s'" % (type(se), str(se), str(locals().get('_x', self)))))
    except TypeError as te: self._check_types(ValueError("%s: '%s' when writing '%s'" % (type(te), str(te), str(locals().get('_x', self)))))

  def deserialize(self, str):
    """
    unpack serialized message in str into this message instance
    :param str: byte array of serialized message, ``str``
    """
    if python3:
      codecs.lookup_error("rosmsg").msg_type = self._type
    try:
      if self.elements is None:
        self.elements = None
      end = 0
      start = end
      end += 4
      (length,) = _struct_I.unpack(str[start:end])
      self.elements = []
      for i in range(0, length):
        val1 = ds_mx_msgs.msg.MissionElementDisplay()
        start = end
        end += 4
        (length,) = _struct_I.unpack(str[start:end])
        start = end
        end += length
        if python3:
          val1.role = str[start:end].decode('utf-8', 'rosmsg')
        else:
          val1.role = str[start:end]
        start = end
        end += 4
        (length,) = _struct_I.unpack(str[start:end])
        start = end
        end += length
        if python3:
          val1.label = str[start:end].decode('utf-8', 'rosmsg')
        else:
          val1.label = str[start:end]
        start = end
        end += 4
        (length,) = _struct_I.unpack(str[start:end])
        start = end
        end += length
        if python3:
          val1.wellknowntext = str[start:end].decode('utf-8', 'rosmsg')
        else:
          val1.wellknowntext = str[start:end]
        start = end
        end += 16
        val1.task_uuid = str[start:end]
        self.elements.append(val1)
      return self
    except struct.error as e:
      raise genpy.DeserializationError(e)  # most likely buffer underfill


  def serialize_numpy(self, buff, numpy):
    """
    serialize message with numpy array types into buffer
    :param buff: buffer, ``StringIO``
    :param numpy: numpy python module
    """
    try:
      length = len(self.elements)
      buff.write(_struct_I.pack(length))
      for val1 in self.elements:
        _x = val1.role
        length = len(_x)
        if python3 or type(_x) == unicode:
          _x = _x.encode('utf-8')
          length = len(_x)
        buff.write(struct.Struct('<I%ss'%length).pack(length, _x))
        _x = val1.label
        length = len(_x)
        if python3 or type(_x) == unicode:
          _x = _x.encode('utf-8')
          length = len(_x)
        buff.write(struct.Struct('<I%ss'%length).pack(length, _x))
        _x = val1.wellknowntext
        length = len(_x)
        if python3 or type(_x) == unicode:
          _x = _x.encode('utf-8')
          length = len(_x)
        buff.write(struct.Struct('<I%ss'%length).pack(length, _x))
        _x = val1.task_uuid
        # - if encoded as a list instead, serialize as bytes instead of string
        if type(_x) in [list, tuple]:
          buff.write(_get_struct_16B().pack(*_x))
        else:
          buff.write(_get_struct_16s().pack(_x))
    except struct.error as se: self._check_types(struct.error("%s: '%s' when writing '%s'" % (type(se), str(se), str(locals().get('_x', self)))))
    except TypeError as te: self._check_types(ValueError("%s: '%s' when writing '%s'" % (type(te), str(te), str(locals().get('_x', self)))))

  def deserialize_numpy(self, str, numpy):
    """
    unpack serialized message in str into this message instance using numpy for array types
    :param str: byte array of serialized message, ``str``
    :param numpy: numpy python module
    """
    if python3:
      codecs.lookup_error("rosmsg").msg_type = self._type
    try:
      if self.elements is None:
        self.elements = None
      end = 0
      start = end
      end += 4
      (length,) = _struct_I.unpack(str[start:end])
      self.elements = []
      for i in range(0, length):
        val1 = ds_mx_msgs.msg.MissionElementDisplay()
        start = end
        end += 4
        (length,) = _struct_I.unpack(str[start:end])
        start = end
        end += length
        if python3:
          val1.role = str[start:end].decode('utf-8', 'rosmsg')
        else:
          val1.role = str[start:end]
        start = end
        end += 4
        (length,) = _struct_I.unpack(str[start:end])
        start = end
        end += length
        if python3:
          val1.label = str[start:end].decode('utf-8', 'rosmsg')
        else:
          val1.label = str[start:end]
        start = end
        end += 4
        (length,) = _struct_I.unpack(str[start:end])
        start = end
        end += length
        if python3:
          val1.wellknowntext = str[start:end].decode('utf-8', 'rosmsg')
        else:
          val1.wellknowntext = str[start:end]
        start = end
        end += 16
        val1.task_uuid = str[start:end]
        self.elements.append(val1)
      return self
    except struct.error as e:
      raise genpy.DeserializationError(e)  # most likely buffer underfill

_struct_I = genpy.struct_I
def _get_struct_I():
    global _struct_I
    return _struct_I
_struct_16B = None
def _get_struct_16B():
    global _struct_16B
    if _struct_16B is None:
        _struct_16B = struct.Struct("<16B")
    return _struct_16B
_struct_16s = None
def _get_struct_16s():
    global _struct_16s
    if _struct_16s is None:
        _struct_16s = struct.Struct("<16s")
    return _struct_16s