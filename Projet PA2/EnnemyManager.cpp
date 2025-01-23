#include "EnnemyManager.h"
using namespace std;
void EnnemyManager::AddPatrol(int nb, Player* p, int x, int y) {
    for (int i = 0; i < nb; i++) {
        ennemies.push_back(make_unique<Patrol>(p,x,y));
    }
    
}
void EnnemyManager::AddChasing(int nb, Player* p, int x, int y) {
    for (int i = 0; i < nb; i++) {

        ennemies.emplace_back(make_unique<Chasing>(p,x,y));
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
