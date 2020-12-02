#include QMK_KEYBOARD_H

enum layers {
    _QWERTY,
    _NUM,
    _FN,
    _RGB
};

enum tap_dance_names { SCL_ENDSCL = 0 };

// TODO I want to move this into a common folder because I use it all. the. time.
void scl_endscl(qk_tap_dance_state_t *state, void *user_data) {
  if (state->count % 2 == 0) {
    tap_code(KC_END);
    tap_code(KC_SCLN);
  } else {
    tap_code(KC_SCLN);
  }
};
qk_tap_dance_action_t tap_dance_actions[] = {[SCL_ENDSCL] = ACTION_TAP_DANCE_FN(scl_endscl)};
