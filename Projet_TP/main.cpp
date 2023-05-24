#include <iostream>
#include <opencv2/opencv.hpp>
#include <opencv2/core.hpp>
#include <opencv2/highgui.hpp>
#include <opencv2/imgproc.hpp>
#include "Cercle.h"
#include "Rectangle.h"
#include "Triangle.h"
#include <string>
#include <stdio.h>


int main() {

    std::string message;
    std::cout << "Que voulez-vous dessiner ?\n"; std::cin >> message;


    while (message != "Partir") {

        if (message == "Cercle") {
            // Cr�e un objet cercle avec les param�tres sp�cifi�s : couleur verte, centre (250, 250), rayon 100 et �paisseur du contour 3
            Cercle cercle(cv::Scalar(255, 255, 0), cv::Point(250, 250), 100, 3);
            // Dessine le cercle sur l'image
            cercle.dessiner();
            cv::waitKey(0);
            std::cin >> message;
        }

        else if (message == "Rectangle") {
            // D�finit un rectangle avec les coordonn�es (125, 125), largeur 250 et hauteur 250
            Rectangle rect(cv::Scalar(0, 255, 0), cv::Rect(125, 125, 250, 250), 3);
            //dessine le rectangle sur l'image
            rect.dessiner();
            cv::waitKey(0);
            std::cin >> message;
        }

        else if (message == "Triangle"){

            //D�finit un triangle avec les coordonn�es des trois lignes qui forment les arr�tes du triangle
            Triangle triangle(cv::Scalar(255, 0, 0), cv::Point(250, 100), cv::Point(100, 450), cv::Point(400, 450), 3);
            //Desine le triangle
            triangle.dessiner();
            cv::waitKey(0);
            std::cin >> message;
        }

    }

    // Attend une touche de clavier
    cv::waitKey(0);

    return 0;
}