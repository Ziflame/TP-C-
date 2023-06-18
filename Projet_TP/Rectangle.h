#ifndef RECTANGLE_H
#define RECTANGLE_H

#include <opencv2/opencv.hpp>
#include "Forme.h"


class Rectangle : public Forme
{
private:
  
    cv::Scalar couleur;
    cv::Rect rect;
    int epaisseur;

public:
    Rectangle(cv::Scalar couleurRectangle, cv::Rect rectRectangle, int epaisseurRectangle);
    void dessiner(cv::Mat& image) override;
};

#endif  // RECTANGLE_H


