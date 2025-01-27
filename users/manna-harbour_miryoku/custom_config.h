// Copyright 2019 Manna Harbour
// https://github.com/manna-harbour/miryoku

// This program is free software: you can redistribute it and/or modify it under the terms of the GNU General Public License as published by the Free Software Foundation, either version 2 of the License, or (at your option) any later version. This program is distributed in the hope that it will be useful, but WITHOUT ANY WARRANTY; without even the implied warranty of MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE. See the GNU General Public License for more details. You should have received a copy of the GNU General Public License along with this program. If not, see <http://www.gnu.org/licenses/>.

#define IGNORE_MOD_TAP_INTERRUPT
#define TAPPING_FORCE_HOLD
#undef TAPPING_TERM
#define TAPPING_TERM 165

#define DOUBLE_TAP_SHIFT_TURNS_ON_CAPS_WORD

#define COMBO_COUNT 2
#define COMBO_TERM 30
#define EXTRA_SHORT_COMBOS

#pragma once

#define XXX KC_NO

#define MIRYOKU_LAYERMAPPING_BASE( \
      K00,  K01,  K02,  K03,  K04,         K05,  K06,  K07,  K08,  K09, \
      K10,  K11,  K12,  K13,  K14,         K15,  K16,  K17,  K18,  K19, \
      K20,  K21,  K22,  K23,  K24,         K25,  K26,  K27,  K28,  K29, \
      N30,  N31,  K32,  K33,  K34,         K35,  K36,  K37,  N38,  N39 \
) \
LAYOUT_split_3x6_3( \
XXX,  KC_Q,  KC_W, KC_F,  KC_P,  KC_B,                                   KC_Y,  KC_J,  KC_K,  KC_L,  KC_SCLN,  XXX, \
XXX,  LCTL_T(KC_A),  LALT_T(KC_R),  LGUI_T(KC_S),  LSFT_T(KC_T),  KC_G,  KC_H,  RSFT_T(KC_N),  LGUI_T(KC_E),  LALT_T(KC_O),  LCTL_T(KC_I),  XXX, \
XXX,  KC_Z,  KC_X,  KC_C,  KC_D,  KC_V,                                  KC_M,  KC_U,  KC_COMMA,  KC_DOT,  KC_MINUS,  XXX, \
XXX,  LT(U_NAV,KC_SPC), LT(U_MEDIA, KC_TAB),                LT(U_NUM,KC_BSPC),  LT(U_SYM,KC_ENT),  XXX \
)


#define MIRYOKU_LAYERMAPPING_SYM( \
      K00,  K01,  K02,  K03,  K04,         K05,  K06,  K07,  K08,  K09, \
      K10,  K11,  K12,  K13,  K14,         K15,  K16,  K17,  K18,  K19, \
      K20,  K21,  K22,  K23,  K24,         K25,  K26,  K27,  K28,  K29, \
      N30,  N31,  K32,  K33,  K34,         K35,  K36,  K37,  N38,  N39 \
) \
LAYOUT_split_3x6_3( \
XXX,  KC_EXLM,  KC_AT, KC_LBRC,  KC_RBRC,   KC_ASTR, K05,  K06,  K07,  K08,  K09,  XXX, \
XXX,  KC_QUOT,  KC_DQUO,  KC_LPRN,  KC_RPRN,  KC_AMPR,         K15,  K16,  K17,  K18,  K19,  XXX, \
XXX,  KC_DLR,  KC_HASH,  KC_LCBR,  KC_RCBR,  KC_PIPE,         K25,  K26,  K27,  K28,  K29,  XXX , \
                  XXX,  KC_QUES,  KC_SLSH,         K35,  K36,  XXX \
)

#define MIRYOKU_LAYERMAPPING_NUM( \
      K00,  K01,  K02,  K03,  K04,         K05,  K06,  K07,  K08,  K09, \
      K10,  K11,  K12,  K13,  K14,         K15,  K16,  K17,  K18,  K19, \
      K20,  K21,  K22,  K23,  K24,         K25,  K26,  K27,  K28,  K29, \
      N30,  N31,  K32,  K33,  K34,         K35,  K36,  K37,  N38,  N39 \
) \
LAYOUT_split_3x6_3( \
XXX,  KC_TILD,  K01,  K02,  K03,  KC_PLUS,         K05,  K06,  K07,  K08,  K09,  XXX, \
XXX,  KC_GRV,  K11,  K12,  K13,  KC_EQL,         K15,  KC_RSFT,  KC_LGUI,  KC_LALT,  KC_LCTL,  XXX, \
XXX,  KC_PERC,  K21,  K22,  K23,  KC_CIRC,         K25,  K26,  K27,  K28,  K29,  XXX, \
                  XXX,  KC_0,  KC_BSLS,         K35,  K36,  XXX \
)

#define MIRYOKU_LAYERMAPPING_NAV( \
      K00,  K01,  K02,  K03,  K04,         K05,  K06,  K07,  K08,  K09, \
      K10,  K11,  K12,  K13,  K14,         K15,  K16,  K17,  K18,  K19, \
      K20,  K21,  K22,  K23,  K24,         K25,  K26,  K27,  K28,  K29, \
      N30,  N31,  K32,  K33,  K34,         K35,  K36,  K37,  N38,  N39 \
) \
LAYOUT_split_3x6_3( \
XXX,  K00,  K01,  K02,  K03,  K04,            K05,  KC_DOWN,  KC_UP,  KC_RIGHT,  K09,  XXX, \
XXX,  K10,  K11,  K12,  K13,  K14,            KC_LEFT, U_CPY, U_PST, U_CUT,  K19,  XXX, \
XXX,  K20,  K21,  K22,  K23,  K24,            K25,  K26,  K27,  K28,  K29,  XXX, \
                  XXX,  K33,  K34,            K35,  K36,  XXX \
)

#define MIRYOKU_LAYERMAPPING_MEDIA( \
      K00,  K01,  K02,  K03,  K04,         K05,  K06,  K07,  K08,  K09, \
      K10,  K11,  K12,  K13,  K14,         K15,  K16,  K17,  K18,  K19, \
      K20,  K21,  K22,  K23,  K24,         K25,  K26,  K27,  K28,  K29, \
      N30,  N31,  K32,  K33,  K34,         K35,  K36,  K37,  N38,  N39 \
) \
LAYOUT_split_3x6_3( \
XXX,  KC_F12,  KC_F7,  KC_F8,  KC_F9,  K04,            K05,  KC_VOLD,  KC_VOLU,  KC_MNXT,  K09,  XXX, \
XXX,  KC_F11,  KC_F4,  KC_F5,  KC_F6,  K14,            KC_MPRV, KC_BRID, KC_BRIU, KC_O,  KC_I,  XXX, \
XXX,  KC_F10,  KC_F1,  KC_F2,  KC_F3,  K24,            K25,  K26,  K27,  K28,  K29,  XXX, \
                  XXX,  K33,  K34,            K35,  K36,  XXX \
)
