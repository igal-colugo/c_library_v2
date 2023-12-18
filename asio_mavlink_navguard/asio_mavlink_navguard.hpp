/** @file
 *	@brief MAVLink comm protocol generated from asio_mavlink_navguard.xml
 *	@see http://mavlink.org
 */

#pragma once

#include <array>
#include <cstdint>
#include <sstream>

#ifndef MAVLINK_STX
#define MAVLINK_STX 253
#endif

#include "../message.hpp"

namespace mavlink {
namespace asio_mavlink_navguard {

/**
 * Array of msg_entry needed for @p mavlink_parse_char() (through @p mavlink_get_msg_entry())
 */
constexpr std::array<mavlink_msg_entry_t, 1> MESSAGE_ENTRIES {{ {40601, 48, 35, 35, 0, 0, 0} }};

//! MAVLINK VERSION
constexpr auto MAVLINK_VERSION = 3;


// ENUM DEFINITIONS


/** @brief  */
enum class ASIO_SENSOR : uint8_t
{
    UNKNOWN=0, /*  | */
    DAY=1, /*  | */
    NIGHT=2, /*  | */
    AUTO=3, /* Not Implemented | */
};

//! ASIO_SENSOR ENUM_END
constexpr auto ASIO_SENSOR_ENUM_END = 4;

/** @brief  */
enum class ASIO_REC : uint8_t
{
    NONE=0, /*  | */
    TELEM_ONLY=1, /*  | */
    IMAGE_ONLY=2, /* not implemented | */
    TELEM_IMAGE=3, /*  | */
};

//! ASIO_REC ENUM_END
constexpr auto ASIO_REC_ENUM_END = 4;

/** @brief  */
enum class ASIO_NAV_MODE : uint8_t
{
    UNKNOWN=0, /*  | */
    FORCE_TO_NO_GPS=1, /* do not use gps at all, if slam is used for more than X Sec. will try to read gps pos, othewise will keep slam (pre define parameter [s]) | */
    GPS_ON_TAKEOFF=2, /* if gps is valid, use it when close to home (pre define parameter [m]). 
        or if slam where used for more than X Sec (pre define parameter [s]) | */
    USE_GPS_WHEN_FIX=3, /* use GPS when valid | */
};

//! ASIO_NAV_MODE ENUM_END
constexpr auto ASIO_NAV_MODE_ENUM_END = 4;

/** @brief  */
enum class ASIO_SLAM_MODE : uint8_t
{
    UNKNOWN=0, /*  | */
    AUTO=1, /*  | */
    FORCE_SLAM_MODE=2, /*  | */
};

//! ASIO_SLAM_MODE ENUM_END
constexpr auto ASIO_SLAM_MODE_ENUM_END = 3;

/** @brief  */
enum class ASIO_NAV_STATE : uint8_t
{
    NONE=0, /* Should be only on boot | */
    ANCHOR=1, /* GeoReference is valid | */
    SLAM=2, /* GeoReference is not valid, sys is now in SLAM mode | */
    ON_GROUND=3, /* Indicates NO_GPS_MODE before takeoff. keeps initial position for first few meters after takeoff | */
    ANCHOR_ON_TAKEOFF=4, /* GeoReference is valid while using GPS as output during takeoff | */
};

//! ASIO_NAV_STATE ENUM_END
constexpr auto ASIO_NAV_STATE_ENUM_END = 5;

/** @brief  */
enum class ASIO_SYS_STATE : uint8_t
{
    INIT=0, /* Should be only on startup. Do not takeoff in init state | */
    READY=1, /* System is ready and fully operational | */
    FAULT=2, /* Not Implemented | */
};

//! ASIO_SYS_STATE ENUM_END
constexpr auto ASIO_SYS_STATE_ENUM_END = 3;

/** @brief  */
enum class ASIO_NAV_OUTPUT : uint8_t
{
    GPS=0, /* GPS data is outputted as the navigation solution - can be during takeoff or after SLAM timeout | */
    OPTICAL=1, /* Optical solution data is outputted as the navigation solution | */
};

//! ASIO_NAV_OUTPUT ENUM_END
constexpr auto ASIO_NAV_OUTPUT_ENUM_END = 2;

/** @brief  */
enum class GPS_JAMMING_STATE : uint8_t
{
    OK=0, /* GPS valid | */
    WARNNING=1, /* Not Implemented | */
    JAMMED=2, /* GPS is jammed valid | */
};

//! GPS_JAMMING_STATE ENUM_END
constexpr auto GPS_JAMMING_STATE_ENUM_END = 3;

/** @brief  */
enum class ASIO_ERROR : uint32_t
{
    CRITICAL=1, /* Critical system error | */
    GENERAL_WARNNING=2, /* Warning - Nav solution still available, but might be limited | */
    TELEM=4, /* Critical telemetry (YAW, etc) from UAS is not received | */
    DAY_SENSOR=8, /* Day sensor fault, will be sent together with ASIO_ERROR_CRITICAL | */
    NIGHT_SENSOR=16, /* Night sensor fault, will be sent together with ASIO_ERROR_CRITICAL | */
    ANCHOR=32, /* Not Implemented | */
    TEMPERATURE=64, /* Not Implemented | */
    LOGGING=128, /* Not Implemented | */
};

//! ASIO_ERROR ENUM_END
constexpr auto ASIO_ERROR_ENUM_END = 129;

/** @brief  */
enum class ASIO_CALIBRATION_STATE : uint8_t
{
    UNKNOWN=0, /*  | */
    IDLE=1, /*  | */
    PROCESS=2, /* Calibration procedure is in progress | */
};

//! ASIO_CALIBRATION_STATE ENUM_END
constexpr auto ASIO_CALIBRATION_STATE_ENUM_END = 3;

/** @brief  */
enum class COMPASS_POINT : uint8_t
{
    NORTH=1, /*  | */
    NORTH_EAST=2, /*  | */
    EAST=4, /*  | */
    SOUTH_EAST=8, /*  | */
    SOUTH=16, /*  | */
    SOUTH_WEST=32, /*  | */
    WEST=64, /*  | */
    NORTH_WEST=128, /*  | */
};

//! COMPASS_POINT ENUM_END
constexpr auto COMPASS_POINT_ENUM_END = 129;


} // namespace asio_mavlink_navguard
} // namespace mavlink

// MESSAGE DEFINITIONS
#include "./mavlink_msg_asio_status.hpp"

// base include

