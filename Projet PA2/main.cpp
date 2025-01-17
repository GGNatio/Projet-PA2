#include <SFML/Graphics.hpp>

#include "Player.h"



int main() {
    Player player;
    // Cr�ation de la fen�tre
    sf::RenderWindow window(sf::VideoMode(1920, 1080), "Fen�tre SFML");
    window.setFramerateLimit(60);
    
    

    // Boucle principale
    while (window.isOpen()) {
        sf::Event event;
        while (window.pollEvent(event)) {

            if (event.type == sf::Event::Closed)
                window.close();
            
        }

        
        window.clear();
        
        player.Update(5);
        player.Draw(window);
        
        window.display();
    }

    return 0;
}