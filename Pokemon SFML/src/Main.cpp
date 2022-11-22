# include <SFML/Graphics.hpp>
# include <iostream>

# include "../headers/Player.hpp"




int main()
{
    Player player;

    /* Create Window */
    sf::RenderWindow window(sf::VideoMode(800, 600), "Pokemon SFML", (sf::Style::Titlebar, sf::Style::Close));
    window.setFramerateLimit(30);
   

    while (window.isOpen())
    {
        sf::Event event;
        while (window.pollEvent(event))
        {
            if (event.type == sf::Event::Closed || sf::Keyboard::isKeyPressed(sf::Keyboard::Escape))
                window.close();
        }

        
        player.Input(); //Keyboard detection
        
        window.clear();
        //Place graphic actions here :)
        window.display();
    }

    return 0;
}