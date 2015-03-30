// MESSAGE TO_GUM PACKING

#define MAVLINK_MSG_ID_TO_GUM 210

typedef struct __mavlink_to_gum_t
{
 float x_m; ///< x measurement
 float y_m; ///< y measurement
 float z_m; ///< z measurement
 float c_m; ///< c measurement
 float x_ref; ///< x reference
 float y_ref; ///< y reference
 float z_ref; ///< z reference
 float c_ref; ///< c reference
 float aux_float[4]; ///<  auxillary float 
 uint16_t code; ///<  code 
 uint16_t index; ///< waypoint index
 uint16_t int_float[4]; ///< auxilary integer
 uint8_t flag_visited; ///<  flag visited 
} mavlink_to_gum_t;

#define MAVLINK_MSG_ID_TO_GUM_LEN 61
#define MAVLINK_MSG_ID_210_LEN 61

#define MAVLINK_MSG_ID_TO_GUM_CRC 115
#define MAVLINK_MSG_ID_210_CRC 115

#define MAVLINK_MSG_TO_GUM_FIELD_AUX_FLOAT_LEN 4
#define MAVLINK_MSG_TO_GUM_FIELD_INT_FLOAT_LEN 4

#define MAVLINK_MESSAGE_INFO_TO_GUM { \
	"TO_GUM", \
	13, \
	{  { "x_m", NULL, MAVLINK_TYPE_FLOAT, 0, 0, offsetof(mavlink_to_gum_t, x_m) }, \
         { "y_m", NULL, MAVLINK_TYPE_FLOAT, 0, 4, offsetof(mavlink_to_gum_t, y_m) }, \
         { "z_m", NULL, MAVLINK_TYPE_FLOAT, 0, 8, offsetof(mavlink_to_gum_t, z_m) }, \
         { "c_m", NULL, MAVLINK_TYPE_FLOAT, 0, 12, offsetof(mavlink_to_gum_t, c_m) }, \
         { "x_ref", NULL, MAVLINK_TYPE_FLOAT, 0, 16, offsetof(mavlink_to_gum_t, x_ref) }, \
         { "y_ref", NULL, MAVLINK_TYPE_FLOAT, 0, 20, offsetof(mavlink_to_gum_t, y_ref) }, \
         { "z_ref", NULL, MAVLINK_TYPE_FLOAT, 0, 24, offsetof(mavlink_to_gum_t, z_ref) }, \
         { "c_ref", NULL, MAVLINK_TYPE_FLOAT, 0, 28, offsetof(mavlink_to_gum_t, c_ref) }, \
         { "aux_float", NULL, MAVLINK_TYPE_FLOAT, 4, 32, offsetof(mavlink_to_gum_t, aux_float) }, \
         { "code", NULL, MAVLINK_TYPE_UINT16_T, 0, 48, offsetof(mavlink_to_gum_t, code) }, \
         { "index", NULL, MAVLINK_TYPE_UINT16_T, 0, 50, offsetof(mavlink_to_gum_t, index) }, \
         { "int_float", NULL, MAVLINK_TYPE_UINT16_T, 4, 52, offsetof(mavlink_to_gum_t, int_float) }, \
         { "flag_visited", NULL, MAVLINK_TYPE_UINT8_T, 0, 60, offsetof(mavlink_to_gum_t, flag_visited) }, \
         } \
}


/**
 * @brief Pack a to_gum message
 * @param system_id ID of this system
 * @param component_id ID of this component (e.g. 200 for IMU)
 * @param msg The MAVLink message to compress the data into
 *
 * @param code  code 
 * @param x_m x measurement
 * @param y_m y measurement
 * @param z_m z measurement
 * @param c_m c measurement
 * @param x_ref x reference
 * @param y_ref y reference
 * @param z_ref z reference
 * @param c_ref c reference
 * @param flag_visited  flag visited 
 * @param index waypoint index
 * @param aux_float  auxillary float 
 * @param int_float auxilary integer
 * @return length of the message in bytes (excluding serial stream start sign)
 */
static inline uint16_t mavlink_msg_to_gum_pack(uint8_t system_id, uint8_t component_id, mavlink_message_t* msg,
						       uint16_t code, float x_m, float y_m, float z_m, float c_m, float x_ref, float y_ref, float z_ref, float c_ref, uint8_t flag_visited, uint16_t index, const float *aux_float, const uint16_t *int_float)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
	char buf[MAVLINK_MSG_ID_TO_GUM_LEN];
	_mav_put_float(buf, 0, x_m);
	_mav_put_float(buf, 4, y_m);
	_mav_put_float(buf, 8, z_m);
	_mav_put_float(buf, 12, c_m);
	_mav_put_float(buf, 16, x_ref);
	_mav_put_float(buf, 20, y_ref);
	_mav_put_float(buf, 24, z_ref);
	_mav_put_float(buf, 28, c_ref);
	_mav_put_uint16_t(buf, 48, code);
	_mav_put_uint16_t(buf, 50, index);
	_mav_put_uint8_t(buf, 60, flag_visited);
	_mav_put_float_array(buf, 32, aux_float, 4);
	_mav_put_uint16_t_array(buf, 52, int_float, 4);
        memcpy(_MAV_PAYLOAD_NON_CONST(msg), buf, MAVLINK_MSG_ID_TO_GUM_LEN);
#else
	mavlink_to_gum_t packet;
	packet.x_m = x_m;
	packet.y_m = y_m;
	packet.z_m = z_m;
	packet.c_m = c_m;
	packet.x_ref = x_ref;
	packet.y_ref = y_ref;
	packet.z_ref = z_ref;
	packet.c_ref = c_ref;
	packet.code = code;
	packet.index = index;
	packet.flag_visited = flag_visited;
	mav_array_memcpy(packet.aux_float, aux_float, sizeof(float)*4);
	mav_array_memcpy(packet.int_float, int_float, sizeof(uint16_t)*4);
        memcpy(_MAV_PAYLOAD_NON_CONST(msg), &packet, MAVLINK_MSG_ID_TO_GUM_LEN);
#endif

	msg->msgid = MAVLINK_MSG_ID_TO_GUM;
#if MAVLINK_CRC_EXTRA
    return mavlink_finalize_message(msg, system_id, component_id, MAVLINK_MSG_ID_TO_GUM_LEN, MAVLINK_MSG_ID_TO_GUM_CRC);
#else
    return mavlink_finalize_message(msg, system_id, component_id, MAVLINK_MSG_ID_TO_GUM_LEN);
#endif
}

/**
 * @brief Pack a to_gum message on a channel
 * @param system_id ID of this system
 * @param component_id ID of this component (e.g. 200 for IMU)
 * @param chan The MAVLink channel this message will be sent over
 * @param msg The MAVLink message to compress the data into
 * @param code  code 
 * @param x_m x measurement
 * @param y_m y measurement
 * @param z_m z measurement
 * @param c_m c measurement
 * @param x_ref x reference
 * @param y_ref y reference
 * @param z_ref z reference
 * @param c_ref c reference
 * @param flag_visited  flag visited 
 * @param index waypoint index
 * @param aux_float  auxillary float 
 * @param int_float auxilary integer
 * @return length of the message in bytes (excluding serial stream start sign)
 */
static inline uint16_t mavlink_msg_to_gum_pack_chan(uint8_t system_id, uint8_t component_id, uint8_t chan,
							   mavlink_message_t* msg,
						           uint16_t code,float x_m,float y_m,float z_m,float c_m,float x_ref,float y_ref,float z_ref,float c_ref,uint8_t flag_visited,uint16_t index,const float *aux_float,const uint16_t *int_float)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
	char buf[MAVLINK_MSG_ID_TO_GUM_LEN];
	_mav_put_float(buf, 0, x_m);
	_mav_put_float(buf, 4, y_m);
	_mav_put_float(buf, 8, z_m);
	_mav_put_float(buf, 12, c_m);
	_mav_put_float(buf, 16, x_ref);
	_mav_put_float(buf, 20, y_ref);
	_mav_put_float(buf, 24, z_ref);
	_mav_put_float(buf, 28, c_ref);
	_mav_put_uint16_t(buf, 48, code);
	_mav_put_uint16_t(buf, 50, index);
	_mav_put_uint8_t(buf, 60, flag_visited);
	_mav_put_float_array(buf, 32, aux_float, 4);
	_mav_put_uint16_t_array(buf, 52, int_float, 4);
        memcpy(_MAV_PAYLOAD_NON_CONST(msg), buf, MAVLINK_MSG_ID_TO_GUM_LEN);
#else
	mavlink_to_gum_t packet;
	packet.x_m = x_m;
	packet.y_m = y_m;
	packet.z_m = z_m;
	packet.c_m = c_m;
	packet.x_ref = x_ref;
	packet.y_ref = y_ref;
	packet.z_ref = z_ref;
	packet.c_ref = c_ref;
	packet.code = code;
	packet.index = index;
	packet.flag_visited = flag_visited;
	mav_array_memcpy(packet.aux_float, aux_float, sizeof(float)*4);
	mav_array_memcpy(packet.int_float, int_float, sizeof(uint16_t)*4);
        memcpy(_MAV_PAYLOAD_NON_CONST(msg), &packet, MAVLINK_MSG_ID_TO_GUM_LEN);
#endif

	msg->msgid = MAVLINK_MSG_ID_TO_GUM;
#if MAVLINK_CRC_EXTRA
    return mavlink_finalize_message_chan(msg, system_id, component_id, chan, MAVLINK_MSG_ID_TO_GUM_LEN, MAVLINK_MSG_ID_TO_GUM_CRC);
#else
    return mavlink_finalize_message_chan(msg, system_id, component_id, chan, MAVLINK_MSG_ID_TO_GUM_LEN);
#endif
}

/**
 * @brief Encode a to_gum struct
 *
 * @param system_id ID of this system
 * @param component_id ID of this component (e.g. 200 for IMU)
 * @param msg The MAVLink message to compress the data into
 * @param to_gum C-struct to read the message contents from
 */
static inline uint16_t mavlink_msg_to_gum_encode(uint8_t system_id, uint8_t component_id, mavlink_message_t* msg, const mavlink_to_gum_t* to_gum)
{
	return mavlink_msg_to_gum_pack(system_id, component_id, msg, to_gum->code, to_gum->x_m, to_gum->y_m, to_gum->z_m, to_gum->c_m, to_gum->x_ref, to_gum->y_ref, to_gum->z_ref, to_gum->c_ref, to_gum->flag_visited, to_gum->index, to_gum->aux_float, to_gum->int_float);
}

/**
 * @brief Encode a to_gum struct on a channel
 *
 * @param system_id ID of this system
 * @param component_id ID of this component (e.g. 200 for IMU)
 * @param chan The MAVLink channel this message will be sent over
 * @param msg The MAVLink message to compress the data into
 * @param to_gum C-struct to read the message contents from
 */
static inline uint16_t mavlink_msg_to_gum_encode_chan(uint8_t system_id, uint8_t component_id, uint8_t chan, mavlink_message_t* msg, const mavlink_to_gum_t* to_gum)
{
	return mavlink_msg_to_gum_pack_chan(system_id, component_id, chan, msg, to_gum->code, to_gum->x_m, to_gum->y_m, to_gum->z_m, to_gum->c_m, to_gum->x_ref, to_gum->y_ref, to_gum->z_ref, to_gum->c_ref, to_gum->flag_visited, to_gum->index, to_gum->aux_float, to_gum->int_float);
}

/**
 * @brief Send a to_gum message
 * @param chan MAVLink channel to send the message
 *
 * @param code  code 
 * @param x_m x measurement
 * @param y_m y measurement
 * @param z_m z measurement
 * @param c_m c measurement
 * @param x_ref x reference
 * @param y_ref y reference
 * @param z_ref z reference
 * @param c_ref c reference
 * @param flag_visited  flag visited 
 * @param index waypoint index
 * @param aux_float  auxillary float 
 * @param int_float auxilary integer
 */
#ifdef MAVLINK_USE_CONVENIENCE_FUNCTIONS

static inline void mavlink_msg_to_gum_send(mavlink_channel_t chan, uint16_t code, float x_m, float y_m, float z_m, float c_m, float x_ref, float y_ref, float z_ref, float c_ref, uint8_t flag_visited, uint16_t index, const float *aux_float, const uint16_t *int_float)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
	char buf[MAVLINK_MSG_ID_TO_GUM_LEN];
	_mav_put_float(buf, 0, x_m);
	_mav_put_float(buf, 4, y_m);
	_mav_put_float(buf, 8, z_m);
	_mav_put_float(buf, 12, c_m);
	_mav_put_float(buf, 16, x_ref);
	_mav_put_float(buf, 20, y_ref);
	_mav_put_float(buf, 24, z_ref);
	_mav_put_float(buf, 28, c_ref);
	_mav_put_uint16_t(buf, 48, code);
	_mav_put_uint16_t(buf, 50, index);
	_mav_put_uint8_t(buf, 60, flag_visited);
	_mav_put_float_array(buf, 32, aux_float, 4);
	_mav_put_uint16_t_array(buf, 52, int_float, 4);
#if MAVLINK_CRC_EXTRA
    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_TO_GUM, buf, MAVLINK_MSG_ID_TO_GUM_LEN, MAVLINK_MSG_ID_TO_GUM_CRC);
#else
    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_TO_GUM, buf, MAVLINK_MSG_ID_TO_GUM_LEN);
#endif
#else
	mavlink_to_gum_t packet;
	packet.x_m = x_m;
	packet.y_m = y_m;
	packet.z_m = z_m;
	packet.c_m = c_m;
	packet.x_ref = x_ref;
	packet.y_ref = y_ref;
	packet.z_ref = z_ref;
	packet.c_ref = c_ref;
	packet.code = code;
	packet.index = index;
	packet.flag_visited = flag_visited;
	mav_array_memcpy(packet.aux_float, aux_float, sizeof(float)*4);
	mav_array_memcpy(packet.int_float, int_float, sizeof(uint16_t)*4);
#if MAVLINK_CRC_EXTRA
    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_TO_GUM, (const char *)&packet, MAVLINK_MSG_ID_TO_GUM_LEN, MAVLINK_MSG_ID_TO_GUM_CRC);
#else
    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_TO_GUM, (const char *)&packet, MAVLINK_MSG_ID_TO_GUM_LEN);
#endif
#endif
}

#if MAVLINK_MSG_ID_TO_GUM_LEN <= MAVLINK_MAX_PAYLOAD_LEN
/*
  This varient of _send() can be used to save stack space by re-using
  memory from the receive buffer.  The caller provides a
  mavlink_message_t which is the size of a full mavlink message. This
  is usually the receive buffer for the channel, and allows a reply to an
  incoming message with minimum stack space usage.
 */
static inline void mavlink_msg_to_gum_send_buf(mavlink_message_t *msgbuf, mavlink_channel_t chan,  uint16_t code, float x_m, float y_m, float z_m, float c_m, float x_ref, float y_ref, float z_ref, float c_ref, uint8_t flag_visited, uint16_t index, const float *aux_float, const uint16_t *int_float)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
	char *buf = (char *)msgbuf;
	_mav_put_float(buf, 0, x_m);
	_mav_put_float(buf, 4, y_m);
	_mav_put_float(buf, 8, z_m);
	_mav_put_float(buf, 12, c_m);
	_mav_put_float(buf, 16, x_ref);
	_mav_put_float(buf, 20, y_ref);
	_mav_put_float(buf, 24, z_ref);
	_mav_put_float(buf, 28, c_ref);
	_mav_put_uint16_t(buf, 48, code);
	_mav_put_uint16_t(buf, 50, index);
	_mav_put_uint8_t(buf, 60, flag_visited);
	_mav_put_float_array(buf, 32, aux_float, 4);
	_mav_put_uint16_t_array(buf, 52, int_float, 4);
#if MAVLINK_CRC_EXTRA
    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_TO_GUM, buf, MAVLINK_MSG_ID_TO_GUM_LEN, MAVLINK_MSG_ID_TO_GUM_CRC);
#else
    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_TO_GUM, buf, MAVLINK_MSG_ID_TO_GUM_LEN);
#endif
#else
	mavlink_to_gum_t *packet = (mavlink_to_gum_t *)msgbuf;
	packet->x_m = x_m;
	packet->y_m = y_m;
	packet->z_m = z_m;
	packet->c_m = c_m;
	packet->x_ref = x_ref;
	packet->y_ref = y_ref;
	packet->z_ref = z_ref;
	packet->c_ref = c_ref;
	packet->code = code;
	packet->index = index;
	packet->flag_visited = flag_visited;
	mav_array_memcpy(packet->aux_float, aux_float, sizeof(float)*4);
	mav_array_memcpy(packet->int_float, int_float, sizeof(uint16_t)*4);
#if MAVLINK_CRC_EXTRA
    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_TO_GUM, (const char *)packet, MAVLINK_MSG_ID_TO_GUM_LEN, MAVLINK_MSG_ID_TO_GUM_CRC);
#else
    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_TO_GUM, (const char *)packet, MAVLINK_MSG_ID_TO_GUM_LEN);
#endif
#endif
}
#endif

#endif

// MESSAGE TO_GUM UNPACKING


/**
 * @brief Get field code from to_gum message
 *
 * @return  code 
 */
static inline uint16_t mavlink_msg_to_gum_get_code(const mavlink_message_t* msg)
{
	return _MAV_RETURN_uint16_t(msg,  48);
}

/**
 * @brief Get field x_m from to_gum message
 *
 * @return x measurement
 */
static inline float mavlink_msg_to_gum_get_x_m(const mavlink_message_t* msg)
{
	return _MAV_RETURN_float(msg,  0);
}

/**
 * @brief Get field y_m from to_gum message
 *
 * @return y measurement
 */
static inline float mavlink_msg_to_gum_get_y_m(const mavlink_message_t* msg)
{
	return _MAV_RETURN_float(msg,  4);
}

/**
 * @brief Get field z_m from to_gum message
 *
 * @return z measurement
 */
static inline float mavlink_msg_to_gum_get_z_m(const mavlink_message_t* msg)
{
	return _MAV_RETURN_float(msg,  8);
}

/**
 * @brief Get field c_m from to_gum message
 *
 * @return c measurement
 */
static inline float mavlink_msg_to_gum_get_c_m(const mavlink_message_t* msg)
{
	return _MAV_RETURN_float(msg,  12);
}

/**
 * @brief Get field x_ref from to_gum message
 *
 * @return x reference
 */
static inline float mavlink_msg_to_gum_get_x_ref(const mavlink_message_t* msg)
{
	return _MAV_RETURN_float(msg,  16);
}

/**
 * @brief Get field y_ref from to_gum message
 *
 * @return y reference
 */
static inline float mavlink_msg_to_gum_get_y_ref(const mavlink_message_t* msg)
{
	return _MAV_RETURN_float(msg,  20);
}

/**
 * @brief Get field z_ref from to_gum message
 *
 * @return z reference
 */
static inline float mavlink_msg_to_gum_get_z_ref(const mavlink_message_t* msg)
{
	return _MAV_RETURN_float(msg,  24);
}

/**
 * @brief Get field c_ref from to_gum message
 *
 * @return c reference
 */
static inline float mavlink_msg_to_gum_get_c_ref(const mavlink_message_t* msg)
{
	return _MAV_RETURN_float(msg,  28);
}

/**
 * @brief Get field flag_visited from to_gum message
 *
 * @return  flag visited 
 */
static inline uint8_t mavlink_msg_to_gum_get_flag_visited(const mavlink_message_t* msg)
{
	return _MAV_RETURN_uint8_t(msg,  60);
}

/**
 * @brief Get field index from to_gum message
 *
 * @return waypoint index
 */
static inline uint16_t mavlink_msg_to_gum_get_index(const mavlink_message_t* msg)
{
	return _MAV_RETURN_uint16_t(msg,  50);
}

/**
 * @brief Get field aux_float from to_gum message
 *
 * @return  auxillary float 
 */
static inline uint16_t mavlink_msg_to_gum_get_aux_float(const mavlink_message_t* msg, float *aux_float)
{
	return _MAV_RETURN_float_array(msg, aux_float, 4,  32);
}

/**
 * @brief Get field int_float from to_gum message
 *
 * @return auxilary integer
 */
static inline uint16_t mavlink_msg_to_gum_get_int_float(const mavlink_message_t* msg, uint16_t *int_float)
{
	return _MAV_RETURN_uint16_t_array(msg, int_float, 4,  52);
}

/**
 * @brief Decode a to_gum message into a struct
 *
 * @param msg The message to decode
 * @param to_gum C-struct to decode the message contents into
 */
static inline void mavlink_msg_to_gum_decode(const mavlink_message_t* msg, mavlink_to_gum_t* to_gum)
{
#if MAVLINK_NEED_BYTE_SWAP
	to_gum->x_m = mavlink_msg_to_gum_get_x_m(msg);
	to_gum->y_m = mavlink_msg_to_gum_get_y_m(msg);
	to_gum->z_m = mavlink_msg_to_gum_get_z_m(msg);
	to_gum->c_m = mavlink_msg_to_gum_get_c_m(msg);
	to_gum->x_ref = mavlink_msg_to_gum_get_x_ref(msg);
	to_gum->y_ref = mavlink_msg_to_gum_get_y_ref(msg);
	to_gum->z_ref = mavlink_msg_to_gum_get_z_ref(msg);
	to_gum->c_ref = mavlink_msg_to_gum_get_c_ref(msg);
	mavlink_msg_to_gum_get_aux_float(msg, to_gum->aux_float);
	to_gum->code = mavlink_msg_to_gum_get_code(msg);
	to_gum->index = mavlink_msg_to_gum_get_index(msg);
	mavlink_msg_to_gum_get_int_float(msg, to_gum->int_float);
	to_gum->flag_visited = mavlink_msg_to_gum_get_flag_visited(msg);
#else
	memcpy(to_gum, _MAV_PAYLOAD(msg), MAVLINK_MSG_ID_TO_GUM_LEN);
#endif
}
