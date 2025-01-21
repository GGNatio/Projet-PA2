#pragma once
#include <iostream>
#include "Entity.h"


class Player :public Entity
{

public:
	float speed = 10;
	bool keyPossessed = false;
	RectangleShape joueur;

	Player() {
		joueur.setSize(Vector2f(100.f, 100.f));
		joueur.setFillColor(Color::White);
		joueur.setPosition(500, 500);
		
	
	}
	
	void SetSpeed(float x);
	void Update(float deltaTime)override;
	void Draw(RenderWindow& window)override;



};


