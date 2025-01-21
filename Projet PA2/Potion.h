#pragma once
#include <iostream>
#include "Player.h"
#include "Interact.h"
class Potion :public Entity, public Interact
{

public:
	RectangleShape potion;


	Potion(Player* _p);

	void interact(Player* player)override;
	void Update(float deltaTime)override;
	void Draw(RenderWindow& window)override;
	void CheckCollision(Player* player);



};
