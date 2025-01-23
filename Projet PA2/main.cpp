#include <SFML/Graphics.hpp>

#include "Player.h"
#include <vector>
#include "EnnemyManager.h"
#include "InteractManager.h"
#include "Map.h"
using namespace std;



int main() {
    srand(time(NULL));
    const float tileSize = 32.0f;
    EnnemyManager manager;
    InteractManager interactmana;
    Player player;
    Map map("../map.txt", tileSize, &manager, &player);
    

    
   
    interactmana.AddKey(2, &player);
    interactmana.AddPotion(2, &player);
    
    
    

    



    
    
    sf::RenderWindow window(sf::VideoMode(1920, 1080), "Le caca de téva en mieux");
    window.setFramerateLimit(60);
    map.initialize();
    

    
    while (window.isOpen()) {
        sf::Event event;
        while (window.pollEvent(event)) {

            if (event.type == sf::Event::Closed)
                window.close();
            
        }
        
        
        window.clear();
        map.draw(window);
        manager.UpdateAll(5);
        interactmana.UpdateAll(5);
        player.Update(5);
        interactmana.DrawAll(window);
        manager.DrawAll(window);
        player.Draw(window);
        
        window.display();
    }

    return 0;
}