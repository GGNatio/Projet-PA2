#include "Map.h"
#include <fstream>
#include <iostream>

Map::Map(const std::string& filePath, float tileSize, EnnemyManager* _manager, Player* _player)
    : filePath(filePath), tileSize(tileSize), tile(sf::Vector2f(tileSize, tileSize)), manager(_manager), player(_player) {}

void Map::loadTextures() {
    if (!wallTexture.loadFromFile("../wall.png")) {
        std::cerr << "Error loading wall texture\n";
    }
    if (!groundTexture.loadFromFile("../floor.png")) {
        std::cerr << "Error loading floor texture\n";
    }
}

void Map::loadFromFile() {
    std::ifstream file(filePath);
    if (!file.is_open()) {
        std::cerr << "Error opening file: " << filePath << "\n";
        return;
    }

    std::string line;
    while (std::getline(file, line)) {
        mapData.push_back(line);
    }
    file.close();
}

void Map::calculateTileSize() {
    if (mapData.empty()) return;

    size_t rows = mapData.size();
    size_t cols = mapData[0].size();

    float tileWidth = static_cast<float>(1920.f) / cols;
    float tileHeight = static_cast<float>(1080.f) / rows;

    tileSize = std::min(tileWidth, tileHeight);
    tile.setSize(sf::Vector2f(tileSize, tileSize));
}

void Map::initialize() {
    
    loadFromFile();
    calculateTileSize();
    loadTextures();

    
    if (mapData.empty()) return;

    float tileWidth = static_cast<float>(1920.f) / mapData[0].size();
    float tileHeight = static_cast<float>(1080.f) / mapData.size();

    for (size_t y = 0; y < mapData.size(); ++y) {
        for (size_t x = 0; x < mapData[y].size(); ++x) {
            char cell = mapData[y][x];
            sf::RectangleShape currentTile(sf::Vector2f(tileWidth, tileHeight));
            currentTile.setPosition(x * tileWidth, y * tileHeight);

            if (cell == '#') {
                currentTile.setTexture(&wallTexture);
            }
            else if (cell == '*') {
                currentTile.setTexture(&groundTexture);
            }
            else if (cell == '&') {
                
                manager->AddChasing(2, player, currentTile.getPosition().x, currentTile.getPosition().y);
                
                currentTile.setTexture(&groundTexture);
            }
            else if (cell == 'é') {
                currentTile.setTexture(&groundTexture);
                manager->AddPatrol(2, player, currentTile.getPosition().x, currentTile.getPosition().y);
                
                
            }
            else {
                currentTile.setFillColor(sf::Color::Black); 
            }

            
            drawableTiles.push_back(currentTile);
        }
    }
}

void Map::draw(sf::RenderWindow& window) {
    for (const auto& tile : drawableTiles) {
        window.draw(tile); 
    }
}