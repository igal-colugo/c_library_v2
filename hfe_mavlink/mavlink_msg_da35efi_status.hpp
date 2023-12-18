// MESSAGE DA35EFI_STATUS support class

#pragma once

namespace mavlink {
namespace hfe_mavlink {
namespace msg {

/**
 * @brief DA35EFI_STATUS message
 *
 * DA35EFI status report
 */
struct DA35EFI_STATUS : mavlink::Message {
    static constexpr msgid_t MSG_ID = 50601;
    static constexpr size_t LENGTH = 41;
    static constexpr size_t MIN_LENGTH = 41;
    static constexpr uint8_t CRC_EXTRA = 195;
    static constexpr auto NAME = "DA35EFI_STATUS";


    uint16_t seconds; /*<   */
    float pulse_width_1; /*<   */
    float pulse_width_2; /*<   */
    uint16_t rpm; /*<   */
    uint8_t engine; /*<   */
    float barometer; /*<   */
    float coolant; /*<   */
    float tps; /*<   */
    float battery_voltage; /*<   */
    float injector_duty_cycle; /*<   */
    float fuel_flow_rate_instantaneos; /*<   */
    float scaled_flow_rate; /*<   */


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
        ss << "  seconds: " << seconds << std::endl;
        ss << "  pulse_width_1: " << pulse_width_1 << std::endl;
        ss << "  pulse_width_2: " << pulse_width_2 << std::endl;
        ss << "  rpm: " << rpm << std::endl;
        ss << "  engine: " << +engine << std::endl;
        ss << "  barometer: " << barometer << std::endl;
        ss << "  coolant: " << coolant << std::endl;
        ss << "  tps: " << tps << std::endl;
        ss << "  battery_voltage: " << battery_voltage << std::endl;
        ss << "  injector_duty_cycle: " << injector_duty_cycle << std::endl;
        ss << "  fuel_flow_rate_instantaneos: " << fuel_flow_rate_instantaneos << std::endl;
        ss << "  scaled_flow_rate: " << scaled_flow_rate << std::endl;

        return ss.str();
    }

    inline void serialize(mavlink::MsgMap &map) const override
    {
        map.reset(MSG_ID, LENGTH);

        map << pulse_width_1;                 // offset: 0
        map << pulse_width_2;                 // offset: 4
        map << barometer;                     // offset: 8
        map << coolant;                       // offset: 12
        map << tps;                           // offset: 16
        map << battery_voltage;               // offset: 20
        map << injector_duty_cycle;           // offset: 24
        map << fuel_flow_rate_instantaneos;   // offset: 28
        map << scaled_flow_rate;              // offset: 32
        map << seconds;                       // offset: 36
        map << rpm;                           // offset: 38
        map << engine;                        // offset: 40
    }

    inline void deserialize(mavlink::MsgMap &map) override
    {
        map >> pulse_width_1;                 // offset: 0
        map >> pulse_width_2;                 // offset: 4
        map >> barometer;                     // offset: 8
        map >> coolant;                       // offset: 12
        map >> tps;                           // offset: 16
        map >> battery_voltage;               // offset: 20
        map >> injector_duty_cycle;           // offset: 24
        map >> fuel_flow_rate_instantaneos;   // offset: 28
        map >> scaled_flow_rate;              // offset: 32
        map >> seconds;                       // offset: 36
        map >> rpm;                           // offset: 38
        map >> engine;                        // offset: 40
    }
};

} // namespace msg
} // namespace hfe_mavlink
} // namespace mavlink
