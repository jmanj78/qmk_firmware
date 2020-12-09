#include "joshea.h"

__attribute__ ((weak))
bool process_record_keymap(uint16_t keycode, keyrecord_t *record) {
  return true;
};

bool process_record_user(uint16_t keycode, keyrecord_t *record) {
    switch (keycode) {
        case NVDA_EXIT:
            if (record->event.pressed) {
                // when keycode NVDA_EXIT is pressed
                register_code(KC_INS);
                tap_code(KC_Q);
                unregister_code(KC_INS);
            } else {
                // when keycode NVDA_EXIT is released
            }
            return false;
        case COPY:
            if (record->event.pressed) {
                register_code(KC_LCTL);
                tap_code(KC_C);
                unregister_code(KC_LCTL);
            }
            return false;
        case PASTE:
            if (record->event.pressed) {
                register_code(KC_LCTL);
                tap_code(KC_V);
                unregister_code(KC_LCTL);
            }
            return false;
        case CUT:
            if (record->event.pressed) {
                register_code(KC_LCTL);
                tap_code(KC_X);
                unregister_code(KC_LCTL);
            }
            return false;
        case SNIP:
            if (record->event.pressed) {
                register_code(KC_LGUI);
                register_code(KC_LSFT);
                tap_code(KC_S);
                unregister_code(KC_LSFT);
                unregister_code(KC_LGUI);
            }
            return false;
        case CTL_ALT_DEL:
            if (record->event.pressed) {
                register_code(KC_LCTL);
                register_code(KC_LALT);
                tap_code(KC_DEL);
                unregister_code(KC_LALT);
                unregister_code(KC_LCTL);
            }
            return false;
        case CTL_SFT_ESC:
            if (record->event.pressed) {
                register_code(KC_LCTL);
                register_code(KC_LSFT);
                tap_code(KC_ESC);
                unregister_code(KC_LSFT);
                unregister_code(KC_LCTL);
            }
            return false;
        case LOCK:
            if (record->event.pressed) {
                register_code(KC_LGUI);
                tap_code(KC_L);
                unregister_code(KC_LGUI);
            }
            return false;
        case ZOOM_DEFAULT:
            if (record->event.pressed) {
                register_code(KC_LCTL);
                tap_code(KC_0);
                unregister_code(KC_LCTL);
            }
            return false;
        default:
            return true;
    }
};
