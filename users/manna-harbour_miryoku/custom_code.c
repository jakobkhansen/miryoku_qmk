#include <stdint.h>

#include QMK_KEYBOARD_H

#include "manna-harbour_miryoku.h"

const uint16_t PROGMEM esc_combo[] = {RSFT_T(KC_N), LGUI_T(KC_E), COMBO_END};
const uint16_t PROGMEM caps_word[] = {LGUI_T(KC_S), LSFT_T(KC_T), COMBO_END};

combo_t key_combos[] = {
    COMBO(esc_combo, KC_ESC),
    COMBO(caps_word, CW_TOGG),
};

