/*
This is the c configuration file for the keymap

Copyright 2012 Jun Wako <wakojun@gmail.com>
Copyright 2015 Jack Humbert

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

//#define USE_MATRIX_I2C

/* Select hand configuration */

#define MASTER_LEFT
// #define MASTER_RIGHT
// #define EE_HANDS

#define UNICODE_SELECTED_MODES UC_LNX

#define USE_SERIAL_PD2

#define TAPPING_TERM 300
#define TAPPING_TERM_PER_KEY

#undef RGBLED_NUM
// #define RGBLIGHT_ANIMATIONS
// #define RGBLIGHT_EFFECT_RAINBOW_SWIRL
// #define RGBLIGHT_EFFECT_BREATHING
// #define RGBLIGHT_EFFECT_RAINBOW
// #define RGBLIGHT_EFFECT_KNIGHT
// #define RGBLIGHT_EFFECT_SWIRL
// #define RGBLIGHT_EFFECT_XMAS
// #define RGBLIGHT_LIMIT_VAL 120
// #define RGBLIGHT_HUE_STEP 10
// #define RGBLIGHT_SAT_STEP 17
// #define RGBLIGHT_VAL_STEP 17
// #define RGBLIGHT_SLEEP

#undef RGB_DI_PIN
#define RGB_DI_PIN D4
#define RGBLED_SPLIT { 10, 10 }
#define RGBLED_NUM 20

#define ENCODERS_PAD_A { F4 }
#define ENCODERS_PAD_B { F5 }
#define ENCODERS_PAD_A_RIGHT { F5 }
#define ENCODERS_PAD_B_RIGHT { F4 }

// Uncomment this if you use an ALPS EC11K encoder, or are noticing missing encoder actuations
// #define ENCODER_RESOLUTION 2

// saving space with the EXTRAFLAGS += -flto option in rules.mk
#define NO_ACTION_MACRO
#define NO_ACTION_FUNCTION
