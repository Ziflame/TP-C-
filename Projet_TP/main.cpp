
#include <opencv2/opencv.hpp>
#include <iostream>
#include <opencv2/core.hpp>
#include <opencv2/highgui.hpp>
#include <opencv2/imgproc.hpp>

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

    // Create a black image
    Mat image(400, 400, CV_8UC3, cv::Scalar(0, 0, 0));

    // Define the rectangle
    Rect rect(100, 100, 200, 150);

    // Draw the rectangle on the image
    rectangle(image, rect, cv::Scalar(0, 255, 0), 2);

    // Show the image
    imshow("Rectangle", image);
    waitKey(0);

    return 0;
}
