#pragma once
#include <iostream>
#include "Ennemy.h"


class Patrol :public Ennemy
{

public:
	float speed = 10.f;
	RectangleShape patrol;
	
	Patrol(Player* _p);

	void Deplacer();
	void Update(float deltaTime)override;
	void Draw(RenderWindow& window)override;



};
