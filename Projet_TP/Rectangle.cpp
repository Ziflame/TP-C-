#include "Rectangle.h"

Rectangle::Rectangle(cv::Scalar couleurRectangle, cv::Rect rectRectangle, int epaisseurRectangle){
    image2 = cv::Mat(500, 500, CV_8UC3, cv::Scalar(255, 255, 255));
    couleur = couleurRectangle;
    rect = rectRectangle;
    epaisseur = epaisseurRectangle;
}

void Rectangle::dessiner() {
    cv::rectangle(image2, rect, couleur, epaisseur);
    cv::imshow("Rectangle", image2);
}
