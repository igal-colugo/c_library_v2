// MESSAGE CE367_STATUS support class

#pragma once

namespace mavlink {
namespace currawong_mavlink {
namespace msg {

/**
 * @brief CE367_STATUS message
 *
 * CE367 status report
 */
struct CE367_STATUS : mavlink::Message {
    static constexpr msgid_t MSG_ID = 60601;
    static constexpr size_t LENGTH = 10;
    static constexpr size_t MIN_LENGTH = 10;
    static constexpr uint8_t CRC_EXTRA = 233;
    static constexpr auto NAME = "CE367_STATUS";


    float ecu_throttle; /*<   */
    uint16_t ecu_rpm; /*<   */
    uint32_t ecu_fuel_used; /*<   */


    inline std::string get_name(void) const override
    {
            return NAME;
    }

    inline Info get_message_info(void) const override
    {
            return { MSG_ID, LENGTH, MIN_LENGTH, CRC_EXTRA };
    }

    inline std::string to_yaml(void) const override
    {
        std::stringstream ss;

        ss << NAME << ":" << std::endl;
        ss << "  ecu_throttle: " << ecu_throttle << std::endl;
        ss << "  ecu_rpm: " << ecu_rpm << std::endl;
        ss << "  ecu_fuel_used: " << ecu_fuel_used << std::endl;

        return ss.str();
    }

    inline void serialize(mavlink::MsgMap &map) const override
    {
        map.reset(MSG_ID, LENGTH);

        map << ecu_throttle;                  // offset: 0
        map << ecu_fuel_used;                 // offset: 4
        map << ecu_rpm;                       // offset: 8
    }

    inline void deserialize(mavlink::MsgMap &map) override
    {
        map >> ecu_throttle;                  // offset: 0
        map >> ecu_fuel_used;                 // offset: 4
        map >> ecu_rpm;                       // offset: 8
    }
};

} // namespace msg
} // namespace currawong_mavlink
} // namespace mavlink
