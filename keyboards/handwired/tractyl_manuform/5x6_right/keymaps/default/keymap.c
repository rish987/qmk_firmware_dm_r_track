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

enum custom_layers {
    _QWERTY,
    _LOWER,
    _RAISE,
    _ARROW,
};

#define RAISE MO(_RAISE)
#define LOWER MO(_LOWER)
#define ARROW MO(_ARROW)
#define ESCCTL  RCTL_T(KC_ESC)
#define BCTL  LCTL_T(KC_B)
#define CTLTB LCTL_T(KC_TAB)
#define CTLSTB LCTL(LSFT(KC_TAB))
#define SPCSFT  LSFT_T(KC_SPC)
#define ENTSFT  RSFT_T(KC_ENT)
#define ESCALT  RALT_T(KC_ESC)
#define COMMCTL  RCTL_T(KC_COMM)
#define DOTCTL  RCTL_T(KC_DOT)
#define RSFTESC  RSFT_T(KC_ESC)
#define RSFTBSPC  RSFT_T(KC_BSPC)
const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
  [_QWERTY] = LAYOUT_5x6_right(
     KC_Q   , KC_W  , KC_E     , KC_R  , KC_T  ,                         KC_Y  , KC_U     , KC_I     , KC_O  , KC_P ,
     KC_A   , KC_S  , KC_D     , KC_F  , KC_G  ,                         KC_H  , KC_J     , KC_K     , KC_L  , KC_N ,
     ESCCTL , KC_X  , KC_C     , KC_V  ,                                         KC_M     , KC_B     , KC_Z  , ESCCTL ,
     KC_LSFT, RAISE , KC_SPACE , LOWER ,_______,                                 _______  , KC_ENTER   ,       RSFTBSPC
  ),

  [_LOWER] = LAYOUT_5x6_right(
     _______,_______,_______,_______,KC_PERC,                        KC_CIRC,_______,_______,_______,_______,
     KC_EXLM,KC_AT  ,KC_HASH,KC_DLR ,KC_5   ,                        KC_6   ,KC_AMPR,KC_ASTR,KC_LPRN,KC_RPRN,
     KC_1   ,KC_2   ,KC_3   ,KC_4   ,                                        KC_7   ,KC_8   ,KC_9   ,KC_0   ,
     _______,_______,_______,_______,_______,                                _______,_______,        _______
  ),
  [_RAISE] = LAYOUT_5x6_right(
     _______,_______,_______,_______,_______,                        _______,KC_SLSH,KC_TAB ,KC_LCBR,KC_RCBR,
     _______,_______,_______,_______,_______,                        KC_GRV ,KC_EQL ,KC_QUOT,KC_BSLS,KC_SCLN,
     _______,_______,_______,_______,                                        KC_MINS,KC_COMM,KC_DOT ,_______,
     KC_RGUI ,_______,KC_RALT ,_______,_______,                              _______,ARROW  ,_______
  ),
  [_ARROW] = LAYOUT_5x6_right(
     KC_F1  ,KC_F2  ,KC_F3  ,KC_F4  ,KC_F5  ,                        KC_F6  ,KC_F7  ,KC_F8  ,KC_F9  ,KC_F10 ,
     _______,_______,_______,_______,_______,                        KC_LEFT,KC_DOWN,KC_UP  ,KC_RGHT,_______,
     _______,_______,_______,_______,                                        _______,KC_F11 ,KC_F12 ,_______,
     _______,_______,_______,_______,_______,                                _______,_______,        _______
  ),
};
