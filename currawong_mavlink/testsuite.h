/** @file
 *    @brief MAVLink comm protocol testsuite generated from currawong_mavlink.xml
 *    @see https://mavlink.io/en/
 */
#pragma once
#ifndef CURRAWONG_MAVLINK_TESTSUITE_H
#define CURRAWONG_MAVLINK_TESTSUITE_H

#ifdef __cplusplus
extern "C" {
#endif

#ifndef MAVLINK_TEST_ALL
#define MAVLINK_TEST_ALL

static void mavlink_test_currawong_mavlink(uint8_t, uint8_t, mavlink_message_t *last_msg);

static void mavlink_test_all(uint8_t system_id, uint8_t component_id, mavlink_message_t *last_msg)
{

    mavlink_test_currawong_mavlink(system_id, component_id, last_msg);
}
#endif




static void mavlink_test_ce367_status(uint8_t system_id, uint8_t component_id, mavlink_message_t *last_msg)
{
#ifdef MAVLINK_STATUS_FLAG_OUT_MAVLINK1
    mavlink_status_t *status = mavlink_get_channel_status(MAVLINK_COMM_0);
        if ((status->flags & MAVLINK_STATUS_FLAG_OUT_MAVLINK1) && MAVLINK_MSG_ID_CE367_STATUS >= 256) {
            return;
        }
#endif
    mavlink_message_t msg;
        uint8_t buffer[MAVLINK_MAX_PACKET_LEN];
        uint16_t i;
    mavlink_ce367_status_t packet_in = {
        17.0,963497672,17651
    };
    mavlink_ce367_status_t packet1, packet2;
        memset(&packet1, 0, sizeof(packet1));
        packet1.ecu_throttle = packet_in.ecu_throttle;
        packet1.ecu_fuel_used = packet_in.ecu_fuel_used;
        packet1.ecu_rpm = packet_in.ecu_rpm;
        
        
#ifdef MAVLINK_STATUS_FLAG_OUT_MAVLINK1
        if (status->flags & MAVLINK_STATUS_FLAG_OUT_MAVLINK1) {
           // cope with extensions
           memset(MAVLINK_MSG_ID_CE367_STATUS_MIN_LEN + (char *)&packet1, 0, sizeof(packet1)-MAVLINK_MSG_ID_CE367_STATUS_MIN_LEN);
        }
#endif
        memset(&packet2, 0, sizeof(packet2));
    mavlink_msg_ce367_status_encode(system_id, component_id, &msg, &packet1);
    mavlink_msg_ce367_status_decode(&msg, &packet2);
        MAVLINK_ASSERT(memcmp(&packet1, &packet2, sizeof(packet1)) == 0);

        memset(&packet2, 0, sizeof(packet2));
    mavlink_msg_ce367_status_pack(system_id, component_id, &msg , packet1.ecu_throttle , packet1.ecu_rpm , packet1.ecu_fuel_used );
    mavlink_msg_ce367_status_decode(&msg, &packet2);
        MAVLINK_ASSERT(memcmp(&packet1, &packet2, sizeof(packet1)) == 0);

        memset(&packet2, 0, sizeof(packet2));
    mavlink_msg_ce367_status_pack_chan(system_id, component_id, MAVLINK_COMM_0, &msg , packet1.ecu_throttle , packet1.ecu_rpm , packet1.ecu_fuel_used );
    mavlink_msg_ce367_status_decode(&msg, &packet2);
        MAVLINK_ASSERT(memcmp(&packet1, &packet2, sizeof(packet1)) == 0);

        memset(&packet2, 0, sizeof(packet2));
        mavlink_msg_to_send_buffer(buffer, &msg);
        for (i=0; i<mavlink_msg_get_send_buffer_length(&msg); i++) {
            comm_send_ch(MAVLINK_COMM_0, buffer[i]);
        }
    mavlink_msg_ce367_status_decode(last_msg, &packet2);
        MAVLINK_ASSERT(memcmp(&packet1, &packet2, sizeof(packet1)) == 0);
        
        memset(&packet2, 0, sizeof(packet2));
    mavlink_msg_ce367_status_send(MAVLINK_COMM_1 , packet1.ecu_throttle , packet1.ecu_rpm , packet1.ecu_fuel_used );
    mavlink_msg_ce367_status_decode(last_msg, &packet2);
        MAVLINK_ASSERT(memcmp(&packet1, &packet2, sizeof(packet1)) == 0);

#ifdef MAVLINK_HAVE_GET_MESSAGE_INFO
    MAVLINK_ASSERT(mavlink_get_message_info_by_name("CE367_STATUS") != NULL);
    MAVLINK_ASSERT(mavlink_get_message_info_by_id(MAVLINK_MSG_ID_CE367_STATUS) != NULL);
#endif
}

static void mavlink_test_currawong_mavlink(uint8_t system_id, uint8_t component_id, mavlink_message_t *last_msg)
{
    mavlink_test_ce367_status(system_id, component_id, last_msg);
}

#ifdef __cplusplus
}
#endif // __cplusplus
#endif // CURRAWONG_MAVLINK_TESTSUITE_H
