# simpleklor

Original projects:

- https://github.com/GEIGEIGEIST/KLOR
- https://github.com/sadekbaroudi/KLOR

Some Notes:

- Don't bother with LED. I lost a board this way and soldering them is a massive pain in the ass.
- Don't just solder the microcontroller to the board, use headers, some coolones I found:
    - TODO: Add some links.

[Cool ideas for using rotary encoders](https://docs.splitkb.com/hc/en-us/articles/360010513760-How-can-I-use-a-rotary-encoder)

To practice typing I found two websites useful. First is [focused on improvement](https://www.keybr.com/) second you [type out book](https://www.typelit.io/)

## Clone the repo

Repository is setup in a way that it can be directly copied into the `QMK` directory. To achieve this follow the steps:

1. [Setup QMK on your machine.](https://docs.qmk.fm/newbs_getting_started)
2. Clone this repo into `qmk_firmware/keyboards/`.
    - `cd qmk_firmware/keyboards/`
    - `git submodule add https://github.com/k-wozniak/SimpleKlor.git` simpleklor

This allows to make changes and not worry about stuff.

## More Info

![simpleklor](imgur.com image replace me!)

*A short description of the keyboard/project*

* Keyboard Maintainer: [Kamil Wozniak](https://github.com/k-wozniak)
* Hardware Supported: *The PCBs, controllers supported*
* Hardware Availability: *Links to where you can find this hardware*

Make example for this keyboard (after setting up your build environment):

    make simpleklor:default

Flashing example for this keyboard:

    make simpleklor:default:flash

See the [build environment setup](https://docs.qmk.fm/#/getting_started_build_tools) and the [make instructions](https://docs.qmk.fm/#/getting_started_make_guide) for more information. Brand new to QMK? Start with our [Complete Newbs Guide](https://docs.qmk.fm/#/newbs).

## Bootloader

Enter the bootloader in 3 ways:

* **Bootmagic reset**: Hold down the key at (0,0) in the matrix (usually the top left key or Escape) and plug in the keyboard
* **Physical reset button**: Briefly press the button on the back of the PCB - some may have pads you must short instead
* **Keycode in layout**: Press the key mapped to `QK_BOOT` if it is available


## LAYOUTS
