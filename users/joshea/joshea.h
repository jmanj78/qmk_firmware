#pragma once

#include "process_keycode/process_tap_dance.h"

enum custom_keycodes {
    NVDA_EXIT = SAFE_RANGE,
    COPY,
    PASTE,
    CUT,
    SNIP,
    CTL_ALT_DEL,
    CTL_SFT_ESC,
    LOCK,
    ZOOM_DEFAULT,
    NEW_SAFE_RANGE //use "NEW_SAFE_RANGE" for keymap specific codes
};
enum tap_dance_names { SCL_ENDSCL = 0, MUTE_NVDA};
void scl_endscl(qk_tap_dance_state_t *state, void *user_data);
void mute_nvda(qk_tap_dance_state_t *state, void *user_data);
