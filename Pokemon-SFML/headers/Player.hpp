# include <iostream>
# include <SFML/Graphics.hpp>

class Player {
public:
	void Input();
private:
	int positionX;
	int positionY;
	int speed;
};