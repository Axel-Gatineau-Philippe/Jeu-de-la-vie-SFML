/*#include <SFML\Graphics.hpp>
#include <iostream>
#include <Vector>

using namespace std;

sf::RenderWindow window(sf::VideoMode(640, 480), "Game of life");
sf::Event event;
vector <vector<sf::RectangleShape>> v;

int main() {

	while (window.isOpen()) {
		window.clear();

		sf::RectangleShape* rectangle;
		v.resize(10);

		for (int i = 0; i < 9; ++i) {
			for (int j = 0; j < 9; ++j) {
				rectangle = new sf::RectangleShape(sf::Vector2f(50, 50));
				rectangle->setOutlineThickness(-2);
				rectangle->setOutlineColor(sf::Color(255, 0, 0));
				rectangle->setPosition(i * 50, j * 50);
				v[i].push_back(*rectangle);
				window.draw((v[i][j]));
			}
		}



		while (window.pollEvent(event))
		{

			if (event.type == sf::Event::MouseButtonPressed) {
				cout << "click" << endl;
				if (event.mouseButton.button == sf::Mouse::Left)
				{
					int posX = event.mouseButton.x / 50;
					int posY = event.mouseButton.y / 50;
					v[posX][posY].setOutlineColor(sf::Color(0, 0, 255));
				}
			}
		}



		window.display();
	}

}*/