#pragma once

#include <SFML/Graphics.hpp>
#include <iostream>
#include "SFML/Graphics.hpp"
#include "Player.h"
using namespace sf;
using namespace std;

class Interact
{
public:
	Player* _p;
	Interact(Player* player);

	virtual void interact(Player* player) = 0;
	



};

