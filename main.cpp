#include <iostream>
#include <SFML/Graphics.hpp>
#include "Square.h"
#include "Snake.h"

int main()
{
	sf::RenderWindow Window;
	Window.create(sf::VideoMode(900, 900), "Snake", sf::Style::Default);
	Window.setKeyRepeatEnabled(false);
	Snake *snake = new Snake();

	while (Window.isOpen())
	{
		sf::Event Event;

		while (Window.pollEvent(Event))
		{
			switch (Event.type)
			{
			case(sf::Event::Closed):
					Window.close();
				break;
			}
		}

		Window.clear();
		snake->Draw(Window);
		Window.display();
	}

	system("pause");
	return 0;
}