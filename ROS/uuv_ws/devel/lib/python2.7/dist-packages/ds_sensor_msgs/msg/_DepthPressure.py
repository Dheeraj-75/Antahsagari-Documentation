# This Python file uses the following encoding: utf-8
"""autogenerated by genpy from ds_sensor_msgs/DepthPressure.msg. Do not edit."""
import codecs
import sys
python3 = True if sys.hexversion > 0x03000000 else False
import genpy
import struct

import ds_core_msgs.msg
import genpy
import std_msgs.msg

class DepthPressure(genpy.Message):
  _md5sum = "43226693cf1eb430cebe11aa0b75af8c"
  _type = "ds_sensor_msgs/DepthPressure"
  _has_header = True  # flag to mark the presence of a Header object
  _full_text = """# The standard 2-part DsHeader block
# This allows both a standard ROS header and DS-specific header blocks
# See HEADERS.md in ds_core_msgs for details
std_msgs/Header header
ds_core_msgs/DsHeader ds_header

# Pressure unit constants

float64 DEPTH_PRESSURE_NO_DATA=-9999.0

# Pressure unit for raw pressure value.

# Pressure unit is user defined - need external knowledge of
# conversion factor to decibar.
uint8 UNIT_PRESSURE_USER_DEFINED=0
# Standard units
uint8 UNIT_PRESSURE_PSI         = 1
uint8 UNIT_PRESSURE_DBAR        = 2
uint8 UNIT_PRESSURE_HPA         = 3
uint8 UNIT_PRESSURE_BAR         = 4
uint8 UNIT_PRESSURE_KPA         = 5
uint8 UNIT_PRESSURE_MPA         = 6
uint8 UNIT_PRESSURE_INHG        = 7
uint8 UNIT_PRESSURE_MMHG        = 8
uint8 UNIT_PRESSURE_MH2O        = 9

float64 DEFAULT_LATITUDE=35.0

# Tared pressure value. (in decibar)
# If 'tare' != DEPTH_PESSURE_NO_DATA, then this value is equal to "raw_pressure - tare"
# If 'tare' == DEPTH_PESSURE_NO_DATA, then 'tare' is effectively 0
float64 pressure
float64 pressure_covar

# Raw sensor measurement.  Units, etc, totally depend
# on the sensor.
#
# Final depth is:
# pressure_dbar = raw_sensor_to_dbar(raw) - pressure_tare_dbar
# depth = foffonoff_dbar_to_m(pressure_dbar, latitude)
float64 pressure_raw

# Units for the pressure value
uint8   pressure_raw_unit

# Tare value (in decibar)
float64 tare

# Latitude for Fofonoff calculation of depth.
float64 latitude

# Depth calculated from pressure and latitude.
# If latitude == DEPTH_PRESSURE_NO_DATA, then DEFAULT_LATITUDE is used
float64 depth

bool median_depth_filter_ok
float64[] depth_buffer
float64 median_depth
float64 median_tol
================================================================================
MSG: std_msgs/Header
# Standard metadata for higher-level stamped data types.
# This is generally used to communicate timestamped data 
# in a particular coordinate frame.
# 
# sequence ID: consecutively increasing ID 
uint32 seq
#Two-integer timestamp that is expressed as:
# * stamp.sec: seconds (stamp_secs) since epoch (in Python the variable is called 'secs')
# * stamp.nsec: nanoseconds since stamp_secs (in Python the variable is called 'nsecs')
# time-handling sugar is provided by the client library
time stamp
#Frame this data is associated with
string frame_id

================================================================================
MSG: ds_core_msgs/DsHeader
# This is half our standard header for ds_msgs; see
# HEADERS.md for details

# This header should ALWAYS be paired with a std_msgs/Header
# and should ALWAYS reference HEADERS.md.  If you're looking at this
# file to add headers to a type, you probably want to copy/paste
# the following block:
#
#     # The standard 2-part DsHeader block
#     # This allows both a standard ROS header and DS-specific header blocks
#     # See HEADERS.md in ds_core_msgs for details
#     std_msgs/Header header
#     ds_core_msgs/DsHeader ds_header
#

# Time data was received or sent out (i/o time)
time io_time

# Sensor source UUID
uint8[16] source_uuid

"""
  # Pseudo-constants
  DEPTH_PRESSURE_NO_DATA = -9999.0
  UNIT_PRESSURE_USER_DEFINED = 0
  UNIT_PRESSURE_PSI = 1
  UNIT_PRESSURE_DBAR = 2
  UNIT_PRESSURE_HPA = 3
  UNIT_PRESSURE_BAR = 4
  UNIT_PRESSURE_KPA = 5
  UNIT_PRESSURE_MPA = 6
  UNIT_PRESSURE_INHG = 7
  UNIT_PRESSURE_MMHG = 8
  UNIT_PRESSURE_MH2O = 9
  DEFAULT_LATITUDE = 35.0

  __slots__ = ['header','ds_header','pressure','pressure_covar','pressure_raw','pressure_raw_unit','tare','latitude','depth','median_depth_filter_ok','depth_buffer','median_depth','median_tol']
  _slot_types = ['std_msgs/Header','ds_core_msgs/DsHeader','float64','float64','float64','uint8','float64','float64','float64','bool','float64[]','float64','float64']

  def __init__(self, *args, **kwds):
    """
    Constructor. Any message fields that are implicitly/explicitly
    set to None will be assigned a default value. The recommend
    use is keyword arguments as this is more robust to future message
    changes.  You cannot mix in-order arguments and keyword arguments.

    The available fields are:
       header,ds_header,pressure,pressure_covar,pressure_raw,pressure_raw_unit,tare,latitude,depth,median_depth_filter_ok,depth_buffer,median_depth,median_tol

    :param args: complete set of field values, in .msg order
    :param kwds: use keyword arguments corresponding to message field names
    to set specific fields.
    """
    if args or kwds:
      super(DepthPressure, self).__init__(*args, **kwds)
      # message fields cannot be None, assign default values for those that are
      if self.header is None:
        self.header = std_msgs.msg.Header()
      if self.ds_header is None:
        self.ds_header = ds_core_msgs.msg.DsHeader()
      if self.pressure is None:
        self.pressure = 0.
      if self.pressure_covar is None:
        self.pressure_covar = 0.
      if self.pressure_raw is None:
        self.pressure_raw = 0.
      if self.pressure_raw_unit is None:
        self.pressure_raw_unit = 0
      if self.tare is None:
        self.tare = 0.
      if self.latitude is None:
        self.latitude = 0.
      if self.depth is None:
        self.depth = 0.
      if self.median_depth_filter_ok is None:
        self.median_depth_filter_ok = False
      if self.depth_buffer is None:
        self.depth_buffer = []
      if self.median_depth is None:
        self.median_depth = 0.
      if self.median_tol is None:
        self.median_tol = 0.
    else:
      self.header = std_msgs.msg.Header()
      self.ds_header = ds_core_msgs.msg.DsHeader()
      self.pressure = 0.
      self.pressure_covar = 0.
      self.pressure_raw = 0.
      self.pressure_raw_unit = 0
      self.tare = 0.
      self.latitude = 0.
      self.depth = 0.
      self.median_depth_filter_ok = False
      self.depth_buffer = []
      self.median_depth = 0.
      self.median_tol = 0.

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
      _x = self
      buff.write(_get_struct_3I().pack(_x.header.seq, _x.header.stamp.secs, _x.header.stamp.nsecs))
      _x = self.header.frame_id
      length = len(_x)
      if python3 or type(_x) == unicode:
        _x = _x.encode('utf-8')
        length = len(_x)
      buff.write(struct.Struct('<I%ss'%length).pack(length, _x))
      _x = self
      buff.write(_get_struct_2I().pack(_x.ds_header.io_time.secs, _x.ds_header.io_time.nsecs))
      _x = self.ds_header.source_uuid
      # - if encoded as a list instead, serialize as bytes instead of string
      if type(_x) in [list, tuple]:
        buff.write(_get_struct_16B().pack(*_x))
      else:
        buff.write(_get_struct_16s().pack(_x))
      _x = self
      buff.write(_get_struct_3dB3dB().pack(_x.pressure, _x.pressure_covar, _x.pressure_raw, _x.pressure_raw_unit, _x.tare, _x.latitude, _x.depth, _x.median_depth_filter_ok))
      length = len(self.depth_buffer)
      buff.write(_struct_I.pack(length))
      pattern = '<%sd'%length
      buff.write(struct.Struct(pattern).pack(*self.depth_buffer))
      _x = self
      buff.write(_get_struct_2d().pack(_x.median_depth, _x.median_tol))
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
      if self.header is None:
        self.header = std_msgs.msg.Header()
      if self.ds_header is None:
        self.ds_header = ds_core_msgs.msg.DsHeader()
      end = 0
      _x = self
      start = end
      end += 12
      (_x.header.seq, _x.header.stamp.secs, _x.header.stamp.nsecs,) = _get_struct_3I().unpack(str[start:end])
      start = end
      end += 4
      (length,) = _struct_I.unpack(str[start:end])
      start = end
      end += length
      if python3:
        self.header.frame_id = str[start:end].decode('utf-8', 'rosmsg')
      else:
        self.header.frame_id = str[start:end]
      _x = self
      start = end
      end += 8
      (_x.ds_header.io_time.secs, _x.ds_header.io_time.nsecs,) = _get_struct_2I().unpack(str[start:end])
      start = end
      end += 16
      self.ds_header.source_uuid = str[start:end]
      _x = self
      start = end
      end += 50
      (_x.pressure, _x.pressure_covar, _x.pressure_raw, _x.pressure_raw_unit, _x.tare, _x.latitude, _x.depth, _x.median_depth_filter_ok,) = _get_struct_3dB3dB().unpack(str[start:end])
      self.median_depth_filter_ok = bool(self.median_depth_filter_ok)
      start = end
      end += 4
      (length,) = _struct_I.unpack(str[start:end])
      pattern = '<%sd'%length
      start = end
      s = struct.Struct(pattern)
      end += s.size
      self.depth_buffer = s.unpack(str[start:end])
      _x = self
      start = end
      end += 16
      (_x.median_depth, _x.median_tol,) = _get_struct_2d().unpack(str[start:end])
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
      _x = self
      buff.write(_get_struct_3I().pack(_x.header.seq, _x.header.stamp.secs, _x.header.stamp.nsecs))
      _x = self.header.frame_id
      length = len(_x)
      if python3 or type(_x) == unicode:
        _x = _x.encode('utf-8')
        length = len(_x)
      buff.write(struct.Struct('<I%ss'%length).pack(length, _x))
      _x = self
      buff.write(_get_struct_2I().pack(_x.ds_header.io_time.secs, _x.ds_header.io_time.nsecs))
      _x = self.ds_header.source_uuid
      # - if encoded as a list instead, serialize as bytes instead of string
      if type(_x) in [list, tuple]:
        buff.write(_get_struct_16B().pack(*_x))
      else:
        buff.write(_get_struct_16s().pack(_x))
      _x = self
      buff.write(_get_struct_3dB3dB().pack(_x.pressure, _x.pressure_covar, _x.pressure_raw, _x.pressure_raw_unit, _x.tare, _x.latitude, _x.depth, _x.median_depth_filter_ok))
      length = len(self.depth_buffer)
      buff.write(_struct_I.pack(length))
      pattern = '<%sd'%length
      buff.write(self.depth_buffer.tostring())
      _x = self
      buff.write(_get_struct_2d().pack(_x.median_depth, _x.median_tol))
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
      if self.header is None:
        self.header = std_msgs.msg.Header()
      if self.ds_header is None:
        self.ds_header = ds_core_msgs.msg.DsHeader()
      end = 0
      _x = self
      start = end
      end += 12
      (_x.header.seq, _x.header.stamp.secs, _x.header.stamp.nsecs,) = _get_struct_3I().unpack(str[start:end])
      start = end
      end += 4
      (length,) = _struct_I.unpack(str[start:end])
      start = end
      end += length
      if python3:
        self.header.frame_id = str[start:end].decode('utf-8', 'rosmsg')
      else:
        self.header.frame_id = str[start:end]
      _x = self
      start = end
      end += 8
      (_x.ds_header.io_time.secs, _x.ds_header.io_time.nsecs,) = _get_struct_2I().unpack(str[start:end])
      start = end
      end += 16
      self.ds_header.source_uuid = str[start:end]
      _x = self
      start = end
      end += 50
      (_x.pressure, _x.pressure_covar, _x.pressure_raw, _x.pressure_raw_unit, _x.tare, _x.latitude, _x.depth, _x.median_depth_filter_ok,) = _get_struct_3dB3dB().unpack(str[start:end])
      self.median_depth_filter_ok = bool(self.median_depth_filter_ok)
      start = end
      end += 4
      (length,) = _struct_I.unpack(str[start:end])
      pattern = '<%sd'%length
      start = end
      s = struct.Struct(pattern)
      end += s.size
      self.depth_buffer = numpy.frombuffer(str[start:end], dtype=numpy.float64, count=length)
      _x = self
      start = end
      end += 16
      (_x.median_depth, _x.median_tol,) = _get_struct_2d().unpack(str[start:end])
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
_struct_2I = None
def _get_struct_2I():
    global _struct_2I
    if _struct_2I is None:
        _struct_2I = struct.Struct("<2I")
    return _struct_2I
_struct_2d = None
def _get_struct_2d():
    global _struct_2d
    if _struct_2d is None:
        _struct_2d = struct.Struct("<2d")
    return _struct_2d
_struct_3I = None
def _get_struct_3I():
    global _struct_3I
    if _struct_3I is None:
        _struct_3I = struct.Struct("<3I")
    return _struct_3I
_struct_3dB3dB = None
def _get_struct_3dB3dB():
    global _struct_3dB3dB
    if _struct_3dB3dB is None:
        _struct_3dB3dB = struct.Struct("<3dB3dB")
    return _struct_3dB3dB