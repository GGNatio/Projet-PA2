#include "InteractManager.h"
using namespace std;
void InteractManager::AddKey(int nb, Player* p) {
    for (int i = 0; i < nb; i++) {
        keys.push_back(make_unique<Key>(p));
    }

}
void InteractManager::AddPotion(int nb, Player* p) {
    for (int i = 0; i < nb; i++) {

        potions.push_back(make_unique<Potion>(p));
    }

}
void InteractManager::UpdateKeys(float deltaTime) {
    for (auto& ennemy : keys) {
        ennemy->Update(deltaTime);
    }
}

void InteractManager::UpdatePotions(float deltaTime) {
    for (auto& ennemy : potions) {
        ennemy->Update(deltaTime);
    }
}
void InteractManager::UpdateAll(float deltaTime) {
    UpdateKeys(deltaTime);
    UpdatePotions(deltaTime);
}

int InteractManager::ManagerPotionSize() {
    return potions.size();
}
int InteractManager::ManagerKeySize() {
    return keys.size();
}


void InteractManager::DrawKeys(sf::RenderWindow& window) {
    for (auto& ennemy : keys) {
        ennemy->Draw(window);
    }
}

void InteractManager::DrawPotions(sf::RenderWindow& window) {
    for (auto& ennemy : potions) {
        ennemy->Draw(window);
    }
}

void InteractManager::DrawAll(sf::RenderWindow& window) {
    DrawKeys(window);
    DrawPotions(window);
}