#pragma once
#include "Fire.h"
#include<SFML\Graphics.hpp>
#include<iostream>
class Bullet
{
public:
	Bullet(sf::Texture* texture, int *effect);
	~Bullet();
	void Draw(sf::RenderWindow& window);
	//void erase();
	int getBulletSize();
	sf::Vector2f getPosition(int idex);
	void setPosition(sf::Vector2f pos, int idex);
	sf::Vector2f getHalfSize(int idex);
	bool isActive(int idx);
	sf::Vector2f positionPlayer;
	sf::Event* evnt;
	bool canAttack();


private:
	int* effect;
	void action();
	std::vector<Fire> fires;
	int fire_num = 30;
	float deltaTime = 0.0f;
	sf::Clock clock;
	// debug fire press
	bool isSpacebarPrees = false;

	// Test
	int temp = 0;
};

