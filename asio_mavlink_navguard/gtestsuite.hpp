/** @file
 *	@brief MAVLink comm testsuite protocol generated from asio_mavlink_navguard.xml
 *	@see http://mavlink.org
 */

#pragma once

#include <gtest/gtest.h>
#include "asio_mavlink_navguard.hpp"

#ifdef TEST_INTEROP
using namespace mavlink;
#undef MAVLINK_HELPER
#include "mavlink.h"
#endif


TEST(asio_mavlink_navguard, ASIO_STATUS)
{
    mavlink::mavlink_message_t msg;
    mavlink::MsgMap map1(msg);
    mavlink::MsgMap map2(msg);

    mavlink::asio_mavlink_navguard::msg::ASIO_STATUS packet_in{};
    packet_in.nav_state = 199;
    packet_in.nav_output = 10;
    packet_in.gps_jamming_state = 77;
    packet_in.active_sensor = 144;
    packet_in.active_rec = 211;
    packet_in.active_db_rec = 22;
    packet_in.active_nav = 89;
    packet_in.active_slam = 156;
    packet_in.battery = 223;
    packet_in.temperature = 18275;
    packet_in.sys_state = 34;
    packet_in.error = 963497464;
    packet_in.reserved = 101;
    packet_in.map_warning = 168;
    packet_in.pitch_offset = 45.0;
    packet_in.roll_offset = 73.0;
    packet_in.calibration_state = 235;
    packet_in.reserved_2 = 101.0;
    packet_in.version = 963498296;

    mavlink::asio_mavlink_navguard::msg::ASIO_STATUS packet1{};
    mavlink::asio_mavlink_navguard::msg::ASIO_STATUS packet2{};

    packet1 = packet_in;

    //std::cout << packet1.to_yaml() << std::endl;

    packet1.serialize(map1);

    mavlink::mavlink_finalize_message(&msg, 1, 1, packet1.MIN_LENGTH, packet1.LENGTH, packet1.CRC_EXTRA);

    packet2.deserialize(map2);

    EXPECT_EQ(packet1.nav_state, packet2.nav_state);
    EXPECT_EQ(packet1.nav_output, packet2.nav_output);
    EXPECT_EQ(packet1.gps_jamming_state, packet2.gps_jamming_state);
    EXPECT_EQ(packet1.active_sensor, packet2.active_sensor);
    EXPECT_EQ(packet1.active_rec, packet2.active_rec);
    EXPECT_EQ(packet1.active_db_rec, packet2.active_db_rec);
    EXPECT_EQ(packet1.active_nav, packet2.active_nav);
    EXPECT_EQ(packet1.active_slam, packet2.active_slam);
    EXPECT_EQ(packet1.battery, packet2.battery);
    EXPECT_EQ(packet1.temperature, packet2.temperature);
    EXPECT_EQ(packet1.sys_state, packet2.sys_state);
    EXPECT_EQ(packet1.error, packet2.error);
    EXPECT_EQ(packet1.reserved, packet2.reserved);
    EXPECT_EQ(packet1.map_warning, packet2.map_warning);
    EXPECT_EQ(packet1.pitch_offset, packet2.pitch_offset);
    EXPECT_EQ(packet1.roll_offset, packet2.roll_offset);
    EXPECT_EQ(packet1.calibration_state, packet2.calibration_state);
    EXPECT_EQ(packet1.reserved_2, packet2.reserved_2);
    EXPECT_EQ(packet1.version, packet2.version);
}

#ifdef TEST_INTEROP
TEST(asio_mavlink_navguard_interop, ASIO_STATUS)
{
    mavlink_message_t msg;

    // to get nice print
    memset(&msg, 0, sizeof(msg));

    mavlink_asio_status_t packet_c {
         963497464, 45.0, 73.0, 101.0, 963498296, 18275, 199, 10, 77, 144, 211, 22, 89, 156, 223, 34, 101, 168, 235
    };

    mavlink::asio_mavlink_navguard::msg::ASIO_STATUS packet_in{};
    packet_in.nav_state = 199;
    packet_in.nav_output = 10;
    packet_in.gps_jamming_state = 77;
    packet_in.active_sensor = 144;
    packet_in.active_rec = 211;
    packet_in.active_db_rec = 22;
    packet_in.active_nav = 89;
    packet_in.active_slam = 156;
    packet_in.battery = 223;
    packet_in.temperature = 18275;
    packet_in.sys_state = 34;
    packet_in.error = 963497464;
    packet_in.reserved = 101;
    packet_in.map_warning = 168;
    packet_in.pitch_offset = 45.0;
    packet_in.roll_offset = 73.0;
    packet_in.calibration_state = 235;
    packet_in.reserved_2 = 101.0;
    packet_in.version = 963498296;

    mavlink::asio_mavlink_navguard::msg::ASIO_STATUS packet2{};

    mavlink_msg_asio_status_encode(1, 1, &msg, &packet_c);

    // simulate message-handling callback
    [&packet2](const mavlink_message_t *cmsg) {
        MsgMap map2(cmsg);

        packet2.deserialize(map2);
    } (&msg);

    EXPECT_EQ(packet_in.nav_state, packet2.nav_state);
    EXPECT_EQ(packet_in.nav_output, packet2.nav_output);
    EXPECT_EQ(packet_in.gps_jamming_state, packet2.gps_jamming_state);
    EXPECT_EQ(packet_in.active_sensor, packet2.active_sensor);
    EXPECT_EQ(packet_in.active_rec, packet2.active_rec);
    EXPECT_EQ(packet_in.active_db_rec, packet2.active_db_rec);
    EXPECT_EQ(packet_in.active_nav, packet2.active_nav);
    EXPECT_EQ(packet_in.active_slam, packet2.active_slam);
    EXPECT_EQ(packet_in.battery, packet2.battery);
    EXPECT_EQ(packet_in.temperature, packet2.temperature);
    EXPECT_EQ(packet_in.sys_state, packet2.sys_state);
    EXPECT_EQ(packet_in.error, packet2.error);
    EXPECT_EQ(packet_in.reserved, packet2.reserved);
    EXPECT_EQ(packet_in.map_warning, packet2.map_warning);
    EXPECT_EQ(packet_in.pitch_offset, packet2.pitch_offset);
    EXPECT_EQ(packet_in.roll_offset, packet2.roll_offset);
    EXPECT_EQ(packet_in.calibration_state, packet2.calibration_state);
    EXPECT_EQ(packet_in.reserved_2, packet2.reserved_2);
    EXPECT_EQ(packet_in.version, packet2.version);

#ifdef PRINT_MSG
    PRINT_MSG(msg);
#endif
}
#endif
