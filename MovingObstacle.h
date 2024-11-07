#pragma once

#include "Obstacle.h"
#include "Snake.h"

enum Axis{Vertical, Horizontal};

class MovingObstacle: public Obstacle
{
public:
	MovingObstacle(sf::Sprite* sprite, Assets type);
	MovingObstacle(sf::Sprite* sprite, Assets type, Axis axis);

	void move(float speed);

	float getLinSpeed();
	float getRotSpeed();
	void checkCollisionWithSnake(Snake* snake);

protected:
	void setSpeed(float s);

	Axis axis;
	float linSpeed;
	float rotSpeed;
	float const LIN_TO_ROT = 30;
	sf::Vector2i direction;
	void moveToVoid();
private:

};

