#include QMK_KEYBOARD_H

enum layers {
    _QWERTY,
    _NUM,
    _FN,
    _RGB
};


  /* Qwerty
   * ,------------------------------------------------------------------------------------------------.
   * | ESC |  1  |  2  |  3  |  4  |  5  |  6  |  7  |  8  |  9  |  0  |  -  |  =  | BSPC | DEL| PGUP |
   * |------------------------------------------------------------------------------------------------+
   * |  TAB  |  Q  |  W  |  E  |  R  |  T  |  Y  |  U  |  I  |  O  |  P  |  [  |  ]  |    \    | PGDN  |
   * |------------------------------------------------------------------------------------------------+
   * |   Ctrl  |  A  |  S  |  D  |  F  |  G  |  H  |  J  |  K  |  L  |  ;  |  '  |    Enter    | END  |
   * |------------------------------------------------------------------------------------------------+
   * |   Shift   |  Z  |  X  |  C  |  V  |  B  |  N  |  M  |  ,  |  .  | ?/ |   Shift   |  Up  | HOME |
   * |------------------------------------------------------------------------------------------------+
   * | CAPS |  OS  |  Alt |    Fn     |  `  |      Space      |  Alt |  Fn  |    | Left | Down | Right|
   * `----------------------------------------------------------------------'    '--------------------'
   */

  const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
      [_QWERTY] = LAYOUT( \
        KC_ESC,  KC_1,    KC_2,    KC_3,    KC_4,    KC_5,    KC_6,    KC_7,    KC_8,    KC_9,    KC_0,    KC_MINS, KC_EQL,  KC_BSPC, KC_DEL, KC_PGUP, \
        KC_TAB,           KC_Q,    KC_W,    KC_E,    KC_R,    KC_T,    KC_Y,    KC_U,    KC_I,    KC_O,    KC_P,    KC_LBRC, KC_RBRC, KC_BSLS, KC_PGDN,  \
        KC_LCTL,          KC_A,    KC_S,    KC_D,    KC_F,    KC_G,    KC_H,    KC_J,    KC_K,    KC_L,    TD(SCL_ENDSCL), KC_QUOT, KC_ENT,    KC_END, \
        KC_LSFT, KC_LSFT, KC_Z,    KC_X,    KC_C,    KC_V,    KC_B,    KC_N,    KC_M,    KC_COMM, KC_DOT,  KC_SLSH, KC_RSFT,          KC_UP,   KC_HOME, \
        KC_CAPS, KC_LGUI, KC_LALT,           MO(_NUM),      KC_GRV,           KC_SPC      ,  KC_RALT,    MO(_FN),                KC_LEFT, KC_DOWN, KC_RGHT  \
        ),

    [_NUM] = LAYOUT( \
        XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, \
        XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, KC_P7, KC_P8, KC_P9, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, \
        XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, KC_P4, KC_P5, KC_P6, XXXXXXX, XXXXXXX, TD(MUTE_NVDA), XXXXXXX, \
        XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, KC_P1, KC_P2, KC_P3, XXXXXXX, XXXXXXX, KC_VOLU, XXXXXXX, \
        XXXXXXX, XXXXXXX, XXXXXXX, _______, XXXXXXX, KC_P0  , XXXXXXX, XXXXXXX, KC_WH_L, KC_VOLD, KC_WH_R \
        ),
    [_FN] = LAYOUT( \
        XXXXXXX,   KC_F1,   KC_F2,   KC_F3,   KC_F4,   KC_F5,   KC_F6,   KC_F7,   KC_F8,   KC_F9,  KC_F10,  KC_F11,  KC_F12,  XXXXXXX, XXXXXXX, XXXXXXX, \
        XXXXXXX, RGB_TOG, RGB_MOD, RGB_HUD, RGB_HUI, RGB_SAD, RGB_SAI, RGB_VAD, RGB_VAI, RGB_SPD,  RGB_SPI, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, \
        XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, \
        XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, \
        XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, _______, XXXXXXX, XXXXXXX, XXXXXXX \
        )
  };
