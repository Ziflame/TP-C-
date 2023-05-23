#include "Triangle.h"

Triangle::Triangle(cv::Scalar couleurTriangle, cv::Point sommet1Triangle, cv::Point sommet2Triangle, cv::Point sommet3Triangle, int epaisseurTriangle){
    image3 = cv::Mat(500, 500, CV_8UC3, cv::Scalar(255, 255, 255));
    couleur = couleurTriangle;
    sommet1 = sommet1Triangle;
    sommet2 = sommet2Triangle;
    sommet3 = sommet3Triangle;
    epaisseur = epaisseurTriangle;
}

void Triangle::dessiner() {
    cv::line(image3, sommet1, sommet2, couleur, epaisseur);
    cv::line(image3, sommet2, sommet3, couleur, epaisseur);
    cv::line(image3, sommet3, sommet1, couleur, epaisseur);
    cv::imshow("Triangle", image3);
}