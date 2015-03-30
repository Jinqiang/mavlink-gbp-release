// MESSAGE FROM_GUM PACKING

#define MAVLINK_MSG_ID_FROM_GUM 211

typedef struct __mavlink_from_gum_t
{
 float x; ///< X Position
 float y; ///< Y Position
 float z; ///< Z Position
 float ug; ///< X Speed
 float vg; ///< Y Speed
 float wg; ///< Z Speed
 float acx; ///< X Speed
 float acy; ///< Y Speed
 float acz; ///< Z Speed
 float a; ///< Roll Angle
 float b; ///< Pitch Angle
 float c; ///< Yaw Angle
 float x_ref; ///< X Position reference
 float y_ref; ///< Y Position reference
 float z_ref; ///< Z Position reference
 float c_ref; ///< Yaw Angle reference
 float u_ref; ///< X Velocity reference
 float v_ref; ///< Y Velocity reference
 float w_ref; ///< Z Velocity reference
 float ax_ref; ///< X Acceleration measurement
 float ay_ref; ///< Y Acceleration measurement
 float az_ref; ///< Z Acceleration measurement
 float aux_float[4]; ///<  auxillary float 
 uint16_t code; ///<  code 
 uint16_t aux_int[4]; ///< auxilary integer
} mavlink_from_gum_t;

#define MAVLINK_MSG_ID_FROM_GUM_LEN 114
#define MAVLINK_MSG_ID_211_LEN 114

#define MAVLINK_MSG_ID_FROM_GUM_CRC 1
#define MAVLINK_MSG_ID_211_CRC 1

#define MAVLINK_MSG_FROM_GUM_FIELD_AUX_FLOAT_LEN 4
#define MAVLINK_MSG_FROM_GUM_FIELD_AUX_INT_LEN 4

#define MAVLINK_MESSAGE_INFO_FROM_GUM { \
	"FROM_GUM", \
	25, \
	{  { "x", NULL, MAVLINK_TYPE_FLOAT, 0, 0, offsetof(mavlink_from_gum_t, x) }, \
         { "y", NULL, MAVLINK_TYPE_FLOAT, 0, 4, offsetof(mavlink_from_gum_t, y) }, \
         { "z", NULL, MAVLINK_TYPE_FLOAT, 0, 8, offsetof(mavlink_from_gum_t, z) }, \
         { "ug", NULL, MAVLINK_TYPE_FLOAT, 0, 12, offsetof(mavlink_from_gum_t, ug) }, \
         { "vg", NULL, MAVLINK_TYPE_FLOAT, 0, 16, offsetof(mavlink_from_gum_t, vg) }, \
         { "wg", NULL, MAVLINK_TYPE_FLOAT, 0, 20, offsetof(mavlink_from_gum_t, wg) }, \
         { "acx", NULL, MAVLINK_TYPE_FLOAT, 0, 24, offsetof(mavlink_from_gum_t, acx) }, \
         { "acy", NULL, MAVLINK_TYPE_FLOAT, 0, 28, offsetof(mavlink_from_gum_t, acy) }, \
         { "acz", NULL, MAVLINK_TYPE_FLOAT, 0, 32, offsetof(mavlink_from_gum_t, acz) }, \
         { "a", NULL, MAVLINK_TYPE_FLOAT, 0, 36, offsetof(mavlink_from_gum_t, a) }, \
         { "b", NULL, MAVLINK_TYPE_FLOAT, 0, 40, offsetof(mavlink_from_gum_t, b) }, \
         { "c", NULL, MAVLINK_TYPE_FLOAT, 0, 44, offsetof(mavlink_from_gum_t, c) }, \
         { "x_ref", NULL, MAVLINK_TYPE_FLOAT, 0, 48, offsetof(mavlink_from_gum_t, x_ref) }, \
         { "y_ref", NULL, MAVLINK_TYPE_FLOAT, 0, 52, offsetof(mavlink_from_gum_t, y_ref) }, \
         { "z_ref", NULL, MAVLINK_TYPE_FLOAT, 0, 56, offsetof(mavlink_from_gum_t, z_ref) }, \
         { "c_ref", NULL, MAVLINK_TYPE_FLOAT, 0, 60, offsetof(mavlink_from_gum_t, c_ref) }, \
         { "u_ref", NULL, MAVLINK_TYPE_FLOAT, 0, 64, offsetof(mavlink_from_gum_t, u_ref) }, \
         { "v_ref", NULL, MAVLINK_TYPE_FLOAT, 0, 68, offsetof(mavlink_from_gum_t, v_ref) }, \
         { "w_ref", NULL, MAVLINK_TYPE_FLOAT, 0, 72, offsetof(mavlink_from_gum_t, w_ref) }, \
         { "ax_ref", NULL, MAVLINK_TYPE_FLOAT, 0, 76, offsetof(mavlink_from_gum_t, ax_ref) }, \
         { "ay_ref", NULL, MAVLINK_TYPE_FLOAT, 0, 80, offsetof(mavlink_from_gum_t, ay_ref) }, \
         { "az_ref", NULL, MAVLINK_TYPE_FLOAT, 0, 84, offsetof(mavlink_from_gum_t, az_ref) }, \
         { "aux_float", NULL, MAVLINK_TYPE_FLOAT, 4, 88, offsetof(mavlink_from_gum_t, aux_float) }, \
         { "code", NULL, MAVLINK_TYPE_UINT16_T, 0, 104, offsetof(mavlink_from_gum_t, code) }, \
         { "aux_int", NULL, MAVLINK_TYPE_UINT16_T, 4, 106, offsetof(mavlink_from_gum_t, aux_int) }, \
         } \
}


/**
 * @brief Pack a from_gum message
 * @param system_id ID of this system
 * @param component_id ID of this component (e.g. 200 for IMU)
 * @param msg The MAVLink message to compress the data into
 *
 * @param code  code 
 * @param x X Position
 * @param y Y Position
 * @param z Z Position
 * @param ug X Speed
 * @param vg Y Speed
 * @param wg Z Speed
 * @param acx X Speed
 * @param acy Y Speed
 * @param acz Z Speed
 * @param a Roll Angle
 * @param b Pitch Angle
 * @param c Yaw Angle
 * @param x_ref X Position reference
 * @param y_ref Y Position reference
 * @param z_ref Z Position reference
 * @param c_ref Yaw Angle reference
 * @param u_ref X Velocity reference
 * @param v_ref Y Velocity reference
 * @param w_ref Z Velocity reference
 * @param ax_ref X Acceleration measurement
 * @param ay_ref Y Acceleration measurement
 * @param az_ref Z Acceleration measurement
 * @param aux_float  auxillary float 
 * @param aux_int auxilary integer
 * @return length of the message in bytes (excluding serial stream start sign)
 */
static inline uint16_t mavlink_msg_from_gum_pack(uint8_t system_id, uint8_t component_id, mavlink_message_t* msg,
						       uint16_t code, float x, float y, float z, float ug, float vg, float wg, float acx, float acy, float acz, float a, float b, float c, float x_ref, float y_ref, float z_ref, float c_ref, float u_ref, float v_ref, float w_ref, float ax_ref, float ay_ref, float az_ref, const float *aux_float, const uint16_t *aux_int)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
	char buf[MAVLINK_MSG_ID_FROM_GUM_LEN];
	_mav_put_float(buf, 0, x);
	_mav_put_float(buf, 4, y);
	_mav_put_float(buf, 8, z);
	_mav_put_float(buf, 12, ug);
	_mav_put_float(buf, 16, vg);
	_mav_put_float(buf, 20, wg);
	_mav_put_float(buf, 24, acx);
	_mav_put_float(buf, 28, acy);
	_mav_put_float(buf, 32, acz);
	_mav_put_float(buf, 36, a);
	_mav_put_float(buf, 40, b);
	_mav_put_float(buf, 44, c);
	_mav_put_float(buf, 48, x_ref);
	_mav_put_float(buf, 52, y_ref);
	_mav_put_float(buf, 56, z_ref);
	_mav_put_float(buf, 60, c_ref);
	_mav_put_float(buf, 64, u_ref);
	_mav_put_float(buf, 68, v_ref);
	_mav_put_float(buf, 72, w_ref);
	_mav_put_float(buf, 76, ax_ref);
	_mav_put_float(buf, 80, ay_ref);
	_mav_put_float(buf, 84, az_ref);
	_mav_put_uint16_t(buf, 104, code);
	_mav_put_float_array(buf, 88, aux_float, 4);
	_mav_put_uint16_t_array(buf, 106, aux_int, 4);
        memcpy(_MAV_PAYLOAD_NON_CONST(msg), buf, MAVLINK_MSG_ID_FROM_GUM_LEN);
#else
	mavlink_from_gum_t packet;
	packet.x = x;
	packet.y = y;
	packet.z = z;
	packet.ug = ug;
	packet.vg = vg;
	packet.wg = wg;
	packet.acx = acx;
	packet.acy = acy;
	packet.acz = acz;
	packet.a = a;
	packet.b = b;
	packet.c = c;
	packet.x_ref = x_ref;
	packet.y_ref = y_ref;
	packet.z_ref = z_ref;
	packet.c_ref = c_ref;
	packet.u_ref = u_ref;
	packet.v_ref = v_ref;
	packet.w_ref = w_ref;
	packet.ax_ref = ax_ref;
	packet.ay_ref = ay_ref;
	packet.az_ref = az_ref;
	packet.code = code;
	mav_array_memcpy(packet.aux_float, aux_float, sizeof(float)*4);
	mav_array_memcpy(packet.aux_int, aux_int, sizeof(uint16_t)*4);
        memcpy(_MAV_PAYLOAD_NON_CONST(msg), &packet, MAVLINK_MSG_ID_FROM_GUM_LEN);
#endif

	msg->msgid = MAVLINK_MSG_ID_FROM_GUM;
#if MAVLINK_CRC_EXTRA
    return mavlink_finalize_message(msg, system_id, component_id, MAVLINK_MSG_ID_FROM_GUM_LEN, MAVLINK_MSG_ID_FROM_GUM_CRC);
#else
    return mavlink_finalize_message(msg, system_id, component_id, MAVLINK_MSG_ID_FROM_GUM_LEN);
#endif
}

/**
 * @brief Pack a from_gum message on a channel
 * @param system_id ID of this system
 * @param component_id ID of this component (e.g. 200 for IMU)
 * @param chan The MAVLink channel this message will be sent over
 * @param msg The MAVLink message to compress the data into
 * @param code  code 
 * @param x X Position
 * @param y Y Position
 * @param z Z Position
 * @param ug X Speed
 * @param vg Y Speed
 * @param wg Z Speed
 * @param acx X Speed
 * @param acy Y Speed
 * @param acz Z Speed
 * @param a Roll Angle
 * @param b Pitch Angle
 * @param c Yaw Angle
 * @param x_ref X Position reference
 * @param y_ref Y Position reference
 * @param z_ref Z Position reference
 * @param c_ref Yaw Angle reference
 * @param u_ref X Velocity reference
 * @param v_ref Y Velocity reference
 * @param w_ref Z Velocity reference
 * @param ax_ref X Acceleration measurement
 * @param ay_ref Y Acceleration measurement
 * @param az_ref Z Acceleration measurement
 * @param aux_float  auxillary float 
 * @param aux_int auxilary integer
 * @return length of the message in bytes (excluding serial stream start sign)
 */
static inline uint16_t mavlink_msg_from_gum_pack_chan(uint8_t system_id, uint8_t component_id, uint8_t chan,
							   mavlink_message_t* msg,
						           uint16_t code,float x,float y,float z,float ug,float vg,float wg,float acx,float acy,float acz,float a,float b,float c,float x_ref,float y_ref,float z_ref,float c_ref,float u_ref,float v_ref,float w_ref,float ax_ref,float ay_ref,float az_ref,const float *aux_float,const uint16_t *aux_int)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
	char buf[MAVLINK_MSG_ID_FROM_GUM_LEN];
	_mav_put_float(buf, 0, x);
	_mav_put_float(buf, 4, y);
	_mav_put_float(buf, 8, z);
	_mav_put_float(buf, 12, ug);
	_mav_put_float(buf, 16, vg);
	_mav_put_float(buf, 20, wg);
	_mav_put_float(buf, 24, acx);
	_mav_put_float(buf, 28, acy);
	_mav_put_float(buf, 32, acz);
	_mav_put_float(buf, 36, a);
	_mav_put_float(buf, 40, b);
	_mav_put_float(buf, 44, c);
	_mav_put_float(buf, 48, x_ref);
	_mav_put_float(buf, 52, y_ref);
	_mav_put_float(buf, 56, z_ref);
	_mav_put_float(buf, 60, c_ref);
	_mav_put_float(buf, 64, u_ref);
	_mav_put_float(buf, 68, v_ref);
	_mav_put_float(buf, 72, w_ref);
	_mav_put_float(buf, 76, ax_ref);
	_mav_put_float(buf, 80, ay_ref);
	_mav_put_float(buf, 84, az_ref);
	_mav_put_uint16_t(buf, 104, code);
	_mav_put_float_array(buf, 88, aux_float, 4);
	_mav_put_uint16_t_array(buf, 106, aux_int, 4);
        memcpy(_MAV_PAYLOAD_NON_CONST(msg), buf, MAVLINK_MSG_ID_FROM_GUM_LEN);
#else
	mavlink_from_gum_t packet;
	packet.x = x;
	packet.y = y;
	packet.z = z;
	packet.ug = ug;
	packet.vg = vg;
	packet.wg = wg;
	packet.acx = acx;
	packet.acy = acy;
	packet.acz = acz;
	packet.a = a;
	packet.b = b;
	packet.c = c;
	packet.x_ref = x_ref;
	packet.y_ref = y_ref;
	packet.z_ref = z_ref;
	packet.c_ref = c_ref;
	packet.u_ref = u_ref;
	packet.v_ref = v_ref;
	packet.w_ref = w_ref;
	packet.ax_ref = ax_ref;
	packet.ay_ref = ay_ref;
	packet.az_ref = az_ref;
	packet.code = code;
	mav_array_memcpy(packet.aux_float, aux_float, sizeof(float)*4);
	mav_array_memcpy(packet.aux_int, aux_int, sizeof(uint16_t)*4);
        memcpy(_MAV_PAYLOAD_NON_CONST(msg), &packet, MAVLINK_MSG_ID_FROM_GUM_LEN);
#endif

	msg->msgid = MAVLINK_MSG_ID_FROM_GUM;
#if MAVLINK_CRC_EXTRA
    return mavlink_finalize_message_chan(msg, system_id, component_id, chan, MAVLINK_MSG_ID_FROM_GUM_LEN, MAVLINK_MSG_ID_FROM_GUM_CRC);
#else
    return mavlink_finalize_message_chan(msg, system_id, component_id, chan, MAVLINK_MSG_ID_FROM_GUM_LEN);
#endif
}

/**
 * @brief Encode a from_gum struct
 *
 * @param system_id ID of this system
 * @param component_id ID of this component (e.g. 200 for IMU)
 * @param msg The MAVLink message to compress the data into
 * @param from_gum C-struct to read the message contents from
 */
static inline uint16_t mavlink_msg_from_gum_encode(uint8_t system_id, uint8_t component_id, mavlink_message_t* msg, const mavlink_from_gum_t* from_gum)
{
	return mavlink_msg_from_gum_pack(system_id, component_id, msg, from_gum->code, from_gum->x, from_gum->y, from_gum->z, from_gum->ug, from_gum->vg, from_gum->wg, from_gum->acx, from_gum->acy, from_gum->acz, from_gum->a, from_gum->b, from_gum->c, from_gum->x_ref, from_gum->y_ref, from_gum->z_ref, from_gum->c_ref, from_gum->u_ref, from_gum->v_ref, from_gum->w_ref, from_gum->ax_ref, from_gum->ay_ref, from_gum->az_ref, from_gum->aux_float, from_gum->aux_int);
}

/**
 * @brief Encode a from_gum struct on a channel
 *
 * @param system_id ID of this system
 * @param component_id ID of this component (e.g. 200 for IMU)
 * @param chan The MAVLink channel this message will be sent over
 * @param msg The MAVLink message to compress the data into
 * @param from_gum C-struct to read the message contents from
 */
static inline uint16_t mavlink_msg_from_gum_encode_chan(uint8_t system_id, uint8_t component_id, uint8_t chan, mavlink_message_t* msg, const mavlink_from_gum_t* from_gum)
{
	return mavlink_msg_from_gum_pack_chan(system_id, component_id, chan, msg, from_gum->code, from_gum->x, from_gum->y, from_gum->z, from_gum->ug, from_gum->vg, from_gum->wg, from_gum->acx, from_gum->acy, from_gum->acz, from_gum->a, from_gum->b, from_gum->c, from_gum->x_ref, from_gum->y_ref, from_gum->z_ref, from_gum->c_ref, from_gum->u_ref, from_gum->v_ref, from_gum->w_ref, from_gum->ax_ref, from_gum->ay_ref, from_gum->az_ref, from_gum->aux_float, from_gum->aux_int);
}

/**
 * @brief Send a from_gum message
 * @param chan MAVLink channel to send the message
 *
 * @param code  code 
 * @param x X Position
 * @param y Y Position
 * @param z Z Position
 * @param ug X Speed
 * @param vg Y Speed
 * @param wg Z Speed
 * @param acx X Speed
 * @param acy Y Speed
 * @param acz Z Speed
 * @param a Roll Angle
 * @param b Pitch Angle
 * @param c Yaw Angle
 * @param x_ref X Position reference
 * @param y_ref Y Position reference
 * @param z_ref Z Position reference
 * @param c_ref Yaw Angle reference
 * @param u_ref X Velocity reference
 * @param v_ref Y Velocity reference
 * @param w_ref Z Velocity reference
 * @param ax_ref X Acceleration measurement
 * @param ay_ref Y Acceleration measurement
 * @param az_ref Z Acceleration measurement
 * @param aux_float  auxillary float 
 * @param aux_int auxilary integer
 */
#ifdef MAVLINK_USE_CONVENIENCE_FUNCTIONS

static inline void mavlink_msg_from_gum_send(mavlink_channel_t chan, uint16_t code, float x, float y, float z, float ug, float vg, float wg, float acx, float acy, float acz, float a, float b, float c, float x_ref, float y_ref, float z_ref, float c_ref, float u_ref, float v_ref, float w_ref, float ax_ref, float ay_ref, float az_ref, const float *aux_float, const uint16_t *aux_int)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
	char buf[MAVLINK_MSG_ID_FROM_GUM_LEN];
	_mav_put_float(buf, 0, x);
	_mav_put_float(buf, 4, y);
	_mav_put_float(buf, 8, z);
	_mav_put_float(buf, 12, ug);
	_mav_put_float(buf, 16, vg);
	_mav_put_float(buf, 20, wg);
	_mav_put_float(buf, 24, acx);
	_mav_put_float(buf, 28, acy);
	_mav_put_float(buf, 32, acz);
	_mav_put_float(buf, 36, a);
	_mav_put_float(buf, 40, b);
	_mav_put_float(buf, 44, c);
	_mav_put_float(buf, 48, x_ref);
	_mav_put_float(buf, 52, y_ref);
	_mav_put_float(buf, 56, z_ref);
	_mav_put_float(buf, 60, c_ref);
	_mav_put_float(buf, 64, u_ref);
	_mav_put_float(buf, 68, v_ref);
	_mav_put_float(buf, 72, w_ref);
	_mav_put_float(buf, 76, ax_ref);
	_mav_put_float(buf, 80, ay_ref);
	_mav_put_float(buf, 84, az_ref);
	_mav_put_uint16_t(buf, 104, code);
	_mav_put_float_array(buf, 88, aux_float, 4);
	_mav_put_uint16_t_array(buf, 106, aux_int, 4);
#if MAVLINK_CRC_EXTRA
    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_FROM_GUM, buf, MAVLINK_MSG_ID_FROM_GUM_LEN, MAVLINK_MSG_ID_FROM_GUM_CRC);
#else
    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_FROM_GUM, buf, MAVLINK_MSG_ID_FROM_GUM_LEN);
#endif
#else
	mavlink_from_gum_t packet;
	packet.x = x;
	packet.y = y;
	packet.z = z;
	packet.ug = ug;
	packet.vg = vg;
	packet.wg = wg;
	packet.acx = acx;
	packet.acy = acy;
	packet.acz = acz;
	packet.a = a;
	packet.b = b;
	packet.c = c;
	packet.x_ref = x_ref;
	packet.y_ref = y_ref;
	packet.z_ref = z_ref;
	packet.c_ref = c_ref;
	packet.u_ref = u_ref;
	packet.v_ref = v_ref;
	packet.w_ref = w_ref;
	packet.ax_ref = ax_ref;
	packet.ay_ref = ay_ref;
	packet.az_ref = az_ref;
	packet.code = code;
	mav_array_memcpy(packet.aux_float, aux_float, sizeof(float)*4);
	mav_array_memcpy(packet.aux_int, aux_int, sizeof(uint16_t)*4);
#if MAVLINK_CRC_EXTRA
    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_FROM_GUM, (const char *)&packet, MAVLINK_MSG_ID_FROM_GUM_LEN, MAVLINK_MSG_ID_FROM_GUM_CRC);
#else
    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_FROM_GUM, (const char *)&packet, MAVLINK_MSG_ID_FROM_GUM_LEN);
#endif
#endif
}

#if MAVLINK_MSG_ID_FROM_GUM_LEN <= MAVLINK_MAX_PAYLOAD_LEN
/*
  This varient of _send() can be used to save stack space by re-using
  memory from the receive buffer.  The caller provides a
  mavlink_message_t which is the size of a full mavlink message. This
  is usually the receive buffer for the channel, and allows a reply to an
  incoming message with minimum stack space usage.
 */
static inline void mavlink_msg_from_gum_send_buf(mavlink_message_t *msgbuf, mavlink_channel_t chan,  uint16_t code, float x, float y, float z, float ug, float vg, float wg, float acx, float acy, float acz, float a, float b, float c, float x_ref, float y_ref, float z_ref, float c_ref, float u_ref, float v_ref, float w_ref, float ax_ref, float ay_ref, float az_ref, const float *aux_float, const uint16_t *aux_int)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
	char *buf = (char *)msgbuf;
	_mav_put_float(buf, 0, x);
	_mav_put_float(buf, 4, y);
	_mav_put_float(buf, 8, z);
	_mav_put_float(buf, 12, ug);
	_mav_put_float(buf, 16, vg);
	_mav_put_float(buf, 20, wg);
	_mav_put_float(buf, 24, acx);
	_mav_put_float(buf, 28, acy);
	_mav_put_float(buf, 32, acz);
	_mav_put_float(buf, 36, a);
	_mav_put_float(buf, 40, b);
	_mav_put_float(buf, 44, c);
	_mav_put_float(buf, 48, x_ref);
	_mav_put_float(buf, 52, y_ref);
	_mav_put_float(buf, 56, z_ref);
	_mav_put_float(buf, 60, c_ref);
	_mav_put_float(buf, 64, u_ref);
	_mav_put_float(buf, 68, v_ref);
	_mav_put_float(buf, 72, w_ref);
	_mav_put_float(buf, 76, ax_ref);
	_mav_put_float(buf, 80, ay_ref);
	_mav_put_float(buf, 84, az_ref);
	_mav_put_uint16_t(buf, 104, code);
	_mav_put_float_array(buf, 88, aux_float, 4);
	_mav_put_uint16_t_array(buf, 106, aux_int, 4);
#if MAVLINK_CRC_EXTRA
    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_FROM_GUM, buf, MAVLINK_MSG_ID_FROM_GUM_LEN, MAVLINK_MSG_ID_FROM_GUM_CRC);
#else
    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_FROM_GUM, buf, MAVLINK_MSG_ID_FROM_GUM_LEN);
#endif
#else
	mavlink_from_gum_t *packet = (mavlink_from_gum_t *)msgbuf;
	packet->x = x;
	packet->y = y;
	packet->z = z;
	packet->ug = ug;
	packet->vg = vg;
	packet->wg = wg;
	packet->acx = acx;
	packet->acy = acy;
	packet->acz = acz;
	packet->a = a;
	packet->b = b;
	packet->c = c;
	packet->x_ref = x_ref;
	packet->y_ref = y_ref;
	packet->z_ref = z_ref;
	packet->c_ref = c_ref;
	packet->u_ref = u_ref;
	packet->v_ref = v_ref;
	packet->w_ref = w_ref;
	packet->ax_ref = ax_ref;
	packet->ay_ref = ay_ref;
	packet->az_ref = az_ref;
	packet->code = code;
	mav_array_memcpy(packet->aux_float, aux_float, sizeof(float)*4);
	mav_array_memcpy(packet->aux_int, aux_int, sizeof(uint16_t)*4);
#if MAVLINK_CRC_EXTRA
    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_FROM_GUM, (const char *)packet, MAVLINK_MSG_ID_FROM_GUM_LEN, MAVLINK_MSG_ID_FROM_GUM_CRC);
#else
    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_FROM_GUM, (const char *)packet, MAVLINK_MSG_ID_FROM_GUM_LEN);
#endif
#endif
}
#endif

#endif

// MESSAGE FROM_GUM UNPACKING


/**
 * @brief Get field code from from_gum message
 *
 * @return  code 
 */
static inline uint16_t mavlink_msg_from_gum_get_code(const mavlink_message_t* msg)
{
	return _MAV_RETURN_uint16_t(msg,  104);
}

/**
 * @brief Get field x from from_gum message
 *
 * @return X Position
 */
static inline float mavlink_msg_from_gum_get_x(const mavlink_message_t* msg)
{
	return _MAV_RETURN_float(msg,  0);
}

/**
 * @brief Get field y from from_gum message
 *
 * @return Y Position
 */
static inline float mavlink_msg_from_gum_get_y(const mavlink_message_t* msg)
{
	return _MAV_RETURN_float(msg,  4);
}

/**
 * @brief Get field z from from_gum message
 *
 * @return Z Position
 */
static inline float mavlink_msg_from_gum_get_z(const mavlink_message_t* msg)
{
	return _MAV_RETURN_float(msg,  8);
}

/**
 * @brief Get field ug from from_gum message
 *
 * @return X Speed
 */
static inline float mavlink_msg_from_gum_get_ug(const mavlink_message_t* msg)
{
	return _MAV_RETURN_float(msg,  12);
}

/**
 * @brief Get field vg from from_gum message
 *
 * @return Y Speed
 */
static inline float mavlink_msg_from_gum_get_vg(const mavlink_message_t* msg)
{
	return _MAV_RETURN_float(msg,  16);
}

/**
 * @brief Get field wg from from_gum message
 *
 * @return Z Speed
 */
static inline float mavlink_msg_from_gum_get_wg(const mavlink_message_t* msg)
{
	return _MAV_RETURN_float(msg,  20);
}

/**
 * @brief Get field acx from from_gum message
 *
 * @return X Speed
 */
static inline float mavlink_msg_from_gum_get_acx(const mavlink_message_t* msg)
{
	return _MAV_RETURN_float(msg,  24);
}

/**
 * @brief Get field acy from from_gum message
 *
 * @return Y Speed
 */
static inline float mavlink_msg_from_gum_get_acy(const mavlink_message_t* msg)
{
	return _MAV_RETURN_float(msg,  28);
}

/**
 * @brief Get field acz from from_gum message
 *
 * @return Z Speed
 */
static inline float mavlink_msg_from_gum_get_acz(const mavlink_message_t* msg)
{
	return _MAV_RETURN_float(msg,  32);
}

/**
 * @brief Get field a from from_gum message
 *
 * @return Roll Angle
 */
static inline float mavlink_msg_from_gum_get_a(const mavlink_message_t* msg)
{
	return _MAV_RETURN_float(msg,  36);
}

/**
 * @brief Get field b from from_gum message
 *
 * @return Pitch Angle
 */
static inline float mavlink_msg_from_gum_get_b(const mavlink_message_t* msg)
{
	return _MAV_RETURN_float(msg,  40);
}

/**
 * @brief Get field c from from_gum message
 *
 * @return Yaw Angle
 */
static inline float mavlink_msg_from_gum_get_c(const mavlink_message_t* msg)
{
	return _MAV_RETURN_float(msg,  44);
}

/**
 * @brief Get field x_ref from from_gum message
 *
 * @return X Position reference
 */
static inline float mavlink_msg_from_gum_get_x_ref(const mavlink_message_t* msg)
{
	return _MAV_RETURN_float(msg,  48);
}

/**
 * @brief Get field y_ref from from_gum message
 *
 * @return Y Position reference
 */
static inline float mavlink_msg_from_gum_get_y_ref(const mavlink_message_t* msg)
{
	return _MAV_RETURN_float(msg,  52);
}

/**
 * @brief Get field z_ref from from_gum message
 *
 * @return Z Position reference
 */
static inline float mavlink_msg_from_gum_get_z_ref(const mavlink_message_t* msg)
{
	return _MAV_RETURN_float(msg,  56);
}

/**
 * @brief Get field c_ref from from_gum message
 *
 * @return Yaw Angle reference
 */
static inline float mavlink_msg_from_gum_get_c_ref(const mavlink_message_t* msg)
{
	return _MAV_RETURN_float(msg,  60);
}

/**
 * @brief Get field u_ref from from_gum message
 *
 * @return X Velocity reference
 */
static inline float mavlink_msg_from_gum_get_u_ref(const mavlink_message_t* msg)
{
	return _MAV_RETURN_float(msg,  64);
}

/**
 * @brief Get field v_ref from from_gum message
 *
 * @return Y Velocity reference
 */
static inline float mavlink_msg_from_gum_get_v_ref(const mavlink_message_t* msg)
{
	return _MAV_RETURN_float(msg,  68);
}

/**
 * @brief Get field w_ref from from_gum message
 *
 * @return Z Velocity reference
 */
static inline float mavlink_msg_from_gum_get_w_ref(const mavlink_message_t* msg)
{
	return _MAV_RETURN_float(msg,  72);
}

/**
 * @brief Get field ax_ref from from_gum message
 *
 * @return X Acceleration measurement
 */
static inline float mavlink_msg_from_gum_get_ax_ref(const mavlink_message_t* msg)
{
	return _MAV_RETURN_float(msg,  76);
}

/**
 * @brief Get field ay_ref from from_gum message
 *
 * @return Y Acceleration measurement
 */
static inline float mavlink_msg_from_gum_get_ay_ref(const mavlink_message_t* msg)
{
	return _MAV_RETURN_float(msg,  80);
}

/**
 * @brief Get field az_ref from from_gum message
 *
 * @return Z Acceleration measurement
 */
static inline float mavlink_msg_from_gum_get_az_ref(const mavlink_message_t* msg)
{
	return _MAV_RETURN_float(msg,  84);
}

/**
 * @brief Get field aux_float from from_gum message
 *
 * @return  auxillary float 
 */
static inline uint16_t mavlink_msg_from_gum_get_aux_float(const mavlink_message_t* msg, float *aux_float)
{
	return _MAV_RETURN_float_array(msg, aux_float, 4,  88);
}

/**
 * @brief Get field aux_int from from_gum message
 *
 * @return auxilary integer
 */
static inline uint16_t mavlink_msg_from_gum_get_aux_int(const mavlink_message_t* msg, uint16_t *aux_int)
{
	return _MAV_RETURN_uint16_t_array(msg, aux_int, 4,  106);
}

/**
 * @brief Decode a from_gum message into a struct
 *
 * @param msg The message to decode
 * @param from_gum C-struct to decode the message contents into
 */
static inline void mavlink_msg_from_gum_decode(const mavlink_message_t* msg, mavlink_from_gum_t* from_gum)
{
#if MAVLINK_NEED_BYTE_SWAP
	from_gum->x = mavlink_msg_from_gum_get_x(msg);
	from_gum->y = mavlink_msg_from_gum_get_y(msg);
	from_gum->z = mavlink_msg_from_gum_get_z(msg);
	from_gum->ug = mavlink_msg_from_gum_get_ug(msg);
	from_gum->vg = mavlink_msg_from_gum_get_vg(msg);
	from_gum->wg = mavlink_msg_from_gum_get_wg(msg);
	from_gum->acx = mavlink_msg_from_gum_get_acx(msg);
	from_gum->acy = mavlink_msg_from_gum_get_acy(msg);
	from_gum->acz = mavlink_msg_from_gum_get_acz(msg);
	from_gum->a = mavlink_msg_from_gum_get_a(msg);
	from_gum->b = mavlink_msg_from_gum_get_b(msg);
	from_gum->c = mavlink_msg_from_gum_get_c(msg);
	from_gum->x_ref = mavlink_msg_from_gum_get_x_ref(msg);
	from_gum->y_ref = mavlink_msg_from_gum_get_y_ref(msg);
	from_gum->z_ref = mavlink_msg_from_gum_get_z_ref(msg);
	from_gum->c_ref = mavlink_msg_from_gum_get_c_ref(msg);
	from_gum->u_ref = mavlink_msg_from_gum_get_u_ref(msg);
	from_gum->v_ref = mavlink_msg_from_gum_get_v_ref(msg);
	from_gum->w_ref = mavlink_msg_from_gum_get_w_ref(msg);
	from_gum->ax_ref = mavlink_msg_from_gum_get_ax_ref(msg);
	from_gum->ay_ref = mavlink_msg_from_gum_get_ay_ref(msg);
	from_gum->az_ref = mavlink_msg_from_gum_get_az_ref(msg);
	mavlink_msg_from_gum_get_aux_float(msg, from_gum->aux_float);
	from_gum->code = mavlink_msg_from_gum_get_code(msg);
	mavlink_msg_from_gum_get_aux_int(msg, from_gum->aux_int);
#else
	memcpy(from_gum, _MAV_PAYLOAD(msg), MAVLINK_MSG_ID_FROM_GUM_LEN);
#endif
}
