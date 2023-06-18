#include "parseur.h"
#include <iostream>
#include <cassert>


int main()
{
    // Cha�ne de caract�res de description � parser
    std::string description = "Rectangle  250 250 cyan 3\nCercle 250 250 100 vert 3";

    // Cr�ation de l'objet Parseur
    Parseur parseur;

    // Appel de la m�thode parse avec la description
    parseur.parse(description);

    // V�rification des formes cr��es
    assert(parseur.getForme(0) != nullptr);
    assert(parseur.getForme(1) != nullptr);

    // R�cup�ration de la forme Rectangle cr��e
    Rectangle* rectangle = dynamic_cast<Rectangle*>(parseur.getForme(0));
    assert(rectangle != nullptr);
    assert(rectangle->getLargeur() == 250);
    assert(rectangle->getHauteur() == 250);
    assert(rectangle->getCouleur() == "cyan");
    assert(rectangle->getEpaisseurContour() == 3);

    // R�cup�ration de la forme Cercle cr��e
    Cercle* cercle = dynamic_cast<Cercle*>(parseur.getForme(1));
    assert(cercle != nullptr);
    assert(cercle->getCentreX() == 250);
    assert(cercle->getCentreY() == 250);
    assert(cercle->getRayon() == 100);
    assert(cercle->getCouleur() == "vert");
    assert(cercle->getEpaisseurContour() == 3);

    std::cout << "Test passed successfully!" << std::endl;

    return 0;
}
