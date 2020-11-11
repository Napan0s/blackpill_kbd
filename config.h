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
#define DEVICE_VER 0x0002
#define MANUFACTURER Napan0s_Inc
#define PRODUCT BlackPill_KBD
#define MATRIX_ROWS 5
#define MATRIX_COLS 15

// The pin connected to the data pin of the LEDs
#define RGB_DI_PIN B4
// The number of LEDs connected
#define DRIVER_LED_TOTAL 83 // 75 leds for backlighting and 8 for underglow
#define RGBLED_NUM 83
#define RGB_MATRIX_KEYPRESSES
#define RGB_MATRIX_MAXIMUM_BRIGHTNESS 100
//#define RGB_MATRIX_STARTUP_MODE RGB_MATRIX_SOLID_REACTIVE
//#define RGB_MATRIX_SLEEP  /* If defined, the RGB lighting will be switched off when the host goes to sleep */
#define RGB_DISABLE_WHEN_USB_SUSPENDED true

#define MATRIX_ROW_PINS { B9, B8, B7, B6, B5}
#define MATRIX_COL_PINS { B1, B10, B0, A5, A7, A6, A3, A2, A0, A1, B13, B14, B15, A8, A9}

#define UNUSED_PINS

#define DIODE_DIRECTION ROW2COL

#define MOUSEKEY_INTERVAL 32

#define TAPPING_TERM 175

	

// i2c_master driver config 
#define I2C1_CLOCK_SPEED 100000
#define I2C1_DUTY_CYCLE STD_DUTY_CYCLE // FAST_DUTY_CYCLE_2
