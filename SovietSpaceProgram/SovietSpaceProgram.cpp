#include <SFML/Graphics.hpp>
#include <SFML/Window.hpp>
#include <SFML/OpenGL.hpp>
#include "ctx.h"
#include <iostream>
#include "Building.h"
#include "ScreenManager.h"
#include "ScreenMenu.h"
#include "Screen.h"
#include "ScreenGame.h"
#include "ScreenPause.h"
#include "helper.h"


int main()
{
	// Game window configuration
	sf::RenderWindow window(
		sf::VideoMode(
			sf::VideoMode::getDesktopMode().width, 
			sf::VideoMode::getDesktopMode().height), 
		"Soviet Space Program", 
		sf::Style::Fullscreen);
	window.setVerticalSyncEnabled(true);
	
	// CTX & OGL configuration
	glMatrixMode(GL_PROJECTION);
	glLoadIdentity();
	glOrtho(0.0, sf::VideoMode::getDesktopMode().width, sf::VideoMode::getDesktopMode().height, 0.0, -1.0, 1.0);

	glMatrixMode(GL_MODELVIEW);
	glLoadIdentity();

	glEnable(GL_BLEND);
	glBlendFunc(GL_SRC_ALPHA, GL_ONE_MINUS_SRC_ALPHA);
	glClearColor(1.f, 1.f, 1.f, 1.f);
	// End of configuration

	// Screen initialization
	ScreenMenu* menu = new ScreenMenu((float)window.getSize().x, (float)window.getSize().y);
	ScreenGame* game = new ScreenGame("game_map.png", window.getSize().x, window.getSize().y);
	ScreenPause* pause = new ScreenPause((float)window.getSize().x, (float)window.getSize().y);
	ScreenManager* manager = new ScreenManager((Screen*)game);
	
	manager->addScreen((Screen*)menu);
	manager->addScreen((Screen*)pause);
	manager->update(1);

	menu->setManager(manager);
	game->setManager(manager);
	pause->setManager(manager);

	// Initialize game helper
	game::initGame(&window);
	game_time::setScreenManager(manager);
	game::pauseGame();

	// Event initialization
	sf::Event event;
	
	// Game loop start
	while (window.isOpen())
	{
		while (window.pollEvent(event))
		{
			switch (event.type)
			{
			case sf::Event::Closed:
				window.close();
				break;

			case sf::Event::KeyPressed:
				game::pressKey(event.key.code);
				manager->onKeyPress();
				break;

			case sf::Event::KeyReleased:
				game::releaseKey(event.key.code);
				manager->onKeyPress();
				break;

			case sf::Event::MouseButtonPressed:
				if (!game::isClicked())
					game::pressMouse(
						event.mouseButton.button,
						event.mouseButton.x,
						event.mouseButton.y);
				manager->onMousePress();
				break;

			case sf::Event::MouseButtonReleased:
				if (game::isClicked())
					game::releaseMouse();
				manager->onMousePress();
				break;


			}	// END SWITCH
								
		}
		
		// Rendering & displaying screen
		window.clear();
		manager->displayScreen();
		
		window.display();
	}

	system("pause >nul");
	return 0;
}