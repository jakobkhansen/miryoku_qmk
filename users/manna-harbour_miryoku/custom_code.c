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

#ifdef POINTING_DEVICE_ENABLE
#include "pointing_device.h"

#define DEADZONE 2  // Set this to the number of counts to ignore

// Modify these values to adjust the scrolling speed
#define SCROLL_DIVISOR_H 15.0
#define SCROLL_DIVISOR_V 15.0

// Variables to store accumulated scroll values
float scroll_accumulated_h = 0;
float scroll_accumulated_v = 0;

report_mouse_t pointing_device_task_user(report_mouse_t mouse_report) {
    if (layer_state_is(U_NAV)) {
        // Calculate and accumulate scroll values based on mouse movement and divisors
        scroll_accumulated_h += (float)mouse_report.x / SCROLL_DIVISOR_H;
        scroll_accumulated_v += (float)mouse_report.y / SCROLL_DIVISOR_V;

        // Assign integer parts of accumulated scroll values to the mouse report
        mouse_report.h = (int8_t)scroll_accumulated_h;
        mouse_report.v = (int8_t)scroll_accumulated_v;

        // Update accumulated scroll values by subtracting the integer parts
        scroll_accumulated_h -= (int8_t)scroll_accumulated_h;
        scroll_accumulated_v -= (int8_t)scroll_accumulated_v;

        mouse_report.x = 0;
        mouse_report.y = 0;

        return mouse_report;
    }
    if (mouse_report.x > -DEADZONE && mouse_report.x < DEADZONE) {
        mouse_report.x = 0;
    }
    if (mouse_report.y > -DEADZONE && mouse_report.y < DEADZONE) {
        mouse_report.y = 0;
    }

    return mouse_report;
}

void pointing_device_init_user(void) {
    set_auto_mouse_layer(U_MOUSE); // only required if AUTO_MOUSE_DEFAULT_LAYER is not set to index of <mouse_layer>
    set_auto_mouse_enable(true);         // always required before the auto mouse feature will work
}
#endif
