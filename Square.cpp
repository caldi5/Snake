#include "Square.h"



Square::Square(int x, int y, int sizeX, int sizeY, sf::Color color)
{
	this->x = x;
	this->y = y;
	this->sizeX = sizeX;
	this->sizeY = sizeY;

	texture.create(sizeX, sizeY);
	pixels = new sf::Uint8[sizeX * sizeY * 4];
	texture.update(pixels);

	sprite.setTexture(texture);
	sprite.setPosition(x, y);
	sprite.setColor(color);
}


Square::~Square()
{
	delete pixels;
}

void Square::Draw(sf::RenderWindow &Window)
{
	Window.draw(sprite);
}


