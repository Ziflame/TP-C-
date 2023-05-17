#include <opencv2/opencv.hpp>
#include <iostream>
#include <opencv2/core.hpp>
#include <opencv2/highgui.hpp>
#include <opencv2/imgproc.hpp>

using namespace cv;
using namespace std;

int main()
{
    // Créer une image noire de 500x500 pixels
    Mat image1(500, 500, CV_8UC3, Scalar(0));

    // Définir les coordonnées du centre du cercle et son rayon
    Point centre(250, 250);
    int rayon = 125;

    // Dessiner un cercle blanc sur l'image noire
    circle(image1, centre, rayon, Scalar(255, 0, 255), 3);
   
    // Afficher l'image 
    imshow("cercle", image1);


    // Créer une image noire de 500x500 pixels
    Mat image2(500, 500, CV_8UC3, cv::Scalar(0));

    // Définir le rectangle
    Rect rect(125, 125, 250, 250);

    // Déssiner le rectangle sur l'image noire
    rectangle(image2, rect, Scalar(0, 255, 255), 3);

    // Afficher l'image
    imshow("Rectangle", image2);
    waitKey(0);

    
}
