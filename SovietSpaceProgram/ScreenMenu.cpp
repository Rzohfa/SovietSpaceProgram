#include "ScreenMenu.h"
#include <iostream>


ScreenMenu::ScreenMenu(float x, float y)
{
	if (!background.loadFromFile("menu_background_2.png"))
	{
		std::cout << "ERROR:\tCan't load menu background\n";
	}
	width = x;
	height = y;
	scaleX = (float)(width / 320.0f);
	scaleY = (float)(height / 180.0f);
	addButton(14, 30, "New Game");
	addButton(14, 75, "Load Game");
	addButton(14, 120, "Exit");
}

void ScreenMenu::update()
{

}

void ScreenMenu::draw()
{
	/*
		30x112
		scale_text(2)
		14/30	14/75	14/120
	*/
	ctx::save();

	ctx::scale(scaleX, scaleY);
	ctx::drawImage(background, 0, 0, 320, 180, 0, 0, 320, 180);

	drawButtons();

	ctx::restore();
}

void ScreenMenu::onKeyPress()
{

}

void ScreenMenu::onKeyRelease()
{

}

void ScreenMenu::onMousePress(sf::RenderWindow* window, sf::Event event)
{
	if (event.mouseButton.x >= buttons[2].x * scaleX
		&& event.mouseButton.x <= (buttons[2].x + 320) * scaleX
		&& event.mouseButton.y >= buttons[2].y * scaleY
		&& event.mouseButton.y <= (buttons[2].y + 180) * scaleY)
			window->close();
}

void ScreenMenu::onMouseDrag()
{

}

void ScreenMenu::addButton(int x, int y, std::string content)
{
	button tmp;
	tmp.x = x;
	tmp.y = y;
	tmp.content = content;
	buttons.push_back(tmp);
}

void ScreenMenu::drawButtons()
{
	ctx::save();

	for (int i = 0; i < 3; i++)
	{
		ctx::fillStyle(60, 60, 60);
		ctx::fillRect(buttons[i].x, buttons[i].y, 112, 30);
		ctx::save();
		ctx::translate(
			((112 * 0.65) - (buttons[i].content.length() * 4)),
			(float)(10 + buttons[i].y));
		txt::printText(buttons[i].content);
		ctx::restore();
	}
	

	ctx::restore();
}