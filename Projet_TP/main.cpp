#include <opencv2/opencv.hpp>
#include <iostream>
#include <opencv2/core.hpp>
#include <opencv2/highgui.hpp>
#include <opencv2/imgproc.hpp>
<<<<<<< HEAD
#include "Rectangle.h"
=======
#include "Cercle.h"
>>>>>>> 35a6b467ee3a4f03bad788d3afaca8fbc1da3d87

int main() {
    // Crée une image vide avec une taille de 500x500 pixels et un espace de couleur RVB
    cv::Mat image(500, 500, CV_8UC3, cv::Scalar(255, 255, 255));

<<<<<<< HEAD
    // Crée un rectangle avec les paramètres spécifiés
    Rectangle rectangle(1, 100, 100, 200, 150, 2, cv::Scalar(0, 0, 255), cv::Scalar(0, 255, 0));

    // Dessine le rectangle sur l'image
    rectangle.dessiner(image);

    // Affiche l'image dans une fenêtre avec le titre "Rectangle"
    cv::imshow("Rectangle", image);
    cv::waitKey(0);

    return 0;
=======
int main()
{
    Cercle cercle(Scalar(0, 255, 0), Point(250,250), 100, 3);
    cercle.dessiner();

    
   
    // Créer une image noire de 500x500 pixels
    Mat image2(500, 500, CV_8UC3, cv::Scalar(0));

    // Définir le rectangle
    Rect rect(125, 125, 250, 250);

    // Déssiner le rectangle sur l'image noire
    rectangle(image2, rect, Scalar(0, 255, 255), 3);

    // Afficher l'image
    imshow("Rectangle", image2);
    waitKey(0);

    
>>>>>>> 35a6b467ee3a4f03bad788d3afaca8fbc1da3d87
}
