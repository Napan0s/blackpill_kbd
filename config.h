/* Copyright 2020 Daniel Reibl <janos.daniel.reibl@protonmail.com>
 *
 * This program is free software: you can redistribute it and/or modify
 * it under the terms of the GNU General Public License as published by
 * the Free Software Foundation, either version 2 of the License, or
 * (at your option) any later version.
 *
 * This program is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 *
 * You should have received a copy of the GNU General Public License
 * along with this program.  If not, see <http://www.gnu.org/licenses/>.
 */

#pragma once

#include "config_common.h"
#define VENDOR_ID 0xFEED
#define PRODUCT_ID 0x002A
#define DEVICE_VER 0x0003
#define MANUFACTURER Napan0s_Inc
#define PRODUCT BlackPill_KBD
#define MATRIX_ROWS 5
#define MATRIX_COLS 15
#define RGB_MATRIX_MAXIMUM_BRIGHTNESS 120 // DO NOT CHANGE THIS VALUE!!!

// The pin connected to the data pin of the LEDs
#define RGB_DI_PIN A9
// The number of LEDs connected
#define DRIVER_LED_TOTAL 75 // 75 leds for backlighting and 18 for underglow
#define RGBLED_NUM 75
#define RGB_MATRIX_KEYPRESSES
#define RGB_MATRIX_STARTUP_MODE RGB_MATRIX_CYCLE_LEFT_RIGHT
#define RGB_MATRIX_STARTUP_SPD 31
#define RGB_MATRIX_STARTUP_VAL 100 // Sets the default brightness value, if none has been set

#define RGB_DISABLE_TIMEOUT 600000
#define RGB_MATRIX_SLEEP  /* If defined, the RGB lighting will be switched off when the host goes to sleep */
#define RGB_DISABLE_WHEN_USB_SUSPENDED true

#define MATRIX_ROW_PINS { C14, B9, A2, A1, A3}
#define MATRIX_COL_PINS { B10, B0, B1, A5, A7, A6, B4, B5, A0, B8, B14, C15, B13, B15, A8}

#define UNUSED_PINS

#define DIODE_DIRECTION ROW2COL

#define MOUSEKEY_INTERVAL 32

#define TAPPING_TERM 175


#define DEBUG_MATRIX_SCAN_RATE

#define RGB_MATRIX_FRAMEBUFFER_EFFECTS