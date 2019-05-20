#include "ScreenPause.h"
#include <iostream>
#include <Windows.h>


ScreenPause::ScreenPause(float x, float y)
{
	if (!background.loadFromFile("menu_background_2.png"))
	{
		std::cout << "ERROR:\tCan't load menu background\n";
	}
	width = x;
	height = y;
	scaleX = (float)(width / 320.0f);
	scaleY = (float)(height / 180.0f);
	addButton(14, 30, "Resume");
	addButton(14, 75, "Save Game");
	addButton(14, 120, "Exit to menu");
}

void ScreenPause::update()
{

}

void ScreenPause::draw()
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

void ScreenPause::onKeyPress()
{

}

void ScreenPause::onKeyRelease()
{

}

void ScreenPause::onMousePress(sf::RenderWindow * window, sf::Event event)
{
	if (event.mouseButton.x >= buttons[2].x * scaleX
		&& event.mouseButton.x <= (buttons[2].x + 320) * scaleX
		&& event.mouseButton.y >= buttons[2].y * scaleY
		&& event.mouseButton.y <= (buttons[2].y + 180) * scaleY)
	{
		Sleep(1000);
		manager->update(1);
	}
	else if (event.mouseButton.x >= buttons[0].x * scaleX
		&& event.mouseButton.x <= (buttons[0].x + 320) * scaleX
		&& event.mouseButton.y >= buttons[0].y * scaleY
		&& event.mouseButton.y <= (buttons[0].y + 180) * scaleY)
		manager->update(0);
}

void ScreenPause::onMouseDrag()
{

}

void ScreenPause::addButton(int x, int y, std::string content)
{
	button tmp;
	tmp.x = x;
	tmp.y = y;
	tmp.content = content;
	buttons.push_back(tmp);
}

void ScreenPause::drawButtons()
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

void ScreenPause::setManager(ScreenManager * manager)
{
	this->manager = manager;
}

void ScreenPause::changeScreen(int choice)
{
	manager->update(choice);
}