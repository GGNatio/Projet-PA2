#include <SFML/Graphics.hpp>

#include "Player.h"
#include <vector>
#include "EnnemyManager.h"
using namespace std;



int main() {
    EnnemyManager manager;
    Player player;
    
    manager.AddPatrol(10, &player);
    manager.AddChasing(10, &player);

    cout << manager.ManagerSize();



    
    
    sf::RenderWindow window(sf::VideoMode(1920, 1080), "Le caca de téva en mieux");
    window.setFramerateLimit(60);
    
    

    
    while (window.isOpen()) {
        sf::Event event;
        while (window.pollEvent(event)) {

            if (event.type == sf::Event::Closed)
                window.close();
            
        }
        manager.UpdateAll(0);
        
        window.clear();
        manager.UpdateAll(5);
        player.Update(5);
        manager.DrawAll(window);
        player.Draw(window);
        
        window.display();
    }

    return 0;
}