

#include <opencv2/opencv.hpp>

class Rectangle {
public:
    Rectangle(int id, int x, int y, int l, int w, int epaisseurContour, cv::Scalar couleurContour, cv::Scalar couleurRemplissage);

    void dessiner(cv::Mat& image);

private:
    int id;
    cv::Rect rect;
    int epaisseurContour;
    cv::Scalar couleurContour;
    cv::Scalar couleurRemplissage;
};


