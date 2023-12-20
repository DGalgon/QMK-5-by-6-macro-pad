# handwired/swmacro

![handwired/swmacro](imgur.com image replace me!)

*A short description of the keyboard/project*

* Hardware Supported: *Arduino Pro Micro*
* Hardware Availability: *https://www.amazon.com/gp/product/B09J4MP1QK/ref=ppx_yo_dt_b_asin_title_o06_s01?ie=UTF8&th=1*
* https://www.amazon.com/gp/product/B06XB1R2NK/ref=ppx_yo_dt_b_asin_title_o06_s00?ie=UTF8&psc=1*
* 30x Keyboard Switches of your choosing*

Make example for this keyboard (after setting up your build environment):

Fill in "manufacturer", "Keyboard_Name", and "maintainer"
Make sure you have wired the columns and rows to the right matrix on your ardiuono (see note above matrix pins)
To change what you want your keys to do go to the keymap, and fillout the ortho layout following this page "https://github.com/qmk/qmk_firmware/blob/master/docs/keycodes.md"

Flashing example for this keyboard:
Flash using QMK configurator

See the [build environment setup](https://docs.qmk.fm/#/getting_started_build_tools) and the [make instructions](https://docs.qmk.fm/#/getting_started_make_guide) for more information. Brand new to QMK? Start with our [Complete Newbs Guide](https://docs.qmk.fm/#/newbs).

## Bootloader

Enter the bootloader in 3 ways:

* **Bootmagic reset**: Hold down the key at (0,0) in the matrix (usually the top left key or Escape) and plug in the keyboard
* **Physical reset button**: Briefly press the button on the back of the PCB - some may have pads you must short instead
* **Keycode in layout**: Press the key mapped to `QK_BOOT` if it is available


##Update the manufacturer and maintainer values in info.json before using!
