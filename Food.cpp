#include "Food.h"



Food::Food(int x, int y, int sizeX, int sizeY, sf::Color color) : Square(x, y, sizeX, sizeY, color)
{
	this->color = sf::Color::Green;
}


Food::~Food()
{
}
