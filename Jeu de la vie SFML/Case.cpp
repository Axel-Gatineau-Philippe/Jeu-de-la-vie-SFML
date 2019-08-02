#include "Case.h"

Case::Case(const unsigned& taille) : _taille(taille){
	_rectangle = new sf::RectangleShape(sf::Vector2f(taille, taille));
	_etat = false;
}

void Case::draw(sf::RenderTarget& target, sf::RenderStates states) const {
	target.draw(*_rectangle, states);
}

void Case::setPosition(const int& x, const int& y) {
	_rectangle->setPosition(x, y);
	_posX = x / _taille;
	_posX = y / _taille;
}

sf::RectangleShape & Case::getRectangle() {
	return *_rectangle;
}

Case::~Case() {}
