#include <stdint.h>

#include QMK_KEYBOARD_H

#include "manna-harbour_miryoku.h"

const uint16_t PROGMEM shift_combo[] = {RSFT_T(KC_N), LGUI_T(KC_E), COMBO_END};
const uint16_t PROGMEM esc_combo[]   = {LGUI_T(KC_S), LSFT_T(KC_T), COMBO_END};
const uint16_t PROGMEM pipe_combo[]  = {LT(U_MEDIA, KC_TAB), LT(U_NUM, KC_BSPC), COMBO_END};

combo_t key_combos[] = {
    COMBO(esc_combo, KC_ESC),
    COMBO(shift_combo, OSM(MOD_LSFT)),
    COMBO(pipe_combo, KC_PIPE),
};
