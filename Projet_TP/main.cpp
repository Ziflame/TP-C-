#include <opencv2/opencv.hpp>
#include <iostream>

using namespace cv;
using namespace std;

int main()
{
    // Créer une image noire de 512x512 pixels
    Mat image(512, 512, CV_8UC1, Scalar(0));

    // Définir les coordonnées du centre du cercle et son rayon
    Point center(256, 256);
    int radius = 100;

    // Dessiner un cercle blanc sur l'image noire
    circle(image, center, radius, Scalar(255), -1);

    // Afficher l'image résultante
    imshow("Image avec cercle", image);
    waitKey(0);

    return 0;
}
