#include "RectAnim.h"

RectAnim::RectAnim() {
    // Cr�e une fen�tre pour afficher l'image
    cv::namedWindow("Cr�ateur de Rectangles");
    continuerAfficher = true;
}

void RectAnim::Rect(const std::vector<std::vector<cv::Point>>& coordonnees, int largeur, int hauteur) {
    // Cr�e une image vide
    image4 = cv::Mat(500, 500, CV_8UC3, cv::Scalar(255,255,255));
    
    while (true) {
        // Dessine chaque rectangle sur l'image
        for (const auto& coords : coordonnees) {

            cv::polylines(image4, coords, true, cv::Scalar(255, 255, 255), 3);

             // Affiche l'image dans la fen�tre
            cv::imshow("Cr�ateur de Rectangles", image4);

            // Attend 50 milisecondes
            int key = cv::waitKey(50);

            // V�rifie si la touche "q" a �t� press�e
            if (key == 'q') {
                continuerAfficher = false;
            }
            //affiche a nouveau un fond noir
            image4.setTo(cv::Scalar(0, 0, 0));
        }

        if (!continuerAfficher) {
            break;
        }
    }
    
}