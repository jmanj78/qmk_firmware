#include QMK_KEYBOARD_H

enum layers {
    _QWERTY,
    _NUM,
    _FN,
    _RGB
};

// enum tap_dance_names { SCL_ENDSCL = 0 };

// enum custom_keycodes {
//     NVDA_EXIT = SAFE_RANGE,
//     COPY,
//     PASTE,
//     CUT,
//     SNIP,
//     CTL_ALT_DEL,
//     CTL_SFT_ESC,
//     LOCK,
//     ZOOM_DEFAULT,
//     NEW_SAFE_RANGE
// };

// void scl_endscl(qk_tap_dance_state_t *state, void *user_data) {
//   if (state->count % 2 == 0) {
//     tap_code(KC_END);
//     tap_code(KC_SCLN);
//   } else {
//     tap_code(KC_SCLN);
//   }
// };
// qk_tap_dance_action_t tap_dance_actions[] = {[SCL_ENDSCL] = ACTION_TAP_DANCE_FN(scl_endscl)};


const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {

  /*[_QWERTY] = LAYOUT(
  //┌────────┬────────┬────────┬────────┬────────┬────────┐                          ┌────────┬────────┬────────┬────────┬────────┬────────┐
     KC_TAB,  KC_Q,    KC_W,    KC_E,    KC_R,    KC_T,                                KC_Y,    KC_U,    KC_I,    KC_O,    KC_P,    KC_BSPC,
  //├────────┼────────┼────────┼────────┼────────┼────────┤                          ├────────┼────────┼────────┼────────┼────────┼────────┤
     KC_LCTL,  KC_A,    KC_S,    KC_D,    KC_F,    KC_G,                                KC_H,    KC_J,    KC_K,    KC_L,  TD(SCL_ENDSCL), KC_QUOT,
  //├────────┼────────┼────────┼────────┼────────┼────────┤                          ├────────┼────────┼────────┼────────┼────────┼────────┤
     LSFT_T(KC_CAPS), KC_Z, KC_X, KC_C,    KC_V,    KC_B,                               KC_N,   KC_M,   KC_COMM,  KC_DOT,  KC_SLSH, KC_RSFT,
  //├────────┼────────┼────────┼────────┼────────┼────────┼────────┐        ┌────────┼────────┼────────┼────────┼────────┼────────┼────────┤
     KC_LGUI, TG(_RGB),    SNIP,   CUT,    COPY,   PASTE,   KC_MUTE,         NVDA_EXIT,KC_HOME, KC_END,  KC_LEFT, KC_DOWN, KC_UP,  KC_RGHT,
  //└────────┴────────┴────────┴───┬────┴───┬────┴───┬────┴───┬────┘        └───┬────┴───┬────┴───┬────┴───┬────┴────────┴────────┴────────┘
                                    KC_LALT, LT(_NUM, KC_SPC), KC_GRV,           KC_ENT,  LT(_FN, KC_SPC), KC_ESC
                                // └────────┴────────┴────────┘                 └────────┴────────┴────────┘
  ),*/

  [_QWERTY] = LAYOUT(
  //┌────────┬────────┬────────┬────────┬────────┬────────┐                          ┌────────┬────────┬────────┬────────┬────────┬────────┐
     KC_LGUI, TG(_RGB),  SNIP,   CUT,    COPY,    PASTE,                              KC_HOME, KC_END,  KC_LEFT, KC_DOWN, KC_UP,   KC_RGHT,
  //├────────┼────────┼────────┼────────┼────────┼────────┤                          ├────────┼────────┼────────┼────────┼────────┼────────┤
     KC_TAB,  KC_Q,    KC_W,    KC_E,    KC_R,    KC_T,                                KC_Y,    KC_U,    KC_I,    KC_O,    KC_P,    KC_BSPC,
  //├────────┼────────┼────────┼────────┼────────┼────────┤                          ├────────┼────────┼────────┼────────┼────────┼────────┤
     KC_LCTL,  KC_A,    KC_S,    KC_D,    KC_F,    KC_G,                                KC_H,    KC_J,    KC_K,    KC_L,  TD(SCL_ENDSCL), KC_QUOT,
  //├────────┼────────┼────────┼────────┼────────┼────────┤                          ├────────┼────────┼────────┼────────┼────────┼────────┤
     LSFT_T(KC_CAPS), KC_Z, KC_X, KC_C,    KC_V,    KC_B,   KC_MUTE,         NVDA_EXIT, KC_N,   KC_M,   KC_COMM,  KC_DOT,  KC_SLSH, KC_RSFT,
  //└────────┴────────┴────────┴───┬────┴───┬────┴───┬────┴───┬────┘        └───┬────┴───┬────┴───┬────┴───┬────┴────────┴────────┴────────┘
                                    KC_LALT, LT(_NUM, KC_SPC), KC_GRV,           KC_ENT,  LT(_FN, KC_SPC), KC_ESC
                                // └────────┴────────┴────────┘                 └────────┴────────┴────────┘
  ),

  [_NUM] = LAYOUT(
  //┌────────┬────────┬────────┬────────┬────────┬────────┐                          ┌────────┬────────┬────────┬────────┬────────┬────────┐
     XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX,                            XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX,
  //├────────┼────────┼────────┼────────┼────────┼────────┤                          ├────────┼────────┼────────┼────────┼────────┼────────┤
     XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX,  KC_7,                                KC_8,    KC_9,  KC_LPRN, KC_RPRN, KC_MINS, XXXXXXX,
  //├────────┼────────┼────────┼────────┼────────┼────────┤                          ├────────┼────────┼────────┼────────┼────────┼────────┤
     KC_LCTL, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX,  KC_4,                                KC_5,    KC_6,   KC_LCBR, KC_RCBR, KC_EQL, KC_BSLS,
  //├────────┼────────┼────────┼────────┼────────┼────────┼────────┐        ┌────────┼────────┼────────┼────────┼────────┼────────┼────────┤
     KC_LSFT, XXXXXXX, XXXXXXX,  XXXXXXX,  KC_0,    KC_1,   XXXXXXX,          XXXXXXX,  KC_2,    KC_3,   KC_LBRC, KC_RBRC, KC_DOT, XXXXXXX,
  //└────────┴────────┴────────┴───┬────┴───┬────┴───┬────┴───┬────┘        └───┬────┴───┬────┴───┬────┴───┬────┴────────┴────────┴────────┘
                                    XXXXXXX, _______, XXXXXXX,                    KC_DEL, CTL_ALT_DEL, CTL_SFT_ESC
                                // └────────┴────────┴────────┘                 └────────┴────────┴────────┘
  ),

  [_FN] = LAYOUT(
  //┌────────┬────────┬────────┬────────┬────────┬────────┐                          ┌────────┬────────┬────────┬────────┬────────┬────────┐
     KC_F1,    KC_F2,    KC_F3,   KC_F4,   KC_F5,  KC_F6,                                KC_F7,   KC_F8,   KC_F9,  KC_F10,  KC_F11,  KC_F12,
  //├────────┼────────┼────────┼────────┼────────┼────────┤                          ├────────┼────────┼────────┼────────┼────────┼────────┤
     XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX,  XXXXXXX,                           XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX,
  //├────────┼────────┼────────┼────────┼────────┼────────┤                          ├────────┼────────┼────────┼────────┼────────┼────────┤
     KC_LCTL, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX,  XXXXXXX,                           XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX,
  //├────────┼────────┼────────┼────────┼────────┼────────┤                          ├────────┼────────┼────────┼────────┼────────┼────────┤
     KC_LSFT, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, ZOOM_DEFAULT,     XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX,
  //└────────┴────────┴────────┴───┬────┴───┬────┴───┬────┴───┬────┘        └───┬────┴───┬────┴───┬────┴───┬────┴────────┴────────┴────────┘
                                    XXXXXXX, XXXXXXX, XXXXXXX,                   XXXXXXX, _______, XXXXXXX
                                // └────────┴────────┴────────┘                 └────────┴────────┴────────┘
  ),

  [_RGB] = LAYOUT(
  //┌────────┬────────┬────────┬────────┬────────┬────────┐                          ┌────────┬────────┬────────┬────────┬────────┬────────┐
     XXXXXXX, TG(_RGB), XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX,                            XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX,
  //├────────┼────────┼────────┼────────┼────────┼────────┤                          ├────────┼────────┼────────┼────────┼────────┼────────┤
     XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX,                            XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX,
  //├────────┼────────┼────────┼────────┼────────┼────────┤                          ├────────┼────────┼────────┼────────┼────────┼────────┤
     XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX,  XXXXXXX,                           XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX,
  //├────────┼────────┼────────┼────────┼────────┼────────┼────────┐        ┌────────┼────────┼────────┼────────┼────────┼────────┼────────┤
     XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, RGB_TOG,          RGB_M_P,RGB_RMOD, RGB_MOD, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX,
  //└────────┴────────┴────────┴───┬────┴───┬────┴───┬────┴───┬────┘        └───┬────┴───┬────┴───┬────┴───┬────┴────────┴────────┴────────┘
                                    XXXXXXX, XXXXXXX, XXXXXXX,                   XXXXXXX, XXXXXXX, XXXXXXX
                                // └────────┴────────┴────────┘                 └────────┴────────┴────────┘
  )
};

// switch(biton32(layer_state)) will get you the number of the current layer
//https://www.reddit.com/r/olkb/comments/bauj0t/can_you_change_encoders_output_using_layers_qmk/
void encoder_update_user(uint8_t index, bool clockwise) {
    if (index == 0) { /* First encoder */
        switch(biton32(layer_state)){
            case _RGB:
                // rgb brightness up/down
                if(clockwise){
                    rgblight_increase_val();
                } else {
                    rgblight_decrease_val();
                }
                break;
            case _FN:
                //zoom in/out
                if(clockwise) {
                    SEND_STRING(SS_LCTL("+"));
                } else {
                    SEND_STRING(SS_LCTL("-"));
                }
                break;
            default:
                //volume up/down
                if (clockwise) {
                    tap_code(KC_VOLU);
                } else {
                    tap_code(KC_VOLD);
                }
        }

    } else if (index == 1) { /* Second encoder */
        switch(biton32(layer_state)){
            case _RGB:
                // rgb hue up/down
                if(clockwise){
                    rgblight_increase_hue();
                } else {
                    rgblight_decrease_hue();
                }
                break;
            case _NUM:
                // mouse scroll right/left
                if(clockwise) {
                    tap_code(KC_WH_R);
                } else {
                    tap_code(KC_WH_L);
                }
            default:
                // page up/page down
                if (clockwise) {
                    tap_code(KC_PGUP);
                } else {
                    tap_code(KC_PGDN);
                }
                break;
        }

    }
};

// bool process_record_user(uint16_t keycode, keyrecord_t *record) {
//     switch (keycode) {
//         case NVDA_EXIT:
//             if (record->event.pressed) {
//                 // when keycode NVDA_EXIT is pressed
//                 register_code(KC_INS);
//                 tap_code(KC_Q);
//                 unregister_code(KC_INS);
//             } else {
//                 // when keycode NVDA_EXIT is released
//             }
//             return false;
//         case COPY:
//             if (record->event.pressed) {
//                 register_code(KC_LCTL);
//                 tap_code(KC_C);
//                 unregister_code(KC_LCTL);
//             }
//             return false;
//         case PASTE:
//             if (record->event.pressed) {
//                 register_code(KC_LCTL);
//                 tap_code(KC_V);
//                 unregister_code(KC_LCTL);
//             }
//             return false;
//         case CUT:
//             if (record->event.pressed) {
//                 register_code(KC_LCTL);
//                 tap_code(KC_X);
//                 unregister_code(KC_LCTL);
//             }
//             return false;
//         case SNIP:
//             if (record->event.pressed) {
//                 register_code(KC_LGUI);
//                 register_code(KC_LSFT);
//                 tap_code(KC_S);
//                 unregister_code(KC_LSFT);
//                 unregister_code(KC_LGUI);
//             }
//             return false;
//         case CTL_ALT_DEL:
//             if (record->event.pressed) {
//                 register_code(KC_LCTL);
//                 register_code(KC_LALT);
//                 tap_code(KC_DEL);
//                 unregister_code(KC_LALT);
//                 unregister_code(KC_LCTL);
//             }
//             return false;
//         case CTL_SFT_ESC:
//             if (record->event.pressed) {
//                 register_code(KC_LCTL);
//                 register_code(KC_LSFT);
//                 tap_code(KC_ESC);
//                 unregister_code(KC_LSFT);
//                 unregister_code(KC_LCTL);
//             }
//             return false;
//         case LOCK:
//             if (record->event.pressed) {
//                 register_code(KC_LGUI);
//                 tap_code(KC_L);
//                 unregister_code(KC_LGUI);
//             }
//             return false;
//         case ZOOM_DEFAULT:
//             if (record->event.pressed) {
//                 register_code(KC_LCTL);
//                 tap_code(KC_0);
//                 unregister_code(KC_LCTL);
//             }
//             return false;
//         default:
//             return true;
//     }
// };
