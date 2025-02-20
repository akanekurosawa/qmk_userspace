#include QMK_KEYBOARD_H

enum layer_names {
  _QLAB,
  _LOWER,
  _RAISE,
  _ADJUST
};

enum custom_keycodes {
  QWERTY = SAFE_RANGE,
  NUMPAD,
  LOWER,
  RAISE,
  ADJUST,
};

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {

/* QLAB
 * ,-----------------------------------------. ,-----------------------------------------.
 * |      |      |      |      |      |      | |   -  |   7  |   8  |   9  |   =  |      |
 * |------+------+------+------+------+------| |------+------+------+------+------+------|
 * |      |      |      |      |      |      | |   +  |   4  |   5  |   6  |   /  |   *  |
 * |------+------+------+------+------+------| |------+------+------+------+------+------|
 * |      |      |             |      |      | |      |   1  |   2  |   3  |   (  |   )  |
 * |------+------+------+------+------+------| | ENTR +------+------+------+------+------|
 * |             |             |             | |      |   0  |   .  | SPCE |  UP  |   '  |
 * |             +             +             | |------+------+------+------+------+------|
 * |             |             |             | | LOWER| RAISE|      | LEFT | DOWN | RIGHT|
 * `-----------------------------------------' `-----------------------------------------'
 */
[_QLAB] = LAYOUT( \
    _______,   _______,   _______,   _______,   _______,   _______,        LOWER, _______, _______, _______, _______, _______, \
    _______,   _______,   _______,   _______,   _______,   _______,      _______, _______, _______, _______, _______, _______, \
    _______,   _______,   _______,   _______,   _______,   _______,      _______, _______, _______, _______, _______, _______, \
    XXXXXXX,   XXXXXXX,   XXXXXXX,   XXXXXXX,   XXXXXXX,   XXXXXXX,      XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, \
    XXXXXXX,   _______,   KC_LEFT,   XXXXXXX,   XXXXXXX,    KC_SPC,      XXXXXXX, XXXXXXX, KC_LEFT, XXXXXXX, XXXXXXX,  KC_SPC  \
),

/* Lower
 * ,-----------------------------------------. ,-----------------------------------------.
 * |      |      |      |      |      |      | |      |      |      |      |      |      |
 * |------+------+------+------+------+------| |------+------+------+------+------+------|
 * |      |      |      |      |      |      | |      |      |      |      |      |      |
 * |------+------+------+------+------+------| |------+------+------+------+------+------|
 * |      |      |      |      |      |      | |      |      |      |      |      |      |
 * |------+------+------+------+------+------| |------+------+------+------+------+------|
 * |      |      |      |      |      |      | |      |      |      |      |      |      |
 * |------+------+------+------+------+------| |------+------+------+------+------+------|
 * |      |      |      |      |      |      | |      |      |      |      |      |      |
 * `-----------------------------------------' `-----------------------------------------'
 */
[_LOWER] = LAYOUT( \
  _______, _______, _______, _______, _______, _______,      _______, _______, _______, _______, _______,   RESET, \
  _______, _______, _______, _______, _______, _______,      _______, _______, _______, _______, _______, _______, \
  _______, _______, _______, _______, _______, _______,      _______, _______, _______, _______, _______, _______, \
  _______, _______, _______, _______, _______, _______,      _______, _______, _______, _______, _______, _______, \
  _______, _______, _______, _______, _______, _______,      _______, _______, _______, _______, _______, _______  \
),

/* Raise
 * ,-----------------------------------------. ,-----------------------------------------.
 * |      |      |      |      |      |      | |      |      |      |      |      |      |
 * |------+------+------+------+------+------| |------+------+------+------+------+------|
 * |      |      |      |      |      |      | |      |      |      |      |      |      |
 * |------+------+------+------+------+------| |------+------+------+------+------+------|
 * |      |      |      |      |      |      | |      |      |      |      |      |      |
 * |------+------+------+------+------+------| |------+------+------+------+------+------|
 * |      |      |      |      |      |      | |      |      |      |      |      |      |
 * |------+------+------+------+------+------| |------+------+------+------+------+------|
 * |      |      |      |      |      |      | |      |      |      |      |      |      |
 * `-----------------------------------------' `-----------------------------------------'
 */
[_RAISE] = LAYOUT( \
  _______, _______, _______, _______, _______, _______,      _______, _______, _______, _______, _______, _______, \
  _______, _______, _______, _______, _______, _______,      _______, _______, _______, _______, _______, _______, \
  _______, _______, _______, _______, _______, _______,      _______, _______, _______, _______, _______, _______, \
  _______, _______, _______, _______, _______, _______,      _______, _______, _______, _______, _______, _______, \
  _______, _______, _______, _______, _______, _______,      _______, _______, _______, _______, _______, _______  \
),


/* Adjust
 * ,-----------------------------------------. ,-----------------------------------------.
 * |      |      |      |      |      |      | |      |      |      |      |      |      |
 * |------+------+------+------+------+------| |------+------+------+------+------+------|
 * |      |      |      |      |      |      | |      |      |      |      |      |      |
 * |------+------+------+------+------+------| |------+------+------+------+------+------|
 * |      |      |      |      |      |      | |      |      |      |      |      |      |
 * |------+------+------+------+------+------| |------+------+------+------+------+------|
 * |      |      |      |      |      |      | |      |      |      |      |      |      |
 * |------+------+------+------+------+------| |------+------+------+------+------+------|
 * |      |      |      |      |      |      | |      |      |      |      |      |      |
 * `-----------------------------------------' `-----------------------------------------'
 */
[_ADJUST] =  LAYOUT( \
  _______, _______, _______, _______, _______, _______,      _______, _______, _______, _______, _______,   RESET, \
  _______, _______, _______, _______, _______, _______,      _______, _______, _______, _______, _______, _______, \
  _______, _______, _______, _______, _______, _______,      _______, _______, _______, _______, _______, _______, \
  _______, _______, _______, _______, _______, _______,      _______, _______, _______, _______, _______, _______, \
  _______, _______, _______, _______, _______, _______,      _______, _______, _______, _______, _______, _______  \
)


};

#ifdef AUDIO_ENABLE
float tone_qwerty[][2]     = SONG(QWERTY_SOUND);
float tone_dvorak[][2]     = SONG(DVORAK_SOUND);
float tone_colemak[][2]    = SONG(COLEMAK_SOUND);
#endif

void persistent_default_layer_set(uint16_t default_layer) {
  eeconfig_update_default_layer(default_layer);
  default_layer_set(default_layer);
}

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
    case ADJUST:
      if (record->event.pressed) {
        layer_on(_ADJUST);
      } else {
        layer_off(_ADJUST);
      }
      return false;
      break;
  }
  return true;
}
