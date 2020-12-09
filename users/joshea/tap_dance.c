#include "tap_dance.h"
#include "joshea.h"

enum tap_dance_names { SCL_ENDSCL = 0, MUTE_NVDA};

// Send ; on first tap, End+; on second tap
void scl_endscl(qk_tap_dance_state_t *state, void *user_data) {
  if (state->count % 2 == 0) {
    tap_code(KC_END);
    tap_code(KC_SCLN);
  } else {
    tap_code(KC_SCLN);
  }
};

void mute_nvda(qk_tap_dance_state_t *state, void *user_data) {
  if (state->count % 2 == 0) {
    tap_code(NVDA_EXIT);
  } else {
    tap_code(KC_MUTE);
  }
};

qk_tap_dance_action_t tap_dance_actions[] = {[SCL_ENDSCL] = ACTION_TAP_DANCE_FN(scl_endscl), [MUTE_NVDA] = ACTION_TAP_DANCE_FN(mute_nvda)};
