#include <opencv2/opencv.hpp>
#include <iostream>
#include <opencv2/core.hpp>
#include <opencv2/highgui.hpp>
#include <opencv2/imgproc.hpp>
#include "Cercle.h"

int main() {
    // Crée une image blanche de taille 500x500 pixels
    cv::Mat image(500, 500, CV_8UC3, cv::Scalar(255, 255, 255));

    // Crée un objet cercle avec les paramètres spécifiés : couleur verte, centre (250, 250), rayon 100 et épaisseur du contour 3
    Cercle cercle(cv::Scalar(0, 255, 0), cv::Point(250, 250), 100, 3);

    // Dessine le cercle sur l'image
    cercle.dessiner();

    // Crée une autre image noire de taille 500x500 pixels
    cv::Mat image2(500, 500, CV_8UC3, cv::Scalar(0));

    // Définit un rectangle avec les coordonnées (125, 125), largeur 250 et hauteur 250
    cv::Rect rect(125, 125, 250, 250);

    // Dessine le rectangle sur l'image noire avec une couleur cyan et une épaisseur de contour de 3
    cv::rectangle(image2, rect, cv::Scalar(0, 255, 255), 3);

    // Affiche l'image avec le rectangle dans une fenêtre intitulée "Rectangle"
    cv::imshow("Rectangle", image2);

    // Attend une touche de clavier
    cv::waitKey(0);

    return 0;
}
