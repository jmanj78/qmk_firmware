#include QMK_KEYBOARD_H

enum tap_dance_names { SCL_ENDSCL = 0, MUTE_INS, DOT_ENDDOT };

void scl_endscl(qk_tap_dance_state_t *state, void *user_data) {
    if (state->count % 2 == 0) {
        tap_code(KC_END);
        tap_code(KC_SCLN);
    } else {
        tap_code(KC_SCLN);
    }
};

void dot_enddot(qk_tap_dance_state_t *state, void *user_data) {
    if (state->count % 2 == 0) {
        tap_code(KC_END);
        tap_code(KC_DOT);
    } else {
        tap_code(KC_DOT);
    }
};

void mute_ins(qk_tap_dance_state_t *state, void *user_data) {
    if (state->count % 2 == 0) {
        register_code(KC_INS);
        tap_code(KC_Q);
        unregister_code(KC_INS);
    } else {
        tap_code(KC_MUTE);
    }
}

qk_tap_dance_action_t tap_dance_actions[] = {[SCL_ENDSCL] = ACTION_TAP_DANCE_FN(scl_endscl), [MUTE_INS] = ACTION_TAP_DANCE_FN(mute_ins), [DOT_ENDDOT] = ACTION_TAP_DANCE_FN(dot_enddot)};

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {

    /* Layer 0
     * ,-----------------------------------------------------------------------------------.
     * | Tab  |   Q  |   W  |   E  |   R  |   T  |   Y  |   U  |   I  |   O  |   P  | Bksp |
     * |------+------+------+------+------+-------------+------+------+------+------+------|
     * | Ctrl |   A  |   S  |   D  |   F  |   G  |   H  |   J  |   K  |   L  |TD(;) |  '   |
     * |------+------+------+------+------+------|------+------+------+------+------+------|
     * | Shift|   Z  |   X  |   C  |   V  |   B  |   N  |   M  |   ,  | TD(.)|   /  |Enter |
     * |------+------+------+------+------+------+------+------+------+------+------+------|
     * | MO(4)|  GUI |MU_INS| Alt  |Lower |   `  |Space |Raise | Left | Down |  Up  |Right |
     * `-----------------------------------------------------------------------------------'
     */
    [0] = LAYOUT_ortho_4x12(KC_TAB, KC_Q, KC_W, KC_E, KC_R, KC_T, KC_Y, KC_U, KC_I, KC_O, KC_P, KC_BSPC, KC_LCTL, KC_A, KC_S, KC_D, KC_F, KC_G, KC_H, KC_J, KC_K, KC_L, TD(SCL_ENDSCL), KC_QUOT, LSFT_T(KC_CAPS), KC_Z, KC_X, KC_C, KC_V, KC_B, KC_N, KC_M, KC_COMM, TD(DOT_ENDDOT), KC_SLSH, KC_SFTENT, MO(4), KC_LGUI, TD(MUTE_INS), KC_LALT, MO(1), KC_GRV, KC_SPC, MO(2), KC_LEFT, KC_DOWN, KC_UP, KC_RGHT),

    [1] = LAYOUT_ortho_4x12(KC_ESC, KC_NLCK, KC_NO, KC_NO, KC_NO, KC_7, KC_8, KC_9, KC_LPRN, KC_RPRN, KC_MINS, KC_DEL, KC_LCTL, KC_PSLS, KC_PAST, KC_PMNS, KC_PPLS, KC_4, KC_5, KC_6, KC_LCBR, KC_RCBR, KC_EQL, KC_BSLS, KC_LSFT, KC_NO, KC_NO, KC_NO, KC_NO, KC_1, KC_2, KC_3, KC_LBRC, KC_RBRC, KC_PDOT, KC_SFTENT, KC_NO, KC_PEQL, KC_NO, KC_LALT, KC_TRNS, KC_0, KC_0, MO(3), KC_HOME, KC_PGDN, KC_PGUP, KC_END),

    [2] = LAYOUT_ortho_4x12(KC_F1, KC_F2, KC_F3, KC_F4, KC_F5, KC_F6, KC_F7, KC_F8, KC_F9, KC_F10, KC_F11, KC_F12, KC_LCTL, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_LSFT, KC_NO, KC_NO, KC_NO, KC_NO, KC_VOLD, KC_VOLU, KC_NO, KC_NO, KC_NO, KC_NO, KC_SFTENT, KC_CALC, KC_NO, KC_NO, KC_NO, MO(3), KC_MUTE, KC_MUTE, KC_TRNS, KC_NO, KC_NO, KC_NO, KC_NO),

    [3] = LAYOUT_ortho_4x12(KC_NO, KC_NO, RGB_SAD, RGB_SAI, RGB_HUD, RGB_HUI, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, RGB_RMOD, RGB_MOD, RGB_VAD, RGB_VAI, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, RGB_M_P, RGB_M_B, RGB_M_SW, RGB_M_SN, RGB_M_K, RGB_M_G, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_TRNS, RGB_TOG, RGB_TOG, KC_TRNS, KC_NO, KC_NO, KC_NO, KC_NO),

    [4] = LAYOUT_ortho_4x12(KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_WH_L, KC_WH_D, KC_WH_U, KC_WH_R),

};
