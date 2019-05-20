#include "Text.h"

namespace txt
{
	
	void printText(std::string text)
	{
		sf::Texture text_texture;
		sign to_print;
		text_texture.loadFromFile("ascii.png");
		ctx::save();

		ctx::scale(2, 2);

		for (int i = 0; i < text.length(); i++)
		{
			to_print = findChar((int)text[i]);
			
			ctx::drawImage(text_texture, to_print.column * 4, (to_print.row) * 6, 4, 5, i*4, 0, 4, 5);
		}

		ctx::restore();
	}

	sign findChar(int character) 
	{
		sign ret;
		ret.column = character % 16;
		ret.row = (character - ret.column) / 16;
		return ret;
	}
}