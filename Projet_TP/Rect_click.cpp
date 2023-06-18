#include "Rect_click.h"
#include <thread>
#include <chrono>

Rect_click::Rect_click() : nomFenetre_("Apparition Rectangle"), rectangleForme_(0, 0, 100, 50), clic_(false)
{
    // Cr�ation d'une fen�tre nomm�e avec le titre "Apparition Rectangle"
    cv::namedWindow(nomFenetre_, cv::WINDOW_AUTOSIZE);

    // D�finition de la fonction de rappel pour la souris (surClicSouris) et liaison avec l'objet courant (this)
    cv::setMouseCallback(nomFenetre_, &Rect_click::surClicSouris, this);
}

void Rect_click::executer()
{
    // Cr�ation d'une image vide de taille 500x500 avec 3 canaux (couleurs RGB)
    cv::Mat image = cv::Mat::zeros(500, 500, CV_8UC3);

    while (true)
    {
        if (clic_)
        {
            // R�initialisation de l'image � une couleur noire
            image.setTo(cv::Scalar(0, 0, 0));

            // Dessin d'un rectangle sur l'image avec la position et la taille d�finies par rectangleForme_
            // Utilisation d'une couleur bleue (0, 0, 255) et d'une �paisseur de ligne de 2 pixels
            cv::rectangle(image, rectangleForme_, cv::Scalar(0, 0, 255), 2);

            // R�initialisation de l'indicateur de clic � false
            clic_ = false;
        }

        // Affichage de l'image dans la fen�tre nomm�e
        cv::imshow(nomFenetre_, image);

        // Attente de l'appui d'une touche pendant 30 millisecondes
        int touche = cv::waitKey(30);

        // Sortie de la boucle si la touche 'q' est press�e
        if (touche == 'q')
            break;
    }

    // Fermeture de la fen�tre nomm�e
    cv::destroyWindow(nomFenetre_);
}

void Rect_click::surClicSouris(int evenement, int x, int y, int flags, void* userdata)
{
    // Conversion du pointeur void* en pointeur Rect_click*
    Rect_click* fenetre = static_cast<Rect_click*>(userdata);

    if (evenement == cv::EVENT_LBUTTONDOWN)
    {
        // Mise � jour de la position du rectangleForme_ en fonction des coordonn�es du clic de souris
        fenetre->rectangleForme_.x = x - fenetre->rectangleForme_.width / 2;
        fenetre->rectangleForme_.y = y - fenetre->rectangleForme_.height / 2;

        // Activation de l'indicateur de clic
        fenetre->clic_ = true;
    }
}