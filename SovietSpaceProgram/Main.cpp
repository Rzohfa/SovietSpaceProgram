#include "Main.hpp"
#include "cfx.hpp"

int main()
{
	sf::RenderWindow window(sf::VideoMode(1920, 1080), "Soviet Space Program", sf::Style::Fullscreen);
	window.setVerticalSyncEnabled(true);

	sf::Texture map_tex;
	if(!map_tex.loadFromFile("content/game_map.png"))
	{
		std::cout<<"Can't load map\n";
	}

	sf::Event event;
	sf::Sprite map;
	map.setTexture(map_tex);
	float scale = 1.0f;
	map.setScale(scale, scale);
	int speed = 10;
	float scale_speed = 0.9f;

	float global_scale = 0.9f;

	while (window.isOpen())
	{
		while (window.pollEvent(event))
		{
			float offset_x = window.getSize().x * global_scale;
			float offset_y = window.getSize().y * global_scale;

			if(sf::Keyboard::isKeyPressed(sf::Keyboard::Left) && event.type)
				map.move(speed, 0);

			if(sf::Keyboard::isKeyPressed(sf::Keyboard::Right))
				map.move(-speed, 0);

			if(sf::Keyboard::isKeyPressed(sf::Keyboard::Up))
				map.move(0, speed);

			if(sf::Keyboard::isKeyPressed(sf::Keyboard::Down))
				map.move(0, -speed);

			if(sf::Keyboard::isKeyPressed(sf::Keyboard::P))	// right down
			{
				global_scale *= 1.0f/scale_speed;
				float new_offset_x = offset_x*(1.0f/scale_speed);
				float new_offset_y = offset_y*(1.0f/scale_speed);
				map.move((offset_x-new_offset_x)/2*scale_speed, (offset_y-new_offset_y)/2*scale_speed);
				std::cout<<"\n\nDUZE\nX : "<<(offset_x-new_offset_x)/2;
				std::cout<<"\nY : "<<(offset_y-new_offset_y)/2;
			}

			if(sf::Keyboard::isKeyPressed(sf::Keyboard::L)) // left up
			{
				global_scale *= scale_speed;
				float new_offset_x = offset_x*scale_speed;
				float new_offset_y = offset_y*scale_speed;
				map.move((offset_x-new_offset_x)/2*scale_speed, (offset_y-new_offset_y)/2*scale_speed);
				std::cout<<"\n\nMALE\nX : "<<(offset_x-new_offset_x)/2;
				std::cout<<"\nY : "<<(offset_y-new_offset_y)/2;
			}

			if(sf::Keyboard::isKeyPressed(sf::Keyboard::Q))
				window.close();

			if (event.type == sf::Event::Closed)
				window.close();
		}


		map.setScale(global_scale, global_scale);
		window.clear();
		window.draw(map);
		window.display();
	}

	return 0;
}



