/* Copyright 2019 Naoto Takai
 *
 * This program is free software: you can redistribute it and/or modify
 * it under the terms of the GNU General Public License as published by
 * the Free Software Foundation, either version 2 of the License, or
 * (at your option) any later version.
 *
 * This program is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 *
 * You should have received a copy of the GNU General Public License
 * along with this program.  If not, see <http://www.gnu.org/licenses/>.
 */

#include QMK_KEYBOARD_H

enum layer_names {
    _BASE,
    _FN,
};

#define KC_FN MO(_FN)

#define MT_LGUI MT(MOD_LGUI, KC_LANG2)
#define MT_RGUI MT(MOD_RGUI, KC_LANG1)

// enum custom_keycodes {
//     M_LGUI = SAFE_RANGE,
//     M_RGUI
// };

// static bool lgui_pressed = false;
// static bool rgui_pressed = false;

// bool process_record_user(uint16_t keycode, keyrecord_t *record) {
//     switch(keycode) {
//       case M_LGUI:
//         if (record->event.pressed) {
//           lgui_pressed = true;
//           register_code(KC_LGUI);

//         } else {
//           if (lgui_pressed) {
//             register_code(KC_LANG2);
//             unregister_code(KC_LANG2);
//           }
//           lgui_pressed = false;
//           unregister_code(KC_LGUI);
//         }
//         return false;
//         break;
//       case M_RGUI:
//         if (record->event.pressed) {
//           rgui_pressed = true;
//           register_code(KC_RGUI);

//         } else {
//           if (rgui_pressed) {
//             register_code(KC_LANG1);
//             unregister_code(KC_LANG1);
//           }
//           rgui_pressed = false;
//           unregister_code(KC_RGUI);
//         }
//         return false;
//         break;
//       default:
//         if (record->event.pressed) {
//           // reset the flag
//           lgui_pressed = false;
//           rgui_pressed = false;
//         }
//         break;
//     }
        
//     return true;
// };

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
  [_BASE] = LAYOUT(
    KC_ESC, KC_1, KC_2, KC_3, KC_4, KC_5, KC_6, KC_7, KC_8, KC_9, KC_0, KC_MINUS, KC_EQUAL, KC_BSLASH, KC_GRAVE,
    KC_TAB, KC_Q, KC_W, KC_E, KC_R, KC_T, KC_Y, KC_U, KC_I, KC_O, KC_P, KC_LBRACKET, KC_RBRACKET, KC_BSPACE,
    KC_CAPS, KC_A, KC_S, KC_D, KC_F, KC_G, KC_H, KC_J, KC_K, KC_L, KC_SCOLON, KC_QUOTE, KC_ENTER,
    KC_LSHIFT,KC_Z, KC_X, KC_C, KC_V, KC_B, KC_N, KC_M, KC_COMMA, KC_DOT, KC_SLASH, KC_RSHIFT, KC_FN,
    KC_LALT, MT_LGUI, KC_SPACE, KC_SPACE, KC_SPACE, MT_RGUI, KC_RALT
  ),
  [_FN] = LAYOUT(
    _______, KC_F1, KC_F2, KC_F3, KC_F4, KC_F5, KC_F6, KC_F7, KC_F8, KC_F9, KC_F10, KC_F11, KC_F12, KC_INSERT, KC_DELETE,
    _______, _______, _______, _______, _______, _______, _______, _______, KC_PSCREEN, KC_SCROLLLOCK, KC_PAUSE, KC_UP, KC_RBRACKET, KC_BSPACE,
    KC_RCTRL, _______, _______, _______, _______, _______, _______, _______, KC_HOME, KC_PGUP, KC_LEFT, KC_RIGHT, KC_ENTER,
    _______, _______, _______, _______, _______, _______, _______, _______, KC_END, KC_PGDOWN, KC_DOWN, KC_RSHIFT, KC_FN,
    _______, _______, _______, _______, _______, KC_STOP, _______
  )
};
