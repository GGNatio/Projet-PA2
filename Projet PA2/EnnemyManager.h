#pragma once
#include <vector>
#include <memory>
#include <SFML/Graphics.hpp>
#include "PatrolEn.h"
#include "ChasingEn.h"

class EnnemyManager {
public:
    EnnemyManager() = default;

    
    void AddPatrol(int nb, Player* p);

    int ManagerSize();
    
    void UpdateAll(float deltaTime);

    
    void DrawAll(sf::RenderWindow& window);
    void AddChasing(int nb, Player* p);

private:
    std::vector<std::unique_ptr<Ennemy>> ennemies;
}; 
