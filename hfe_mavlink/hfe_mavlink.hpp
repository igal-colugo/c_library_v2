/** @file
 *	@brief MAVLink comm protocol generated from hfe_mavlink.xml
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
namespace hfe_mavlink {

/**
 * Array of msg_entry needed for @p mavlink_parse_char() (through @p mavlink_get_msg_entry())
 */
constexpr std::array<mavlink_msg_entry_t, 1> MESSAGE_ENTRIES {{ {50601, 195, 41, 41, 0, 0, 0} }};

//! MAVLINK VERSION
constexpr auto MAVLINK_VERSION = 3;


// ENUM DEFINITIONS




} // namespace hfe_mavlink
} // namespace mavlink

// MESSAGE DEFINITIONS
#include "./mavlink_msg_da35efi_status.hpp"

// base include

