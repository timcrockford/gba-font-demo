#include "gba.h"
#include "text.h"
#include "vera.h"

int main()
{
	*REG_DISPCNT = 0x0140;

	textEngine* text1 = new textEngine(font_vera, font_vera_palette, font_vera_height, font_vera_widths);

	text1->print("Font Engine Demo v0.1", 8, 4);

	text1->print("Written by", 8, 22);
	text1->print("Tim Crockford", 8, 40);

	text1->print("Font Information:", 8, 58);
	text1->print("Bitstream Vera Sans", 8, 76);

	text1->print("Contact Details:", 8, 108);
	text1->print("raven@shakari.myvnc.com", 8, 126);
	text1->print("http://shakari.myvnc.com/", 8, 144);

	delete text1;

	return 0;
}
