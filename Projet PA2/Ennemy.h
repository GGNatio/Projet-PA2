#pragma once
#include <iostream>
#include "Player.h"
class Ennemy :public Entity
{

public:
	Player* p;
	

	Ennemy(Player* _p);


	void Update(float deltaTime)override;
	void Draw(RenderWindow& window)override;



};