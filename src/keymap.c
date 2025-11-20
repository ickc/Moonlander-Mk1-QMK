#include QMK_KEYBOARD_H
#include "version.h"
#define MOON_LED_LEVEL LED_LEVEL
#ifndef ZSA_SAFE_RANGE
#define ZSA_SAFE_RANGE SAFE_RANGE
#endif

enum custom_keycodes {
  RGB_SLD = ZSA_SAFE_RANGE,
  MAC_MISSION_CONTROL,
  MAC_SPOTLIGHT,
  MAC_SIRI,
  MAC_DND,
};




const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
  [0] = LAYOUT_moonlander(
    KC_GRAVE,       KC_1,           KC_2,           KC_3,           KC_4,           KC_5,           TO(2),                                          TO(2),          KC_6,           KC_7,           KC_8,           KC_9,           KC_0,           KC_MINUS,       
    KC_ESCAPE,      KC_Q,           KC_W,           KC_E,           KC_R,           KC_T,           KC_LEFT,                                        KC_UP,          KC_Y,           KC_U,           KC_I,           KC_O,           KC_P,           KC_EQUAL,       
    KC_LBRC,        KC_A,           KC_S,           KC_D,           KC_F,           KC_G,           KC_RIGHT,                                                                       KC_DOWN,        KC_H,           KC_J,           KC_K,           KC_L,           KC_SCLN,        KC_QUOTE,       
    KC_RBRC,        KC_Z,           KC_X,           KC_C,           KC_V,           KC_B,                                           KC_N,           KC_M,           KC_COMMA,       KC_DOT,         KC_SLASH,       KC_BSLS,        
    KC_CAPS,        KC_LEFT_CTRL,   KC_LEFT_ALT,    KC_LEFT_GUI,    KC_LEFT_SHIFT,  LT(4, KC_ENTER),                                                                                                LT(4, KC_DELETE),KC_RIGHT_SHIFT, KC_RIGHT_GUI,   KC_RIGHT_ALT,   KC_RIGHT_CTRL,  KC_CAPS,        
    LT(1, KC_SPACE),MT(MOD_LSFT, KC_TAB),LT(2, KC_GRAVE),                LT(2, KC_ENTER),MT(MOD_RSFT, KC_BSPC),LT(1, KC_SPACE)
  ),
  [1] = LAYOUT_moonlander(
    KC_MINUS,       KC_0,           KC_9,           KC_8,           KC_7,           KC_6,           TO(3),                                          TO(3),          KC_5,           KC_4,           KC_3,           KC_2,           KC_1,           KC_GRAVE,       
    KC_EQUAL,       KC_P,           KC_O,           KC_I,           KC_U,           KC_Y,           KC_UP,                                          KC_LEFT,        KC_T,           KC_R,           KC_E,           KC_W,           KC_Q,           KC_ESCAPE,      
    KC_QUOTE,       KC_SCLN,        KC_L,           KC_K,           KC_J,           KC_H,           KC_DOWN,                                                                        KC_RIGHT,       KC_G,           KC_F,           KC_D,           KC_S,           KC_A,           KC_LBRC,        
    KC_BSLS,        KC_SLASH,       KC_DOT,         KC_COMMA,       KC_M,           KC_N,                                           KC_B,           KC_V,           KC_C,           KC_X,           KC_Z,           KC_RBRC,        
    KC_TRANSPARENT, KC_RIGHT_CTRL,  KC_RIGHT_ALT,   KC_RIGHT_GUI,   KC_RIGHT_SHIFT, KC_DELETE,                                                                                                      KC_ENTER,       KC_LEFT_SHIFT,  KC_LEFT_GUI,    KC_LEFT_ALT,    KC_LEFT_CTRL,   KC_TRANSPARENT, 
    KC_TRANSPARENT, MT(MOD_RSFT, KC_BSPC),LT(3, KC_ENTER),                LT(3, KC_GRAVE),MT(MOD_LSFT, KC_TAB),KC_TRANSPARENT
  ),
  [2] = LAYOUT_moonlander(
    KC_F1,          KC_F2,          KC_F3,          KC_F4,          KC_F5,          KC_F6,          TO(0),                                          TO(0),          KC_F7,          KC_F8,          KC_F9,          KC_F10,         KC_F11,         KC_F12,         
    KC_BRIGHTNESS_DOWN,KC_BRIGHTNESS_UP,MAC_MISSION_CONTROL,MAC_SPOTLIGHT,  MAC_SIRI,       MAC_DND,        KC_PAGE_UP,                                     KC_HOME,        KC_MEDIA_PREV_TRACK,KC_MEDIA_PLAY_PAUSE,KC_MEDIA_NEXT_TRACK,KC_AUDIO_MUTE,  KC_AUDIO_VOL_DOWN,KC_AUDIO_VOL_UP,
    RGB_SPI,        RGB_HUI,        KC_NO,          KC_UP,          KC_NO,          RGB_SAI,        KC_PGDN,                                                                        KC_END,         RGB_VAI,        KC_MS_BTN1,     KC_MS_UP,       KC_MS_BTN2,     MOON_LED_LEVEL, AU_TOGG,        
    RGB_SPD,        RGB_HUD,        KC_LEFT,        KC_DOWN,        KC_RIGHT,       RGB_SAD,                                        RGB_VAD,        KC_MS_LEFT,     KC_MS_DOWN,     KC_MS_RIGHT,    MU_NEXT,        MU_TOGG,        
    KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, TOGGLE_LAYER_COLOR,                                                                                                RGB_MODE_FORWARD,KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, 
    MO(3),          RGB_TOG,        KC_TRANSPARENT,                 KC_TRANSPARENT, RGB_SLD,        MO(3)
  ),
  [3] = LAYOUT_moonlander(
    KC_F12,         KC_F11,         KC_F10,         KC_F9,          KC_F8,          KC_F7,          TO(0),                                          TO(0),          KC_F6,          KC_F5,          KC_F4,          KC_F3,          KC_F2,          KC_F1,          
    KC_AUDIO_VOL_UP,KC_AUDIO_VOL_DOWN,KC_AUDIO_MUTE,  KC_MEDIA_NEXT_TRACK,KC_MEDIA_PLAY_PAUSE,KC_MEDIA_PREV_TRACK,KC_HOME,                                        KC_PAGE_UP,     MAC_DND,        MAC_SIRI,       MAC_SPOTLIGHT,  MAC_MISSION_CONTROL,KC_BRIGHTNESS_UP,KC_BRIGHTNESS_DOWN,
    AU_TOGG,        MOON_LED_LEVEL, KC_MS_BTN2,     KC_MS_UP,       KC_MS_BTN1,     RGB_VAI,        KC_END,                                                                         KC_PGDN,        RGB_SAI,        KC_NO,          KC_UP,          KC_NO,          RGB_HUI,        RGB_SPI,        
    MU_TOGG,        MU_NEXT,        KC_MS_LEFT,     KC_MS_DOWN,     KC_MS_RIGHT,    RGB_VAD,                                        RGB_SAD,        KC_LEFT,        KC_DOWN,        KC_RIGHT,       RGB_HUD,        RGB_SPD,        
    KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, RGB_MODE_FORWARD,                                                                                                TOGGLE_LAYER_COLOR,KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, 
    KC_TRANSPARENT, RGB_SLD,        KC_TRANSPARENT,                 KC_TRANSPARENT, RGB_TOG,        KC_TRANSPARENT
  ),
  [4] = LAYOUT_moonlander(
    LSFT(KC_MINUS), LSFT(KC_0),     LSFT(KC_9),     LSFT(KC_8),     LSFT(KC_7),     LSFT(KC_6),     TO(3),                                          TO(3),          RSFT(KC_5),     RSFT(KC_4),     RSFT(KC_3),     RSFT(KC_2),     RSFT(KC_1),     RSFT(KC_GRAVE), 
    LSFT(KC_EQUAL), LSFT(KC_P),     LSFT(KC_O),     LSFT(KC_I),     LSFT(KC_U),     LSFT(KC_Y),     LSFT(KC_UP),                                    RSFT(KC_LEFT),  RSFT(KC_T),     RSFT(KC_R),     RSFT(KC_E),     RSFT(KC_W),     RSFT(KC_Q),     RSFT(KC_ESCAPE),
    LSFT(KC_QUOTE), LSFT(KC_SCLN),  LSFT(KC_L),     LSFT(KC_K),     LSFT(KC_J),     LSFT(KC_H),     LSFT(KC_DOWN),                                                                  RSFT(KC_RIGHT), RSFT(KC_G),     RSFT(KC_F),     RSFT(KC_D),     RSFT(KC_S),     RSFT(KC_A),     RSFT(KC_LBRC),  
    LSFT(KC_BSLS),  LSFT(KC_SLASH), LSFT(KC_DOT),   LSFT(KC_COMMA), LSFT(KC_M),     LSFT(KC_N),                                     RSFT(KC_B),     RSFT(KC_V),     RSFT(KC_C),     RSFT(KC_X),     RSFT(KC_Z),     RSFT(KC_RBRC),  
    KC_TRANSPARENT, KC_RIGHT_CTRL,  KC_RIGHT_ALT,   KC_RIGHT_GUI,   KC_RIGHT_SHIFT, KC_TRANSPARENT,                                                                                                 KC_TRANSPARENT, KC_LEFT_SHIFT,  KC_LEFT_GUI,    KC_LEFT_ALT,    KC_LEFT_CTRL,   KC_TRANSPARENT, 
    LSFT(KC_SPACE), LSFT(KC_BSPC),  LSFT(KC_ENTER),                 RSFT(KC_GRAVE), RSFT(KC_TAB),   RSFT(KC_SPACE)
  ),
};










bool process_record_user(uint16_t keycode, keyrecord_t *record) {
  switch (keycode) {
  case QK_MODS ... QK_MODS_MAX: 
    // Mouse keys with modifiers work inconsistently across operating systems, this makes sure that modifiers are always
    // applied to the mouse key that was pressed.
    if (IS_MOUSE_KEYCODE(QK_MODS_GET_BASIC_KEYCODE(keycode))) {
    if (record->event.pressed) {
        add_mods(QK_MODS_GET_MODS(keycode));
        send_keyboard_report();
        wait_ms(2);
        register_code(QK_MODS_GET_BASIC_KEYCODE(keycode));
        return false;
      } else {
        wait_ms(2);
        del_mods(QK_MODS_GET_MODS(keycode));
      }
    }
    break;
    case MAC_MISSION_CONTROL:
      HCS(0x29F);
    case MAC_SPOTLIGHT:
      HCS(0x221);
    case MAC_SIRI:
      HCS(0xCF);
    case MAC_DND:
      HSS(0x9B);

    case RGB_SLD:
        if (rawhid_state.rgb_control) {
            return false;
        }
        if (record->event.pressed) {
            rgblight_mode(1);
        }
        return false;
  }
  return true;
}

