// MESSAGE CONTAMINANT PACKING

#define MAVLINK_MSG_ID_CONTAMINANT 198

typedef struct MAVLINK_PACKED __mavlink_contaminant_t
{
 uint64_t time_usec; /*< Timestamp (micros since boot or Unix epoch)*/
 int32_t lat; /*< Measurement location in latitude global position*/
 int32_t lon; /*< Measurement location in longitude global position*/
 int32_t alt; /*< Measurement heigh in relative altitide to the ground*/
 uint32_t msr; /*< Measurement content*/
 uint8_t type; /*< Type of measurement:Chemical,Biological,Nuclear*/
} mavlink_contaminant_t;

#define MAVLINK_MSG_ID_CONTAMINANT_LEN 25
#define MAVLINK_MSG_ID_CONTAMINANT_MIN_LEN 25
#define MAVLINK_MSG_ID_198_LEN 25
#define MAVLINK_MSG_ID_198_MIN_LEN 25

#define MAVLINK_MSG_ID_CONTAMINANT_CRC 196
#define MAVLINK_MSG_ID_198_CRC 196



#if MAVLINK_COMMAND_24BIT
#define MAVLINK_MESSAGE_INFO_CONTAMINANT { \
	198, \
	"CONTAMINANT", \
	6, \
	{  { "time_usec", NULL, MAVLINK_TYPE_UINT64_T, 0, 0, offsetof(mavlink_contaminant_t, time_usec) }, \
         { "lat", NULL, MAVLINK_TYPE_INT32_T, 0, 8, offsetof(mavlink_contaminant_t, lat) }, \
         { "lon", NULL, MAVLINK_TYPE_INT32_T, 0, 12, offsetof(mavlink_contaminant_t, lon) }, \
         { "alt", NULL, MAVLINK_TYPE_INT32_T, 0, 16, offsetof(mavlink_contaminant_t, alt) }, \
         { "msr", NULL, MAVLINK_TYPE_UINT32_T, 0, 20, offsetof(mavlink_contaminant_t, msr) }, \
         { "type", NULL, MAVLINK_TYPE_UINT8_T, 0, 24, offsetof(mavlink_contaminant_t, type) }, \
         } \
}
#else
#define MAVLINK_MESSAGE_INFO_CONTAMINANT { \
	"CONTAMINANT", \
	6, \
	{  { "time_usec", NULL, MAVLINK_TYPE_UINT64_T, 0, 0, offsetof(mavlink_contaminant_t, time_usec) }, \
         { "lat", NULL, MAVLINK_TYPE_INT32_T, 0, 8, offsetof(mavlink_contaminant_t, lat) }, \
         { "lon", NULL, MAVLINK_TYPE_INT32_T, 0, 12, offsetof(mavlink_contaminant_t, lon) }, \
         { "alt", NULL, MAVLINK_TYPE_INT32_T, 0, 16, offsetof(mavlink_contaminant_t, alt) }, \
         { "msr", NULL, MAVLINK_TYPE_UINT32_T, 0, 20, offsetof(mavlink_contaminant_t, msr) }, \
         { "type", NULL, MAVLINK_TYPE_UINT8_T, 0, 24, offsetof(mavlink_contaminant_t, type) }, \
         } \
}
#endif

/**
 * @brief Pack a contaminant message
 * @param system_id ID of this system
 * @param component_id ID of this component (e.g. 200 for IMU)
 * @param msg The MAVLink message to compress the data into
 *
 * @param time_usec Timestamp (micros since boot or Unix epoch)
 * @param lat Measurement location in latitude global position
 * @param lon Measurement location in longitude global position
 * @param alt Measurement heigh in relative altitide to the ground
 * @param msr Measurement content
 * @param type Type of measurement:Chemical,Biological,Nuclear
 * @return length of the message in bytes (excluding serial stream start sign)
 */
static inline uint16_t mavlink_msg_contaminant_pack(uint8_t system_id, uint8_t component_id, mavlink_message_t* msg,
						       uint64_t time_usec, int32_t lat, int32_t lon, int32_t alt, uint32_t msr, uint8_t type)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
	char buf[MAVLINK_MSG_ID_CONTAMINANT_LEN];
	_mav_put_uint64_t(buf, 0, time_usec);
	_mav_put_int32_t(buf, 8, lat);
	_mav_put_int32_t(buf, 12, lon);
	_mav_put_int32_t(buf, 16, alt);
	_mav_put_uint32_t(buf, 20, msr);
	_mav_put_uint8_t(buf, 24, type);

        memcpy(_MAV_PAYLOAD_NON_CONST(msg), buf, MAVLINK_MSG_ID_CONTAMINANT_LEN);
#else
	mavlink_contaminant_t packet;
	packet.time_usec = time_usec;
	packet.lat = lat;
	packet.lon = lon;
	packet.alt = alt;
	packet.msr = msr;
	packet.type = type;

        memcpy(_MAV_PAYLOAD_NON_CONST(msg), &packet, MAVLINK_MSG_ID_CONTAMINANT_LEN);
#endif

	msg->msgid = MAVLINK_MSG_ID_CONTAMINANT;
    return mavlink_finalize_message(msg, system_id, component_id, MAVLINK_MSG_ID_CONTAMINANT_MIN_LEN, MAVLINK_MSG_ID_CONTAMINANT_LEN, MAVLINK_MSG_ID_CONTAMINANT_CRC);
}

/**
 * @brief Pack a contaminant message on a channel
 * @param system_id ID of this system
 * @param component_id ID of this component (e.g. 200 for IMU)
 * @param chan The MAVLink channel this message will be sent over
 * @param msg The MAVLink message to compress the data into
 * @param time_usec Timestamp (micros since boot or Unix epoch)
 * @param lat Measurement location in latitude global position
 * @param lon Measurement location in longitude global position
 * @param alt Measurement heigh in relative altitide to the ground
 * @param msr Measurement content
 * @param type Type of measurement:Chemical,Biological,Nuclear
 * @return length of the message in bytes (excluding serial stream start sign)
 */
static inline uint16_t mavlink_msg_contaminant_pack_chan(uint8_t system_id, uint8_t component_id, uint8_t chan,
							   mavlink_message_t* msg,
						           uint64_t time_usec,int32_t lat,int32_t lon,int32_t alt,uint32_t msr,uint8_t type)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
	char buf[MAVLINK_MSG_ID_CONTAMINANT_LEN];
	_mav_put_uint64_t(buf, 0, time_usec);
	_mav_put_int32_t(buf, 8, lat);
	_mav_put_int32_t(buf, 12, lon);
	_mav_put_int32_t(buf, 16, alt);
	_mav_put_uint32_t(buf, 20, msr);
	_mav_put_uint8_t(buf, 24, type);

        memcpy(_MAV_PAYLOAD_NON_CONST(msg), buf, MAVLINK_MSG_ID_CONTAMINANT_LEN);
#else
	mavlink_contaminant_t packet;
	packet.time_usec = time_usec;
	packet.lat = lat;
	packet.lon = lon;
	packet.alt = alt;
	packet.msr = msr;
	packet.type = type;

        memcpy(_MAV_PAYLOAD_NON_CONST(msg), &packet, MAVLINK_MSG_ID_CONTAMINANT_LEN);
#endif

	msg->msgid = MAVLINK_MSG_ID_CONTAMINANT;
    return mavlink_finalize_message_chan(msg, system_id, component_id, chan, MAVLINK_MSG_ID_CONTAMINANT_MIN_LEN, MAVLINK_MSG_ID_CONTAMINANT_LEN, MAVLINK_MSG_ID_CONTAMINANT_CRC);
}

/**
 * @brief Encode a contaminant struct
 *
 * @param system_id ID of this system
 * @param component_id ID of this component (e.g. 200 for IMU)
 * @param msg The MAVLink message to compress the data into
 * @param contaminant C-struct to read the message contents from
 */
static inline uint16_t mavlink_msg_contaminant_encode(uint8_t system_id, uint8_t component_id, mavlink_message_t* msg, const mavlink_contaminant_t* contaminant)
{
	return mavlink_msg_contaminant_pack(system_id, component_id, msg, contaminant->time_usec, contaminant->lat, contaminant->lon, contaminant->alt, contaminant->msr, contaminant->type);
}

/**
 * @brief Encode a contaminant struct on a channel
 *
 * @param system_id ID of this system
 * @param component_id ID of this component (e.g. 200 for IMU)
 * @param chan The MAVLink channel this message will be sent over
 * @param msg The MAVLink message to compress the data into
 * @param contaminant C-struct to read the message contents from
 */
static inline uint16_t mavlink_msg_contaminant_encode_chan(uint8_t system_id, uint8_t component_id, uint8_t chan, mavlink_message_t* msg, const mavlink_contaminant_t* contaminant)
{
	return mavlink_msg_contaminant_pack_chan(system_id, component_id, chan, msg, contaminant->time_usec, contaminant->lat, contaminant->lon, contaminant->alt, contaminant->msr, contaminant->type);
}

/**
 * @brief Send a contaminant message
 * @param chan MAVLink channel to send the message
 *
 * @param time_usec Timestamp (micros since boot or Unix epoch)
 * @param lat Measurement location in latitude global position
 * @param lon Measurement location in longitude global position
 * @param alt Measurement heigh in relative altitide to the ground
 * @param msr Measurement content
 * @param type Type of measurement:Chemical,Biological,Nuclear
 */
#ifdef MAVLINK_USE_CONVENIENCE_FUNCTIONS

static inline void mavlink_msg_contaminant_send(mavlink_channel_t chan, uint64_t time_usec, int32_t lat, int32_t lon, int32_t alt, uint32_t msr, uint8_t type)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
	char buf[MAVLINK_MSG_ID_CONTAMINANT_LEN];
	_mav_put_uint64_t(buf, 0, time_usec);
	_mav_put_int32_t(buf, 8, lat);
	_mav_put_int32_t(buf, 12, lon);
	_mav_put_int32_t(buf, 16, alt);
	_mav_put_uint32_t(buf, 20, msr);
	_mav_put_uint8_t(buf, 24, type);

    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_CONTAMINANT, buf, MAVLINK_MSG_ID_CONTAMINANT_MIN_LEN, MAVLINK_MSG_ID_CONTAMINANT_LEN, MAVLINK_MSG_ID_CONTAMINANT_CRC);
#else
	mavlink_contaminant_t packet;
	packet.time_usec = time_usec;
	packet.lat = lat;
	packet.lon = lon;
	packet.alt = alt;
	packet.msr = msr;
	packet.type = type;

    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_CONTAMINANT, (const char *)&packet, MAVLINK_MSG_ID_CONTAMINANT_MIN_LEN, MAVLINK_MSG_ID_CONTAMINANT_LEN, MAVLINK_MSG_ID_CONTAMINANT_CRC);
#endif
}

/**
 * @brief Send a contaminant message
 * @param chan MAVLink channel to send the message
 * @param struct The MAVLink struct to serialize
 */
static inline void mavlink_msg_contaminant_send_struct(mavlink_channel_t chan, const mavlink_contaminant_t* contaminant)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    mavlink_msg_contaminant_send(chan, contaminant->time_usec, contaminant->lat, contaminant->lon, contaminant->alt, contaminant->msr, contaminant->type);
#else
    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_CONTAMINANT, (const char *)contaminant, MAVLINK_MSG_ID_CONTAMINANT_MIN_LEN, MAVLINK_MSG_ID_CONTAMINANT_LEN, MAVLINK_MSG_ID_CONTAMINANT_CRC);
#endif
}

#if MAVLINK_MSG_ID_CONTAMINANT_LEN <= MAVLINK_MAX_PAYLOAD_LEN
/*
  This varient of _send() can be used to save stack space by re-using
  memory from the receive buffer.  The caller provides a
  mavlink_message_t which is the size of a full mavlink message. This
  is usually the receive buffer for the channel, and allows a reply to an
  incoming message with minimum stack space usage.
 */
static inline void mavlink_msg_contaminant_send_buf(mavlink_message_t *msgbuf, mavlink_channel_t chan,  uint64_t time_usec, int32_t lat, int32_t lon, int32_t alt, uint32_t msr, uint8_t type)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
	char *buf = (char *)msgbuf;
	_mav_put_uint64_t(buf, 0, time_usec);
	_mav_put_int32_t(buf, 8, lat);
	_mav_put_int32_t(buf, 12, lon);
	_mav_put_int32_t(buf, 16, alt);
	_mav_put_uint32_t(buf, 20, msr);
	_mav_put_uint8_t(buf, 24, type);

    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_CONTAMINANT, buf, MAVLINK_MSG_ID_CONTAMINANT_MIN_LEN, MAVLINK_MSG_ID_CONTAMINANT_LEN, MAVLINK_MSG_ID_CONTAMINANT_CRC);
#else
	mavlink_contaminant_t *packet = (mavlink_contaminant_t *)msgbuf;
	packet->time_usec = time_usec;
	packet->lat = lat;
	packet->lon = lon;
	packet->alt = alt;
	packet->msr = msr;
	packet->type = type;

    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_CONTAMINANT, (const char *)packet, MAVLINK_MSG_ID_CONTAMINANT_MIN_LEN, MAVLINK_MSG_ID_CONTAMINANT_LEN, MAVLINK_MSG_ID_CONTAMINANT_CRC);
#endif
}
#endif

#endif

// MESSAGE CONTAMINANT UNPACKING


/**
 * @brief Get field time_usec from contaminant message
 *
 * @return Timestamp (micros since boot or Unix epoch)
 */
static inline uint64_t mavlink_msg_contaminant_get_time_usec(const mavlink_message_t* msg)
{
	return _MAV_RETURN_uint64_t(msg,  0);
}

/**
 * @brief Get field lat from contaminant message
 *
 * @return Measurement location in latitude global position
 */
static inline int32_t mavlink_msg_contaminant_get_lat(const mavlink_message_t* msg)
{
	return _MAV_RETURN_int32_t(msg,  8);
}

/**
 * @brief Get field lon from contaminant message
 *
 * @return Measurement location in longitude global position
 */
static inline int32_t mavlink_msg_contaminant_get_lon(const mavlink_message_t* msg)
{
	return _MAV_RETURN_int32_t(msg,  12);
}

/**
 * @brief Get field alt from contaminant message
 *
 * @return Measurement heigh in relative altitide to the ground
 */
static inline int32_t mavlink_msg_contaminant_get_alt(const mavlink_message_t* msg)
{
	return _MAV_RETURN_int32_t(msg,  16);
}

/**
 * @brief Get field msr from contaminant message
 *
 * @return Measurement content
 */
static inline uint32_t mavlink_msg_contaminant_get_msr(const mavlink_message_t* msg)
{
	return _MAV_RETURN_uint32_t(msg,  20);
}

/**
 * @brief Get field type from contaminant message
 *
 * @return Type of measurement:Chemical,Biological,Nuclear
 */
static inline uint8_t mavlink_msg_contaminant_get_type(const mavlink_message_t* msg)
{
	return _MAV_RETURN_uint8_t(msg,  24);
}

/**
 * @brief Decode a contaminant message into a struct
 *
 * @param msg The message to decode
 * @param contaminant C-struct to decode the message contents into
 */
static inline void mavlink_msg_contaminant_decode(const mavlink_message_t* msg, mavlink_contaminant_t* contaminant)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
	contaminant->time_usec = mavlink_msg_contaminant_get_time_usec(msg);
	contaminant->lat = mavlink_msg_contaminant_get_lat(msg);
	contaminant->lon = mavlink_msg_contaminant_get_lon(msg);
	contaminant->alt = mavlink_msg_contaminant_get_alt(msg);
	contaminant->msr = mavlink_msg_contaminant_get_msr(msg);
	contaminant->type = mavlink_msg_contaminant_get_type(msg);
#else
        uint8_t len = msg->len < MAVLINK_MSG_ID_CONTAMINANT_LEN? msg->len : MAVLINK_MSG_ID_CONTAMINANT_LEN;
        memset(contaminant, 0, MAVLINK_MSG_ID_CONTAMINANT_LEN);
	memcpy(contaminant, _MAV_PAYLOAD(msg), len);
#endif
}
