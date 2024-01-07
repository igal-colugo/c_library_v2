/** @file
 *	@brief MAVLink comm testsuite protocol generated from currawong_mavlink.xml
 *	@see http://mavlink.org
 */

#pragma once

#include <gtest/gtest.h>
#include "currawong_mavlink.hpp"

#ifdef TEST_INTEROP
using namespace mavlink;
#undef MAVLINK_HELPER
#include "mavlink.h"
#endif


TEST(currawong_mavlink, CE367_STATUS)
{
    mavlink::mavlink_message_t msg;
    mavlink::MsgMap map1(msg);
    mavlink::MsgMap map2(msg);

    mavlink::currawong_mavlink::msg::CE367_STATUS packet_in{};
    packet_in.ecu_throttle = 17.0;
    packet_in.ecu_rpm = 17651;
    packet_in.ecu_fuel_used = 963497672;

    mavlink::currawong_mavlink::msg::CE367_STATUS packet1{};
    mavlink::currawong_mavlink::msg::CE367_STATUS packet2{};

    packet1 = packet_in;

    //std::cout << packet1.to_yaml() << std::endl;

    packet1.serialize(map1);

    mavlink::mavlink_finalize_message(&msg, 1, 1, packet1.MIN_LENGTH, packet1.LENGTH, packet1.CRC_EXTRA);

    packet2.deserialize(map2);

    EXPECT_EQ(packet1.ecu_throttle, packet2.ecu_throttle);
    EXPECT_EQ(packet1.ecu_rpm, packet2.ecu_rpm);
    EXPECT_EQ(packet1.ecu_fuel_used, packet2.ecu_fuel_used);
}

#ifdef TEST_INTEROP
TEST(currawong_mavlink_interop, CE367_STATUS)
{
    mavlink_message_t msg;

    // to get nice print
    memset(&msg, 0, sizeof(msg));

    mavlink_ce367_status_t packet_c {
         17.0, 963497672, 17651
    };

    mavlink::currawong_mavlink::msg::CE367_STATUS packet_in{};
    packet_in.ecu_throttle = 17.0;
    packet_in.ecu_rpm = 17651;
    packet_in.ecu_fuel_used = 963497672;

    mavlink::currawong_mavlink::msg::CE367_STATUS packet2{};

    mavlink_msg_ce367_status_encode(1, 1, &msg, &packet_c);

    // simulate message-handling callback
    [&packet2](const mavlink_message_t *cmsg) {
        MsgMap map2(cmsg);

        packet2.deserialize(map2);
    } (&msg);

    EXPECT_EQ(packet_in.ecu_throttle, packet2.ecu_throttle);
    EXPECT_EQ(packet_in.ecu_rpm, packet2.ecu_rpm);
    EXPECT_EQ(packet_in.ecu_fuel_used, packet2.ecu_fuel_used);

#ifdef PRINT_MSG
    PRINT_MSG(msg);
#endif
}
#endif
