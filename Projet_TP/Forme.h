#ifndef FORME_H
#define FORME_H

#include <opencv2/core.hpp>

class Forme
{
public:
    virtual ~Forme() {}

    virtual void dessiner(cv::Mat& image) = 0;
};

#endif  // FORME_H



