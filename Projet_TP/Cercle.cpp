#include "Cercle.h"

Cercle::Cercle(cv::Scalar couleurCercle, cv::Point centreCercle, int rayonCercle, int epaisseurCercle) {
    image1 = cv::Mat(500, 500, CV_8UC3, cv::Scalar(255, 255, 255));
    couleur = couleurCercle;
    centre = centreCercle;
    rayon = rayonCercle;
    epaisseur = epaisseurCercle;
    
}

void Cercle::dessiner() {
    cv::circle(image1, centre, rayon, couleur, epaisseur);
    cv::imshow("Cercle", image1);
    
}