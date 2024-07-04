// Based on KLOR

#include QMK_KEYBOARD_H

// Helper keys to go to different layers, these don't do anything else, just layer switch.
#define GO_L1 LT(1, XXXXXXX)
#define GO_L2 LT(2, XXXXXXX)
#define GO_L3 LT(3, XXXXXXX)

// Keymap array.
const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {

    /*       ┌─────────┬─────────┬─────────┬─────────┬─────────┐                    ┌─────────┬─────────┬─────────┬─────────┬─────────┐
             │    Q    │    W    │    E    │    R    │    T    │ ╭╮╭╮╭╮╭╮╭╮╭╮╭╮╭╮╭╮ │    Y    │    U    │    I    │    O    │    P    │
   ┌─────────┼─────────┼─────────┼─────────┼─────────┼─────────┤ │╰╯╰╯╰╯╰╯╰╯╰╯╰╯╰╯│ ├─────────┼─────────┼─────────┼─────────┼─────────┼─────────┐
   │   TAB   │    A    │ S + ALT │ D + SFT │ F + CTL │    G    ├─╯                ╰─┤    H    │ J + CTL │ K + SFT │ L + ALT │    ;    │    "    │
   ├─────────┼─────────┼─────────┼─────────┼─────────┼─────────┤╭────────╮╭────────╮├─────────┼─────────┼─────────┼─────────┼─────────┼─────────┤
   │ CAPSLCK │    Z    │    X    │    C    │    V    │    B    ││  MUTE  ││PLY/PSE ││    N    │    M    │    ,    │    .    │    /    │    _    │
   └─────────┴─────────┴─────────┼─────────┼─────────┼─────────┼╰────────╯╰────────╯┼─────────┼─────────┼─────────┼─────────┴─────────┴─────────┘
                                 │   DEL   │  GO L1  │  SPACE  │   ESC   ││   GUI   │  ENTER  │  GO L2  │ BSPACE  │
                                 └─────────┴─────────┴─────────┴─────────┘└─────────┴─────────┴─────────┴─────────┘ */
    [0] = LAYOUT_polydactyl(
              KC_Q,     KC_W,     KC_E,     KC_R,     KC_T,                          KC_Y,     KC_U,     KC_I,     KC_O,     KC_P,
    KC_TAB,   KC_A,     LALT_T(KC_S), LSFT_T(KC_D), LCTL_T(KC_F), KC_G,              KC_H,     RCTL_T(KC_J), RSFT_T(KC_K), LALT_T(KC_L), KC_SCLN, KC_QUOT,
    KC_CAPS,  KC_Z,     KC_X,     KC_C,     KC_V,     KC_B,     KC_MUTE,   KC_MPLY,  KC_N,     KC_M,     KC_COMM,  KC_DOT,   KC_SLSH,  S(KC_MINS),
                                  KC_DEL,   GO_L1,    KC_SPC,   KC_ESC,    KC_RGUI,  KC_ENT,   GO_L2,    KC_BSPC
    ),

    /*       ┌─────────┬─────────┬─────────┬─────────┬─────────┐                    ┌─────────┬─────────┬─────────┬─────────┬─────────┐
             │         │         │    ↑    │         │    {    │ ╭╮╭╮╭╮╭╮╭╮╭╮╭╮╭╮╭╮ │    }    │         │         │         │         │
   ┌─────────┼─────────┼─────────┼─────────┼─────────┼─────────┤ │╰╯╰╯╰╯╰╯╰╯╰╯╰╯╰╯│ ├─────────┼─────────┼─────────┼─────────┼─────────┼─────────┐
   │   HOME  │         │    ←    │    ↓    │    →    │    (    ├─╯                ╰─┤    )    │    =    │    -    │    +    │    \    │    '    │
   ├─────────┼─────────┼─────────┼─────────┼─────────┼─────────┤╭────────╮╭────────╮├─────────┼─────────┼─────────┼─────────┼─────────┼─────────┤
   │   END   │         │   PG↑   │  SAVE   │   PG↓   │    [    ││  MUTE  ││PLY/PSE ││    ]    │         │         │         │    |    │         │
   └─────────┴─────────┴─────────┼─────────┼─────────┼─────────┼╰────────╯╰────────╯┼─────────┼─────────┼─────────┼─────────┴─────────┴─────────┘
                                 │    ▼    │    ▼    │    ▼    │    ▼    ││    ▼    │    ▼    │  GO L3  │         │
                                 └─────────┴─────────┴─────────┴─────────┘└─────────┴─────────┴─────────┴─────────┘ */
    [1] = LAYOUT_polydactyl(
              XXXXXXX,  XXXXXXX,  KC_UP,    XXXXXXX,  KC_LCBR,                       KC_RCBR,  XXXXXXX,  XXXXXXX,  XXXXXXX,  XXXXXXX,
    KC_HOME,  XXXXXXX,  KC_LEFT,  KC_DOWN,  KC_RGHT,  KC_LPRN,                       KC_RPRN,  KC_EQL,   KC_MINS,  S(KC_EQL), KC_BSLS,   KC_DQT,
    KC_END,   XXXXXXX,  KC_PGUP,  C(KC_S),  KC_PGDN,  KC_LBRC,  KC_MUTE,   KC_MPLY,  KC_RBRC,  XXXXXXX,  XXXXXXX,  XXXXXXX,  S(KC_BSLS), XXXXXXX,
                                  _______,  _______,  _______,  _______,   _______,  _______,  GO_L3,    XXXXXXX
    ),
 
    /*       ┌─────────┬─────────┬─────────┬─────────┬─────────┐                    ┌─────────┬─────────┬─────────┬─────────┬─────────┐
             │    !    │    @    │    #    │    $    │    %    │ ╭╮╭╮╭╮╭╮╭╮╭╮╭╮╭╮╭╮ │    ^    │    &    │    *    │    (    │    )    │
   ┌─────────┼─────────┼─────────┼─────────┼─────────┼─────────┤ │╰╯╰╯╰╯╰╯╰╯╰╯╰╯╰╯│ ├─────────┼─────────┼─────────┼─────────┼─────────┼─────────┐
   │    `    │    1    │    2    │    3    │    4    │    5    ├─╯                ╰─┤    6    │    7    │    8    │    9    │    0    │    ~    │
   ├─────────┼─────────┼─────────┼─────────┼─────────┼─────────┤╭────────╮╭────────╮├─────────┼─────────┼─────────┼─────────┼─────────┼─────────┤
   │         │         │         │ # NON-US│         │         ││  MUTE  ││PLY/PSE ││         │         │         │         │         │ ~ NON-US│
   └─────────┴─────────┴─────────┼─────────┼─────────┼─────────┼╰────────╯╰────────╯┼─────────┼─────────┼─────────┼─────────┴─────────┴─────────┘
                                 │         │  GO L3  │    ▼    │    ▼    ││    ▼    │    ▼    │    ▼    │    ▼    │
                                 └─────────┴─────────┴─────────┴─────────┘└─────────┴─────────┴─────────┴─────────┘ */
    [2] = LAYOUT_polydactyl(
              KC_EXLM,  KC_AT,    KC_HASH,  KC_DLR,   KC_PERC,                       KC_CIRC,  KC_AMPR,  KC_PAST,  KC_LPRN,  KC_RPRN,
    KC_GRAVE, KC_1,     KC_2,     KC_3,     KC_4,     KC_5,                          KC_6,     KC_7,     KC_8,     KC_9,     KC_0,     S(KC_GRAVE),
    XXXXXXX,  XXXXXXX,  XXXXXXX,  KC_NUHS,  XXXXXXX,  XXXXXXX,  KC_MUTE,   KC_MPLY,  XXXXXXX,  XXXXXXX,  XXXXXXX,  XXXXXXX,  XXXXXXX,  S(KC_NUHS),
                                  _______,  GO_L3,    _______,  _______,   _______,  _______,  _______,  _______
    ),

    /*       ┌─────────┬─────────┬─────────┬─────────┬─────────┐                    ┌─────────┬─────────┬─────────┬─────────┬─────────┐
             │   F1    │   F2    │   F3    │   F4    │   F5    │ ╭╮╭╮╭╮╭╮╭╮╭╮╭╮╭╮╭╮ │   F6    │   F7    │   F8    │   F9    │   F10   │
   ┌─────────┼─────────┼─────────┼─────────┼─────────┼─────────┤ │╰╯╰╯╰╯╰╯╰╯╰╯╰╯╰╯│ ├─────────┼─────────┼─────────┼─────────┼─────────┼─────────┐
   │  RESET  │ NUMLOCK │         │         │   F11   │   F12   ├─╯                ╰─┤   F13   │   F14   │         │         │         │         │
   ├─────────┼─────────┼─────────┼─────────┼─────────┼─────────┤╭────────╮╭────────╮├─────────┼─────────┼─────────┼─────────┼─────────┼─────────┤
   │  DEBUG  │         │         │         │         │         ││  MUTE  ││PLY/PSE ││         │         │         │         │         │         │
   └─────────┴─────────┴─────────┼─────────┼─────────┼─────────┼╰────────╯╰────────╯┼─────────┼─────────┼─────────┼─────────┴─────────┴─────────┘
                                 │    ▼    │    ▼    │    ▼    │    ▼    ││    ▼    │    ▼    │    ▼    │    ▼    │
                                 └─────────┴─────────┴─────────┴─────────┘└─────────┴─────────┴─────────┴─────────┘ */
    [3] = LAYOUT_polydactyl(
              KC_F1,    KC_F2,    KC_F3,    KC_F4,    KC_F5,                         KC_F6,    KC_F7,    KC_F8,    KC_F9,    KC_F10,
    QK_BOOT,  KC_NUM,   XXXXXXX,  XXXXXXX,  KC_F11,   KC_F12,                        KC_F13,   KC_F14,   XXXXXXX,  XXXXXXX,  XXXXXXX,  XXXXXXX,
    DB_TOGG,  XXXXXXX,  XXXXXXX,  XXXXXXX,  XXXXXXX,  XXXXXXX,  KC_MUTE,   KC_MPLY,  XXXXXXX,  XXXXXXX,  XXXXXXX,  XXXXXXX,  XXXXXXX,  XXXXXXX,
                                  _______,  _______,  _______,  _______,   _______,  _______,  _______,  _______
    )
};

// Encoder settings.
bool encoder_update_user(uint8_t index, bool clockwise) {
    // Left encoder
    if (index == 0) {
        // History Scrubbing
        if (clockwise) {
            tap_code16(C(KC_Z)); // Control + Z
        } else {
            tap_code16(C(KC_Y)); // Control + Y
        }

    // Right encoder
    } else if (index == 1) {
        if (clockwise) {
            tap_code(KC_WH_D); // Mouse Wheel Down
        } else {
            tap_code(KC_WH_U); // Mouse Wheel Up
        }
    }

    return true;
}

// Stop encoers from updating volume (default behaviour).
bool encoder_update_kb(uint8_t index, bool clockwise) {
    if (!encoder_update_user(index, clockwise)) { return false; }
    return true;
}
