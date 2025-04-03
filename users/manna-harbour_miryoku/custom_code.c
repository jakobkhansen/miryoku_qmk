#include <stdint.h>

#include QMK_KEYBOARD_H

#include "manna-harbour_miryoku.h"

const uint16_t PROGMEM pipe_combo[] = {KC_COMMA, KC_DOT, COMBO_END};
const uint16_t PROGMEM esc_combo[]  = {LGUI_T(KC_S), LSFT_T(KC_T), COMBO_END};

combo_t key_combos[] = {
    COMBO(esc_combo, KC_ESC),
    COMBO(pipe_combo, KC_PIPE),
};

bool process_record_user(uint16_t keycode, keyrecord_t *record) {
    switch (keycode) {
        case LALT_T(LGUI(KC_4)):
            if (record->tap.count && record->event.pressed) {
                tap_code16(LGUI(KC_4));
                return false;
            }
            break;
        case LGUI_T(LGUI(KC_5)):
            if (record->tap.count && record->event.pressed) {
                tap_code16(LGUI(KC_5));
                return false;
            }
            break;
        case LSFT_T(LGUI(KC_6)):
            if (record->tap.count && record->event.pressed) {
                tap_code16(LGUI(KC_6));
                return false;
            }
            break;
    }
    return true;
}
