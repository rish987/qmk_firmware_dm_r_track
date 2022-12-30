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

#pragma once

#include "tractyl_manuform.h"

#if defined(KEYBOARD_handwired_tractyl_manuform_5x6_right_f411)
#    include "f411.h"
#elif defined(KEYBOARD_handwired_tractyl_manuform_5x6_right_f303)
#    include "f303.h"
#elif defined(KEYBOARD_handwired_tractyl_manuform_5x6_right_teensy2pp)
#    include "teensy2pp.h"
#elif defined(KEYBOARD_handwired_tractyl_manuform_5x6_right_elite_c)
#    include "elite_c.h"
#elif defined(KEYBOARD_handwired_tractyl_manuform_5x6_right_arduinomicro)
#    include "arduinomicro.h"
#endif

#include "quantum.h"

#define ___ KC_NO

// clang-format off
#define LAYOUT_5x6_right(\
  L00, L01, L02, L03, L04,                          R00, R01, R02, R03, R04,\
  L10, L11, L12, L13, L14,                          R10, R11, R12, R13, R14,\
  L20, L21, L22, L23,                                    R21, R22, R23, R24,\
  L30, L31, L32, L33, L34,                          R30, R31, R32,      R34\
  ) \
  { \
    { L00, L01, L02, L03, L04 }, \
    { L10, L11, L12, L13, L14 }, \
    { L20, L21, L22, L23, ___ }, \
    { L30, L31, L32, L33, L34 }, \
                                      \
    { R00, R01, R02, R03, R04 }, \
    { R10, R11, R12, R13, R14 }, \
    { ___, R21, R22, R23, R24 }, \
    { R30, R31, R32, ___, R34 }, \
}
// clang-format on
