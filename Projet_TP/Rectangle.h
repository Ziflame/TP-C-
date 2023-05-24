#ifndef RECTANGLE_H
#define RECTANGLE_H

#include <opencv2/opencv.hpp>


class Rectangle 
{
private:
    cv::Mat image2;
    cv::Scalar couleur;
    cv::Rect rect;
    int epaisseur;

public:
    Rectangle(cv::Scalar couleurRectangle, cv::Rect rectRectangle, int epaisseurRectangle);
    void dessiner();
};

#endif  // RECTANGLE_H


