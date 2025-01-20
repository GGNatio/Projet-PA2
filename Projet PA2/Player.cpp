#include "Player.h"

void Player::Update(float dT) {

	if (Keyboard::isKeyPressed(Keyboard::Z)) {
		joueur.move(0, -10);
	}
	if (Keyboard::isKeyPressed(Keyboard::Q)) {
		joueur.move(-10,0);
	}
	if (Keyboard::isKeyPressed(Keyboard::S)) {
		joueur.move(0, 10);
	}
	if (Keyboard::isKeyPressed(Keyboard::D)) {
		joueur.move(10,0);
	}

}

void Player::Draw(RenderWindow& window) {
	window.draw(joueur);
}
