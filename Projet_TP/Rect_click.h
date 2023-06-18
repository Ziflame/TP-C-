#ifndef FENETRE_FORME_PAR_DEFAUT_H
#define FENETRE_FORME_PAR_DEFAUT_H

#include <opencv2/opencv.hpp>

class Rect_click 
{
public:
    Rect_click();
    void executer();

private:
    static void surClicSouris(int evenement, int x, int y, int flags, void* userdata);

    std::string nomFenetre_;
    cv::Rect rectangleForme_;
    bool clic_;
};

#endif  // FENETRE_FORME_PAR_DEFAUT_H