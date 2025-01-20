#include "EnnemyManager.h"
using namespace std;
void EnnemyManager::AddPatrol(int nb, Player* p) {
    for (int i = 0; i < nb; i++) {
        ennemies.push_back(make_unique<Patrol>(p));
    }
    
}
void EnnemyManager::AddChasing(int nb, Player* p) {
    for (int i = 0; i < nb; i++) {

        ennemies.push_back(make_unique<Chasing>(p));
    }
    
}

void EnnemyManager::UpdateAll(float deltaTime) {
    for (auto& ennemy : ennemies) {
        ennemy->Update(deltaTime);
    }
}
int EnnemyManager::ManagerSize() {
    return ennemies.size();
}
void EnnemyManager::DrawAll(sf::RenderWindow& window) {
    for (auto& ennemy : ennemies) {
        ennemy->Draw(window);
    }
}
