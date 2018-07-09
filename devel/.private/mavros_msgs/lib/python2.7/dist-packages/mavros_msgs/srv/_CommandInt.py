# This Python file uses the following encoding: utf-8
"""autogenerated by genpy from mavros_msgs/CommandIntRequest.msg. Do not edit."""
import sys
python3 = True if sys.hexversion > 0x03000000 else False
import genpy
import struct


class CommandIntRequest(genpy.Message):
  _md5sum = "6165959012c47e0f665b640c1ab12391"
  _type = "mavros_msgs/CommandIntRequest"
  _has_header = False #flag to mark the presence of a Header object
  _full_text = """

bool broadcast

uint8 frame
uint16 command
uint8 current
uint8 autocontinue
float32 param1
float32 param2
float32 param3
float32 param4
int32 x
int32 y
float32 z
"""
  __slots__ = ['broadcast','frame','command','current','autocontinue','param1','param2','param3','param4','x','y','z']
  _slot_types = ['bool','uint8','uint16','uint8','uint8','float32','float32','float32','float32','int32','int32','float32']

  def __init__(self, *args, **kwds):
    """
    Constructor. Any message fields that are implicitly/explicitly
    set to None will be assigned a default value. The recommend
    use is keyword arguments as this is more robust to future message
    changes.  You cannot mix in-order arguments and keyword arguments.

    The available fields are:
       broadcast,frame,command,current,autocontinue,param1,param2,param3,param4,x,y,z

    :param args: complete set of field values, in .msg order
    :param kwds: use keyword arguments corresponding to message field names
    to set specific fields.
    """
    if args or kwds:
      super(CommandIntRequest, self).__init__(*args, **kwds)
      #message fields cannot be None, assign default values for those that are
      if self.broadcast is None:
        self.broadcast = False
      if self.frame is None:
        self.frame = 0
      if self.command is None:
        self.command = 0
      if self.current is None:
        self.current = 0
      if self.autocontinue is None:
        self.autocontinue = 0
      if self.param1 is None:
        self.param1 = 0.
      if self.param2 is None:
        self.param2 = 0.
      if self.param3 is None:
        self.param3 = 0.
      if self.param4 is None:
        self.param4 = 0.
      if self.x is None:
        self.x = 0
      if self.y is None:
        self.y = 0
      if self.z is None:
        self.z = 0.
    else:
      self.broadcast = False
      self.frame = 0
      self.command = 0
      self.current = 0
      self.autocontinue = 0
      self.param1 = 0.
      self.param2 = 0.
      self.param3 = 0.
      self.param4 = 0.
      self.x = 0
      self.y = 0
      self.z = 0.

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
      buff.write(_struct_2BH2B4f2if.pack(_x.broadcast, _x.frame, _x.command, _x.current, _x.autocontinue, _x.param1, _x.param2, _x.param3, _x.param4, _x.x, _x.y, _x.z))
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
      end += 34
      (_x.broadcast, _x.frame, _x.command, _x.current, _x.autocontinue, _x.param1, _x.param2, _x.param3, _x.param4, _x.x, _x.y, _x.z,) = _struct_2BH2B4f2if.unpack(str[start:end])
      self.broadcast = bool(self.broadcast)
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
      buff.write(_struct_2BH2B4f2if.pack(_x.broadcast, _x.frame, _x.command, _x.current, _x.autocontinue, _x.param1, _x.param2, _x.param3, _x.param4, _x.x, _x.y, _x.z))
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
      end += 34
      (_x.broadcast, _x.frame, _x.command, _x.current, _x.autocontinue, _x.param1, _x.param2, _x.param3, _x.param4, _x.x, _x.y, _x.z,) = _struct_2BH2B4f2if.unpack(str[start:end])
      self.broadcast = bool(self.broadcast)
      return self
    except struct.error as e:
      raise genpy.DeserializationError(e) #most likely buffer underfill

_struct_I = genpy.struct_I
_struct_2BH2B4f2if = struct.Struct("<2BH2B4f2if")
# This Python file uses the following encoding: utf-8
"""autogenerated by genpy from mavros_msgs/CommandIntResponse.msg. Do not edit."""
import sys
python3 = True if sys.hexversion > 0x03000000 else False
import genpy
import struct


class CommandIntResponse(genpy.Message):
  _md5sum = "358e233cde0c8a8bcfea4ce193f8fc15"
  _type = "mavros_msgs/CommandIntResponse"
  _has_header = False #flag to mark the presence of a Header object
  _full_text = """bool success



"""
  __slots__ = ['success']
  _slot_types = ['bool']

  def __init__(self, *args, **kwds):
    """
    Constructor. Any message fields that are implicitly/explicitly
    set to None will be assigned a default value. The recommend
    use is keyword arguments as this is more robust to future message
    changes.  You cannot mix in-order arguments and keyword arguments.

    The available fields are:
       success

    :param args: complete set of field values, in .msg order
    :param kwds: use keyword arguments corresponding to message field names
    to set specific fields.
    """
    if args or kwds:
      super(CommandIntResponse, self).__init__(*args, **kwds)
      #message fields cannot be None, assign default values for those that are
      if self.success is None:
        self.success = False
    else:
      self.success = False

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
      buff.write(_struct_B.pack(self.success))
    except struct.error as se: self._check_types(struct.error("%s: '%s' when writing '%s'" % (type(se), str(se), str(locals().get('_x', self)))))
    except TypeError as te: self._check_types(ValueError("%s: '%s' when writing '%s'" % (type(te), str(te), str(locals().get('_x', self)))))

  def deserialize(self, str):
    """
    unpack serialized message in str into this message instance
    :param str: byte array of serialized message, ``str``
    """
    try:
      end = 0
      start = end
      end += 1
      (self.success,) = _struct_B.unpack(str[start:end])
      self.success = bool(self.success)
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
      buff.write(_struct_B.pack(self.success))
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
      start = end
      end += 1
      (self.success,) = _struct_B.unpack(str[start:end])
      self.success = bool(self.success)
      return self
    except struct.error as e:
      raise genpy.DeserializationError(e) #most likely buffer underfill

_struct_I = genpy.struct_I
_struct_B = struct.Struct("<B")
class CommandInt(object):
  _type          = 'mavros_msgs/CommandInt'
  _md5sum = '5d5fd287bf3d27ad6ec508b1692f3b09'
  _request_class  = CommandIntRequest
  _response_class = CommandIntResponse
