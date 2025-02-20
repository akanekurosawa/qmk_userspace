/*
Copyright 2017 Danny Nguyen <danny@hexwire.com>

This program is free software: you can redistribute it and/or modify
it under the terms of the GNU General Public License as published by
the Free Software Foundation, either version 2 of the License, or
(at your option) any later version.

This program is distributed in the hope that it will be useful,
but WITHOUT ANY WARRANTY; without even the implied warranty of
MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
GNU General Public License for more details.

You should have received a copy of the GNU General Public License
along with this program.  If not, see <http://www.gnu.org/licenses/>.
*/

#pragma once

// #define USE_I2C

/* Select hand configuration */
// #define MASTER_RIGHT
// #define EE_HANDS

#undef RGBLED_NUM
#define RGBLIGHT_ANIMATIONS
#define RGBLED_NUM 12
#define RGBLIGHT_HUE_STEP 8
#define RGBLIGHT_SAT_STEP 8
#define RGBLIGHT_VAL_STEP 8

#define RGBLIGHT_DEFAULT_VAL 0
#define RGBLIGHT_DEFAULT_MODE RGBLIGHT_MODE_STATIC_GRADIENT 

/* Mouse Keys - Kinetic Mode */
#define MK_KINETIC_SPEED
#define MOUSEKEY_DELAY 8
#define MOUSEKEY_INTERVAL 16
#define MOUSEKEY_MOVE_DELTA 1
#define MOUSEKEY_INITIAL_SPEED 5
#define MOUSEKEY_BASE_SPEED 50
#define MOUSEKEY_DECELERATED_SPEED 25
#define MOUSEKEY_ACCELERATED_SPEED 125
