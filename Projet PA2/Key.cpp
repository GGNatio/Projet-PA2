#include "Key.h"
using namespace std;
void Key::Update(float dT) {
	CheckCollision(_p);


}

Key::Key(Player* _p) : Interact(_p) {
	key.setSize(Vector2f(100.f, 100.f));
	key.setFillColor(Color::Yellow);
	key.setPosition(rand() % 1920, rand() % 1080);


}

void Key::interact(Player* player) {
	player->keyPossessed = true;
}

void Key::CheckCollision(Player* player) {
	cout << "ok";
	if (player->joueur.getGlobalBounds().intersects(key.getGlobalBounds())) {
		interact(player);
	}
}

void Key::Draw(RenderWindow& window) {

	window.draw(key);
}