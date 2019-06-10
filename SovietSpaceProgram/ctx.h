#pragma once

#include <SFML/Graphics.hpp>
#include <SFML/OpenGL.hpp>

namespace ctx 
{
	void fillStyle(float, float, float);
	void translate(float, float);
	void fillRect(float, float, float, float);
	void drawImage(sf::Texture&, float, float, float, float, float, float, float, float);
	void save();
	void restore();
	void rotate(float);
	void scale(float, float); 
	struct Pixel
	{ 
		GLubyte red, green, blue; 
	};
	Pixel getPixel(int x, int y);
}