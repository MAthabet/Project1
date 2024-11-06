#pragma once

#include <SFML/Graphics.hpp>

#include "GameDefinitions.h"
#include "Assets.h"
#include "Collidable.h"

enum class Direction { Up, Down, Left, Right };

class Snake: public Collidable
{
public:
	bool golden;
	Direction lastInput = Direction::Right;
	std::vector<sf::Sprite> snake;
	int health = SNAKE_INIT_SIZE;
	bool shielded = false;
	bool invertedInput = false;
	bool collidedWithWin = false;
	bool haseEatenApple = true;
	int collectedApples = 0;

	Snake();

	bool checkCollision();
	void initSnake(int snakeLength, sf::Vector2f start, Map* map);
	void grow();
	void move();
	void setStartPosition(sf::Vector2f startPosition);
	void increaseHealth(int toIncrease);
	bool isAlive();
	void setSpeed(int speed);
	void updatePosition();
	void checkSelfCollision();

private:
	bool Alive = true;
	int speed;
	void handleDeath();
	void handleCollisionWithWindow();
	void handleCollisionWithCollectable();
	void handleCollisionWithMovingObstacle();
	void handleCollisionWithStationryObstacle();
	void handleCollisionWithWall();
	void updateDirection();
	sf::Vector2i direction;
	sf::Vector2f tailStartPosition;
};