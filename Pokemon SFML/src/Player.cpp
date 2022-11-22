# include "../headers/Player.hpp"

void Player::Input() {

    if (sf::Keyboard::isKeyPressed(sf::Keyboard::Left))
    {
        std::cout << "left key pressed\n";
    }
    if (sf::Keyboard::isKeyPressed(sf::Keyboard::Right))
    {
        std::cout << "right key pressed\n";
    }
    if (sf::Keyboard::isKeyPressed(sf::Keyboard::Up))
    {
        std::cout << "up key pressed\n";
    }
    if (sf::Keyboard::isKeyPressed(sf::Keyboard::Down))
    {
        std::cout << "down key pressed\n";
    }
}