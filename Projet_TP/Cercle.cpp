#include "Cercle.h"

Cercle::Cercle(cv::Scalar couleurCercle, cv::Point centreCercle, int rayonCercle, int epaisseurCercle)
{
    couleur = couleurCercle;     // Initialise la couleur du cercle avec la valeur passée en paramètre
    centre = centreCercle;       // Initialise le centre du cercle avec la valeur passée en paramètre
    rayon = rayonCercle;         // Initialise le rayon du cercle avec la valeur passée en paramètre
    epaisseur = epaisseurCercle; // Initialise l'épaisseur du cercle avec la valeur passée en paramètre
}

void Cercle::dessiner(cv::Mat& image)
{
    cv::circle(image, centre, rayon, couleur, epaisseur); // Dessine un cercle sur l'image avec les paramètres spécifiés
    cv::imshow("Cercle", image);                          // Affiche l'image avec le cercle dessiné

    int touche = cv::waitKey(0);     // Attend une touche du clavier
    if (touche == 'q')               // Si la touche 'q' est pressée
        cv::destroyWindow("Cercle"); // Détruit la fenêtre d'affichage du cercle
}
