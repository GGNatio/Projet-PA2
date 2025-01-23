#pragma once

#include <SFML/Graphics.hpp>
#include <vector>
#include <string>
#include "EnnemyManager.h"
#include "Player.h"

class Map {
public:
    Map(const std::string& filePath, float tileSize, EnnemyManager* manager, Player* player);

    
    void initialize();

    
    void draw(sf::RenderWindow& window);

private:
    std::string filePath;
    float tileSize;
    sf::Texture wallTexture;
    sf::Texture groundTexture;
    sf::RectangleShape tile;

    std::vector<sf::RectangleShape> drawableTiles; 
    std::vector<std::string> mapData;             
    EnnemyManager* manager;
    Player* player;

    void loadTextures();
    void loadFromFile();
    void calculateTileSize();
};

