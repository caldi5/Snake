#include "Snake.h"



Snake::Snake()
{
	head = new Head(90);
	tail = new Tail(30);
	body.push_back(SnakeSquare(60));
}


Snake::~Snake()
{
}

void Snake::Draw(sf::RenderWindow & Window)
{
	tail->Draw(Window);
	head->Draw(Window);
	for (int i = 0; i < body.size(); i++)
		body[i].Draw(Window);
}
