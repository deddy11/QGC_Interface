; Auto-generated. Do not edit!


(cl:in-package mavros_msgs-msg)


;//! \htmlinclude Contaminant.msg.html

(cl:defclass <Contaminant> (roslisp-msg-protocol:ros-message)
  ((lat
    :reader lat
    :initarg :lat
    :type cl:float
    :initform 0.0)
   (lon
    :reader lon
    :initarg :lon
    :type cl:float
    :initform 0.0)
   (alt
    :reader alt
    :initarg :alt
    :type cl:fixnum
    :initform 0)
   (cons
    :reader cons
    :initarg :cons
    :type cl:float
    :initform 0.0)
   (vhcl_id
    :reader vhcl_id
    :initarg :vhcl_id
    :type cl:fixnum
    :initform 0)
   (con_type
    :reader con_type
    :initarg :con_type
    :type cl:fixnum
    :initform 0)
   (con_id
    :reader con_id
    :initarg :con_id
    :type cl:fixnum
    :initform 0))
)

(cl:defclass Contaminant (<Contaminant>)
  ())

(cl:defmethod cl:initialize-instance :after ((m <Contaminant>) cl:&rest args)
  (cl:declare (cl:ignorable args))
  (cl:unless (cl:typep m 'Contaminant)
    (roslisp-msg-protocol:msg-deprecation-warning "using old message class name mavros_msgs-msg:<Contaminant> is deprecated: use mavros_msgs-msg:Contaminant instead.")))

(cl:ensure-generic-function 'lat-val :lambda-list '(m))
(cl:defmethod lat-val ((m <Contaminant>))
  (roslisp-msg-protocol:msg-deprecation-warning "Using old-style slot reader mavros_msgs-msg:lat-val is deprecated.  Use mavros_msgs-msg:lat instead.")
  (lat m))

(cl:ensure-generic-function 'lon-val :lambda-list '(m))
(cl:defmethod lon-val ((m <Contaminant>))
  (roslisp-msg-protocol:msg-deprecation-warning "Using old-style slot reader mavros_msgs-msg:lon-val is deprecated.  Use mavros_msgs-msg:lon instead.")
  (lon m))

(cl:ensure-generic-function 'alt-val :lambda-list '(m))
(cl:defmethod alt-val ((m <Contaminant>))
  (roslisp-msg-protocol:msg-deprecation-warning "Using old-style slot reader mavros_msgs-msg:alt-val is deprecated.  Use mavros_msgs-msg:alt instead.")
  (alt m))

(cl:ensure-generic-function 'cons-val :lambda-list '(m))
(cl:defmethod cons-val ((m <Contaminant>))
  (roslisp-msg-protocol:msg-deprecation-warning "Using old-style slot reader mavros_msgs-msg:cons-val is deprecated.  Use mavros_msgs-msg:cons instead.")
  (cons m))

(cl:ensure-generic-function 'vhcl_id-val :lambda-list '(m))
(cl:defmethod vhcl_id-val ((m <Contaminant>))
  (roslisp-msg-protocol:msg-deprecation-warning "Using old-style slot reader mavros_msgs-msg:vhcl_id-val is deprecated.  Use mavros_msgs-msg:vhcl_id instead.")
  (vhcl_id m))

(cl:ensure-generic-function 'con_type-val :lambda-list '(m))
(cl:defmethod con_type-val ((m <Contaminant>))
  (roslisp-msg-protocol:msg-deprecation-warning "Using old-style slot reader mavros_msgs-msg:con_type-val is deprecated.  Use mavros_msgs-msg:con_type instead.")
  (con_type m))

(cl:ensure-generic-function 'con_id-val :lambda-list '(m))
(cl:defmethod con_id-val ((m <Contaminant>))
  (roslisp-msg-protocol:msg-deprecation-warning "Using old-style slot reader mavros_msgs-msg:con_id-val is deprecated.  Use mavros_msgs-msg:con_id instead.")
  (con_id m))
(cl:defmethod roslisp-msg-protocol:serialize ((msg <Contaminant>) ostream)
  "Serializes a message object of type '<Contaminant>"
  (cl:let ((bits (roslisp-utils:encode-single-float-bits (cl:slot-value msg 'lat))))
    (cl:write-byte (cl:ldb (cl:byte 8 0) bits) ostream)
    (cl:write-byte (cl:ldb (cl:byte 8 8) bits) ostream)
    (cl:write-byte (cl:ldb (cl:byte 8 16) bits) ostream)
    (cl:write-byte (cl:ldb (cl:byte 8 24) bits) ostream))
  (cl:let ((bits (roslisp-utils:encode-single-float-bits (cl:slot-value msg 'lon))))
    (cl:write-byte (cl:ldb (cl:byte 8 0) bits) ostream)
    (cl:write-byte (cl:ldb (cl:byte 8 8) bits) ostream)
    (cl:write-byte (cl:ldb (cl:byte 8 16) bits) ostream)
    (cl:write-byte (cl:ldb (cl:byte 8 24) bits) ostream))
  (cl:write-byte (cl:ldb (cl:byte 8 0) (cl:slot-value msg 'alt)) ostream)
  (cl:write-byte (cl:ldb (cl:byte 8 8) (cl:slot-value msg 'alt)) ostream)
  (cl:let ((bits (roslisp-utils:encode-single-float-bits (cl:slot-value msg 'cons))))
    (cl:write-byte (cl:ldb (cl:byte 8 0) bits) ostream)
    (cl:write-byte (cl:ldb (cl:byte 8 8) bits) ostream)
    (cl:write-byte (cl:ldb (cl:byte 8 16) bits) ostream)
    (cl:write-byte (cl:ldb (cl:byte 8 24) bits) ostream))
  (cl:write-byte (cl:ldb (cl:byte 8 0) (cl:slot-value msg 'vhcl_id)) ostream)
  (cl:write-byte (cl:ldb (cl:byte 8 0) (cl:slot-value msg 'con_type)) ostream)
  (cl:write-byte (cl:ldb (cl:byte 8 0) (cl:slot-value msg 'con_id)) ostream)
)
(cl:defmethod roslisp-msg-protocol:deserialize ((msg <Contaminant>) istream)
  "Deserializes a message object of type '<Contaminant>"
    (cl:let ((bits 0))
      (cl:setf (cl:ldb (cl:byte 8 0) bits) (cl:read-byte istream))
      (cl:setf (cl:ldb (cl:byte 8 8) bits) (cl:read-byte istream))
      (cl:setf (cl:ldb (cl:byte 8 16) bits) (cl:read-byte istream))
      (cl:setf (cl:ldb (cl:byte 8 24) bits) (cl:read-byte istream))
    (cl:setf (cl:slot-value msg 'lat) (roslisp-utils:decode-single-float-bits bits)))
    (cl:let ((bits 0))
      (cl:setf (cl:ldb (cl:byte 8 0) bits) (cl:read-byte istream))
      (cl:setf (cl:ldb (cl:byte 8 8) bits) (cl:read-byte istream))
      (cl:setf (cl:ldb (cl:byte 8 16) bits) (cl:read-byte istream))
      (cl:setf (cl:ldb (cl:byte 8 24) bits) (cl:read-byte istream))
    (cl:setf (cl:slot-value msg 'lon) (roslisp-utils:decode-single-float-bits bits)))
    (cl:setf (cl:ldb (cl:byte 8 0) (cl:slot-value msg 'alt)) (cl:read-byte istream))
    (cl:setf (cl:ldb (cl:byte 8 8) (cl:slot-value msg 'alt)) (cl:read-byte istream))
    (cl:let ((bits 0))
      (cl:setf (cl:ldb (cl:byte 8 0) bits) (cl:read-byte istream))
      (cl:setf (cl:ldb (cl:byte 8 8) bits) (cl:read-byte istream))
      (cl:setf (cl:ldb (cl:byte 8 16) bits) (cl:read-byte istream))
      (cl:setf (cl:ldb (cl:byte 8 24) bits) (cl:read-byte istream))
    (cl:setf (cl:slot-value msg 'cons) (roslisp-utils:decode-single-float-bits bits)))
    (cl:setf (cl:ldb (cl:byte 8 0) (cl:slot-value msg 'vhcl_id)) (cl:read-byte istream))
    (cl:setf (cl:ldb (cl:byte 8 0) (cl:slot-value msg 'con_type)) (cl:read-byte istream))
    (cl:setf (cl:ldb (cl:byte 8 0) (cl:slot-value msg 'con_id)) (cl:read-byte istream))
  msg
)
(cl:defmethod roslisp-msg-protocol:ros-datatype ((msg (cl:eql '<Contaminant>)))
  "Returns string type for a message object of type '<Contaminant>"
  "mavros_msgs/Contaminant")
(cl:defmethod roslisp-msg-protocol:ros-datatype ((msg (cl:eql 'Contaminant)))
  "Returns string type for a message object of type 'Contaminant"
  "mavros_msgs/Contaminant")
(cl:defmethod roslisp-msg-protocol:md5sum ((type (cl:eql '<Contaminant>)))
  "Returns md5sum for a message object of type '<Contaminant>"
  "3c6f9706e738c8a5714202e61fe27373")
(cl:defmethod roslisp-msg-protocol:md5sum ((type (cl:eql 'Contaminant)))
  "Returns md5sum for a message object of type 'Contaminant"
  "3c6f9706e738c8a5714202e61fe27373")
(cl:defmethod roslisp-msg-protocol:message-definition ((type (cl:eql '<Contaminant>)))
  "Returns full string definition for message of type '<Contaminant>"
  (cl:format cl:nil "float32 lat~%float32 lon~%uint16 alt~%float32 cons~%uint8 vhcl_id~%uint8 con_type~%uint8 con_id~%~%"))
(cl:defmethod roslisp-msg-protocol:message-definition ((type (cl:eql 'Contaminant)))
  "Returns full string definition for message of type 'Contaminant"
  (cl:format cl:nil "float32 lat~%float32 lon~%uint16 alt~%float32 cons~%uint8 vhcl_id~%uint8 con_type~%uint8 con_id~%~%"))
(cl:defmethod roslisp-msg-protocol:serialization-length ((msg <Contaminant>))
  (cl:+ 0
     4
     4
     2
     4
     1
     1
     1
))
(cl:defmethod roslisp-msg-protocol:ros-message-to-list ((msg <Contaminant>))
  "Converts a ROS message object to a list"
  (cl:list 'Contaminant
    (cl:cons ':lat (lat msg))
    (cl:cons ':lon (lon msg))
    (cl:cons ':alt (alt msg))
    (cl:cons ':cons (cons msg))
    (cl:cons ':vhcl_id (vhcl_id msg))
    (cl:cons ':con_type (con_type msg))
    (cl:cons ':con_id (con_id msg))
))
