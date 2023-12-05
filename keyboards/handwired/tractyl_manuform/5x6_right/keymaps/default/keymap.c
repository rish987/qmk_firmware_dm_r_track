/* Copyright 2020 Christopher Courtney, aka Drashna Jael're  (@drashna) <drashna@live.com>
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

#include QMK_KEYBOARD_H
#include "tapdance.h"

// if you use TT instead of MO, these will temporarily shift to the mode when held, and switch to the mode when double-tapped
#define RAISE MO(_RAISE)
#define LOWER MO(_LOWER)
#define ARROW MO(_ARROW)

#define ESCCTL   LCTL_T(KC_ESC)
#define BSPCCTL  LCTL_T(KC_BSPC)

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
  [_QWERTY] = LAYOUT_5x6_right(
     KC_Q   ,KC_W   ,KC_E   ,KC_R   ,KC_T   ,                         KC_Y   ,KC_U   ,KC_I   ,KC_O   , KC_P   ,
     BSPCCTL,KC_S   ,KC_D   ,KC_F   ,KC_G   ,                         KC_H   ,KC_J   ,KC_K   ,KC_L   , ESCCTL ,
     KC_Z   ,KC_A   ,KC_C   ,KC_V   ,                                 TRKSWCH,KC_M   ,KC_B   ,KC_N   , KC_X   ,
     RAISE  ,ARROW  ,KC_SPC ,_______,LOWER  ,                                 SHFTTAB,TD(SALTENT)
  ),
  [_LOWER] = LAYOUT_5x6_right(
     KC_EXLM,KC_AT  ,KC_HASH,KC_DLR ,KC_PERC,                        KC_CIRC,KC_AMPR,KC_ASTR,KC_LPRN,KC_RPRN,
     KC_1   ,KC_2   ,KC_3   ,KC_4   ,KC_5   ,                        KC_6   ,KC_7   ,KC_8   ,KC_9   ,KC_0   ,
     _______,KC_LSFT,KC_PLUS,KC_EQL ,                                _______,_______,KC_COMM,KC_DOT ,_______,
     _______,_______,_______,_______,_______,                                KC_RGHT,KC_LEFT
  ),
  [_RAISE] = LAYOUT_5x6_right(
     KC_QUES,KC_LBRC,KC_PLUS,KC_RBRC,KC_PIPE,                        KC_TILD,_______,KC_TAB ,_______,KC_COLN,
     KC_SLSH,KC_LCBR,KC_UNDS,KC_RCBR,KC_BSLS,                        KC_GRV ,KC_QUOT,KC_COMM,KC_DOT ,KC_SCLN,
     _______,KC_LSFT,KC_MINS,KC_EQL ,                                _______,KC_DQT ,KC_LT  ,KC_GT  ,_______,
     _______,_______,_______,_______,_______,                                KC_DOWN,KC_UP
  ),
  [_MOUSE] = LAYOUT_5x6_right(
     _______,_______,_______,_______,_______,                        _______,_______,_______,_______,_______,
     _______,_______,_______,_______,_______,                        _______,KC_BTN2,MLOCK  ,KC_BTN3,_______,
     _______,KC_LSFT,_______,_______,                                _______,KC_BTN1,SNIPING,DRGSCRL,TRKPNT ,
     _______,_______,_______,_______,_______,                                _______,_______
  ),
  [_ARROW] = LAYOUT_5x6_right(
     KC_F1  ,KC_F2  ,KC_F3  ,KC_F4  ,KC_F5  ,                        KC_F6  ,KC_F7  ,KC_F8  ,KC_F9  ,KC_F10 ,
     _______,_______,_______,_______,_______,                        KC_LEFT,KC_DOWN,KC_UP  ,KC_RGHT,_______,
     _______,KC_LSFT,_______,_______,                                _______,KC_TAB ,KC_F11 ,KC_F12 ,_______,
     _______,_______,_______,_______,_______,                                KC_RGUI,_______
  ),
  [_I3] = LAYOUT_5x6_right(
     _______,_______,_______,_______,_______,                        _______,_______,_______,_______,_______,
     MFKEY  ,_______,_______,_______,_______,                        _______,_______,_______,_______,_______,
     _______,_______,_______,_______,                                _______,_______,_______,_______,_______,
     KC_BSPC,KC_TAB ,_______,_______,KC_ESC ,                                _______,_______

  ),
  //[_LAYER] = LAYOUT_5x6_right(
  //   _______,_______,_______,_______,_______,                        _______,_______,_______,_______,_______,
  //   _______,_______,_______,_______,_______,                        _______,_______,_______,_______,_______,
  //   _______,_______,_______,_______,                                _______,_______,_______,_______,_______,
  //   _______,_______,_______,_______,_______,                                _______,_______
  //),
};
