// Copyright 2023 QMK
// SPDX-License-Identifier: GPL-2.0-or-later

#include QMK_KEYBOARD_H

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
    [0] = LAYOUT_ortho_6x5(
        KC_ESCAPE,   KC_A,   KC_B,   KC_C, KC_DEL,
        KC_D,   KC_SLASH,   KC_PAST,   KC_PMNS, KC_G,
        KC_E,   KC_7,   KC_8,   KC_9, KC_H,
        KC_F,   KC_4,   KC_5,   KC_6, KC_PPLS,
        KC_LEFT_SHIFT,   KC_1,   KC_2,   KC_3, KC_ENTER,
        KC_SPACE,   KC_0,   KC_DOT,   KC_LEFT, KC_RIGHT
    )
};
