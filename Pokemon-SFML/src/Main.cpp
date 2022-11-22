# include <SFML/Graphics.hpp>
# include <iostream>

# include "../headers/Player.hpp"


using namespace sf;

int main()
{
    Player player;

    /* Create Window */
    RenderWindow window(VideoMode(800, 600), "Pokemon SFML", (Style::Titlebar, Style::Close));
    window.setFramerateLimit(30);

    /* Create Texture */
    Texture texture;
    if (!texture.loadFromFile("./sprites/image.png")) {}
    Sprite sprite;
    sprite.setTexture(texture);
    sprite.setTextureRect(IntRect(0, 0, 32, 32));
    sprite.setScale(Vector2f(4, 4));
   

    while (window.isOpen())
    {
        Event event;
        while (window.pollEvent(event))
        {
            if (event.type == Event::Closed || Keyboard::isKeyPressed(Keyboard::Escape))
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