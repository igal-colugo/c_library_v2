/** @file
 *	@brief MAVLink comm testsuite protocol generated from hfe_mavlink.xml
 *	@see http://mavlink.org
 */

#pragma once

#include <gtest/gtest.h>
#include "hfe_mavlink.hpp"

#ifdef TEST_INTEROP
using namespace mavlink;
#undef MAVLINK_HELPER
#include "mavlink.h"
#endif


TEST(hfe_mavlink, DA35EFI_STATUS)
{
    mavlink::mavlink_message_t msg;
    mavlink::MsgMap map1(msg);
    mavlink::MsgMap map2(msg);

    mavlink::hfe_mavlink::msg::DA35EFI_STATUS packet_in{};
    packet_in.seconds = 19107;
    packet_in.pulse_width_1 = 17.0;
    packet_in.pulse_width_2 = 45.0;
    packet_in.rpm = 19211;
    packet_in.engine = 125;
    packet_in.barometer = 73.0;
    packet_in.coolant = 101.0;
    packet_in.tps = 129.0;
    packet_in.battery_voltage = 157.0;
    packet_in.injector_duty_cycle = 185.0;
    packet_in.fuel_flow_rate_instantaneos = 213.0;
    packet_in.scaled_flow_rate = 241.0;

    mavlink::hfe_mavlink::msg::DA35EFI_STATUS packet1{};
    mavlink::hfe_mavlink::msg::DA35EFI_STATUS packet2{};

    packet1 = packet_in;

    //std::cout << packet1.to_yaml() << std::endl;

    packet1.serialize(map1);

    mavlink::mavlink_finalize_message(&msg, 1, 1, packet1.MIN_LENGTH, packet1.LENGTH, packet1.CRC_EXTRA);

    packet2.deserialize(map2);

    EXPECT_EQ(packet1.seconds, packet2.seconds);
    EXPECT_EQ(packet1.pulse_width_1, packet2.pulse_width_1);
    EXPECT_EQ(packet1.pulse_width_2, packet2.pulse_width_2);
    EXPECT_EQ(packet1.rpm, packet2.rpm);
    EXPECT_EQ(packet1.engine, packet2.engine);
    EXPECT_EQ(packet1.barometer, packet2.barometer);
    EXPECT_EQ(packet1.coolant, packet2.coolant);
    EXPECT_EQ(packet1.tps, packet2.tps);
    EXPECT_EQ(packet1.battery_voltage, packet2.battery_voltage);
    EXPECT_EQ(packet1.injector_duty_cycle, packet2.injector_duty_cycle);
    EXPECT_EQ(packet1.fuel_flow_rate_instantaneos, packet2.fuel_flow_rate_instantaneos);
    EXPECT_EQ(packet1.scaled_flow_rate, packet2.scaled_flow_rate);
}

#ifdef TEST_INTEROP
TEST(hfe_mavlink_interop, DA35EFI_STATUS)
{
    mavlink_message_t msg;

    // to get nice print
    memset(&msg, 0, sizeof(msg));

    mavlink_da35efi_status_t packet_c {
         17.0, 45.0, 73.0, 101.0, 129.0, 157.0, 185.0, 213.0, 241.0, 19107, 19211, 125
    };

    mavlink::hfe_mavlink::msg::DA35EFI_STATUS packet_in{};
    packet_in.seconds = 19107;
    packet_in.pulse_width_1 = 17.0;
    packet_in.pulse_width_2 = 45.0;
    packet_in.rpm = 19211;
    packet_in.engine = 125;
    packet_in.barometer = 73.0;
    packet_in.coolant = 101.0;
    packet_in.tps = 129.0;
    packet_in.battery_voltage = 157.0;
    packet_in.injector_duty_cycle = 185.0;
    packet_in.fuel_flow_rate_instantaneos = 213.0;
    packet_in.scaled_flow_rate = 241.0;

    mavlink::hfe_mavlink::msg::DA35EFI_STATUS packet2{};

    mavlink_msg_da35efi_status_encode(1, 1, &msg, &packet_c);

    // simulate message-handling callback
    [&packet2](const mavlink_message_t *cmsg) {
        MsgMap map2(cmsg);

        packet2.deserialize(map2);
    } (&msg);

    EXPECT_EQ(packet_in.seconds, packet2.seconds);
    EXPECT_EQ(packet_in.pulse_width_1, packet2.pulse_width_1);
    EXPECT_EQ(packet_in.pulse_width_2, packet2.pulse_width_2);
    EXPECT_EQ(packet_in.rpm, packet2.rpm);
    EXPECT_EQ(packet_in.engine, packet2.engine);
    EXPECT_EQ(packet_in.barometer, packet2.barometer);
    EXPECT_EQ(packet_in.coolant, packet2.coolant);
    EXPECT_EQ(packet_in.tps, packet2.tps);
    EXPECT_EQ(packet_in.battery_voltage, packet2.battery_voltage);
    EXPECT_EQ(packet_in.injector_duty_cycle, packet2.injector_duty_cycle);
    EXPECT_EQ(packet_in.fuel_flow_rate_instantaneos, packet2.fuel_flow_rate_instantaneos);
    EXPECT_EQ(packet_in.scaled_flow_rate, packet2.scaled_flow_rate);

#ifdef PRINT_MSG
    PRINT_MSG(msg);
#endif
}
#endif
