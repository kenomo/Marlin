/**
 * Marlin 3D Printer Firmware
 * Copyright (c) 2020 MarlinFirmware [https://github.com/MarlinFirmware/Marlin]
 *
 * Based on Sprinter and grbl.
 * Copyright (c) 2011 Camiel Gubbels / Erik van der Zalm
 *
 * This program is free software: you can redistribute it and/or modify
 * it under the terms of the GNU General Public License as published by
 * the Free Software Foundation, either version 3 of the License, or
 * (at your option) any later version.
 *
 * This program is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 *
 * You should have received a copy of the GNU General Public License
 * along with this program.  If not, see <https://www.gnu.org/licenses/>.
 *
 */
#pragma once

/**
 * bq ZUM CNC board definition
 */

#define REQUIRE_MEGA2560
#include "env_validate.h"

#define BOARD_INFO_NAME "ZUM CNC"

//
// Limit Switches
//
#define X_MAX_PIN                             79

//
// Steppers
//
#define Z_ENABLE_PIN                          77

#define DIGIPOTSS_PIN                         22
#define DIGIPOT_CHANNELS { 4, 5, 3, 0, 1 }

//
// Temperature Sensors
//
#define TEMP_1_PIN                            14  // Analog Input
#define TEMP_2_PIN                            15  // Analog Input
#define TEMP_3_PIN                             8  // Analog Input
// RAMPS will use TEMP 2 (14) as bed temperature input

// Cooling Fans
//? #define FAN_BOX_PIN        2 (aux drive)
//#define FAN_BLOWER_PIN     12 (fan e0)
//#define FAN_BLOCK_PIN      7  (fan e1)

//
// Heaters / Fans
//
#define RAMPS_D8_PIN                          11  // HBP heater
#define RAMPS_D9_PIN                          12  // PLA blower
#define RAMPS_D10_PIN                          9  // heater e0
#define MOSFET_D_PIN                           2 // AUX, used as case fan

//
// Auto fans
//
#ifndef E0_AUTO_FAN_PIN
  #define E0_AUTO_FAN_PIN                     7
#endif
#ifndef E1_AUTO_FAN_PIN
  #define E1_AUTO_FAN_PIN                      7
#endif

//
// M3/M4/M5 - Spindle/Laser Control
//
// #define SPINDLE_LASER_ENA_PIN                 40  // Pullup or pulldown!
// #define SPINDLE_LASER_PWM_PIN                 44  // Hardware PWM
// #define SPINDLE_DIR_PIN                       42

//
// Misc. Functions
//
//#define PS_ON_PIN                             81  // External Power Supply

// on E1 heater HEATER_1_PIN
#ifndef CASE_LIGHT_PIN
  #define CASE_LIGHT_PIN                      10  // Hardware PWM
#endif

// Alter timing for graphical display
#if ENABLED(U8GLIB_ST7920)
  #define BOARD_ST7920_DELAY_1                 0
  #define BOARD_ST7920_DELAY_2                 0
  #define BOARD_ST7920_DELAY_3               189
#endif

// pin config should prevent auto-definition of any IS_RAMPS_*
//
// Import RAMPS 1.3 pins
//
#include "pins_RAMPS_13.h" // ... RAMPS
