#include "MovingObstacle.h"

MovingObstacle::MovingObstacle(sf::Sprite* sprite, Assets type)
{

}

void MovingObstacle::setSpeed(float s)
{
	linSpeed = s;
	rotSpeed = linSpeed * LIN_TO_ROT;
}
float MovingObstacle::getLinSpeed()
{
	return linSpeed;
}
float MovingObstacle::getRotSpeed()
{
	return rotSpeed;
}
