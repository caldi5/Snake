#include "Tail.h"



Tail::Tail(int x, int y, int sizeX, int sizeY, sf::Color color) : SnakeSquare(x, y, sizeX, sizeY, color)
{
	this->color = sf::Color::White;
}


Tail::~Tail()
{
}

