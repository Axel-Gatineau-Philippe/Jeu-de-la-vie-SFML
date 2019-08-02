#pragma once

#include <SFML\Graphics.hpp>
#include <vector>
#include <iostream>
#include "Case.h"

template <typename T>
using Matrice = typename std::vector<std::vector<T>>;

class Grille : public sf::Drawable {
private:
	unsigned _tailleMatrice;
	unsigned _tailleCase;
	Matrice<Case> _matrice;

public:
	Grille(const unsigned& tailleMatrice, const unsigned &tailleCase);

	virtual void draw(sf::RenderTarget& target, sf::RenderStates states) const;

	void initGrille();

	~Grille();
};