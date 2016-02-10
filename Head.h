#pragma once
#include "SnakeSquare.h"

class Head : public SnakeSquare
{
public:
	Head(int x = 0, int y = 0, int sizeX = 30, int sizeY = 30, sf::Color = sf::Color::Red);
	~Head();
protected:
private:

};

