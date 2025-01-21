#include "Player.h"

void Player::Update(float dT) {

	if (Keyboard::isKeyPressed(Keyboard::Z)) {
		joueur.move(0, -speed);
	}
	if (Keyboard::isKeyPressed(Keyboard::Q)) {
		joueur.move(-speed,0);
	}
	if (Keyboard::isKeyPressed(Keyboard::S)) {
		joueur.move(0, speed);
	}
	if (Keyboard::isKeyPressed(Keyboard::D)) {
		joueur.move(speed,0);
	}

}
void Player::SetSpeed(float x) {
	speed = speed+x;
}
void Player::Draw(RenderWindow& window) {
	window.draw(joueur);
}
