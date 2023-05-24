#include "Rect_click.h"
#include <thread>
#include <chrono>

Rect_click::Rect_click() : nomFenetre_("Forme par défaut"), rectangleForme_(0, 0, 100, 50), clic_(false)
{
    cv::namedWindow(nomFenetre_, cv::WINDOW_AUTOSIZE);
    cv::setMouseCallback(nomFenetre_, &Rect_click::surClicSouris, this);
}

void Rect_click::executer()
{
    cv::Mat image = cv::Mat::zeros(500, 500, CV_8UC3);

    while (true)
    {
        
        if (clic_)
        {
            image.setTo(cv::Scalar(0,0,0));
            cv::rectangle(image, rectangleForme_, cv::Scalar(0, 0, 255), 2);
            clic_ = false;
        }
        
        cv::imshow(nomFenetre_, image);

        int touche = cv::waitKey(30);
        if (touche == 'q')
        break;

    }

    cv::destroyWindow(nomFenetre_);
}

void Rect_click::surClicSouris(int evenement, int x, int y, int flags, void* userdata)
{
    Rect_click* fenetre = static_cast<Rect_click*>(userdata);

    if (evenement == cv::EVENT_LBUTTONDOWN)
    {
        fenetre->rectangleForme_.x = x - fenetre->rectangleForme_.width / 2;
        fenetre->rectangleForme_.y = y - fenetre->rectangleForme_.height / 2;
        fenetre->clic_ = true;
    }
}