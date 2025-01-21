#pragma once
#include <iostream>
#include "Player.h"
#include "Interact.h"
class Key :public Entity, public Interact
{

public:
	RectangleShape key;


	Key(Player* _p);
	void CheckCollision(Player* player);
	void interact(Player* player)override;
	void Update(float deltaTime)override;
	void Draw(RenderWindow& window)override;



};