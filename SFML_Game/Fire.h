#pragma once
#include<SFML\Graphics.hpp>
#include "Animation.h"
#include<iostream>
class Fire
{
public:
	Fire(sf::Texture* texture, sf::Vector2u imageCount, float switchTime, sf::Vector2f position);
	~Fire();

	void Update(float deltaTime);
	void Draw(sf::RenderWindow& window);
	void setActive(bool status);
	bool isActive();

	void setPosition(sf::Vector2f posi);
	sf::Vector2f getPosition();
	void setY(double y);
	void setScale(sf::Vector2f scale);
	sf::Vector2f getHalfSize();

	//test
	double getDeltaDistance();
	void setEffect(int state);
	int getEffect();
	void move(float deltaTime);

private:
	//void move(float deltaTime);
	bool active = false;
	Animation Animation;
	sf::RectangleShape shape;
	sf::Sprite body;
	

	//test
	double startPosition = 0;
	int effect = 0;
	double speed = 5;
	double baseSpeed = 5;
};
