#include "PatrolEn.h"
using namespace std;
void Patrol::Update(float dT) {
	
	

}

Patrol::Patrol(Player* _p) : Ennemy(_p) {
	patrol.setSize(Vector2f(100.f, 100.f));
	patrol.setFillColor(Color::Blue);
	patrol.setPosition(100, 200);


}
void Patrol::Deplacer() {
	patrol.move(speed, 0);
	//if (patrol.getGlobalBounds().intersects())

	if (patrol.getPosition().y > 1920 && patrol.getPosition().y < 0) {
		speed = -speed;
	}
}

void Patrol::Draw(RenderWindow& window) {
	
	window.draw(patrol);
}
