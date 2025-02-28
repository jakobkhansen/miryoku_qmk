// Copyright 2019 Manna Harbour
// https://github.com/manna-harbour/miryoku

// This program is free software: you can redistribute it and/or modify it under the terms of the GNU General Public License as published by the Free Software Foundation, either version 2 of the License, or (at your option) any later version. This program is distributed in the hope that it will be useful, but WITHOUT ANY WARRANTY; without even the implied warranty of MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE. See the GNU General Public License for more details. You should have received a copy of the GNU General Public License along with this program. If not, see <http://www.gnu.org/licenses/>.

// Mod taps
#define IGNORE_MOD_TAP_INTERRUPT
#define TAPPING_FORCE_HOLD
#undef TAPPING_TERM
#define TAPPING_TERM 190
#undef MIRYOKU_KLUDGE_THUMBCOMBOS

// Caps word
#define DOUBLE_TAP_SHIFT_TURNS_ON_CAPS_WORD

// Combos
#define COMBO_COUNT 3
#define COMBO_TERM 20
#define EXTRA_SHORT_COMBOS

// Detect keyboard better
#define SPLIT_USB_DETECT
#define SPLIT_USB_TIMEOUT 2000
#define SPLIT_USB_TIMEOUT_POLL 10
#define SPLIT_WATCHDOG_ENABLE
#define SPLIT_WATCHDOG_TIMEOUT 3000

#ifdef KEYBOARD_crkbd
#    include "3x6_3_config.h"
#endif
#ifdef KEYBOARD_bastardkb_tbkmini
#    include "3x6_3_config.h"
#endif

#ifdef KEYBOARD_ferris
#    include "3x5_2_config.h"
#endif
