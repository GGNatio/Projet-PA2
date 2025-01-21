#pragma once
#include <vector>
#include <memory>
#include <SFML/Graphics.hpp>
#include "Key.h"
#include "Potion.h"


class InteractManager {
public:
    InteractManager() = default;


    void AddKey(int nb, Player* p);
    void AddPotion(int nb, Player* p);

    int ManagerKeySize();
    int ManagerPotionSize();
    

    void UpdateAll(float deltaTime);


    void DrawAll(sf::RenderWindow& window);
    void DrawKeys(sf::RenderWindow& window);
    void DrawPotions(sf::RenderWindow& window);

    
    void UpdateKeys(float deltaTime);
    void UpdatePotions(float deltaTime);

private:
    std::vector<std::unique_ptr<Key>> keys;

    std::vector<std::unique_ptr<Potion>> potions;
};

