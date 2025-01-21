#include "Potion.h"
using namespace std;
void Potion::Update(float dT) {
	CheckCollision(_p);


}

Potion::Potion(Player* _p) : Interact(_p) {
	potion.setSize(Vector2f(100.f, 100.f));
	potion.setFillColor(Color::Green);
	potion.setPosition(rand()%1920, rand() % 1080);


}
void Potion::interact(Player* player) {
	player->SetSpeed(5);
}
void Potion::CheckCollision(Player* player) {
	
	if (player->joueur.getGlobalBounds().intersects(potion.getGlobalBounds())) {
		interact(player);
		delete this;
	}
}
void Potion::Draw(RenderWindow& window) {

	window.draw(potion);
}