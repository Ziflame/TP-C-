#include "Triangle.h"

Triangle::Triangle(cv::Scalar couleurTriangle, cv::Point sommet1Triangle, cv::Point sommet2Triangle, cv::Point sommet3Triangle, int epaisseurTriangle)
{
    couleur = couleurTriangle;     // Initialise la couleur du triangle avec la valeur pass�e en param�tre
    sommet1 = sommet1Triangle;     // Initialise le premier sommet du triangle avec la valeur pass�e en param�tre
    sommet2 = sommet2Triangle;     // Initialise le deuxi�me sommet du triangle avec la valeur pass�e en param�tre
    sommet3 = sommet3Triangle;     // Initialise le troisi�me sommet du triangle avec la valeur pass�e en param�tre
    epaisseur = epaisseurTriangle; // Initialise l'�paisseur des lignes du triangle avec la valeur pass�e en param�tre
}

void Triangle::dessiner(cv::Mat& image)
{
    cv::line(image, sommet1, sommet2, couleur, epaisseur); // Dessine une ligne reliant le premier sommet au deuxi�me sommet
    cv::line(image, sommet2, sommet3, couleur, epaisseur); // Dessine une ligne reliant le deuxi�me sommet au troisi�me sommet
    cv::line(image, sommet3, sommet1, couleur, epaisseur); // Dessine une ligne reliant le troisi�me sommet au premier sommet
    cv::imshow("Triangle", image);                         // Affiche l'image avec le triangle dessin�

    int touche = cv::waitKey(0);       // Attend une touche du clavier
    if (touche == 'q')                 // Si la touche 'q' est press�e
        cv::destroyWindow("Triangle"); // D�truit la fen�tre d'affichage du triangle
}