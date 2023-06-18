#include "Triangle.h"

Triangle::Triangle(cv::Scalar couleurTriangle, cv::Point sommet1Triangle, cv::Point sommet2Triangle, cv::Point sommet3Triangle, int epaisseurTriangle)
{
    couleur = couleurTriangle;     // Initialise la couleur du triangle avec la valeur passée en paramètre
    sommet1 = sommet1Triangle;     // Initialise le premier sommet du triangle avec la valeur passée en paramètre
    sommet2 = sommet2Triangle;     // Initialise le deuxième sommet du triangle avec la valeur passée en paramètre
    sommet3 = sommet3Triangle;     // Initialise le troisième sommet du triangle avec la valeur passée en paramètre
    epaisseur = epaisseurTriangle; // Initialise l'épaisseur des lignes du triangle avec la valeur passée en paramètre
}

void Triangle::dessiner(cv::Mat& image)
{
    cv::line(image, sommet1, sommet2, couleur, epaisseur); // Dessine une ligne reliant le premier sommet au deuxième sommet
    cv::line(image, sommet2, sommet3, couleur, epaisseur); // Dessine une ligne reliant le deuxième sommet au troisième sommet
    cv::line(image, sommet3, sommet1, couleur, epaisseur); // Dessine une ligne reliant le troisième sommet au premier sommet
    cv::imshow("Triangle", image);                         // Affiche l'image avec le triangle dessiné

    int touche = cv::waitKey(0);       // Attend une touche du clavier
    if (touche == 'q')                 // Si la touche 'q' est pressée
        cv::destroyWindow("Triangle"); // Détruit la fenêtre d'affichage du triangle
}