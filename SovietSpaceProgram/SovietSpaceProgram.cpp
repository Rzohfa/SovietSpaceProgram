#include <SFML/Graphics.hpp>
#include <SFML/Window.hpp>
#include <SFML/OpenGL.hpp>
#include "ctx.h"
#include <iostream>
#include "Building.h"
#include "ScreenManager.h"
#include "ScreenMenu.h"
#include "Screen.h"



int main()
{
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

	sf::Texture map_tex;
	if (!map_tex.loadFromFile("game_map.png"))
	{
		std::cout << "ERROR:\tCan't load map\n";
	}
	sf::Texture buildings_tex;
	//if (!Building::texture.loadFromFile("buildings_tex.png"))
	//{
	//	std::cout << "ERROR:\tCan't load buildings\n";
	//}

	ScreenMenu* menu = new ScreenMenu();
	ScreenManager* manager = new ScreenManager();
	manager->addScreen((Screen*)menu);


	sf::Event event;
	sf::Sprite map;
	map.setTexture(map_tex);
	float scale = 1.0f;
	map.setScale(scale, scale);
	int speed = 10;
	float scale_speed = 0.9f;

	float global_scale = 0.9f;
	int choice = 0;

	while (window.isOpen())
	{
		while (window.pollEvent(event))
		{
			//if (sf::Keyboard::isKeyPressed(sf::Keyboard::Num1))
			//	choice = 1;

			//if (sf::Keyboard::isKeyPressed(sf::Keyboard::Num2))
			//	choice = 2;

			//if (sf::Keyboard::isKeyPressed(sf::Keyboard::Num3))
			//	choice = 3;

			//if (sf::Keyboard::isKeyPressed(sf::Keyboard::Left) && event.type)
			//	map.move(speed / global_scale, 0);

			//if (sf::Keyboard::isKeyPressed(sf::Keyboard::Right))
			//	map.move(-speed / global_scale, 0);

			//if (sf::Keyboard::isKeyPressed(sf::Keyboard::Up))
			//	map.move(0, speed / global_scale);

			//if (sf::Keyboard::isKeyPressed(sf::Keyboard::Down))
			//	map.move(0, -speed / global_scale);

			//if (sf::Keyboard::isKeyPressed(sf::Keyboard::P))	// right down
			//{
			//	global_scale *= 1.0f / scale_speed;
			//}

			//if (sf::Keyboard::isKeyPressed(sf::Keyboard::L)) // left up
			//{
			//	global_scale *= scale_speed;
			//}

			if (sf::Keyboard::isKeyPressed(sf::Keyboard::Q))
				window.close();

			if (event.type == sf::Event::Closed)
				window.close();
		}
		
		window.clear();
		manager->displayScreen(0);
		//menu->draw();

		//map.setScale(global_scale, global_scale);
		
		//
		///*ctx::fillStyle(240, 128, 0);
		//ctx::fillRect(0, 0, 500, 500);
		//*/
		//ctx::save();
		//ctx::translate(window.getSize().x / 2, window.getSize().y / 2);
		//ctx::scale(global_scale, global_scale);
		//ctx::translate(map.getPosition().x, map.getPosition().y);
		//ctx::drawImage(
		//	map_tex, 
		//	0, 0, 
		//	map_tex.getSize().x, 
		//	map_tex.getSize().y, 
		//	-((float)map_tex.getSize().x / 2), 
		//	-((float)map_tex.getSize().y / 2), 
		//	map_tex.getSize().x, 
		//	map_tex.getSize().y);
		//ctx::drawImage(buildings_tex, 1, 0, 54, 33, 0, 0, 54, 33);
		//ctx::drawImage(buildings_tex, 58, 0, 47, 39, 60, 40, 47, 39);
		//ctx::drawImage(buildings_tex, 111, 7, 57, 27, 120, 100, 57, 27);
		//ctx::restore();

		//ctx::save();

		//ctx::fillStyle(255, 255, 255);
		//ctx::translate(window.getSize().x / 2, window.getSize().y / 2);
		//ctx::fillRect(-1, -1, 2, 2);

		//ctx::restore();

		window.display();
	}


	return 0;
}



