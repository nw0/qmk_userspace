/* Copyright 2022 @ Keychron (https://www.keychron.com)
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

// clang-format off

enum layers {
    NW0_BASE,  // "MAC" toggle
    WIN_BASE,  // "WIN" toggle
    FN1,
    FN2,
    _FN3
};

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
    [NW0_BASE] = LAYOUT_ansi_61(
        QK_GESC, KC_1,     KC_2,    KC_3,    KC_4,    KC_5,    KC_6,    KC_7,    KC_8,    KC_9,    KC_0,     KC_LBRC,  KC_RBRC,  KC_BSPC,
        KC_TAB,  KC_QUOT,  KC_COMM, KC_DOT,  KC_P,    KC_Y,    KC_F,    KC_G,    KC_C,    KC_R,    KC_L,     KC_SLSH,  KC_EQL,   KC_BSLS,
        KC_LCTL, KC_A,     KC_O,    KC_E,    KC_U,    KC_I,    KC_D,    KC_H,    KC_T,    KC_N,    KC_S,     KC_MINS,            KC_ENT,
        KC_LSFT,           KC_SCLN, KC_Q,    KC_J,    KC_K,    KC_X,    KC_B,    KC_M,    KC_W,    KC_V,     KC_Z,               KC_RSFT,
        MO(FN1), KC_LWIN,  KC_LALT,                            KC_SPC,                             MO(FN2),  KC_RALT,  KC_RWIN,  KC_RCTL),

    [WIN_BASE] = LAYOUT_ansi_61(
        KC_ESC,  KC_1,     KC_2,    KC_3,    KC_4,    KC_5,    KC_6,    KC_7,    KC_8,    KC_9,    KC_0,     KC_MINS,  KC_EQL,   KC_BSPC,
        KC_TAB,  KC_Q,     KC_W,    KC_E,    KC_R,    KC_T,    KC_Y,    KC_U,    KC_I,    KC_O,    KC_P,     KC_LBRC,  KC_RBRC,  KC_BSLS,
        KC_CAPS, KC_A,     KC_S,    KC_D,    KC_F,    KC_G,    KC_H,    KC_J,    KC_K,    KC_L,    KC_SCLN,  KC_QUOT,            KC_ENT,
        KC_LSFT,           KC_Z,    KC_X,    KC_C,    KC_V,    KC_B,    KC_N,    KC_M,    KC_COMM, KC_DOT,   KC_SLSH,            KC_RSFT,
        KC_LCTL, KC_LGUI,  KC_LALT,                            KC_SPC,                             KC_RALT,  MO(_FN3), MO(_FN3), KC_RCTL),

    [FN1] = LAYOUT_ansi_61(
        KC_GRV,  KC_F1,    KC_F2,   KC_F3,   KC_F4,   KC_F5,   KC_F6,   KC_F7,   KC_F8,   KC_F9,   KC_F10,   KC_F11,   KC_F12,   _______,
        _______, _______,  _______, _______, _______, _______, _______, _______, _______, _______, KC_HOME,  KC_PGUP,  KC_PGDN,  KC_END,
        _______, _______,  _______, _______, _______, _______, KC_LEFT, KC_DOWN, KC_UP,   KC_RIGHT,KC_HOME,  KC_END,             _______,
        _______,           _______, _______, _______, _______, _______, _______, _______, _______, _______,  _______,            _______,
        _______, _______,  _______,                            _______,                            _______,  _______,  _______,  _______),

    [FN2] = LAYOUT_ansi_61(
        KC_GRV,  KC_F1,    KC_F2,   KC_F3,   KC_F4,   KC_F5,   KC_F6,   KC_F7,   KC_F8,   KC_F9,   KC_F10,   KC_F11,   KC_F12,   KC_DEL,
        _______, _______,  _______, _______, _______, _______, _______, _______, _______, _______, KC_HOME,  KC_PGUP,  KC_PGDN,  KC_END,
        _______, _______,  _______, _______, _______, _______, KC_LEFT, KC_DOWN, KC_UP,   KC_RIGHT,KC_HOME,  KC_END,             KC_PSCR,
        _______,           _______, _______, _______, _______, _______, _______, _______, _______, _______,  _______,            _______,
        _______, _______,  _______,                            _______,                            _______,  _______,  _______,  _______),

    [_FN3] = LAYOUT_ansi_61(
        KC_TILD, KC_F1,    KC_F2,   KC_F3,   KC_F4,   KC_F5,   KC_F6,   KC_F7,   KC_F8,   KC_F9,   KC_F10,   KC_F11,   KC_F12,   _______,
        RM_TOGG, RM_NEXT,  RM_VALU, RM_HUEU, RM_SATU, RM_SPDU, _______, _______, _______, _______, _______,  _______,  _______,  _______,
        _______, RM_PREV,  RM_VALD, RM_HUED, RM_SATD, RM_SPDD, _______, _______, _______, _______, _______,  _______,            _______,
        _______,           _______, _______, _______, _______, _______, _______, _______, _______, _______,  _______,            _______,
        _______, _______,  _______,                            _______,                            _______,  _______,  _______,  _______)
};

// clang-format on
