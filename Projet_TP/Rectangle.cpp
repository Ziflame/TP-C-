#include "rectangle.h"

Rectangle::Rectangle(int id, int x, int y, int l, int w, int epaisseurContour, cv::Scalar couleurContour, cv::Scalar couleurRemplissage)
    : id(id), rect(x, y, l, w), epaisseurContour(epaisseurContour), couleurContour(couleurContour), couleurRemplissage(couleurRemplissage) {}

void Rectangle::dessiner(cv::Mat& image) {
    // Dessine le rectangle avec la couleur de contour et l'épaisseur spécifiées
    cv::rectangle(image, rect, couleurContour, epaisseurContour);

    // Remplit le rectangle avec la couleur de remplissage spécifiée
    cv::rectangle(image, rect, couleurRemplissage, cv::FILLED);
}
