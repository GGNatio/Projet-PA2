#pragma once

#include <SFML/Graphics.hpp>
#include <iostream>

using namespace sf;


class Entity
{
public:
	virtual void Update(float deltaTime) = 0;
	virtual void Draw(sf::RenderWindow & window) = 0;
	



};
