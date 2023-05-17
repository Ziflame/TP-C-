#include <opencv2/opencv.hpp>
#include <iostream>
#include <opencv2/core.hpp>
#include <opencv2/highgui.hpp>
#include <opencv2/imgproc.hpp>
#include "Rectangle.h"

int main() {
    // Crée une image vide avec une taille de 500x500 pixels et un espace de couleur RVB
    cv::Mat image(500, 500, CV_8UC3, cv::Scalar(255, 255, 255));

    // Crée un rectangle avec les paramètres spécifiés
    Rectangle rectangle(1, 100, 100, 200, 150, 2, cv::Scalar(0, 0, 255), cv::Scalar(0, 255, 0));

    // Dessine le rectangle sur l'image
    rectangle.dessiner(image);

    // Affiche l'image dans une fenêtre avec le titre "Rectangle"
    cv::imshow("Rectangle", image);
    cv::waitKey(0);

    return 0;
}
