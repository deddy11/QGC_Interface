# This Python file uses the following encoding: utf-8
"""autogenerated by genpy from mavros_msgs/Contaminant.msg. Do not edit."""
import sys
python3 = True if sys.hexversion > 0x03000000 else False
import genpy
import struct


class Contaminant(genpy.Message):
  _md5sum = "3c6f9706e738c8a5714202e61fe27373"
  _type = "mavros_msgs/Contaminant"
  _has_header = False #flag to mark the presence of a Header object
  _full_text = """float32 lat
float32 lon
uint16 alt
float32 cons
uint8 vhcl_id
uint8 con_type
uint8 con_id"""
  __slots__ = ['lat','lon','alt','cons','vhcl_id','con_type','con_id']
  _slot_types = ['float32','float32','uint16','float32','uint8','uint8','uint8']

  def __init__(self, *args, **kwds):
    """
    Constructor. Any message fields that are implicitly/explicitly
    set to None will be assigned a default value. The recommend
    use is keyword arguments as this is more robust to future message
    changes.  You cannot mix in-order arguments and keyword arguments.

    The available fields are:
       lat,lon,alt,cons,vhcl_id,con_type,con_id

    :param args: complete set of field values, in .msg order
    :param kwds: use keyword arguments corresponding to message field names
    to set specific fields.
    """
    if args or kwds:
      super(Contaminant, self).__init__(*args, **kwds)
      #message fields cannot be None, assign default values for those that are
      if self.lat is None:
        self.lat = 0.
      if self.lon is None:
        self.lon = 0.
      if self.alt is None:
        self.alt = 0
      if self.cons is None:
        self.cons = 0.
      if self.vhcl_id is None:
        self.vhcl_id = 0
      if self.con_type is None:
        self.con_type = 0
      if self.con_id is None:
        self.con_id = 0
    else:
      self.lat = 0.
      self.lon = 0.
      self.alt = 0
      self.cons = 0.
      self.vhcl_id = 0
      self.con_type = 0
      self.con_id = 0

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
      buff.write(_struct_2fHf3B.pack(_x.lat, _x.lon, _x.alt, _x.cons, _x.vhcl_id, _x.con_type, _x.con_id))
    except struct.error as se: self._check_types(struct.error("%s: '%s' when writing '%s'" % (type(se), str(se), str(locals().get('_x', self)))))
    except TypeError as te: self._check_types(ValueError("%s: '%s' when writing '%s'" % (type(te), str(te), str(locals().get('_x', self)))))

  def deserialize(self, str):
    """
    unpack serialized message in str into this message instance
    :param str: byte array of serialized message, ``str``
    """
    try:
      end = 0
      _x = self
      start = end
      end += 17
      (_x.lat, _x.lon, _x.alt, _x.cons, _x.vhcl_id, _x.con_type, _x.con_id,) = _struct_2fHf3B.unpack(str[start:end])
      return self
    except struct.error as e:
      raise genpy.DeserializationError(e) #most likely buffer underfill


  def serialize_numpy(self, buff, numpy):
    """
    serialize message with numpy array types into buffer
    :param buff: buffer, ``StringIO``
    :param numpy: numpy python module
    """
    try:
      _x = self
      buff.write(_struct_2fHf3B.pack(_x.lat, _x.lon, _x.alt, _x.cons, _x.vhcl_id, _x.con_type, _x.con_id))
    except struct.error as se: self._check_types(struct.error("%s: '%s' when writing '%s'" % (type(se), str(se), str(locals().get('_x', self)))))
    except TypeError as te: self._check_types(ValueError("%s: '%s' when writing '%s'" % (type(te), str(te), str(locals().get('_x', self)))))

  def deserialize_numpy(self, str, numpy):
    """
    unpack serialized message in str into this message instance using numpy for array types
    :param str: byte array of serialized message, ``str``
    :param numpy: numpy python module
    """
    try:
      end = 0
      _x = self
      start = end
      end += 17
      (_x.lat, _x.lon, _x.alt, _x.cons, _x.vhcl_id, _x.con_type, _x.con_id,) = _struct_2fHf3B.unpack(str[start:end])
      return self
    except struct.error as e:
      raise genpy.DeserializationError(e) #most likely buffer underfill

_struct_I = genpy.struct_I
_struct_2fHf3B = struct.Struct("<2fHf3B")
