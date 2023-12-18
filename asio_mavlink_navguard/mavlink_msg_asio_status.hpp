// MESSAGE ASIO_STATUS support class

#pragma once

namespace mavlink {
namespace asio_mavlink_navguard {
namespace msg {

/**
 * @brief ASIO_STATUS message
 *
 * Asio status report
 */
struct ASIO_STATUS : mavlink::Message {
    static constexpr msgid_t MSG_ID = 40601;
    static constexpr size_t LENGTH = 35;
    static constexpr size_t MIN_LENGTH = 35;
    static constexpr uint8_t CRC_EXTRA = 48;
    static constexpr auto NAME = "ASIO_STATUS";


    uint8_t nav_state; /*<   */
    uint8_t nav_output; /*<   */
    uint8_t gps_jamming_state; /*<   */
    uint8_t active_sensor; /*<   */
    uint8_t active_rec; /*<   */
    uint8_t active_db_rec; /*<   */
    uint8_t active_nav; /*<  Current NAV_MODE */
    uint8_t active_slam; /*<  Current SLAM_MODE */
    uint8_t battery; /*< [%] Set to 255 for unknown/irrelevant */
    int16_t temperature; /*< [cdegC] Internal temperature of the system, set to -1 if invalid */
    uint8_t sys_state; /*<  Current system state */
    uint32_t error; /*<   */
    uint8_t reserved; /*<   */
    uint8_t map_warning; /*<   */
    float pitch_offset; /*< [deg] Pitch offset */
    float roll_offset; /*< [deg] Roll offset */
    uint8_t calibration_state; /*<   */
    float reserved_2; /*<   */
    uint32_t version; /*<  asio software version */


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
        ss << "  nav_state: " << +nav_state << std::endl;
        ss << "  nav_output: " << +nav_output << std::endl;
        ss << "  gps_jamming_state: " << +gps_jamming_state << std::endl;
        ss << "  active_sensor: " << +active_sensor << std::endl;
        ss << "  active_rec: " << +active_rec << std::endl;
        ss << "  active_db_rec: " << +active_db_rec << std::endl;
        ss << "  active_nav: " << +active_nav << std::endl;
        ss << "  active_slam: " << +active_slam << std::endl;
        ss << "  battery: " << +battery << std::endl;
        ss << "  temperature: " << temperature << std::endl;
        ss << "  sys_state: " << +sys_state << std::endl;
        ss << "  error: " << error << std::endl;
        ss << "  reserved: " << +reserved << std::endl;
        ss << "  map_warning: " << +map_warning << std::endl;
        ss << "  pitch_offset: " << pitch_offset << std::endl;
        ss << "  roll_offset: " << roll_offset << std::endl;
        ss << "  calibration_state: " << +calibration_state << std::endl;
        ss << "  reserved_2: " << reserved_2 << std::endl;
        ss << "  version: " << version << std::endl;

        return ss.str();
    }

    inline void serialize(mavlink::MsgMap &map) const override
    {
        map.reset(MSG_ID, LENGTH);

        map << error;                         // offset: 0
        map << pitch_offset;                  // offset: 4
        map << roll_offset;                   // offset: 8
        map << reserved_2;                    // offset: 12
        map << version;                       // offset: 16
        map << temperature;                   // offset: 20
        map << nav_state;                     // offset: 22
        map << nav_output;                    // offset: 23
        map << gps_jamming_state;             // offset: 24
        map << active_sensor;                 // offset: 25
        map << active_rec;                    // offset: 26
        map << active_db_rec;                 // offset: 27
        map << active_nav;                    // offset: 28
        map << active_slam;                   // offset: 29
        map << battery;                       // offset: 30
        map << sys_state;                     // offset: 31
        map << reserved;                      // offset: 32
        map << map_warning;                   // offset: 33
        map << calibration_state;             // offset: 34
    }

    inline void deserialize(mavlink::MsgMap &map) override
    {
        map >> error;                         // offset: 0
        map >> pitch_offset;                  // offset: 4
        map >> roll_offset;                   // offset: 8
        map >> reserved_2;                    // offset: 12
        map >> version;                       // offset: 16
        map >> temperature;                   // offset: 20
        map >> nav_state;                     // offset: 22
        map >> nav_output;                    // offset: 23
        map >> gps_jamming_state;             // offset: 24
        map >> active_sensor;                 // offset: 25
        map >> active_rec;                    // offset: 26
        map >> active_db_rec;                 // offset: 27
        map >> active_nav;                    // offset: 28
        map >> active_slam;                   // offset: 29
        map >> battery;                       // offset: 30
        map >> sys_state;                     // offset: 31
        map >> reserved;                      // offset: 32
        map >> map_warning;                   // offset: 33
        map >> calibration_state;             // offset: 34
    }
};

} // namespace msg
} // namespace asio_mavlink_navguard
} // namespace mavlink
