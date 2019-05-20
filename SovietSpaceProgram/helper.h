#pragma once

#include <iostream>
#include <SFML/Graphics.hpp>

namespace game
{
	struct Click
	{
		bool clicked = false;
		int button = -1;
		int x = -1;
		int y = -1;
	};

	void initKeyboard();
	void pressKey(int);
	void releaseKey(int);
	bool getKey(int);
	void pressMouse(int, int, int);
	void releaseMouse();
	bool isClicked();
	int getX();
	int getY();
	int getMouseKey();
	void closeWindow();
	void setWindow(sf::RenderWindow*);
}



















/////////	NOTEPAD		///////////
//		WARNING: LOTS OF OBSOLETE CODE LEFT 'JUST IN CASE'

//struct MouseClick
//{
//	bool clicked = false;
//	int left = 0;
//	int x = 0;
//	int y = 0;
//};

/////////////////////////////////////////////\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\

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

//if (sf::Keyboard::isKeyPressed(sf::Keyboard::B)) {
//	std::cout << "\tB\n";
//	building = true;
//}

//if (!building && sf::Keyboard::isKeyPressed(sf::Keyboard::Num1))
//	manager->update(0);
//
//if (!building && sf::Keyboard::isKeyPressed(sf::Keyboard::Num2))
//	manager->update(1);
//
//if (!building && sf::Keyboard::isKeyPressed(sf::Keyboard::Num3))
//	manager->update(2);
//
//if (sf::Keyboard::isKeyPressed(sf::Keyboard::Escape))
//	manager->update(2);

//if (building && sf::Keyboard::isKeyPressed(sf::Keyboard::Num1)) {
//	std::cout << "\tB1\n";
//	chosen = 0;
//}
//	
//
//if (building && sf::Keyboard::isKeyPressed(sf::Keyboard::Num2))
//	chosen = 1;
//
//if (building && sf::Keyboard::isKeyPressed(sf::Keyboard::Num3))
//	chosen = 2;
//
//if (building && chosen != -1 && sf::Event::MouseButtonPressed)
//{
//	game->addBuilding(chosen, event.mouseButton.x, event.mouseButton.y);
//	chosen = -1;
//	building = false;
//	std::cout << "\tZbudowane\n";
//	std::cout << event.mouseButton.x << std::endl << event.mouseButton.y << std::endl;
//}

//if (!building && sf::Event::MouseButtonPressed)
//	manager->onMousePress(&window, event);
//
//if (sf::Keyboard::isKeyPressed(sf::Keyboard::Q))
//	window.close();
//
//if (event.type == sf::Event::MouseButtonPressed)
//{
//	click.clicked = true;
//	click.left = event.mouseButton.button;
//	click.x = event.mouseButton.x;
//	click.y = event.mouseButton.y;
//	//std::cout << "code:\t" << event.mouseButton.button << "\nx:\t" << event.mouseButton.x << "\ny:\t" << event.mouseButton.y << "\n\n";
//}
//
//if (event.type == sf::Event::MouseButtonReleased)
//{
//	click.clicked = false;
//	click.left = -1;
//	click.x = -1;
//	click.y = -1;
//}	