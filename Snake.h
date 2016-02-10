#pragma once
#include "Head.h"
#include "Tail.h"
#include "SnakeSquare.h"

class Snake
{
public:
	Snake();
	~Snake();
	void Eat();
	void Move(int dir);
	void Draw(sf::RenderWindow &Window);
protected:
private:
	Head* head;
	Tail* tail;
	std::vector<SnakeSquare> body;
};

