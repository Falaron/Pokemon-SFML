# include <SFML/Graphics.hpp>
# include <iostream>

# include "../headers/Player.hpp"




int main()
{
    Player player;

    /* Create Window */
    sf::RenderWindow window(sf::VideoMode(800, 600), "Pokemon SFML", (sf::Style::Titlebar, sf::Style::Close));
    window.setFramerateLimit(30);

    /* Create Texture */
    sf::Texture texture;
    if (!texture.loadFromFile("sprites/image.png")) {}
    sf::Sprite sprite;
    sprite.setTexture(texture);
    sprite.setTextureRect(sf::IntRect(0, 0, 32, 32));
    sprite.setScale(sf::Vector2f(4, 4));
   

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
        window.draw(sprite);

        window.display();
    }

    return 0;
}