#ifndef CONFIG_USER_H
#define CONFIG_USER_H

#include "../../config.h"
#define MIDI_ENABLE_STRICT 1
#define MIDI_BASIC
#define MIDI_ADVANCED
#define MIDI_TONE_KEYCODE_OCTAVES 6


#undef MANUFACTURER
#undef PRODUCT
#undef DESCRIPTION
#define MANUFACTURER    mil
#define PRODUCT         milhhkb
#define DESCRIPTION     mils hhkb.. if found: miles@userbound.com


//
//#define MOUSEKEY_INTERVAL       20
//#define MOUSEKEY_DELAY          0
//#define MOUSEKEY_TIME_TO_MAX    60
//#define MOUSEKEY_MAX_SPEED      7
//#define MOUSEKEY_WHEEL_DELAY 0
//
#undef MOUSEKEY_MOVE_MAX
#define MOUSEKEY_MOVE_MAX       127
#undef MOUSEKEY_WHEEL_MAX
#define MOUSEKEY_WHEEL_MAX      110
#undef MOUSEKEY_MOVE_DELTA
#define MOUSEKEY_MOVE_DELTA     5
#undef MOUSEKEY_WHEEL_DELTA
#define MOUSEKEY_WHEEL_DELTA    1
#undef MOUSEKEY_DELAY
#define MOUSEKEY_DELAY 50
#undef MOUSEKEY_INTERVAL
#define MOUSEKEY_INTERVAL 20
#undef MOUSEKEY_MAX_SPEED
#define MOUSEKEY_MAX_SPEED 4
#undef MOUSEKEY_TIME_TO_MAX
#define MOUSEKEY_TIME_TO_MAX 30
#undef MOUSEKEY_WHEEL_MAX_SPEED
#define MOUSEKEY_WHEEL_MAX_SPEED 3
#undef MOUSEKEY_WHEEL_TIME_TO_MAX
#define MOUSEKEY_WHEEL_TIME_TO_MAX 100


#endif
