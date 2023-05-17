#ifndef CERCLE_H
#define CERCLE_H

#include <opencv2/opencv.hpp>

class Cercle {
private:
    cv::Mat image1;
    cv::Scalar couleur;
    cv::Point centre;
    int rayon;
    int epaisseur;

public:
    Cercle(cv::Scalar couleurCercle, cv::Point centreCercle, int rayonCercle, int epaisseurCercle);
    void dessiner();
};

#endif  // CERCLE_H




