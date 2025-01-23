#pragma once
#include <iostream>
#include "Ennemy.h"


class Chasing :public Ennemy
{

public:
	
	RectangleShape chasing;
	float speed = 1.f;
	int x;
	int y;
	Chasing(Player* _p , int posx, int posy);

	void Deplacer(float dT);
	void Update(float dT);
	void Draw(RenderWindow& window)override;



};
