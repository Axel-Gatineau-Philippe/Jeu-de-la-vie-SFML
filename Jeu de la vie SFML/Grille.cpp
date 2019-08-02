#include "Grille.h"

Grille::Grille(const unsigned& tailleMatrice, const int& tailleCase) : _tailleMatrice(tailleMatrice), _tailleCase(tailleCase) {
	_matrice.resize(tailleMatrice);
}

void Grille::draw(sf::RenderTarget& target, sf::RenderStates states) const {
	for (	unsigned i = 0; i < _tailleMatrice; ++i) {
		for (unsigned j = 0; j < _tailleMatrice; ++j) {
			target.draw(_matrice[i][j], states);
		}
	}
}

void Grille::initGrille() {
	for (unsigned i = 0; i < _tailleMatrice; ++i) {
		for (unsigned j = 0; j < _tailleMatrice; ++j) {
			Case c(_tailleCase);
			c.setPosition(i * _tailleCase, j * _tailleCase);
			c.getRectangle().setOutlineThickness(2);
			c.getRectangle().setOutlineColor(sf::Color(255, 0, 0));
			_matrice[i].push_back(c);
		}
	}
}