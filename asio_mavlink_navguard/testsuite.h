/** @file
 *    @brief MAVLink comm protocol testsuite generated from asio_mavlink_navguard.xml
 *    @see https://mavlink.io/en/
 */
#pragma once
#ifndef ASIO_MAVLINK_NAVGUARD_TESTSUITE_H
#define ASIO_MAVLINK_NAVGUARD_TESTSUITE_H

#ifdef __cplusplus
extern "C" {
#endif

#ifndef MAVLINK_TEST_ALL
#define MAVLINK_TEST_ALL

static void mavlink_test_asio_mavlink_navguard(uint8_t, uint8_t, mavlink_message_t *last_msg);

static void mavlink_test_all(uint8_t system_id, uint8_t component_id, mavlink_message_t *last_msg)
{

    mavlink_test_asio_mavlink_navguard(system_id, component_id, last_msg);
}
#endif




static void mavlink_test_asio_status(uint8_t system_id, uint8_t component_id, mavlink_message_t *last_msg)
{
#ifdef MAVLINK_STATUS_FLAG_OUT_MAVLINK1
    mavlink_status_t *status = mavlink_get_channel_status(MAVLINK_COMM_0);
        if ((status->flags & MAVLINK_STATUS_FLAG_OUT_MAVLINK1) && MAVLINK_MSG_ID_ASIO_STATUS >= 256) {
            return;
        }
#endif
    mavlink_message_t msg;
        uint8_t buffer[MAVLINK_MAX_PACKET_LEN];
        uint16_t i;
    mavlink_asio_status_t packet_in = {
        963497464,45.0,73.0,101.0,963498296,18275,199,10,77,144,211,22,89,156,223,34,101,168,235
    };
    mavlink_asio_status_t packet1, packet2;
        memset(&packet1, 0, sizeof(packet1));
        packet1.error = packet_in.error;
        packet1.pitch_offset = packet_in.pitch_offset;
        packet1.roll_offset = packet_in.roll_offset;
        packet1.reserved_2 = packet_in.reserved_2;
        packet1.version = packet_in.version;
        packet1.temperature = packet_in.temperature;
        packet1.nav_state = packet_in.nav_state;
        packet1.nav_output = packet_in.nav_output;
        packet1.gps_jamming_state = packet_in.gps_jamming_state;
        packet1.active_sensor = packet_in.active_sensor;
        packet1.active_rec = packet_in.active_rec;
        packet1.active_db_rec = packet_in.active_db_rec;
        packet1.active_nav = packet_in.active_nav;
        packet1.active_slam = packet_in.active_slam;
        packet1.battery = packet_in.battery;
        packet1.sys_state = packet_in.sys_state;
        packet1.reserved = packet_in.reserved;
        packet1.map_warning = packet_in.map_warning;
        packet1.calibration_state = packet_in.calibration_state;
        
        
#ifdef MAVLINK_STATUS_FLAG_OUT_MAVLINK1
        if (status->flags & MAVLINK_STATUS_FLAG_OUT_MAVLINK1) {
           // cope with extensions
           memset(MAVLINK_MSG_ID_ASIO_STATUS_MIN_LEN + (char *)&packet1, 0, sizeof(packet1)-MAVLINK_MSG_ID_ASIO_STATUS_MIN_LEN);
        }
#endif
        memset(&packet2, 0, sizeof(packet2));
    mavlink_msg_asio_status_encode(system_id, component_id, &msg, &packet1);
    mavlink_msg_asio_status_decode(&msg, &packet2);
        MAVLINK_ASSERT(memcmp(&packet1, &packet2, sizeof(packet1)) == 0);

        memset(&packet2, 0, sizeof(packet2));
    mavlink_msg_asio_status_pack(system_id, component_id, &msg , packet1.nav_state , packet1.nav_output , packet1.gps_jamming_state , packet1.active_sensor , packet1.active_rec , packet1.active_db_rec , packet1.active_nav , packet1.active_slam , packet1.battery , packet1.temperature , packet1.sys_state , packet1.error , packet1.reserved , packet1.map_warning , packet1.pitch_offset , packet1.roll_offset , packet1.calibration_state , packet1.reserved_2 , packet1.version );
    mavlink_msg_asio_status_decode(&msg, &packet2);
        MAVLINK_ASSERT(memcmp(&packet1, &packet2, sizeof(packet1)) == 0);

        memset(&packet2, 0, sizeof(packet2));
    mavlink_msg_asio_status_pack_chan(system_id, component_id, MAVLINK_COMM_0, &msg , packet1.nav_state , packet1.nav_output , packet1.gps_jamming_state , packet1.active_sensor , packet1.active_rec , packet1.active_db_rec , packet1.active_nav , packet1.active_slam , packet1.battery , packet1.temperature , packet1.sys_state , packet1.error , packet1.reserved , packet1.map_warning , packet1.pitch_offset , packet1.roll_offset , packet1.calibration_state , packet1.reserved_2 , packet1.version );
    mavlink_msg_asio_status_decode(&msg, &packet2);
        MAVLINK_ASSERT(memcmp(&packet1, &packet2, sizeof(packet1)) == 0);

        memset(&packet2, 0, sizeof(packet2));
        mavlink_msg_to_send_buffer(buffer, &msg);
        for (i=0; i<mavlink_msg_get_send_buffer_length(&msg); i++) {
            comm_send_ch(MAVLINK_COMM_0, buffer[i]);
        }
    mavlink_msg_asio_status_decode(last_msg, &packet2);
        MAVLINK_ASSERT(memcmp(&packet1, &packet2, sizeof(packet1)) == 0);
        
        memset(&packet2, 0, sizeof(packet2));
    mavlink_msg_asio_status_send(MAVLINK_COMM_1 , packet1.nav_state , packet1.nav_output , packet1.gps_jamming_state , packet1.active_sensor , packet1.active_rec , packet1.active_db_rec , packet1.active_nav , packet1.active_slam , packet1.battery , packet1.temperature , packet1.sys_state , packet1.error , packet1.reserved , packet1.map_warning , packet1.pitch_offset , packet1.roll_offset , packet1.calibration_state , packet1.reserved_2 , packet1.version );
    mavlink_msg_asio_status_decode(last_msg, &packet2);
        MAVLINK_ASSERT(memcmp(&packet1, &packet2, sizeof(packet1)) == 0);

#ifdef MAVLINK_HAVE_GET_MESSAGE_INFO
    MAVLINK_ASSERT(mavlink_get_message_info_by_name("ASIO_STATUS") != NULL);
    MAVLINK_ASSERT(mavlink_get_message_info_by_id(MAVLINK_MSG_ID_ASIO_STATUS) != NULL);
#endif
}

static void mavlink_test_asio_mavlink_navguard(uint8_t system_id, uint8_t component_id, mavlink_message_t *last_msg)
{
    mavlink_test_asio_status(system_id, component_id, last_msg);
}

#ifdef __cplusplus
}
#endif // __cplusplus
#endif // ASIO_MAVLINK_NAVGUARD_TESTSUITE_H
