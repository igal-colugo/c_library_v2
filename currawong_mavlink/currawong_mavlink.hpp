/** @file
 *	@brief MAVLink comm protocol generated from currawong_mavlink.xml
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
namespace currawong_mavlink {

/**
 * Array of msg_entry needed for @p mavlink_parse_char() (through @p mavlink_get_msg_entry())
 */
constexpr std::array<mavlink_msg_entry_t, 1> MESSAGE_ENTRIES {{ {60601, 233, 10, 10, 0, 0, 0} }};

//! MAVLINK VERSION
constexpr auto MAVLINK_VERSION = 3;


// ENUM DEFINITIONS


/** @brief  */
enum class CE367_STARTER
{
    STOP=0, /*  | */
    START=1, /*  | */
    RESET=2, /*  | */
};

//! CE367_STARTER ENUM_END
constexpr auto CE367_STARTER_ENUM_END = 3;


} // namespace currawong_mavlink
} // namespace mavlink

// MESSAGE DEFINITIONS
#include "./mavlink_msg_ce367_status.hpp"

// base include

