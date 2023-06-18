#include "Rectangle.h"

Rectangle::Rectangle(cv::Scalar couleurRectangle, cv::Rect rectRectangle, int epaisseurRectangle)
{
    couleur = couleurRectangle;     // Initialise la couleur du rectangle avec la valeur pass�e en param�tre
    rect = rectRectangle;           // Initialise le rectangle avec le rectangle pass� en param�tre
    epaisseur = epaisseurRectangle; // Initialise l'�paisseur des lignes du rectangle avec la valeur pass�e en param�tre
}

void Rectangle::dessiner(cv::Mat& image)
{
    cv::rectangle(image, rect, couleur, epaisseur); // Dessine un rectangle sur l'image avec les param�tres sp�cifi�s
    cv::imshow("Rectangle", image);                 // Affiche l'image avec le rectangle dessin�

    int touche = cv::waitKey(0);        // Attend une touche du clavier
    if (touche == 'q')                  // Si la touche 'q' est press�e
        cv::destroyWindow("Rectangle"); // D�truit la fen�tre d'affichage du rectangle
}