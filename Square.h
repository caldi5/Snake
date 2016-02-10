#pragma once
#include <SFML/Graphics.hpp>

class Square
{
public:
	Square(int x = 0, int y = 0, int sizeX = 30, int sizeY = 30, sf::Color color = sf::Color::White);
	~Square();
	void Draw(sf::RenderWindow &Window);
protected:
	int x, y, sizeX, sizeY;
	sf::Color color;
	sf::Texture texture;
	sf::Sprite sprite;
private:
	sf::Uint8 *pixels;
};

