#pragma once
#include "Square.h"
class Food :
	public Square
{
public:
	Food(int x = 0, int y = 0, int sizeX = 30, int sizeY = 30, sf::Color = sf::Color::Red);
	~Food();
protected:
private:
};

