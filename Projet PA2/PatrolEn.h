#pragma once
#include <iostream>
#include "Ennemy.h"


class Patrol :public Ennemy
{

public:
	float speed = 10.f;
	int x;
	int y;
	RectangleShape patrol;
	
	Patrol(Player* _p, int posx, int posy);;

	void Deplacer();
	void Update(float deltaTime)override;
	void Draw(RenderWindow& window)override;



};
