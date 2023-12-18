/** @file
 *    @brief MAVLink comm protocol testsuite generated from hfe_mavlink.xml
 *    @see https://mavlink.io/en/
 */
#pragma once
#ifndef HFE_MAVLINK_TESTSUITE_H
#define HFE_MAVLINK_TESTSUITE_H

#ifdef __cplusplus
extern "C" {
#endif

#ifndef MAVLINK_TEST_ALL
#define MAVLINK_TEST_ALL

static void mavlink_test_hfe_mavlink(uint8_t, uint8_t, mavlink_message_t *last_msg);

static void mavlink_test_all(uint8_t system_id, uint8_t component_id, mavlink_message_t *last_msg)
{

    mavlink_test_hfe_mavlink(system_id, component_id, last_msg);
}
#endif




static void mavlink_test_da35efi_status(uint8_t system_id, uint8_t component_id, mavlink_message_t *last_msg)
{
#ifdef MAVLINK_STATUS_FLAG_OUT_MAVLINK1
    mavlink_status_t *status = mavlink_get_channel_status(MAVLINK_COMM_0);
        if ((status->flags & MAVLINK_STATUS_FLAG_OUT_MAVLINK1) && MAVLINK_MSG_ID_DA35EFI_STATUS >= 256) {
            return;
        }
#endif
    mavlink_message_t msg;
        uint8_t buffer[MAVLINK_MAX_PACKET_LEN];
        uint16_t i;
    mavlink_da35efi_status_t packet_in = {
        17.0,45.0,73.0,101.0,129.0,157.0,185.0,213.0,241.0,19107,19211,125
    };
    mavlink_da35efi_status_t packet1, packet2;
        memset(&packet1, 0, sizeof(packet1));
        packet1.pulse_width_1 = packet_in.pulse_width_1;
        packet1.pulse_width_2 = packet_in.pulse_width_2;
        packet1.barometer = packet_in.barometer;
        packet1.coolant = packet_in.coolant;
        packet1.tps = packet_in.tps;
        packet1.battery_voltage = packet_in.battery_voltage;
        packet1.injector_duty_cycle = packet_in.injector_duty_cycle;
        packet1.fuel_flow_rate_instantaneos = packet_in.fuel_flow_rate_instantaneos;
        packet1.scaled_flow_rate = packet_in.scaled_flow_rate;
        packet1.seconds = packet_in.seconds;
        packet1.rpm = packet_in.rpm;
        packet1.engine = packet_in.engine;
        
        
#ifdef MAVLINK_STATUS_FLAG_OUT_MAVLINK1
        if (status->flags & MAVLINK_STATUS_FLAG_OUT_MAVLINK1) {
           // cope with extensions
           memset(MAVLINK_MSG_ID_DA35EFI_STATUS_MIN_LEN + (char *)&packet1, 0, sizeof(packet1)-MAVLINK_MSG_ID_DA35EFI_STATUS_MIN_LEN);
        }
#endif
        memset(&packet2, 0, sizeof(packet2));
    mavlink_msg_da35efi_status_encode(system_id, component_id, &msg, &packet1);
    mavlink_msg_da35efi_status_decode(&msg, &packet2);
        MAVLINK_ASSERT(memcmp(&packet1, &packet2, sizeof(packet1)) == 0);

        memset(&packet2, 0, sizeof(packet2));
    mavlink_msg_da35efi_status_pack(system_id, component_id, &msg , packet1.seconds , packet1.pulse_width_1 , packet1.pulse_width_2 , packet1.rpm , packet1.engine , packet1.barometer , packet1.coolant , packet1.tps , packet1.battery_voltage , packet1.injector_duty_cycle , packet1.fuel_flow_rate_instantaneos , packet1.scaled_flow_rate );
    mavlink_msg_da35efi_status_decode(&msg, &packet2);
        MAVLINK_ASSERT(memcmp(&packet1, &packet2, sizeof(packet1)) == 0);

        memset(&packet2, 0, sizeof(packet2));
    mavlink_msg_da35efi_status_pack_chan(system_id, component_id, MAVLINK_COMM_0, &msg , packet1.seconds , packet1.pulse_width_1 , packet1.pulse_width_2 , packet1.rpm , packet1.engine , packet1.barometer , packet1.coolant , packet1.tps , packet1.battery_voltage , packet1.injector_duty_cycle , packet1.fuel_flow_rate_instantaneos , packet1.scaled_flow_rate );
    mavlink_msg_da35efi_status_decode(&msg, &packet2);
        MAVLINK_ASSERT(memcmp(&packet1, &packet2, sizeof(packet1)) == 0);

        memset(&packet2, 0, sizeof(packet2));
        mavlink_msg_to_send_buffer(buffer, &msg);
        for (i=0; i<mavlink_msg_get_send_buffer_length(&msg); i++) {
            comm_send_ch(MAVLINK_COMM_0, buffer[i]);
        }
    mavlink_msg_da35efi_status_decode(last_msg, &packet2);
        MAVLINK_ASSERT(memcmp(&packet1, &packet2, sizeof(packet1)) == 0);
        
        memset(&packet2, 0, sizeof(packet2));
    mavlink_msg_da35efi_status_send(MAVLINK_COMM_1 , packet1.seconds , packet1.pulse_width_1 , packet1.pulse_width_2 , packet1.rpm , packet1.engine , packet1.barometer , packet1.coolant , packet1.tps , packet1.battery_voltage , packet1.injector_duty_cycle , packet1.fuel_flow_rate_instantaneos , packet1.scaled_flow_rate );
    mavlink_msg_da35efi_status_decode(last_msg, &packet2);
        MAVLINK_ASSERT(memcmp(&packet1, &packet2, sizeof(packet1)) == 0);

#ifdef MAVLINK_HAVE_GET_MESSAGE_INFO
    MAVLINK_ASSERT(mavlink_get_message_info_by_name("DA35EFI_STATUS") != NULL);
    MAVLINK_ASSERT(mavlink_get_message_info_by_id(MAVLINK_MSG_ID_DA35EFI_STATUS) != NULL);
#endif
}

static void mavlink_test_hfe_mavlink(uint8_t system_id, uint8_t component_id, mavlink_message_t *last_msg)
{
    mavlink_test_da35efi_status(system_id, component_id, last_msg);
}

#ifdef __cplusplus
}
#endif // __cplusplus
#endif // HFE_MAVLINK_TESTSUITE_H
