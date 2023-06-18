#ifndef CERCLE_H
#define CERCLE_H

#include <opencv2/opencv.hpp>
#include "Forme.h"

class Cercle : public Forme
{
private:
    
    cv::Scalar couleur;
    cv::Point centre;
    int rayon;
    int epaisseur;

public:
    Cercle(cv::Scalar couleurCercle, cv::Point centreCercle, int rayonCercle, int epaisseurCercle);
    void dessiner(cv::Mat& image) override;;
};

#endif  // CERCLE_H




