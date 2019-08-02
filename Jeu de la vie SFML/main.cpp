#include <SFML\Graphics.hpp>
#include <iostream>
#include "Case.h"
#include "Grille.h"

using namespace std;

sf::RenderWindow window(sf::VideoMode(640, 480), "Game of life");
sf::Event event;

int main() {
	unsigned tailleMatrice = 10;
	int tailleCase = 50;
	Grille grille(tailleMatrice, tailleCase);
	grille.initGrille();

	while (window.isOpen()) {
		window.clear();
		window.draw(grille);
		window.display();
	}
}