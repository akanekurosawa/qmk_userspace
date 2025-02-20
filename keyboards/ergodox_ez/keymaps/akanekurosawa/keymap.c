#include QMK_KEYBOARD_H
#include "version.h"

enum preonic_layers {
  _BASE,
  _LOWER,
  _RAISE,
  _ADJUST,
  _FN
};

enum preonic_keycodes {
  BASE = SAFE_RANGE,
  LOWER,
  RAISE
};

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
/* Keymap 0: Basic layer
 *
 * ,--------------------------------------------------.           ,--------------------------------------------------.
 * |  Esc   |   1  |   2  |   3  |   4  |   5  |  -   |           |   +  |   6  |   7  |   8  |   9  |   0  |        |
 * |--------+------+------+------+------+-------------|           |------+------+------+------+------+------+--------|
 * | Tab    |   Q  |   W  |   E  |   R  |   T  |   {  |           |  }   |   Y  |   U  |   I  |   O  |   P  |  Bspc  |
 * |--------+------+------+------+------+------|   [  |           |  ]   |------+------+------+------+------+--------|
 * | Hypr   |   A  |   S  |   D  |   F  |   G  |------|           |------|   H  |   J  |   K  |   L  |   ;  |   '    |
 * |--------+------+------+------+------+------|      |           |      |------+------+------+------+------+--------|
 * | LShift |   Z  |   X  |   C  |   V  |   B  |      |           |      |   N  |   M  |   ,  |   .  |   /  |  Entr  |
 * `--------+------+------+------+------+-------------'           `-------------+------+------+------+------+--------'
 *   |  FN  | CTL  | ALT  | CMD  | LWR  |                                       |  RSE |  Lt  |  Dn |  Up  |  Rt   |
 *   `----------------------------------'                                       `----------------------------------'
 *                                        ,-------------.       ,---------------.
 *                                        |      |      |       | End  |  Home  |
 *                                 ,------|------|------|       |------+--------+------.
 *                                 |      |      |      |       | PgUp |        |      |
 *                                 |  Spc | Shft |------|       |------|  ENT   | BCSP |
 *                                 |      |      | Exp  |       | PgDn |        |      |
 *                                 `--------------------'       `----------------------'
 */
[_BASE] = LAYOUT_ergodox_pretty(
  KC_ESC,          KC_1,        KC_2,        KC_3,    KC_4,    KC_5,       KC_MINS,         KC_EQL, KC_6,  KC_7,      KC_8,    KC_9,     KC_0,  KC_BSPC,
  KC_TAB,          KC_Q,        KC_W,        KC_E,    KC_R,    KC_T,       KC_LBRC,        KC_RBRC, KC_Y,  KC_U,      KC_I,    KC_O,     KC_P,  KC_BSLS,
  HYPR_T(KC_F16),  KC_A,        KC_S,        KC_D,    KC_F,    KC_G,                                KC_H,  KC_J,      KC_K,    KC_L,  KC_SCLN,  KC_QUOT,
  KC_LSFT,         KC_Z,        KC_X,        KC_C,    KC_V,    KC_B,  LCA_T(KC_NO),   MEH_T(KC_NO), KC_N,  KC_M,   KC_COMM,  KC_DOT,  KC_SLSH,   MT(MOD_RSFT,KC_ENT),
  MO(_FN),      KC_LCTL,     KC_LALT,     KC_LGUI,   LOWER,                                               RAISE,   KC_LEFT, KC_DOWN,    KC_UP,  KC_RGHT,
                                                               HYPR(KC_UP), KC_LCTL,        KC_END, KC_HOME,
                                                                            KC_LALT,       KC_PGUP,
                                                     KC_SPC, SFT_T(KC_TAB), KC_LGUI,       KC_PGDN,  KC_ENT, KC_BSPC
),
/* Keymap 1: Symbol Layer
 *
 * ,---------------------------------------------------.           ,--------------------------------------------------.
 * |    `    |  F1  |  F2  |  F3  |  F4  |  F5  |      |           |      |  F6  |  F7  |  F8  |  F9  |  F10 |   F11  |
 * |---------+------+------+------+------+------+------|           |------+------+------+------+------+------+--------|
 * |         |   !  |   @  |      |   {  |   }  |      |           |      |      |   7  |   8  |   9  |   =  |   F12  |
 * |---------+------+------+------+------+------|      |           |      |------+------+------+------+------+--------|
 * |         |   #  |   $  |      |   (  |   )  |------|           |------|      |   4  |   5  |   6  |   -  |        |
 * |---------+------+------+------+------+------|      |           |      |------+------+------+------+------+--------|
 * |         |   %  |   ^  |      |   [  |   ]  |      |           |      |  en  |   1  |   2  |   3  |   ~  |        |
 * `---------+------+------+------+------+-------------'           `-------------+------+------+------+------+--------'
 *   |       |      |      |      |      |                                       |      |   0  |   .  |      |      |
 *   `-----------------------------------'                                       `----------------------------------'
 *                                        ,-------------.       ,-------------.
 *                                        |      |      |       |      |      |
 *                                 ,------|------|------|       |------+------+------.
 *                                 |      |      |      |       |      |      |      |
 *                                 |      |      |------|       |------| Tab  |      |
 *                                 |      |      |      |       |      |      |      |
 *                                 `--------------------'       `--------------------'
 */
[_LOWER] = LAYOUT_ergodox_pretty(
   KC_GRV, _______, _______, _______, _______, _______, _______,     _______,    _______, _______, _______, _______, _______,  KC_DEL,
  _______, KC_EXLM,   KC_AT, _______, KC_LCBR, KC_RCBR, _______,     _______,    _______,    KC_7,    KC_8,    KC_9,  KC_EQL, _______,
  _______, KC_HASH,  KC_DLR, _______, KC_LPRN, KC_RPRN,                          _______,    KC_4,    KC_5,    KC_6, KC_MINS, _______,
  _______, KC_PERC, KC_CIRC, _______, KC_LBRC, KC_RBRC, _______,     _______, A(KC_MINS),    KC_1,    KC_2,    KC_3, KC_TILD, _______,
  _______, _______, _______, _______, _______,                                            _______,    KC_0, _______, _______, _______,
                                               _______, _______,     _______, _______,
                                                        _______,     _______,
                                      _______, _______, _______,     _______,  KC_TAB, _______
),

/* Keymap 2: FN
 *
 * ,--------------------------------------------------.           ,--------------------------------------------------.
 * |        |  F1  |  F2  |  F3  |  F4  |      |      |           |      |      |      |      |      |      |        |
 * |--------+------+------+------+------+-------------|           |------+------+------+------+------+------+--------|
 * |        |  F5  |  F6  |  F7  |  F8  |      |      |           |      |      |      | MsUp |      |      |        |
 * |--------+------+------+------+------+------|      |           |      |------+------+------+------+------+--------|
 * |        |  F9  |  F10 |  F11 |  F12 |      |------|           |------|      |MsLeft|MsDown|MsRght|      |        |
 * |--------+------+------+------+------+------|      |           |      |------+------+------+------+------+--------|
 * |        |  F13 |  F14 |  F15 |  F16 |      |      |           |      |      |      |      |      |      |        |
 * `--------+------+------+------+------+-------------'           `-------------+------+------+------+------+--------'
 *   |      |      |      |      |      |                                       |      |      |      |      |      |
 *   `----------------------------------'                                       `----------------------------------'
 *                                        ,-------------.       ,-------------.
 *                                        |      |      |       |      |      |
 *                                 ,------|------|------|       |------+------+------.
 *                                 |      |      |      |       |      | Left | Right|
 *                                 |      |      |------|       |------| Click| Click|
 *                                 |      |      |      |       |      |      |      |
 *                                 `--------------------'       `--------------------'
 */
[_FN] = LAYOUT_ergodox_pretty(
  _______,   KC_F1,   KC_F2,   KC_F3,   KC_F4, _______, _______,     _______, _______, _______, _______, _______, _______, _______, 
  _______,   KC_F5,   KC_F6,   KC_F7,   KC_F8, _______, _______,     _______, _______, _______, KC_MS_U, _______, _______, _______,
  _______,   KC_F9,  KC_F10,  KC_F11,  KC_F12, _______,                       _______, KC_MS_L, KC_MS_D, KC_MS_R, _______, _______,
  _______,  KC_F13,  KC_F14,  KC_F15,  KC_F16, _______, _______,     _______, _______, _______, _______, _______, _______, _______,
  _______, _______, _______, _______, _______,                                         _______, _______, _______, _______, _______,

                                               _______, _______,     _______, _______,
                                                        KC_BRIU,     _______,
                                      _______, _______, KC_BRID,     _______, KC_BTN1, KC_BTN2
),
/* Keymap 3: Media and mouse keys
 *
 * ,--------------------------------------------------.           ,--------------------------------------------------.
 * |        |      |      |      |      |      |      |           |      |      |      |      |      |      |        |
 * |--------+------+------+------+------+-------------|           |------+------+------+------+------+------+--------|
 * |        |      |      | PgUp |      |      |      |           |      |      |      |  Up  |      |      |        |
 * |--------+------+------+------+------+------|      |           |      |------+------+------+------+------+--------|
 * |        |      | Home | PgDn | End  |      |------|           |------|      | Left | Down | Rght |      |        |
 * |--------+------+------+------+------+------|      |           |      |------+------+------+------+------+--------|
 * |        |      |      |      |      |      |      |           |      |      |      |      |      |      |        |
 * `--------+------+------+------+------+-------------'           `-------------+------+------+------+------+--------'
 *   |      |      |      |      |      |                                       |      |      |      |      |      |
 *   `----------------------------------'                                       `----------------------------------'
 *                                        ,-------------.       ,-------------.
 *                                        |      |      |       |      |      |
 *                                 ,------|------|------|       |------+------+------.
 *                                 |      |      |      |       |      |      |      |
 *                                 |      |      |------|       |------|      |      |
 *                                 |      |      |      |       |      |      |      |
 *                                 `--------------------'       `--------------------'
 */
[_RAISE] = LAYOUT_ergodox_pretty(
  _______, _______, _______, _______, _______, _______, _______,     _______, _______, _______, _______, _______, _______, _______,
  _______, _______, _______, KC_PGUP, _______, _______, _______,     _______, _______, _______,   KC_UP, _______, _______, _______,
  _______, _______, KC_HOME, KC_PGDN,  KC_END, _______,                       _______, KC_LEFT, KC_DOWN, KC_RGHT, _______, _______,
  _______, _______, _______, _______, _______, _______, _______,     _______, _______, _______, _______, _______, _______, _______,
  _______, _______, _______, _______, _______,                                         _______, _______, _______, _______, _______,

                                               KC_MPLY, KC_MUTE,     _______, _______,
                                                        KC_VOLU,     _______,
                                      KC_MPRV, KC_MNXT, KC_VOLD,     _______, _______, _______
),

[_ADJUST] = LAYOUT_ergodox_pretty(
  _______, _______, _______, _______, _______, _______, _______,     _______, _______, _______, _______, _______, _______,   RESET,
  _______, _______, _______, _______, _______, _______, _______,     _______, _______, _______, _______, _______, _______, _______,
  _______, _______, _______, _______, _______, _______,                       _______, _______, _______, _______, _______, _______,
  _______, _______, _______, _______, _______, _______, _______,     _______, _______, _______, _______, _______, _______, _______,
  _______, _______, _______, _______, _______,                                         _______, _______, _______, _______, _______,
                                               _______, _______,     _______, _______,
                                                        _______,     _______,
                                      _______, _______, _______,     _______, _______, _______
),

/*
[1] = LAYOUT_ergodox_pretty(
  _______, _______, _______, _______, _______, _______, _______,     _______, _______, _______, _______, _______, _______, _______,
  _______, _______, _______, _______, _______, _______, _______,     _______, _______, _______, _______, _______, _______, _______,
  _______, _______, _______, _______, _______, _______,                       _______, _______, _______, _______, _______, _______,
  _______, _______, _______, _______, _______, _______, _______,     _______, _______, _______, _______, _______, _______, _______,
  _______, _______, _______, _______, _______,                                         _______, _______, _______, _______, _______,
                                               _______, _______,     _______, _______,
                                                        _______,     _______,
                                      _______, _______, _______,     _______, _______, _______
),
*/
};

/*bool process_record_user(uint16_t keycode, keyrecord_t *record) {
  if (record->event.pressed) {
    switch (keycode) {
      case VRSN:
        SEND_STRING (QMK_KEYBOARD "/" QMK_KEYMAP " @ " QMK_VERSION);
        return false;
      #ifdef RGBLIGHT_ENABLE
      case RGB_SLD:
        rgblight_mode(1);
        return false;
      #endif
    }
  }
  return true;
}
*/
bool process_record_user(uint16_t keycode, keyrecord_t *record) {
  switch (keycode) {
        case LOWER:
          if (record->event.pressed) {
            layer_on(_LOWER);
            update_tri_layer(_LOWER, _RAISE, _ADJUST);
          } else {
            layer_off(_LOWER);
            update_tri_layer(_LOWER, _RAISE, _ADJUST);
          }
          return false;
          break;
        case RAISE:
          if (record->event.pressed) {
            layer_on(_RAISE);
            update_tri_layer(_LOWER, _RAISE, _ADJUST);
          } else {
            layer_off(_RAISE);
            update_tri_layer(_LOWER, _RAISE, _ADJUST);
          }
          return false;
          break;
      }
    return true;
};

// Runs just one time when the keyboard initializes.
void keyboard_post_init_user(void) {
#ifdef RGBLIGHT_COLOR_LAYER_0
  rgblight_setrgb(RGBLIGHT_COLOR_LAYER_0);
#endif
};

// Runs whenever there is a layer state change.
/*
layer_state_t layer_state_set_user(layer_state_t state) {
  ergodox_board_led_off();
  ergodox_right_led_1_off();
  ergodox_right_led_2_off();
  ergodox_right_led_3_off();

  uint8_t layer = get_highest_layer(state);
  switch (layer) {
      case 0:
        #ifdef RGBLIGHT_COLOR_LAYER_0
          rgblight_setrgb(RGBLIGHT_COLOR_LAYER_0);
        #endif
        break;
      case 1:
        ergodox_right_led_1_on();
        #ifdef RGBLIGHT_COLOR_LAYER_1
          rgblight_setrgb(RGBLIGHT_COLOR_LAYER_1);
        #endif
        break;
      case 2:
        ergodox_right_led_2_on();
        #ifdef RGBLIGHT_COLOR_LAYER_2
          rgblight_setrgb(RGBLIGHT_COLOR_LAYER_2);
        #endif
        break;
      case 3:
        ergodox_right_led_3_on();
        #ifdef RGBLIGHT_COLOR_LAYER_3
          rgblight_setrgb(RGBLIGHT_COLOR_LAYER_3);
        #endif
        break;
      case 4:
        ergodox_right_led_1_on();
        ergodox_right_led_2_on();
        #ifdef RGBLIGHT_COLOR_LAYER_4
          rgblight_setrgb(RGBLIGHT_COLOR_LAYER_4);
        #endif
        break;
      case 5:
        ergodox_right_led_1_on();
        ergodox_right_led_3_on();
        #ifdef RGBLIGHT_COLOR_LAYER_5
          rgblight_setrgb(RGBLIGHT_COLOR_LAYER_5);
        #endif
        break;
      case 6:
        ergodox_right_led_2_on();
        ergodox_right_led_3_on();
        #ifdef RGBLIGHT_COLOR_LAYER_6
          rgblight_setrgb(RGBLIGHT_COLOR_LAYER_6);
        #endif
        break;
      case 7:
        ergodox_right_led_1_on();
        ergodox_right_led_2_on();
        ergodox_right_led_3_on();
        #ifdef RGBLIGHT_COLOR_LAYER_7
          rgblight_setrgb(RGBLIGHT_COLOR_LAYER_7);
        #endif
        break;
      default:
        break;
    }

  return state;
};
*/
