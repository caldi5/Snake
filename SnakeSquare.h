#pragma once
#include "Square.h"
class SnakeSquare : public Square
{
public:
	SnakeSquare(int x = 0, int y = 0, int sizeX = 30, int sizeY = 30, sf::Color = sf::Color::White);
	~SnakeSquare();
protected:
private:
};

