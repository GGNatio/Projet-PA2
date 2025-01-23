#include "PatrolEn.h"
using namespace std;
void Patrol::Update(float dT) {
	
	

}

Patrol::Patrol(Player* _p, int posx, int posy) : Ennemy(_p), x(posx), y(posy) {
	patrol.setSize(Vector2f(100.f, 100.f));
	patrol.setFillColor(Color::Blue);
	patrol.setPosition(x, y);


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
