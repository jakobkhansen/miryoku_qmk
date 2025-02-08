#pragma once

#define MIRYOKU_LAYERMAPPING_BASE( \
      K00,  K01,  K02,  K03,  K04,         K05,  K06,  K07,  K08,  K09, \
      K10,  K11,  K12,  K13,  K14,         K15,  K16,  K17,  K18,  K19, \
      K20,  K21,  K22,  K23,  K24,         K25,  K26,  K27,  K28,  K29, \
      N30,  N31,  K32,  K33,  K34,         K35,  K36,  K37,  N38,  N39 \
) \
LAYOUT_split_3x5_2( \
  KC_Q,  KC_W, KC_F,  KC_P,  KC_B,                                   KC_Y,  KC_J,  KC_K,  KC_L,  KC_SCLN,   \
  LCTL_T(KC_A),  LALT_T(KC_R),  LGUI_T(KC_S),  LSFT_T(KC_T),  KC_G,  KC_H,  RSFT_T(KC_N),  LGUI_T(KC_E),  LALT_T(KC_O),  LCTL_T(KC_I),   \
  KC_Z,  KC_X,  KC_C,  KC_D,  KC_V,                                  KC_M,  KC_U,  KC_COMMA,  KC_DOT,  KC_MINUS,   \
  LT(U_NAV,KC_SPC), LT(U_MEDIA, KC_TAB),                LT(U_NUM,KC_BSPC),  LT(U_SYM,KC_ENT)  \
)

#define MIRYOKU_LAYERMAPPING_SYM( \
      K00,  K01,  K02,  K03,  K04,         K05,  K06,  K07,  K08,  K09, \
      K10,  K11,  K12,  K13,  K14,         K15,  K16,  K17,  K18,  K19, \
      K20,  K21,  K22,  K23,  K24,         K25,  K26,  K27,  K28,  K29, \
      N30,  N31,  K32,  K33,  K34,         K35,  K36,  K37,  N38,  N39 \
) \
LAYOUT_split_3x5_2( \
  KC_EXLM,  KC_AT, KC_LBRC,  KC_RBRC,   KC_ASTR, K05,  K06,  K07,  K08,  K09,   \
  KC_QUOT,  KC_DQUO,  KC_LPRN,  KC_RPRN,  KC_EQL,         K15,  K16,  K17,  K18,  K19,   \
  KC_DLR,  KC_HASH,  KC_LCBR,  KC_RCBR,  KC_AMPR,         K25,  K26,  KC_LABK,  KC_RABK,  K29,  \
                    KC_QUES,  KC_SLSH,         K35,  K36 \
)

#define MIRYOKU_LAYERMAPPING_NUM( \
      K00,  K01,  K02,  K03,  K04,         K05,  K06,  K07,  K08,  K09, \
      K10,  K11,  K12,  K13,  K14,         K15,  K16,  K17,  K18,  K19, \
      K20,  K21,  K22,  K23,  K24,         K25,  K26,  K27,  K28,  K29, \
      N30,  N31,  K32,  K33,  K34,         K35,  K36,  K37,  N38,  N39 \
) \
LAYOUT_split_3x5_2( \
  KC_TILD,  K01,  K02,  K03,  KC_PLUS,         K05,  K06,  K07,  K08,  K09,   \
  KC_GRV,  K11,  K12,  K13,  KC_EQL,         K15,  KC_RSFT,  KC_LGUI,  KC_LALT,  KC_LCTL,   \
  KC_PERC,  K21,  K22,  K23,  KC_CIRC,         K25,  K26,  KC_LABK,  KC_RABK,  K29,   \
                    KC_0,  KC_BSLS,         K35,  K36  \
)

#define MIRYOKU_LAYERMAPPING_NAV( \
      K00,  K01,  K02,  K03,  K04,         K05,  K06,  K07,  K08,  K09, \
      K10,  K11,  K12,  K13,  K14,         K15,  K16,  K17,  K18,  K19, \
      K20,  K21,  K22,  K23,  K24,         K25,  K26,  K27,  K28,  K29, \
      N30,  N31,  K32,  K33,  K34,         K35,  K36,  K37,  N38,  N39 \
) \
LAYOUT_split_3x5_2( \
  K00,  K01,  K02,  K03,  K04,            K05,  KC_DOWN,  KC_UP,  KC_RIGHT,  K09,   \
  K10,  K11,  K12,  K13,  K14,            KC_LEFT, U_CPY, U_PST, U_CUT,  K19,   \
  K20,  K21,  K22,  K23,  K24,            K25,  K26,  K27,  K28,  K29,   \
                    K33,  K34,            K35,  K36  \
)

#define MIRYOKU_LAYERMAPPING_MEDIA( \
      K00,  K01,  K02,  K03,  K04,         K05,  K06,  K07,  K08,  K09, \
      K10,  K11,  K12,  K13,  K14,         K15,  K16,  K17,  K18,  K19, \
      K20,  K21,  K22,  K23,  K24,         K25,  K26,  K27,  K28,  K29, \
      N30,  N31,  K32,  K33,  K34,         K35,  K36,  K37,  N38,  N39 \
) \
LAYOUT_split_3x5_2( \
  KC_F12,  KC_F7,  KC_F8,  KC_F9,  K04,            K05,  KC_VOLD,  KC_VOLU,  KC_MNXT,  K09,   \
  KC_F11,  KC_F4,  KC_F5,  KC_F6,  K14,            KC_MPRV, KC_BRID, KC_BRIU, KC_O,  KC_I,   \
  KC_F10,  KC_F1,  KC_F2,  KC_F3,  K24,            K25,  K26,  K27,  K28,  K29,   \
                    K33,  K34,            K35,  K36  \
)
