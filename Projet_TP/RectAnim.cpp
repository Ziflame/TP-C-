#include "RectAnim.h"

RectAnim::RectAnim() {
    // Crée une fenêtre pour afficher l'image
    cv::namedWindow("Créateur de Rectangles");
    continuerAfficher = true;
}

void RectAnim::Rect(const std::vector<std::vector<cv::Point>>& coordonnees, int largeur, int hauteur) {
    // Crée une image vide
    image4 = cv::Mat(500, 500, CV_8UC3, cv::Scalar(255,255,255));
    
    while (true) {
        // Dessine chaque rectangle sur l'image
        for (const auto& coords : coordonnees) {

            cv::polylines(image4, coords, true, cv::Scalar(255, 255, 255), 3);

             // Affiche l'image dans la fenêtre
            cv::imshow("Créateur de Rectangles", image4);

            // Attend 50 milisecondes
            int key = cv::waitKey(50);

            // Vérifie si la touche "q" a été pressée
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