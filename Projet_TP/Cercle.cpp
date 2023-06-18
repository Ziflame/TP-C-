#include "Cercle.h"

Cercle::Cercle(cv::Scalar couleurCercle, cv::Point centreCercle, int rayonCercle, int epaisseurCercle)
{
    couleur = couleurCercle;     // Initialise la couleur du cercle avec la valeur pass�e en param�tre
    centre = centreCercle;       // Initialise le centre du cercle avec la valeur pass�e en param�tre
    rayon = rayonCercle;         // Initialise le rayon du cercle avec la valeur pass�e en param�tre
    epaisseur = epaisseurCercle; // Initialise l'�paisseur du cercle avec la valeur pass�e en param�tre
}

void Cercle::dessiner(cv::Mat& image)
{
    cv::circle(image, centre, rayon, couleur, epaisseur); // Dessine un cercle sur l'image avec les param�tres sp�cifi�s
    cv::imshow("Cercle", image);                          // Affiche l'image avec le cercle dessin�

    int touche = cv::waitKey(0);     // Attend une touche du clavier
    if (touche == 'q')               // Si la touche 'q' est press�e
        cv::destroyWindow("Cercle"); // D�truit la fen�tre d'affichage du cercle
}
