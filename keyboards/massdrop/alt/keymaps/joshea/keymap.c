#include QMK_KEYBOARD_H
#include "joshea.h"
// enum tap_dance_names { SCL_ENDSCL = 0, MUTE_INS };

// void scl_endscl(qk_tap_dance_state_t *state, void *user_data) {
//   if (state->count % 2 == 0) {
//     tap_code(KC_END);
//     tap_code(KC_SCLN);
//   } else {
//     tap_code(KC_SCLN);
//   }
// };

// void mute_ins(qk_tap_dance_state_t *state, void *user_data) {
//   if (state->count % 2 == 0) {
//     register_code(KC_INS);
//     tap_code(KC_Q);
//     unregister_code(KC_INS);
//   } else {
//     tap_code(KC_MUTE);
//   }
// }

// qk_tap_dance_action_t tap_dance_actions[] = {[SCL_ENDSCL] = ACTION_TAP_DANCE_FN(scl_endscl), [MUTE_INS] = ACTION_TAP_DANCE_FN(mute_ins)};

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
    /* Layer 0
     * ┌───────┬───────┬───────┬───────┬───────┬───────┬───────┬───────┬───────┬───────┬───────┬───────┬───────┬────────────┬───────┐
     * │       │       │       │       │       │       │       │       │       │       │       │       │       │            │       │
     * │   `   │   1   │   2   │   3   │   4   │   5   │   6   │   7   │   8   │   9   │   0   │   -   │   =   │ BackSpace  │  Del  │
     * │       │       │       │       │       │       │       │       │       │       │       │       │       │            │       │
     * ├───────┴──┬────┴──┬────┴──┬────┴──┬────┴──┬────┴──┬────┴──┬────┴──┬────┴──┬────┴──┬────┴──┬────┴──┬────┴──┬─────────┼───────┤
     * │          │       │       │       │       │       │       │       │       │       │       │       │       │         │       │
     * │    Tab   │   Q   │   W   │   E   │   R   │   T   │   Y   │   U   │   I   │   O   │   P   │   [   │   ]   │    \    │  Mute │
     * │          │       │       │       │       │       │       │       │       │       │       │       │       │         │ Ins+Q │
     * ├──────────┴─┬─────┴─┬─────┴─┬─────┴─┬─────┴─┬─────┴─┬─────┴─┬─────┴─┬─────┴─┬─────┴─┬─────┴─┬─────┴─┬─────┴─────────┼───────┤
     * │            │       │       │       │       │       │       │       │       │       │       │       │               │       │
     * │    Ctrl    │   A   │   S   │   D   │   F   │   G   │   H   │   J   │   K   │   L   │   ;   │   '   │    Return     │ PgUp  │
     * │            │       │       │       │       │       │       │       │       │       │ End+; │       │               │       │
     * ├────────────┴──┬────┴──┬────┴──┬────┴──┬────┴──┬────┴──┬────┴──┬────┴──┬────┴──┬────┴──┬────┴──┬────┴───────┬───────┼───────┤
     * │               │       │       │       │       │       │       │       │       │       │       │            │       │       │
     * │ LSFT_T(Caps)  │   Z   │   X   │   C   │   V   │   B   │   N   │   M   │   ,   │   .   │   /   │   Shift    │  Up   │ PgDn  │
     * │               │       │       │       │       │       │       │       │       │       │       │            │       │       │
     * ├─────────┬─────┴───┬───┴─────┬─┴───────┴───────┴───────┴───────┴───────┴─────┬─┴───────┼───────┴─┬──┬───────┼───────┼───────┤
     * │         │         │         │                                               │         │         │▒▒│       │       │       │
     * │  MO(2)  │   GUI   │   Alt   │                     Space                     │   Alt   │  MO(1)  │▒▒│ Left  │ Down  │ Right │
     * │         │         │         │                                               │         │         │▒▒│       │       │       │
     * └─────────┴─────────┴─────────┴───────────────────────────────────────────────┴─────────┴─────────┴──┴───────┴───────┴───────┘
     */
    [0] = LAYOUT_65_ansi_blocker(KC_GRV, KC_1, KC_2, KC_3, KC_4, KC_5, KC_6, KC_7, KC_8, KC_9, KC_0, KC_MINS, KC_EQL, KC_BSPC, KC_DEL,
                                 KC_TAB, KC_Q, KC_W, KC_E, KC_R, KC_T, KC_Y, KC_U, KC_I, KC_O, KC_P, KC_LBRC, KC_RBRC, KC_BSLS,
                                 TD(MUTE_NVDA), KC_LCTL, KC_A, KC_S, KC_D, KC_F, KC_G, KC_H, KC_J, KC_K, KC_L, TD(SCL_ENDSCL), KC_QUOT,
                                 KC_ENT, KC_PGUP, LSFT_T(KC_CAPS), KC_Z, KC_X, KC_C, KC_V, KC_B, KC_N, KC_M, KC_COMM, KC_DOT, KC_SLSH,
                                 KC_RSFT, KC_UP, KC_PGDN, MO(2), KC_LGUI, KC_LALT, KC_SPC, KC_RALT, MO(1), KC_LEFT, KC_DOWN, KC_RGHT),

    /* Layer 1
     * Note: blanks will be the same as Layer 0
     * ┌───────┬───────┬───────┬───────┬───────┬───────┬───────┬───────┬───────┬───────┬───────┬───────┬───────┬────────────┬───────┐
     * │       │       │       │       │       │       │       │       │       │       │       │       │       │            │       │
     * │  Esc  │  F1   │  F2   │  F3   │  F4   │  F5   │  F6   │  F7   │  F8   │  F9   │  F10  │  F11  │  F12  │   PrtSc    │  Del  │
     * │       │       │       │       │       │       │       │       │       │       │       │       │       │            │       │
     * ├───────┴──┬────┴──┬────┴──┬────┴──┬────┴──┬────┴──┬────┴──┬────┴──┬────┴──┬────┴──┬────┴──┬────┴──┬────┴──┬─────────┼───────┤
     * │          │       │       │       │       │       │       │       │       │       │       │       │       │         │       │
     * │          │       │       │       │       │       │       │       │       │       │       │       │       │         │  Ins  │
     * │          │       │       │       │       │       │       │       │       │       │       │       │       │         │       │
     * ├──────────┴─┬─────┴─┬─────┴─┬─────┴─┬─────┴─┬─────┴─┬─────┴─┬─────┴─┬─────┴─┬─────┴─┬─────┴─┬─────┴─┬─────┴─────────┼───────┤
     * │            │       │       │       │       │       │       │       │       │       │       │       │               │       │
     * │            │       │       │       │       │       │       │       │       │       │       │       │               │  Home │
     * │            │       │       │       │       │       │       │       │       │       │       │       │               │       │
     * ├────────────┴──┬────┴──┬────┴──┬────┴──┬────┴──┬────┴──┬────┴──┬────┴──┬────┴──┬────┴──┬────┴──┬────┴───────┬───────┼───────┤
     * │               │       │       │       │       │       │       │       │       │       │       │            │       │       │
     * │     Shift     │       │       │       │       │       │       │       │       │       │       │            │  Vol+ │  End  │
     * │               │       │       │       │       │       │       │       │       │       │       │            │       │       │
     * ├─────────┬─────┴───┬───┴─────┬─┴───────┴───────┴───────┴───────┴───────┴─────┬─┴───────┼───────┴─┬──┬───────┼───────┼───────┤
     * │         │         │         │                                               │         │         │▒▒│       │       │       │
     * │  TG(3)  │         │         │                                               │         │         │▒▒│       │  Vol- │       │
     * │         │         │         │                                               │         │         │▒▒│       │       │       │
     * └─────────┴─────────┴─────────┴───────────────────────────────────────────────┴─────────┴─────────┴──┴───────┴───────┴───────┘
     */

    [1] = LAYOUT_65_ansi_blocker(KC_ESC, KC_F1, KC_F2, KC_F3, KC_F4, KC_F5, KC_F6, KC_F7, KC_F8, KC_F9, KC_F10, KC_F11, KC_F12, KC_PSCR,
                                 KC_DEL, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______,
                                 _______, _______, _______, KC_INS, _______, _______, _______, _______, _______, _______, _______, _______,
                                 _______, _______, _______, _______, _______, KC_HOME, KC_LSFT, _______, _______, _______, _______, _______,
                                 _______, _______, _______, _______, _______, _______, KC_VOLU, KC_END, TG(3), _______, _______, _______,
                                 _______, _______, _______, KC_VOLD, _______),

    /* Layer 2
     * ┌───────┬───────┬───────┬───────┬───────┬───────┬───────┬───────┬───────┬───────┬───────┬───────┬───────┬────────────┬───────┐
     * │       │       │       │       │       │       │       │       │       │       │       │       │       │            │       │
     * │       │       │       │       │       │       │       │       │   /   │   *   │   -   │       │       │            │       │
     * │       │       │       │       │       │       │       │       │       │       │       │       │       │            │       │
     * ├───────┴──┬────┴──┬────┴──┬────┴──┬────┴──┬────┴──┬────┴──┬────┴──┬────┴──┬────┴──┬────┴──┬────┴──┬────┴──┬─────────┼───────┤
     * │          │       │       │       │       │       │       │       │       │       │       │       │       │         │       │
     * │          │       │       │       │       │       │       │   7   │   8   │   9   │   +   │       │       │         │       │
     * │          │       │       │       │       │       │       │       │       │       │       │       │       │         │       │
     * ├──────────┴─┬─────┴─┬─────┴─┬─────┴─┬─────┴─┬─────┴─┬─────┴─┬─────┴─┬─────┴─┬─────┴─┬─────┴─┬─────┴─┬─────┴─────────┼───────┤
     * │            │       │       │       │       │       │       │       │       │       │       │       │               │       │
     * │            │       │       │       │       │       │       │   4   │   5   │   6   │   +   │       │               │ Home  │
     * │            │       │       │       │       │       │       │       │       │       │       │       │               │       │
     * ├────────────┴──┬────┴──┬────┴──┬────┴──┬────┴──┬────┴──┬────┴──┬────┴──┬────┴──┬────┴──┬────┴──┬────┴───────┬───────┼───────┤
     * │               │       │       │       │       │       │       │       │       │       │       │            │ Mouse │       │
     * │               │       │       │       │       │       │       │   1   │   2   │   3   │   =   │            │ Wheel │  End  │
     * │               │       │       │       │       │       │       │       │       │       │       │            │   Up  │       │
     * ├─────────┬─────┴───┬───┴─────┬─┴───────┴───────┴───────┴───────┴───────┴─────┬─┴───────┼───────┴─┬──┬───────┼───────┼───────┤
     * │         │         │         │                                               │         │         │▒▒│ Mouse │ Mouse │ Mouse │
     * │         │         │         │                                     0         │    .    │  TG(3)  │▒▒│ Wheel │ Wheel │ Wheel │
     * │         │         │         │                                               │         │         │▒▒│ Left  │  Down │ Right │
     * └─────────┴─────────┴─────────┴───────────────────────────────────────────────┴─────────┴─────────┴──┴───────┴───────┴───────┘
     */
    [2] = LAYOUT_65_ansi_blocker(_______, _______, _______, _______, _______, _______, _______, _______, KC_PSLS, KC_PAST, KC_PMNS, _______,
                                 _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, KC_P7, KC_P8,
                                 KC_P9, KC_PPLS, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______,
                                 _______, KC_P4, KC_P5, KC_P6, KC_PPLS, _______, _______, KC_HOME, _______, _______, _______, _______,
                                 _______, _______, _______, KC_P1, KC_P2, KC_P3, KC_PEQL, _______, KC_WH_U, KC_END, _______, _______,
                                 _______, KC_P0, KC_PDOT, TG(3), KC_WH_L, KC_WH_D, KC_WH_R),

    /* Layer 3
     * ┌───────┬───────┬───────┬───────┬───────┬───────┬───────┬───────┬───────┬───────┬───────┬───────┬───────┬────────────┬───────┐
     * │       │       │       │       │       │       │       │       │       │       │       │       │       │            │       │
     * │       │       │       │       │       │       │       │       │       │       │       │       │       │   NumPad   │       │
     * │       │       │       │       │       │       │       │       │       │       │       │       │       │            │       │
     * ├───────┴──┬────┴──┬────┴──┬────┴──┬────┴──┬────┴──┬────┴──┬────┴──┬────┴──┬────┴──┬────┴──┬────┴──┬────┴──┬─────────┼───────┤
     * │          │  RGB  │  RGB  │  RGB  │  RGB  │  RGB  │       │       │       │       │       │       │       │         │       │
     * │          │ Speed │  Val  │ Speed │  Hue  │  Sat  │       │       │       │       │       │       │       │         │       │
     * │          │   -   │   +   │   +   │   +   │   +   │       │       │       │       │       │       │       │         │       │
     * ├──────────┴─┬─────┴─┬─────┴─┬─────┴─┬─────┴─┬─────┴─┬─────┴─┬─────┴─┬─────┴─┬─────┴─┬─────┴─┬─────┴─┬─────┴─────────┼───────┤
     * │            │  RGB  │  RGB  │  RGB  │  RGB  │  RGB  │       │       │       │       │       │       │               │       │
     * │            │  Mode │  Val  │  Mode │  Hue  │  Sat  │       │       │       │       │       │       │               │       │
     * │            │   -   │   -   │   +   │   -   │   -   │       │       │       │       │       │       │               │       │
     * ├────────────┴──┬────┴──┬────┴──┬────┴──┬────┴──┬────┴──┬────┴──┬────┴──┬────┴──┬────┴──┬────┴──┬────┴───────┬───────┼───────┤
     * │               │  RGB  │       │       │       │       │       │       │       │       │       │            │       │       │
     * │               │ On/Off│       │       │       │       │       │       │       │       │       │            │       │       │
     * │               │       │       │       │       │       │       │       │       │       │       │            │       │       │
     * ├─────────┬─────┴───┬───┴─────┬─┴───────┴───────┴───────┴───────┴───────┴─────┬─┴───────┼───────┴─┬──┬───────┼───────┼───────┤
     * │         │         │         │                                               │         │         │▒▒│       │       │       │
     * │         │         │         │                                               │         │         │▒▒│       │       │       │
     * │         │         │         │                                               │         │         │▒▒│       │       │       │
     * └─────────┴─────────┴─────────┴───────────────────────────────────────────────┴─────────┴─────────┴──┴───────┴───────┴───────┘
     */

    [3] = LAYOUT_65_ansi_blocker(_______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______,
                                 _______, KC_NLCK, _______, _______, RGB_SPD, RGB_VAI, RGB_SPI, RGB_HUI, RGB_SAI, _______, _______, _______,
                                 _______, _______, _______, _______, _______, _______, _______, RGB_RMOD, RGB_VAD, RGB_MOD, RGB_HUD,
                                 RGB_SAD, _______, _______, _______, _______, _______, _______, _______, _______, _______, RGB_TOG, _______,
                                 _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______,
                                 _______, _______, _______, _______, _______, _______, _______, _______)

    /* Template
     * ┌───────┬───────┬───────┬───────┬───────┬───────┬───────┬───────┬───────┬───────┬───────┬───────┬───────┬────────────┬───────┐
     * │       │       │       │       │       │       │       │       │       │       │       │       │       │            │       │
     * │       │       │       │       │       │       │       │       │       │       │       │       │       │            │       │
     * │       │       │       │       │       │       │       │       │       │       │       │       │       │            │       │
     * ├───────┴──┬────┴──┬────┴──┬────┴──┬────┴──┬────┴──┬────┴──┬────┴──┬────┴──┬────┴──┬────┴──┬────┴──┬────┴──┬─────────┼───────┤
     * │          │       │       │       │       │       │       │       │       │       │       │       │       │         │       │
     * │          │       │       │       │       │       │       │       │       │       │       │       │       │         │       │
     * │          │       │       │       │       │       │       │       │       │       │       │       │       │         │       │
     * ├──────────┴─┬─────┴─┬─────┴─┬─────┴─┬─────┴─┬─────┴─┬─────┴─┬─────┴─┬─────┴─┬─────┴─┬─────┴─┬─────┴─┬─────┴─────────┼───────┤
     * │            │       │       │       │       │       │       │       │       │       │       │       │               │       │
     * │            │       │       │       │       │       │       │       │       │       │       │       │               │       │
     * │            │       │       │       │       │       │       │       │       │       │       │       │               │       │
     * ├────────────┴──┬────┴──┬────┴──┬────┴──┬────┴──┬────┴──┬────┴──┬────┴──┬────┴──┬────┴──┬────┴──┬────┴───────┬───────┼───────┤
     * │               │       │       │       │       │       │       │       │       │       │       │            │       │       │
     * │               │       │       │       │       │       │       │       │       │       │       │            │       │       │
     * │               │       │       │       │       │       │       │       │       │       │       │            │       │       │
     * ├─────────┬─────┴───┬───┴─────┬─┴───────┴───────┴───────┴───────┴───────┴─────┬─┴───────┼───────┴─┬──┬───────┼───────┼───────┤
     * │         │         │         │                                               │         │         │▒▒│       │       │       │
     * │         │         │         │                                               │         │         │▒▒│       │       │       │
     * │         │         │         │                                               │         │         │▒▒│       │       │       │
     * └─────────┴─────────┴─────────┴───────────────────────────────────────────────┴─────────┴─────────┴──┴───────┴───────┴───────┘
    [X] = LAYOUT_65_ansi_blocker(
        _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______,
    _______,
        _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______,
    _______,
        _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______,          _______,
    _______,
        _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______,          _______,
    _______,
        _______, _______, _______,                            _______,                            _______, _______, _______, _______,
    _______
    ),
    */
};
