#include "ChasingEn.h"

using namespace std;

Chasing::Chasing(Player* _p) : Ennemy(_p) {
	chasing.setSize(Vector2f(100.f, 100.f));
	chasing.setFillColor(Color::Red);
	chasing.setPosition(600, 200);


}


void Chasing::Update(float dT) {
    Deplacer(dT);
    
}

void Chasing::Deplacer(float dT) {
    sf::Vector2f direction = p->joueur.getPosition() - chasing.getPosition();

    
    float length = std::sqrt(direction.x * direction.x + direction.y * direction.y);
    if (length != 0.f) {
        direction /= length; 
    }

    
    chasing.move(direction * speed * dT);

    if (p->joueur.getGlobalBounds().intersects(chasing.getGlobalBounds())) {
        
    }
}

void Chasing::Draw(RenderWindow& window) {

	window.draw(chasing);
}