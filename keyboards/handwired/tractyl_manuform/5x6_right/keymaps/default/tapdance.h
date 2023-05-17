/* Copyright
 * 2020 Qurn
 * 2022 Pascal Jaeger / Schievel https://github.com/Schievel1/
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

#include "tractyl_manuform.h"

// tapdance keycodes
enum td_keycodes { ALT_TM, SFT_TM, CTL_TM, GUI_TM, RAI_TM, LOW_TM, ESC_TM, SALTENT, STABCTL };
// define a type containing as many tapdance states as you need
typedef enum {
    TD_NONE,
    UNKNOWN,
    SINGLE_TAP,
    SINGLE_HOLD,
    DOUBLE_TAP,
    DOUBLE_HOLD,
    DOUBLE_SINGLE_TAP, // Send two single taps
    TRIPLE_TAP,
    TRIPLE_HOLD
} td_state_t;
// function to determine the current tapdance state
td_state_t cur_dance(qk_tap_dance_state_t *state);
//// `finished` and `reset` functions for each tapdance keycode
void alttm_finished(qk_tap_dance_state_t *state, void *user_data);
void alttm_reset(qk_tap_dance_state_t *state, void *user_data);
void sfttm_finished(qk_tap_dance_state_t *state, void *user_data);
void sfttm_reset(qk_tap_dance_state_t *state, void *user_data);
void ctltm_finished(qk_tap_dance_state_t *state, void *user_data);
void ctltm_reset(qk_tap_dance_state_t *state, void *user_data);
void guitm_finished(qk_tap_dance_state_t *state, void *user_data);
void guitm_reset(qk_tap_dance_state_t *state, void *user_data);
void raitm_finished(qk_tap_dance_state_t *state, void *user_data);
void raitm_reset(qk_tap_dance_state_t *state, void *user_data);
void lowtm_finished(qk_tap_dance_state_t *state, void *user_data);
void lowtm_reset(qk_tap_dance_state_t *state, void *user_data);
void esctm_finished(qk_tap_dance_state_t *state, void *user_data);
void esctm_reset(qk_tap_dance_state_t *state, void *user_data);
void saltent_finished(qk_tap_dance_state_t *state, void *user_data);
void saltent_reset(qk_tap_dance_state_t *state, void *user_data);
void stabctl_finished(qk_tap_dance_state_t *state, void *user_data);
void stabctl_reset(qk_tap_dance_state_t *state, void *user_data);

/***************************
 * Custom Keycodes and Layers
 **************************/
enum custom_keycodes {
  KC_INTE = SAFE_RANGE,
  KC_RAISE,
  KC_LOWER,
};
