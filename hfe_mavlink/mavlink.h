/** @file
 *  @brief MAVLink comm protocol built from hfe_mavlink.xml
 *  @see http://mavlink.org
 */
#pragma once
#ifndef MAVLINK_H
#define MAVLINK_H

#define MAVLINK_PRIMARY_XML_HASH 7720358982099006780

#ifndef MAVLINK_STX
#define MAVLINK_STX 253
#endif

#ifndef MAVLINK_ENDIAN
#define MAVLINK_ENDIAN MAVLINK_LITTLE_ENDIAN
#endif

#ifndef MAVLINK_ALIGNED_FIELDS
#define MAVLINK_ALIGNED_FIELDS 1
#endif

#ifndef MAVLINK_CRC_EXTRA
#define MAVLINK_CRC_EXTRA 1
#endif

#ifndef MAVLINK_COMMAND_24BIT
#define MAVLINK_COMMAND_24BIT 1
#endif

#include "version.h"
#include "hfe_mavlink.h"

#endif // MAVLINK_H
