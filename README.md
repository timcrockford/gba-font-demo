### GBA Font Engine v0.1
This project was an old tech demo I wrote way back in 2003. It was designed to print variable width text onto the screen on a GameBoy Advance. As I've recently rediscovered the code, I've added it here to GitHub on the off chance someone finds it useful. The original read me file content is included below.

> This project came about mainly based on the thread "Advanced Text System" (http://forum.gbadev.org/viewtopic.php?t=1764) on the GBADev forums. I've seen some text demos and source, and most utilise simple 8x8 pixel background methods. (Not that there is anything wrong with this method of course!)

> Basically what this engine does is encapsulate all the needed functionality to print text to the screen. The font included with the demo is the freely available Vera Bitstream, however you can extend this to use your own fonts.

#### Included Files
* text.h - The header file. Include this in your file where you want to display text.
* text.cpp - The actual code, you need to compile this along with your other sources.
* vera.h - This is the Vera bitstream font. Include this file (or another one if you've written your own font) in your code.
* vera.bmp - This file is the source bitmap used for the font. It was converted using gfx2gba
* fonttest.cpp - An example of the code in action.
* gba.h - This is a wrapper used in my code.
* registers.h - Register definitions
* types.h - Type definitions (u8, u16, etc)

#### Other Information
The character set used is the standard ASCII character set from the space character thru to the tilde. See the bitmap on how to organise your font.

Most of the code is documented, and should be straightforward. If not, play around with it, see what you think. Any suggestions for improvement will be kindly accepted.