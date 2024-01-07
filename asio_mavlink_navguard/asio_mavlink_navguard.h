/** @file
 *  @brief MAVLink comm protocol generated from asio_mavlink_navguard.xml
 *  @see http://mavlink.org
 */
#pragma once
#ifndef MAVLINK_ASIO_MAVLINK_NAVGUARD_H
#define MAVLINK_ASIO_MAVLINK_NAVGUARD_H

#ifndef MAVLINK_H
    #error Wrong include order: MAVLINK_ASIO_MAVLINK_NAVGUARD.H MUST NOT BE DIRECTLY USED. Include mavlink.h from the same directory instead or set ALL AND EVERY defines from MAVLINK.H manually accordingly, including the #define MAVLINK_H call.
#endif

#undef MAVLINK_THIS_XML_HASH
#define MAVLINK_THIS_XML_HASH -8406716881678925100

#ifdef __cplusplus
extern "C" {
#endif

// MESSAGE LENGTHS AND CRCS

#ifndef MAVLINK_MESSAGE_LENGTHS
#define MAVLINK_MESSAGE_LENGTHS {}
#endif

#ifndef MAVLINK_MESSAGE_CRCS
#define MAVLINK_MESSAGE_CRCS {{40601, 48, 35, 35, 0, 0, 0}}
#endif

#include "../protocol.h"

#define MAVLINK_ENABLED_ASIO_MAVLINK_NAVGUARD

// ENUM DEFINITIONS


/** @brief  */
#ifndef HAVE_ENUM_ASIO_SENSOR
#define HAVE_ENUM_ASIO_SENSOR
typedef enum ASIO_SENSOR
{
   ASIO_SENSOR_UNKNOWN=0, /*  | */
   ASIO_SENSOR_DAY=1, /*  | */
   ASIO_SENSOR_NIGHT=2, /*  | */
   ASIO_SENSOR_AUTO=3, /* Not Implemented | */
   ASIO_SENSOR_ENUM_END=4, /*  | */
} ASIO_SENSOR;
#endif

/** @brief  */
#ifndef HAVE_ENUM_ASIO_REC
#define HAVE_ENUM_ASIO_REC
typedef enum ASIO_REC
{
   ASIO_REC_NONE=0, /*  | */
   ASIO_REC_TELEM_ONLY=1, /*  | */
   ASIO_REC_IMAGE_ONLY=2, /* not implemented | */
   ASIO_REC_TELEM_IMAGE=3, /*  | */
   ASIO_REC_ENUM_END=4, /*  | */
} ASIO_REC;
#endif

/** @brief  */
#ifndef HAVE_ENUM_ASIO_NAV_MODE
#define HAVE_ENUM_ASIO_NAV_MODE
typedef enum ASIO_NAV_MODE
{
   ASIO_NAV_MODE_UNKNOWN=0, /*  | */
   ASIO_NAV_MODE_FORCE_TO_NO_GPS=1, /* do not use gps at all, if slam is used for more than X Sec. will try to read gps pos, othewise will keep slam (pre define parameter [s]) | */
   ASIO_NAV_MODE_GPS_ON_TAKEOFF=2, /* if gps is valid, use it when close to home (pre define parameter [m]). 
        or if slam where used for more than X Sec (pre define parameter [s]) | */
   ASIO_NAV_MODE_USE_GPS_WHEN_FIX=3, /* use GPS when valid | */
   ASIO_NAV_MODE_ENUM_END=4, /*  | */
} ASIO_NAV_MODE;
#endif

/** @brief  */
#ifndef HAVE_ENUM_ASIO_SLAM_MODE
#define HAVE_ENUM_ASIO_SLAM_MODE
typedef enum ASIO_SLAM_MODE
{
   ASIO_SLAM_MODE_UNKNOWN=0, /*  | */
   ASIO_SLAM_MODE_AUTO=1, /*  | */
   ASIO_FORCE_SLAM_MODE=2, /*  | */
   ASIO_SLAM_MODE_ENUM_END=3, /*  | */
} ASIO_SLAM_MODE;
#endif

/** @brief  */
#ifndef HAVE_ENUM_ASIO_NAV_STATE
#define HAVE_ENUM_ASIO_NAV_STATE
typedef enum ASIO_NAV_STATE
{
   ASIO_NAV_STATE_NONE=0, /* Should be only on boot | */
   ASIO_NAV_STATE_ANCHOR=1, /* GeoReference is valid | */
   ASIO_NAV_STATE_SLAM=2, /* GeoReference is not valid, sys is now in SLAM mode | */
   ASIO_NAV_STATE_ON_GROUND=3, /* Indicates NO_GPS_MODE before takeoff. keeps initial position for first few meters after takeoff | */
   ASIO_NAV_STATE_ANCHOR_ON_TAKEOFF=4, /* GeoReference is valid while using GPS as output during takeoff | */
   ASIO_NAV_STATE_ENUM_END=5, /*  | */
} ASIO_NAV_STATE;
#endif

/** @brief  */
#ifndef HAVE_ENUM_ASIO_SYS_STATE
#define HAVE_ENUM_ASIO_SYS_STATE
typedef enum ASIO_SYS_STATE
{
   ASIO_SYS_STATE_INIT=0, /* Should be only on startup. Do not takeoff in init state | */
   ASIO_SYS_STATE_READY=1, /* System is ready and fully operational | */
   ASIO_SYS_STATE_FAULT=2, /* Not Implemented | */
   ASIO_SYS_STATE_ENUM_END=3, /*  | */
} ASIO_SYS_STATE;
#endif

/** @brief  */
#ifndef HAVE_ENUM_ASIO_NAV_OUTPUT
#define HAVE_ENUM_ASIO_NAV_OUTPUT
typedef enum ASIO_NAV_OUTPUT
{
   ASIO_NAV_OUTPUT_GPS=0, /* GPS data is outputted as the navigation solution - can be during takeoff or after SLAM timeout | */
   ASIO_NAV_OUTPUT_OPTICAL=1, /* Optical solution data is outputted as the navigation solution | */
   ASIO_NAV_OUTPUT_ENUM_END=2, /*  | */
} ASIO_NAV_OUTPUT;
#endif

/** @brief  */
#ifndef HAVE_ENUM_GPS_JAMMING_STATE
#define HAVE_ENUM_GPS_JAMMING_STATE
typedef enum GPS_JAMMING_STATE
{
   GPS_JAMMING_STATE_OK=0, /* GPS valid | */
   GPS_JAMMING_STATE_WARNNING=1, /* Not Implemented | */
   GPS_JAMMING_STATE_JAMMED=2, /* GPS is jammed valid | */
   GPS_JAMMING_STATE_ENUM_END=3, /*  | */
} GPS_JAMMING_STATE;
#endif

/** @brief  */
#ifndef HAVE_ENUM_ASIO_ERROR
#define HAVE_ENUM_ASIO_ERROR
typedef enum ASIO_ERROR
{
   ASIO_ERROR_CRITICAL=1, /* Critical system error | */
   ASIO_ERROR_GENERAL_WARNNING=2, /* Warning - Nav solution still available, but might be limited | */
   ASIO_ERROR_TELEM=4, /* Critical telemetry (YAW, etc) from UAS is not received | */
   ASIO_ERROR_DAY_SENSOR=8, /* Day sensor fault, will be sent together with ASIO_ERROR_CRITICAL | */
   ASIO_ERROR_NIGHT_SENSOR=16, /* Night sensor fault, will be sent together with ASIO_ERROR_CRITICAL | */
   ASIO_ERROR_ANCHOR=32, /* Not Implemented | */
   ASIO_ERROR_TEMPERATURE=64, /* Not Implemented | */
   ASIO_ERROR_LOGGING=128, /* Not Implemented | */
   ASIO_ERROR_ENUM_END=129, /*  | */
} ASIO_ERROR;
#endif

/** @brief  */
#ifndef HAVE_ENUM_ASIO_CALIBRATION_STATE
#define HAVE_ENUM_ASIO_CALIBRATION_STATE
typedef enum ASIO_CALIBRATION_STATE
{
   ASIO_CALIBRATION_STATE_UNKNOWN=0, /*  | */
   ASIO_CALIBRATION_STATE_IDLE=1, /*  | */
   ASIO_CALIBRATION_STATE_PROCESS=2, /* Calibration procedure is in progress | */
   ASIO_CALIBRATION_STATE_ENUM_END=3, /*  | */
} ASIO_CALIBRATION_STATE;
#endif

/** @brief  */
#ifndef HAVE_ENUM_COMPASS_POINT
#define HAVE_ENUM_COMPASS_POINT
typedef enum COMPASS_POINT
{
   COMPASS_POINT_NORTH=1, /*  | */
   COMPASS_POINT_NORTH_EAST=2, /*  | */
   COMPASS_POINT_EAST=4, /*  | */
   COMPASS_POINT_SOUTH_EAST=8, /*  | */
   COMPASS_POINT_SOUTH=16, /*  | */
   COMPASS_POINT_SOUTH_WEST=32, /*  | */
   COMPASS_POINT_WEST=64, /*  | */
   COMPASS_POINT_NORTH_WEST=128, /*  | */
   COMPASS_POINT_ENUM_END=129, /*  | */
} COMPASS_POINT;
#endif

// MAVLINK VERSION

#ifndef MAVLINK_VERSION
#define MAVLINK_VERSION 3
#endif

#if (MAVLINK_VERSION == 0)
#undef MAVLINK_VERSION
#define MAVLINK_VERSION 3
#endif

// MESSAGE DEFINITIONS
#include "./mavlink_msg_asio_status.h"

// base include


#undef MAVLINK_THIS_XML_HASH
#define MAVLINK_THIS_XML_HASH -8406716881678925100

#if MAVLINK_THIS_XML_HASH == MAVLINK_PRIMARY_XML_HASH
# define MAVLINK_MESSAGE_INFO {MAVLINK_MESSAGE_INFO_ASIO_STATUS}
# define MAVLINK_MESSAGE_NAMES {{ "ASIO_STATUS", 40601 }}
# if MAVLINK_COMMAND_24BIT
#  include "../mavlink_get_info.h"
# endif
#endif

#ifdef __cplusplus
}
#endif // __cplusplus
#endif // MAVLINK_ASIO_MAVLINK_NAVGUARD_H
