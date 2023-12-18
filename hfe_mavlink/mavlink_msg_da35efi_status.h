#pragma once
// MESSAGE DA35EFI_STATUS PACKING

#define MAVLINK_MSG_ID_DA35EFI_STATUS 50601


typedef struct __mavlink_da35efi_status_t {
 float pulse_width_1; /*<  */
 float pulse_width_2; /*<  */
 float barometer; /*<  */
 float coolant; /*<  */
 float tps; /*<  */
 float battery_voltage; /*<  */
 float injector_duty_cycle; /*<  */
 float fuel_flow_rate_instantaneos; /*<  */
 float scaled_flow_rate; /*<  */
 uint16_t seconds; /*<  */
 uint16_t rpm; /*<  */
 uint8_t engine; /*<  */
} mavlink_da35efi_status_t;

#define MAVLINK_MSG_ID_DA35EFI_STATUS_LEN 41
#define MAVLINK_MSG_ID_DA35EFI_STATUS_MIN_LEN 41
#define MAVLINK_MSG_ID_50601_LEN 41
#define MAVLINK_MSG_ID_50601_MIN_LEN 41

#define MAVLINK_MSG_ID_DA35EFI_STATUS_CRC 195
#define MAVLINK_MSG_ID_50601_CRC 195



#if MAVLINK_COMMAND_24BIT
#define MAVLINK_MESSAGE_INFO_DA35EFI_STATUS { \
    50601, \
    "DA35EFI_STATUS", \
    12, \
    {  { "seconds", NULL, MAVLINK_TYPE_UINT16_T, 0, 36, offsetof(mavlink_da35efi_status_t, seconds) }, \
         { "pulse_width_1", NULL, MAVLINK_TYPE_FLOAT, 0, 0, offsetof(mavlink_da35efi_status_t, pulse_width_1) }, \
         { "pulse_width_2", NULL, MAVLINK_TYPE_FLOAT, 0, 4, offsetof(mavlink_da35efi_status_t, pulse_width_2) }, \
         { "rpm", NULL, MAVLINK_TYPE_UINT16_T, 0, 38, offsetof(mavlink_da35efi_status_t, rpm) }, \
         { "engine", NULL, MAVLINK_TYPE_UINT8_T, 0, 40, offsetof(mavlink_da35efi_status_t, engine) }, \
         { "barometer", NULL, MAVLINK_TYPE_FLOAT, 0, 8, offsetof(mavlink_da35efi_status_t, barometer) }, \
         { "coolant", NULL, MAVLINK_TYPE_FLOAT, 0, 12, offsetof(mavlink_da35efi_status_t, coolant) }, \
         { "tps", NULL, MAVLINK_TYPE_FLOAT, 0, 16, offsetof(mavlink_da35efi_status_t, tps) }, \
         { "battery_voltage", NULL, MAVLINK_TYPE_FLOAT, 0, 20, offsetof(mavlink_da35efi_status_t, battery_voltage) }, \
         { "injector_duty_cycle", NULL, MAVLINK_TYPE_FLOAT, 0, 24, offsetof(mavlink_da35efi_status_t, injector_duty_cycle) }, \
         { "fuel_flow_rate_instantaneos", NULL, MAVLINK_TYPE_FLOAT, 0, 28, offsetof(mavlink_da35efi_status_t, fuel_flow_rate_instantaneos) }, \
         { "scaled_flow_rate", NULL, MAVLINK_TYPE_FLOAT, 0, 32, offsetof(mavlink_da35efi_status_t, scaled_flow_rate) }, \
         } \
}
#else
#define MAVLINK_MESSAGE_INFO_DA35EFI_STATUS { \
    "DA35EFI_STATUS", \
    12, \
    {  { "seconds", NULL, MAVLINK_TYPE_UINT16_T, 0, 36, offsetof(mavlink_da35efi_status_t, seconds) }, \
         { "pulse_width_1", NULL, MAVLINK_TYPE_FLOAT, 0, 0, offsetof(mavlink_da35efi_status_t, pulse_width_1) }, \
         { "pulse_width_2", NULL, MAVLINK_TYPE_FLOAT, 0, 4, offsetof(mavlink_da35efi_status_t, pulse_width_2) }, \
         { "rpm", NULL, MAVLINK_TYPE_UINT16_T, 0, 38, offsetof(mavlink_da35efi_status_t, rpm) }, \
         { "engine", NULL, MAVLINK_TYPE_UINT8_T, 0, 40, offsetof(mavlink_da35efi_status_t, engine) }, \
         { "barometer", NULL, MAVLINK_TYPE_FLOAT, 0, 8, offsetof(mavlink_da35efi_status_t, barometer) }, \
         { "coolant", NULL, MAVLINK_TYPE_FLOAT, 0, 12, offsetof(mavlink_da35efi_status_t, coolant) }, \
         { "tps", NULL, MAVLINK_TYPE_FLOAT, 0, 16, offsetof(mavlink_da35efi_status_t, tps) }, \
         { "battery_voltage", NULL, MAVLINK_TYPE_FLOAT, 0, 20, offsetof(mavlink_da35efi_status_t, battery_voltage) }, \
         { "injector_duty_cycle", NULL, MAVLINK_TYPE_FLOAT, 0, 24, offsetof(mavlink_da35efi_status_t, injector_duty_cycle) }, \
         { "fuel_flow_rate_instantaneos", NULL, MAVLINK_TYPE_FLOAT, 0, 28, offsetof(mavlink_da35efi_status_t, fuel_flow_rate_instantaneos) }, \
         { "scaled_flow_rate", NULL, MAVLINK_TYPE_FLOAT, 0, 32, offsetof(mavlink_da35efi_status_t, scaled_flow_rate) }, \
         } \
}
#endif

/**
 * @brief Pack a da35efi_status message
 * @param system_id ID of this system
 * @param component_id ID of this component (e.g. 200 for IMU)
 * @param msg The MAVLink message to compress the data into
 *
 * @param seconds  
 * @param pulse_width_1  
 * @param pulse_width_2  
 * @param rpm  
 * @param engine  
 * @param barometer  
 * @param coolant  
 * @param tps  
 * @param battery_voltage  
 * @param injector_duty_cycle  
 * @param fuel_flow_rate_instantaneos  
 * @param scaled_flow_rate  
 * @return length of the message in bytes (excluding serial stream start sign)
 */
static inline uint16_t mavlink_msg_da35efi_status_pack(uint8_t system_id, uint8_t component_id, mavlink_message_t* msg,
                               uint16_t seconds, float pulse_width_1, float pulse_width_2, uint16_t rpm, uint8_t engine, float barometer, float coolant, float tps, float battery_voltage, float injector_duty_cycle, float fuel_flow_rate_instantaneos, float scaled_flow_rate)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    char buf[MAVLINK_MSG_ID_DA35EFI_STATUS_LEN];
    _mav_put_float(buf, 0, pulse_width_1);
    _mav_put_float(buf, 4, pulse_width_2);
    _mav_put_float(buf, 8, barometer);
    _mav_put_float(buf, 12, coolant);
    _mav_put_float(buf, 16, tps);
    _mav_put_float(buf, 20, battery_voltage);
    _mav_put_float(buf, 24, injector_duty_cycle);
    _mav_put_float(buf, 28, fuel_flow_rate_instantaneos);
    _mav_put_float(buf, 32, scaled_flow_rate);
    _mav_put_uint16_t(buf, 36, seconds);
    _mav_put_uint16_t(buf, 38, rpm);
    _mav_put_uint8_t(buf, 40, engine);

        memcpy(_MAV_PAYLOAD_NON_CONST(msg), buf, MAVLINK_MSG_ID_DA35EFI_STATUS_LEN);
#else
    mavlink_da35efi_status_t packet;
    packet.pulse_width_1 = pulse_width_1;
    packet.pulse_width_2 = pulse_width_2;
    packet.barometer = barometer;
    packet.coolant = coolant;
    packet.tps = tps;
    packet.battery_voltage = battery_voltage;
    packet.injector_duty_cycle = injector_duty_cycle;
    packet.fuel_flow_rate_instantaneos = fuel_flow_rate_instantaneos;
    packet.scaled_flow_rate = scaled_flow_rate;
    packet.seconds = seconds;
    packet.rpm = rpm;
    packet.engine = engine;

        memcpy(_MAV_PAYLOAD_NON_CONST(msg), &packet, MAVLINK_MSG_ID_DA35EFI_STATUS_LEN);
#endif

    msg->msgid = MAVLINK_MSG_ID_DA35EFI_STATUS;
    return mavlink_finalize_message(msg, system_id, component_id, MAVLINK_MSG_ID_DA35EFI_STATUS_MIN_LEN, MAVLINK_MSG_ID_DA35EFI_STATUS_LEN, MAVLINK_MSG_ID_DA35EFI_STATUS_CRC);
}

/**
 * @brief Pack a da35efi_status message on a channel
 * @param system_id ID of this system
 * @param component_id ID of this component (e.g. 200 for IMU)
 * @param chan The MAVLink channel this message will be sent over
 * @param msg The MAVLink message to compress the data into
 * @param seconds  
 * @param pulse_width_1  
 * @param pulse_width_2  
 * @param rpm  
 * @param engine  
 * @param barometer  
 * @param coolant  
 * @param tps  
 * @param battery_voltage  
 * @param injector_duty_cycle  
 * @param fuel_flow_rate_instantaneos  
 * @param scaled_flow_rate  
 * @return length of the message in bytes (excluding serial stream start sign)
 */
static inline uint16_t mavlink_msg_da35efi_status_pack_chan(uint8_t system_id, uint8_t component_id, uint8_t chan,
                               mavlink_message_t* msg,
                                   uint16_t seconds,float pulse_width_1,float pulse_width_2,uint16_t rpm,uint8_t engine,float barometer,float coolant,float tps,float battery_voltage,float injector_duty_cycle,float fuel_flow_rate_instantaneos,float scaled_flow_rate)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    char buf[MAVLINK_MSG_ID_DA35EFI_STATUS_LEN];
    _mav_put_float(buf, 0, pulse_width_1);
    _mav_put_float(buf, 4, pulse_width_2);
    _mav_put_float(buf, 8, barometer);
    _mav_put_float(buf, 12, coolant);
    _mav_put_float(buf, 16, tps);
    _mav_put_float(buf, 20, battery_voltage);
    _mav_put_float(buf, 24, injector_duty_cycle);
    _mav_put_float(buf, 28, fuel_flow_rate_instantaneos);
    _mav_put_float(buf, 32, scaled_flow_rate);
    _mav_put_uint16_t(buf, 36, seconds);
    _mav_put_uint16_t(buf, 38, rpm);
    _mav_put_uint8_t(buf, 40, engine);

        memcpy(_MAV_PAYLOAD_NON_CONST(msg), buf, MAVLINK_MSG_ID_DA35EFI_STATUS_LEN);
#else
    mavlink_da35efi_status_t packet;
    packet.pulse_width_1 = pulse_width_1;
    packet.pulse_width_2 = pulse_width_2;
    packet.barometer = barometer;
    packet.coolant = coolant;
    packet.tps = tps;
    packet.battery_voltage = battery_voltage;
    packet.injector_duty_cycle = injector_duty_cycle;
    packet.fuel_flow_rate_instantaneos = fuel_flow_rate_instantaneos;
    packet.scaled_flow_rate = scaled_flow_rate;
    packet.seconds = seconds;
    packet.rpm = rpm;
    packet.engine = engine;

        memcpy(_MAV_PAYLOAD_NON_CONST(msg), &packet, MAVLINK_MSG_ID_DA35EFI_STATUS_LEN);
#endif

    msg->msgid = MAVLINK_MSG_ID_DA35EFI_STATUS;
    return mavlink_finalize_message_chan(msg, system_id, component_id, chan, MAVLINK_MSG_ID_DA35EFI_STATUS_MIN_LEN, MAVLINK_MSG_ID_DA35EFI_STATUS_LEN, MAVLINK_MSG_ID_DA35EFI_STATUS_CRC);
}

/**
 * @brief Encode a da35efi_status struct
 *
 * @param system_id ID of this system
 * @param component_id ID of this component (e.g. 200 for IMU)
 * @param msg The MAVLink message to compress the data into
 * @param da35efi_status C-struct to read the message contents from
 */
static inline uint16_t mavlink_msg_da35efi_status_encode(uint8_t system_id, uint8_t component_id, mavlink_message_t* msg, const mavlink_da35efi_status_t* da35efi_status)
{
    return mavlink_msg_da35efi_status_pack(system_id, component_id, msg, da35efi_status->seconds, da35efi_status->pulse_width_1, da35efi_status->pulse_width_2, da35efi_status->rpm, da35efi_status->engine, da35efi_status->barometer, da35efi_status->coolant, da35efi_status->tps, da35efi_status->battery_voltage, da35efi_status->injector_duty_cycle, da35efi_status->fuel_flow_rate_instantaneos, da35efi_status->scaled_flow_rate);
}

/**
 * @brief Encode a da35efi_status struct on a channel
 *
 * @param system_id ID of this system
 * @param component_id ID of this component (e.g. 200 for IMU)
 * @param chan The MAVLink channel this message will be sent over
 * @param msg The MAVLink message to compress the data into
 * @param da35efi_status C-struct to read the message contents from
 */
static inline uint16_t mavlink_msg_da35efi_status_encode_chan(uint8_t system_id, uint8_t component_id, uint8_t chan, mavlink_message_t* msg, const mavlink_da35efi_status_t* da35efi_status)
{
    return mavlink_msg_da35efi_status_pack_chan(system_id, component_id, chan, msg, da35efi_status->seconds, da35efi_status->pulse_width_1, da35efi_status->pulse_width_2, da35efi_status->rpm, da35efi_status->engine, da35efi_status->barometer, da35efi_status->coolant, da35efi_status->tps, da35efi_status->battery_voltage, da35efi_status->injector_duty_cycle, da35efi_status->fuel_flow_rate_instantaneos, da35efi_status->scaled_flow_rate);
}

/**
 * @brief Send a da35efi_status message
 * @param chan MAVLink channel to send the message
 *
 * @param seconds  
 * @param pulse_width_1  
 * @param pulse_width_2  
 * @param rpm  
 * @param engine  
 * @param barometer  
 * @param coolant  
 * @param tps  
 * @param battery_voltage  
 * @param injector_duty_cycle  
 * @param fuel_flow_rate_instantaneos  
 * @param scaled_flow_rate  
 */
#ifdef MAVLINK_USE_CONVENIENCE_FUNCTIONS

static inline void mavlink_msg_da35efi_status_send(mavlink_channel_t chan, uint16_t seconds, float pulse_width_1, float pulse_width_2, uint16_t rpm, uint8_t engine, float barometer, float coolant, float tps, float battery_voltage, float injector_duty_cycle, float fuel_flow_rate_instantaneos, float scaled_flow_rate)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    char buf[MAVLINK_MSG_ID_DA35EFI_STATUS_LEN];
    _mav_put_float(buf, 0, pulse_width_1);
    _mav_put_float(buf, 4, pulse_width_2);
    _mav_put_float(buf, 8, barometer);
    _mav_put_float(buf, 12, coolant);
    _mav_put_float(buf, 16, tps);
    _mav_put_float(buf, 20, battery_voltage);
    _mav_put_float(buf, 24, injector_duty_cycle);
    _mav_put_float(buf, 28, fuel_flow_rate_instantaneos);
    _mav_put_float(buf, 32, scaled_flow_rate);
    _mav_put_uint16_t(buf, 36, seconds);
    _mav_put_uint16_t(buf, 38, rpm);
    _mav_put_uint8_t(buf, 40, engine);

    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_DA35EFI_STATUS, buf, MAVLINK_MSG_ID_DA35EFI_STATUS_MIN_LEN, MAVLINK_MSG_ID_DA35EFI_STATUS_LEN, MAVLINK_MSG_ID_DA35EFI_STATUS_CRC);
#else
    mavlink_da35efi_status_t packet;
    packet.pulse_width_1 = pulse_width_1;
    packet.pulse_width_2 = pulse_width_2;
    packet.barometer = barometer;
    packet.coolant = coolant;
    packet.tps = tps;
    packet.battery_voltage = battery_voltage;
    packet.injector_duty_cycle = injector_duty_cycle;
    packet.fuel_flow_rate_instantaneos = fuel_flow_rate_instantaneos;
    packet.scaled_flow_rate = scaled_flow_rate;
    packet.seconds = seconds;
    packet.rpm = rpm;
    packet.engine = engine;

    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_DA35EFI_STATUS, (const char *)&packet, MAVLINK_MSG_ID_DA35EFI_STATUS_MIN_LEN, MAVLINK_MSG_ID_DA35EFI_STATUS_LEN, MAVLINK_MSG_ID_DA35EFI_STATUS_CRC);
#endif
}

/**
 * @brief Send a da35efi_status message
 * @param chan MAVLink channel to send the message
 * @param struct The MAVLink struct to serialize
 */
static inline void mavlink_msg_da35efi_status_send_struct(mavlink_channel_t chan, const mavlink_da35efi_status_t* da35efi_status)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    mavlink_msg_da35efi_status_send(chan, da35efi_status->seconds, da35efi_status->pulse_width_1, da35efi_status->pulse_width_2, da35efi_status->rpm, da35efi_status->engine, da35efi_status->barometer, da35efi_status->coolant, da35efi_status->tps, da35efi_status->battery_voltage, da35efi_status->injector_duty_cycle, da35efi_status->fuel_flow_rate_instantaneos, da35efi_status->scaled_flow_rate);
#else
    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_DA35EFI_STATUS, (const char *)da35efi_status, MAVLINK_MSG_ID_DA35EFI_STATUS_MIN_LEN, MAVLINK_MSG_ID_DA35EFI_STATUS_LEN, MAVLINK_MSG_ID_DA35EFI_STATUS_CRC);
#endif
}

#if MAVLINK_MSG_ID_DA35EFI_STATUS_LEN <= MAVLINK_MAX_PAYLOAD_LEN
/*
  This variant of _send() can be used to save stack space by re-using
  memory from the receive buffer.  The caller provides a
  mavlink_message_t which is the size of a full mavlink message. This
  is usually the receive buffer for the channel, and allows a reply to an
  incoming message with minimum stack space usage.
 */
static inline void mavlink_msg_da35efi_status_send_buf(mavlink_message_t *msgbuf, mavlink_channel_t chan,  uint16_t seconds, float pulse_width_1, float pulse_width_2, uint16_t rpm, uint8_t engine, float barometer, float coolant, float tps, float battery_voltage, float injector_duty_cycle, float fuel_flow_rate_instantaneos, float scaled_flow_rate)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    char *buf = (char *)msgbuf;
    _mav_put_float(buf, 0, pulse_width_1);
    _mav_put_float(buf, 4, pulse_width_2);
    _mav_put_float(buf, 8, barometer);
    _mav_put_float(buf, 12, coolant);
    _mav_put_float(buf, 16, tps);
    _mav_put_float(buf, 20, battery_voltage);
    _mav_put_float(buf, 24, injector_duty_cycle);
    _mav_put_float(buf, 28, fuel_flow_rate_instantaneos);
    _mav_put_float(buf, 32, scaled_flow_rate);
    _mav_put_uint16_t(buf, 36, seconds);
    _mav_put_uint16_t(buf, 38, rpm);
    _mav_put_uint8_t(buf, 40, engine);

    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_DA35EFI_STATUS, buf, MAVLINK_MSG_ID_DA35EFI_STATUS_MIN_LEN, MAVLINK_MSG_ID_DA35EFI_STATUS_LEN, MAVLINK_MSG_ID_DA35EFI_STATUS_CRC);
#else
    mavlink_da35efi_status_t *packet = (mavlink_da35efi_status_t *)msgbuf;
    packet->pulse_width_1 = pulse_width_1;
    packet->pulse_width_2 = pulse_width_2;
    packet->barometer = barometer;
    packet->coolant = coolant;
    packet->tps = tps;
    packet->battery_voltage = battery_voltage;
    packet->injector_duty_cycle = injector_duty_cycle;
    packet->fuel_flow_rate_instantaneos = fuel_flow_rate_instantaneos;
    packet->scaled_flow_rate = scaled_flow_rate;
    packet->seconds = seconds;
    packet->rpm = rpm;
    packet->engine = engine;

    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_DA35EFI_STATUS, (const char *)packet, MAVLINK_MSG_ID_DA35EFI_STATUS_MIN_LEN, MAVLINK_MSG_ID_DA35EFI_STATUS_LEN, MAVLINK_MSG_ID_DA35EFI_STATUS_CRC);
#endif
}
#endif

#endif

// MESSAGE DA35EFI_STATUS UNPACKING


/**
 * @brief Get field seconds from da35efi_status message
 *
 * @return  
 */
static inline uint16_t mavlink_msg_da35efi_status_get_seconds(const mavlink_message_t* msg)
{
    return _MAV_RETURN_uint16_t(msg,  36);
}

/**
 * @brief Get field pulse_width_1 from da35efi_status message
 *
 * @return  
 */
static inline float mavlink_msg_da35efi_status_get_pulse_width_1(const mavlink_message_t* msg)
{
    return _MAV_RETURN_float(msg,  0);
}

/**
 * @brief Get field pulse_width_2 from da35efi_status message
 *
 * @return  
 */
static inline float mavlink_msg_da35efi_status_get_pulse_width_2(const mavlink_message_t* msg)
{
    return _MAV_RETURN_float(msg,  4);
}

/**
 * @brief Get field rpm from da35efi_status message
 *
 * @return  
 */
static inline uint16_t mavlink_msg_da35efi_status_get_rpm(const mavlink_message_t* msg)
{
    return _MAV_RETURN_uint16_t(msg,  38);
}

/**
 * @brief Get field engine from da35efi_status message
 *
 * @return  
 */
static inline uint8_t mavlink_msg_da35efi_status_get_engine(const mavlink_message_t* msg)
{
    return _MAV_RETURN_uint8_t(msg,  40);
}

/**
 * @brief Get field barometer from da35efi_status message
 *
 * @return  
 */
static inline float mavlink_msg_da35efi_status_get_barometer(const mavlink_message_t* msg)
{
    return _MAV_RETURN_float(msg,  8);
}

/**
 * @brief Get field coolant from da35efi_status message
 *
 * @return  
 */
static inline float mavlink_msg_da35efi_status_get_coolant(const mavlink_message_t* msg)
{
    return _MAV_RETURN_float(msg,  12);
}

/**
 * @brief Get field tps from da35efi_status message
 *
 * @return  
 */
static inline float mavlink_msg_da35efi_status_get_tps(const mavlink_message_t* msg)
{
    return _MAV_RETURN_float(msg,  16);
}

/**
 * @brief Get field battery_voltage from da35efi_status message
 *
 * @return  
 */
static inline float mavlink_msg_da35efi_status_get_battery_voltage(const mavlink_message_t* msg)
{
    return _MAV_RETURN_float(msg,  20);
}

/**
 * @brief Get field injector_duty_cycle from da35efi_status message
 *
 * @return  
 */
static inline float mavlink_msg_da35efi_status_get_injector_duty_cycle(const mavlink_message_t* msg)
{
    return _MAV_RETURN_float(msg,  24);
}

/**
 * @brief Get field fuel_flow_rate_instantaneos from da35efi_status message
 *
 * @return  
 */
static inline float mavlink_msg_da35efi_status_get_fuel_flow_rate_instantaneos(const mavlink_message_t* msg)
{
    return _MAV_RETURN_float(msg,  28);
}

/**
 * @brief Get field scaled_flow_rate from da35efi_status message
 *
 * @return  
 */
static inline float mavlink_msg_da35efi_status_get_scaled_flow_rate(const mavlink_message_t* msg)
{
    return _MAV_RETURN_float(msg,  32);
}

/**
 * @brief Decode a da35efi_status message into a struct
 *
 * @param msg The message to decode
 * @param da35efi_status C-struct to decode the message contents into
 */
static inline void mavlink_msg_da35efi_status_decode(const mavlink_message_t* msg, mavlink_da35efi_status_t* da35efi_status)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    da35efi_status->pulse_width_1 = mavlink_msg_da35efi_status_get_pulse_width_1(msg);
    da35efi_status->pulse_width_2 = mavlink_msg_da35efi_status_get_pulse_width_2(msg);
    da35efi_status->barometer = mavlink_msg_da35efi_status_get_barometer(msg);
    da35efi_status->coolant = mavlink_msg_da35efi_status_get_coolant(msg);
    da35efi_status->tps = mavlink_msg_da35efi_status_get_tps(msg);
    da35efi_status->battery_voltage = mavlink_msg_da35efi_status_get_battery_voltage(msg);
    da35efi_status->injector_duty_cycle = mavlink_msg_da35efi_status_get_injector_duty_cycle(msg);
    da35efi_status->fuel_flow_rate_instantaneos = mavlink_msg_da35efi_status_get_fuel_flow_rate_instantaneos(msg);
    da35efi_status->scaled_flow_rate = mavlink_msg_da35efi_status_get_scaled_flow_rate(msg);
    da35efi_status->seconds = mavlink_msg_da35efi_status_get_seconds(msg);
    da35efi_status->rpm = mavlink_msg_da35efi_status_get_rpm(msg);
    da35efi_status->engine = mavlink_msg_da35efi_status_get_engine(msg);
#else
        uint8_t len = msg->len < MAVLINK_MSG_ID_DA35EFI_STATUS_LEN? msg->len : MAVLINK_MSG_ID_DA35EFI_STATUS_LEN;
        memset(da35efi_status, 0, MAVLINK_MSG_ID_DA35EFI_STATUS_LEN);
    memcpy(da35efi_status, _MAV_PAYLOAD(msg), len);
#endif
}
