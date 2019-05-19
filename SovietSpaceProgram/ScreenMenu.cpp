#include "ScreenMenu.h"
#include <iostream>


ScreenMenu::ScreenMenu()
{
	if (!background.loadFromFile("menu_background.png"))
	{
		std::cout << "ERROR:\tCan't load menu background\n";
	}
}

void ScreenMenu::update()
{

}

void ScreenMenu::draw()
{
	ctx::save();

	ctx::scale(width / 320, height / 180);
	ctx::drawImage(background, 0, 0, 320, 180, 0, 0, 320, 180);

	ctx::restore();
}

void ScreenMenu::onKeyPress()
{

}

void ScreenMenu::onKeyRelease()
{

}

void ScreenMenu::onMousePress()
{

}

void ScreenMenu::onMouseDrag()
{

}
