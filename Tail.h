#pragma once
#include "SnakeSquare.h"

class Tail : public SnakeSquare
{
public:
	Tail(int x = 0, int y = 0, int sizeX = 30, int sizeY = 30, sf::Color = sf::Color(255, 255, 255, 255));
	~Tail();
protected:
private:

};

