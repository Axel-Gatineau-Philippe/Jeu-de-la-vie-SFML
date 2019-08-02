#pragma once
#include <SFML\Graphics.hpp>

#define VIVANTE sf::Color:Red;
#define MORTE sf::Color:White;

class Case: public sf::Drawable {
private:
	unsigned _taille;
	sf::RectangleShape* _rectangle;
	int _posX, _posY;
	bool _etat;

public:
	Case(const unsigned& taille);

	virtual void draw(sf::RenderTarget& target, sf::RenderStates states) const;

	void setPosition(const int& x, const int& y);

	sf::RectangleShape& getRectangle();

	~Case();
};


