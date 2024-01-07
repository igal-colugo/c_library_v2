/** @file
 *  @brief MAVLink comm protocol generated from currawong_mavlink.xml
 *  @see http://mavlink.org
 */
#pragma once
#ifndef MAVLINK_CURRAWONG_MAVLINK_H
#define MAVLINK_CURRAWONG_MAVLINK_H

#ifndef MAVLINK_H
    #error Wrong include order: MAVLINK_CURRAWONG_MAVLINK.H MUST NOT BE DIRECTLY USED. Include mavlink.h from the same directory instead or set ALL AND EVERY defines from MAVLINK.H manually accordingly, including the #define MAVLINK_H call.
#endif

#undef MAVLINK_THIS_XML_HASH
#define MAVLINK_THIS_XML_HASH 6609093864374665866

#ifdef __cplusplus
extern "C" {
#endif

// MESSAGE LENGTHS AND CRCS

#ifndef MAVLINK_MESSAGE_LENGTHS
#define MAVLINK_MESSAGE_LENGTHS {}
#endif

#ifndef MAVLINK_MESSAGE_CRCS
#define MAVLINK_MESSAGE_CRCS {{60601, 233, 10, 10, 0, 0, 0}}
#endif

#include "../protocol.h"

#define MAVLINK_ENABLED_CURRAWONG_MAVLINK

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
#include "./mavlink_msg_ce367_status.h"

// base include


#undef MAVLINK_THIS_XML_HASH
#define MAVLINK_THIS_XML_HASH 6609093864374665866

#if MAVLINK_THIS_XML_HASH == MAVLINK_PRIMARY_XML_HASH
# define MAVLINK_MESSAGE_INFO {MAVLINK_MESSAGE_INFO_CE367_STATUS}
# define MAVLINK_MESSAGE_NAMES {{ "CE367_STATUS", 60601 }}
# if MAVLINK_COMMAND_24BIT
#  include "../mavlink_get_info.h"
# endif
#endif

#ifdef __cplusplus
}
#endif // __cplusplus
#endif // MAVLINK_CURRAWONG_MAVLINK_H
