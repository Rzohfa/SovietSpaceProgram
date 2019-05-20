#include "ScreenManager.h"


ScreenManager::ScreenManager(Screen* screen)
{
	addScreen(screen);
	current_screen = screens[0];
}

void ScreenManager::addScreen(Screen* screen)
{
	screens.push_back(screen);
}

void ScreenManager::displayScreen(int which)
{
	current_screen = screens[0];
	current_screen->draw();
}

void ScreenManager::update()
{
	current_screen->draw();
}

void ScreenManager::draw()
{
	current_screen->draw();
}

void ScreenManager::onKeyPress()
{
	
}

void ScreenManager::onKeyRelease()
{

}

void ScreenManager::onMousePress(sf::RenderWindow* window, sf::Event event)
{
	current_screen->onMousePress(window, event);
}

void ScreenManager::onMouseDrag()
{

}
