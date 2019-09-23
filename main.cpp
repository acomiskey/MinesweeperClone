#include <SFML/Graphics.hpp>
#include <string>
#include <vector>
#include "Tile.h"
#include "Controller.h"
using namespace sf;
using namespace std;

int main()
{
	sf::RenderWindow window(sf::VideoMode(800, 576), "Minesweeper");

	Controller gamemaster;


	while (window.isOpen())
	{
		sf::Event event;
		while (window.pollEvent(event))
		{
			if (event.type == sf::Event::Closed)
				window.close();

			window.clear(Color(255, 255, 255, 255));

			gamemaster.update(window);

			window.display();
		}

		
	}

	return 0;
}