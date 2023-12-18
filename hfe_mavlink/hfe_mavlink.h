/** @file
 *  @brief MAVLink comm protocol generated from hfe_mavlink.xml
 *  @see http://mavlink.org
 */
#pragma once
#ifndef MAVLINK_HFE_MAVLINK_H
#define MAVLINK_HFE_MAVLINK_H

#ifndef MAVLINK_H
    #error Wrong include order: MAVLINK_HFE_MAVLINK.H MUST NOT BE DIRECTLY USED. Include mavlink.h from the same directory instead or set ALL AND EVERY defines from MAVLINK.H manually accordingly, including the #define MAVLINK_H call.
#endif

#undef MAVLINK_THIS_XML_HASH
#define MAVLINK_THIS_XML_HASH -13285698255116781

#ifdef __cplusplus
extern "C" {
#endif

// MESSAGE LENGTHS AND CRCS

#ifndef MAVLINK_MESSAGE_LENGTHS
#define MAVLINK_MESSAGE_LENGTHS {}
#endif

#ifndef MAVLINK_MESSAGE_CRCS
#define MAVLINK_MESSAGE_CRCS {{50601, 195, 41, 41, 0, 0, 0}}
#endif

#include "../protocol.h"

#define MAVLINK_ENABLED_HFE_MAVLINK

// ENUM DEFINITIONS



// MAVLINK VERSION

#ifndef MAVLINK_VERSION
#define MAVLINK_VERSION 3
#endif

#if (MAVLINK_VERSION == 0)
#undef MAVLINK_VERSION
#define MAVLINK_VERSION 3
#endif

// MESSAGE DEFINITIONS
#include "./mavlink_msg_da35efi_status.h"

// base include


#undef MAVLINK_THIS_XML_HASH
#define MAVLINK_THIS_XML_HASH -13285698255116781

#if MAVLINK_THIS_XML_HASH == MAVLINK_PRIMARY_XML_HASH
# define MAVLINK_MESSAGE_INFO {MAVLINK_MESSAGE_INFO_DA35EFI_STATUS}
# define MAVLINK_MESSAGE_NAMES {{ "DA35EFI_STATUS", 50601 }}
# if MAVLINK_COMMAND_24BIT
#  include "../mavlink_get_info.h"
# endif
#endif

#ifdef __cplusplus
}
#endif // __cplusplus
#endif // MAVLINK_HFE_MAVLINK_H
