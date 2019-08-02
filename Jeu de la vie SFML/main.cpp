#include <SFML\Graphics.hpp>
#include <iostream>
#include "Case.h"
#include "Grille.h"

using namespace std;

sf::RenderWindow window(sf::VideoMode(640, 480), "Jeu de la vie");
sf::Event event;

int main() {
	unsigned tailleMatrice = 9;
	unsigned tailleCase = 50;
	Grille grille(tailleMatrice, tailleCase);
	grille.initGrille();

	while (window.isOpen()) {
		window.clear();
		window.draw(grille);
		window.display();
	}

	return 0;
}