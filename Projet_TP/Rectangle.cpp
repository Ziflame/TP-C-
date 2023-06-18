#include "Rectangle.h"

Rectangle::Rectangle(cv::Scalar couleurRectangle, cv::Rect rectRectangle, int epaisseurRectangle)
{
    couleur = couleurRectangle;     // Initialise la couleur du rectangle avec la valeur passée en paramètre
    rect = rectRectangle;           // Initialise le rectangle avec le rectangle passé en paramètre
    epaisseur = epaisseurRectangle; // Initialise l'épaisseur des lignes du rectangle avec la valeur passée en paramètre
}

void Rectangle::dessiner(cv::Mat& image)
{
    cv::rectangle(image, rect, couleur, epaisseur); // Dessine un rectangle sur l'image avec les paramètres spécifiés
    cv::imshow("Rectangle", image);                 // Affiche l'image avec le rectangle dessiné

    int touche = cv::waitKey(0);        // Attend une touche du clavier
    if (touche == 'q')                  // Si la touche 'q' est pressée
        cv::destroyWindow("Rectangle"); // Détruit la fenêtre d'affichage du rectangle
}