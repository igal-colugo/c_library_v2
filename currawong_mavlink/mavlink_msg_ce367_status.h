#pragma once
// MESSAGE CE367_STATUS PACKING

#define MAVLINK_MSG_ID_CE367_STATUS 60601


typedef struct __mavlink_ce367_status_t {
 float ecu_throttle; /*<  */
 uint32_t ecu_fuel_used; /*<  */
 uint16_t ecu_rpm; /*<  */
} mavlink_ce367_status_t;

#define MAVLINK_MSG_ID_CE367_STATUS_LEN 10
#define MAVLINK_MSG_ID_CE367_STATUS_MIN_LEN 10
#define MAVLINK_MSG_ID_60601_LEN 10
#define MAVLINK_MSG_ID_60601_MIN_LEN 10

#define MAVLINK_MSG_ID_CE367_STATUS_CRC 233
#define MAVLINK_MSG_ID_60601_CRC 233



#if MAVLINK_COMMAND_24BIT
#define MAVLINK_MESSAGE_INFO_CE367_STATUS { \
    60601, \
    "CE367_STATUS", \
    3, \
    {  { "ecu_throttle", NULL, MAVLINK_TYPE_FLOAT, 0, 0, offsetof(mavlink_ce367_status_t, ecu_throttle) }, \
         { "ecu_rpm", NULL, MAVLINK_TYPE_UINT16_T, 0, 8, offsetof(mavlink_ce367_status_t, ecu_rpm) }, \
         { "ecu_fuel_used", NULL, MAVLINK_TYPE_UINT32_T, 0, 4, offsetof(mavlink_ce367_status_t, ecu_fuel_used) }, \
         } \
}
#else
#define MAVLINK_MESSAGE_INFO_CE367_STATUS { \
    "CE367_STATUS", \
    3, \
    {  { "ecu_throttle", NULL, MAVLINK_TYPE_FLOAT, 0, 0, offsetof(mavlink_ce367_status_t, ecu_throttle) }, \
         { "ecu_rpm", NULL, MAVLINK_TYPE_UINT16_T, 0, 8, offsetof(mavlink_ce367_status_t, ecu_rpm) }, \
         { "ecu_fuel_used", NULL, MAVLINK_TYPE_UINT32_T, 0, 4, offsetof(mavlink_ce367_status_t, ecu_fuel_used) }, \
         } \
}
#endif

/**
 * @brief Pack a ce367_status message
 * @param system_id ID of this system
 * @param component_id ID of this component (e.g. 200 for IMU)
 * @param msg The MAVLink message to compress the data into
 *
 * @param ecu_throttle  
 * @param ecu_rpm  
 * @param ecu_fuel_used  
 * @return length of the message in bytes (excluding serial stream start sign)
 */
static inline uint16_t mavlink_msg_ce367_status_pack(uint8_t system_id, uint8_t component_id, mavlink_message_t* msg,
                               float ecu_throttle, uint16_t ecu_rpm, uint32_t ecu_fuel_used)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    char buf[MAVLINK_MSG_ID_CE367_STATUS_LEN];
    _mav_put_float(buf, 0, ecu_throttle);
    _mav_put_uint32_t(buf, 4, ecu_fuel_used);
    _mav_put_uint16_t(buf, 8, ecu_rpm);

        memcpy(_MAV_PAYLOAD_NON_CONST(msg), buf, MAVLINK_MSG_ID_CE367_STATUS_LEN);
#else
    mavlink_ce367_status_t packet;
    packet.ecu_throttle = ecu_throttle;
    packet.ecu_fuel_used = ecu_fuel_used;
    packet.ecu_rpm = ecu_rpm;

        memcpy(_MAV_PAYLOAD_NON_CONST(msg), &packet, MAVLINK_MSG_ID_CE367_STATUS_LEN);
#endif

    msg->msgid = MAVLINK_MSG_ID_CE367_STATUS;
    return mavlink_finalize_message(msg, system_id, component_id, MAVLINK_MSG_ID_CE367_STATUS_MIN_LEN, MAVLINK_MSG_ID_CE367_STATUS_LEN, MAVLINK_MSG_ID_CE367_STATUS_CRC);
}

/**
 * @brief Pack a ce367_status message on a channel
 * @param system_id ID of this system
 * @param component_id ID of this component (e.g. 200 for IMU)
 * @param chan The MAVLink channel this message will be sent over
 * @param msg The MAVLink message to compress the data into
 * @param ecu_throttle  
 * @param ecu_rpm  
 * @param ecu_fuel_used  
 * @return length of the message in bytes (excluding serial stream start sign)
 */
static inline uint16_t mavlink_msg_ce367_status_pack_chan(uint8_t system_id, uint8_t component_id, uint8_t chan,
                               mavlink_message_t* msg,
                                   float ecu_throttle,uint16_t ecu_rpm,uint32_t ecu_fuel_used)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    char buf[MAVLINK_MSG_ID_CE367_STATUS_LEN];
    _mav_put_float(buf, 0, ecu_throttle);
    _mav_put_uint32_t(buf, 4, ecu_fuel_used);
    _mav_put_uint16_t(buf, 8, ecu_rpm);

        memcpy(_MAV_PAYLOAD_NON_CONST(msg), buf, MAVLINK_MSG_ID_CE367_STATUS_LEN);
#else
    mavlink_ce367_status_t packet;
    packet.ecu_throttle = ecu_throttle;
    packet.ecu_fuel_used = ecu_fuel_used;
    packet.ecu_rpm = ecu_rpm;

        memcpy(_MAV_PAYLOAD_NON_CONST(msg), &packet, MAVLINK_MSG_ID_CE367_STATUS_LEN);
#endif

    msg->msgid = MAVLINK_MSG_ID_CE367_STATUS;
    return mavlink_finalize_message_chan(msg, system_id, component_id, chan, MAVLINK_MSG_ID_CE367_STATUS_MIN_LEN, MAVLINK_MSG_ID_CE367_STATUS_LEN, MAVLINK_MSG_ID_CE367_STATUS_CRC);
}

/**
 * @brief Encode a ce367_status struct
 *
 * @param system_id ID of this system
 * @param component_id ID of this component (e.g. 200 for IMU)
 * @param msg The MAVLink message to compress the data into
 * @param ce367_status C-struct to read the message contents from
 */
static inline uint16_t mavlink_msg_ce367_status_encode(uint8_t system_id, uint8_t component_id, mavlink_message_t* msg, const mavlink_ce367_status_t* ce367_status)
{
    return mavlink_msg_ce367_status_pack(system_id, component_id, msg, ce367_status->ecu_throttle, ce367_status->ecu_rpm, ce367_status->ecu_fuel_used);
}

/**
 * @brief Encode a ce367_status struct on a channel
 *
 * @param system_id ID of this system
 * @param component_id ID of this component (e.g. 200 for IMU)
 * @param chan The MAVLink channel this message will be sent over
 * @param msg The MAVLink message to compress the data into
 * @param ce367_status C-struct to read the message contents from
 */
static inline uint16_t mavlink_msg_ce367_status_encode_chan(uint8_t system_id, uint8_t component_id, uint8_t chan, mavlink_message_t* msg, const mavlink_ce367_status_t* ce367_status)
{
    return mavlink_msg_ce367_status_pack_chan(system_id, component_id, chan, msg, ce367_status->ecu_throttle, ce367_status->ecu_rpm, ce367_status->ecu_fuel_used);
}

/**
 * @brief Send a ce367_status message
 * @param chan MAVLink channel to send the message
 *
 * @param ecu_throttle  
 * @param ecu_rpm  
 * @param ecu_fuel_used  
 */
#ifdef MAVLINK_USE_CONVENIENCE_FUNCTIONS

static inline void mavlink_msg_ce367_status_send(mavlink_channel_t chan, float ecu_throttle, uint16_t ecu_rpm, uint32_t ecu_fuel_used)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    char buf[MAVLINK_MSG_ID_CE367_STATUS_LEN];
    _mav_put_float(buf, 0, ecu_throttle);
    _mav_put_uint32_t(buf, 4, ecu_fuel_used);
    _mav_put_uint16_t(buf, 8, ecu_rpm);

    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_CE367_STATUS, buf, MAVLINK_MSG_ID_CE367_STATUS_MIN_LEN, MAVLINK_MSG_ID_CE367_STATUS_LEN, MAVLINK_MSG_ID_CE367_STATUS_CRC);
#else
    mavlink_ce367_status_t packet;
    packet.ecu_throttle = ecu_throttle;
    packet.ecu_fuel_used = ecu_fuel_used;
    packet.ecu_rpm = ecu_rpm;

    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_CE367_STATUS, (const char *)&packet, MAVLINK_MSG_ID_CE367_STATUS_MIN_LEN, MAVLINK_MSG_ID_CE367_STATUS_LEN, MAVLINK_MSG_ID_CE367_STATUS_CRC);
#endif
}

/**
 * @brief Send a ce367_status message
 * @param chan MAVLink channel to send the message
 * @param struct The MAVLink struct to serialize
 */
static inline void mavlink_msg_ce367_status_send_struct(mavlink_channel_t chan, const mavlink_ce367_status_t* ce367_status)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    mavlink_msg_ce367_status_send(chan, ce367_status->ecu_throttle, ce367_status->ecu_rpm, ce367_status->ecu_fuel_used);
#else
    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_CE367_STATUS, (const char *)ce367_status, MAVLINK_MSG_ID_CE367_STATUS_MIN_LEN, MAVLINK_MSG_ID_CE367_STATUS_LEN, MAVLINK_MSG_ID_CE367_STATUS_CRC);
#endif
}

#if MAVLINK_MSG_ID_CE367_STATUS_LEN <= MAVLINK_MAX_PAYLOAD_LEN
/*
  This variant of _send() can be used to save stack space by re-using
  memory from the receive buffer.  The caller provides a
  mavlink_message_t which is the size of a full mavlink message. This
  is usually the receive buffer for the channel, and allows a reply to an
  incoming message with minimum stack space usage.
 */
static inline void mavlink_msg_ce367_status_send_buf(mavlink_message_t *msgbuf, mavlink_channel_t chan,  float ecu_throttle, uint16_t ecu_rpm, uint32_t ecu_fuel_used)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    char *buf = (char *)msgbuf;
    _mav_put_float(buf, 0, ecu_throttle);
    _mav_put_uint32_t(buf, 4, ecu_fuel_used);
    _mav_put_uint16_t(buf, 8, ecu_rpm);

    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_CE367_STATUS, buf, MAVLINK_MSG_ID_CE367_STATUS_MIN_LEN, MAVLINK_MSG_ID_CE367_STATUS_LEN, MAVLINK_MSG_ID_CE367_STATUS_CRC);
#else
    mavlink_ce367_status_t *packet = (mavlink_ce367_status_t *)msgbuf;
    packet->ecu_throttle = ecu_throttle;
    packet->ecu_fuel_used = ecu_fuel_used;
    packet->ecu_rpm = ecu_rpm;

    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_CE367_STATUS, (const char *)packet, MAVLINK_MSG_ID_CE367_STATUS_MIN_LEN, MAVLINK_MSG_ID_CE367_STATUS_LEN, MAVLINK_MSG_ID_CE367_STATUS_CRC);
#endif
}
#endif

#endif

// MESSAGE CE367_STATUS UNPACKING


/**
 * @brief Get field ecu_throttle from ce367_status message
 *
 * @return  
 */
static inline float mavlink_msg_ce367_status_get_ecu_throttle(const mavlink_message_t* msg)
{
    return _MAV_RETURN_float(msg,  0);
}

/**
 * @brief Get field ecu_rpm from ce367_status message
 *
 * @return  
 */
static inline uint16_t mavlink_msg_ce367_status_get_ecu_rpm(const mavlink_message_t* msg)
{
    return _MAV_RETURN_uint16_t(msg,  8);
}

/**
 * @brief Get field ecu_fuel_used from ce367_status message
 *
 * @return  
 */
static inline uint32_t mavlink_msg_ce367_status_get_ecu_fuel_used(const mavlink_message_t* msg)
{
    return _MAV_RETURN_uint32_t(msg,  4);
}

/**
 * @brief Decode a ce367_status message into a struct
 *
 * @param msg The message to decode
 * @param ce367_status C-struct to decode the message contents into
 */
static inline void mavlink_msg_ce367_status_decode(const mavlink_message_t* msg, mavlink_ce367_status_t* ce367_status)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    ce367_status->ecu_throttle = mavlink_msg_ce367_status_get_ecu_throttle(msg);
    ce367_status->ecu_fuel_used = mavlink_msg_ce367_status_get_ecu_fuel_used(msg);
    ce367_status->ecu_rpm = mavlink_msg_ce367_status_get_ecu_rpm(msg);
#else
        uint8_t len = msg->len < MAVLINK_MSG_ID_CE367_STATUS_LEN? msg->len : MAVLINK_MSG_ID_CE367_STATUS_LEN;
        memset(ce367_status, 0, MAVLINK_MSG_ID_CE367_STATUS_LEN);
    memcpy(ce367_status, _MAV_PAYLOAD(msg), len);
#endif
}
