#include <iostream>
#include <opencv2/opencv.hpp>
#include <opencv2/core.hpp>
#include <opencv2/highgui.hpp>
#include <opencv2/imgproc.hpp>
#include "Cercle.h"
#include "Rectangle.h"
#include "Triangle.h"
#include "Rect_click.h"
#include "RectAnim.h"
#include <string>
#include <stdio.h>


int main() {

    std::string message;
    std::cout << "Que voulez-vous dessiner ? (Cercle, Rectangle, Triangle, Clic, Animation)\n(Tapez 'Partir' pour Quitter)\n\n"; std::cin >> message;


    while (message != "Partir") {

        if (message == "Cercle") {
            // Crée un objet cercle avec les paramètres spécifiés : couleur verte, centre (250, 250), rayon 100 et épaisseur du contour 3
            Cercle cercle(cv::Scalar(255, 255, 0), cv::Point(250, 250), 100, 3);
            // Dessine le cercle sur l'image
            cercle.dessiner();
            cv::waitKey(0);
            std::cin >> message;
        }

        else if (message == "Rectangle") {
            // Définit un rectangle avec les coordonnées (125, 125), largeur 250 et hauteur 250
            Rectangle rect(cv::Scalar(0, 255, 0), cv::Rect(125, 125, 250, 250), 3);
            //dessine le rectangle sur l'image
            rect.dessiner();
            cv::waitKey(0);
            std::cin >> message;
        }

        else if (message == "Triangle"){

            //Définit un triangle avec les coordonnées des trois lignes qui forment les arrêtes du triangle
            Triangle triangle(cv::Scalar(255, 0, 0), cv::Point(250, 100), cv::Point(100, 450), cv::Point(400, 450), 3);
            //Desine le triangle
            triangle.dessiner();
            cv::waitKey(0);
            std::cin >> message;
        }

        else if (message == "Clic") {
            
            // Définit la fenetre et le rectangle ainsi que le coordonnées de la souris
            Rect_click fenetre;
            // execute le programme pour faire apparaitre le rectangle à l'emplacement du curseur de la souris
            fenetre.executer();
            cv::waitKey(0);
            std::cin >> message;
        }

        else if (message == "Animation") {

           RectAnim RectAnim;

            // Crée un vecteur de coordonnées des rectangles
            std::vector<std::vector<cv::Point>> coordonneesRectangles;
            coordonneesRectangles.push_back({ cv::Point(125, 125), cv::Point(375, 125), cv::Point(375, 375), cv::Point(125, 375) });  // Rectangle 1
            coordonneesRectangles.push_back({ cv::Point(150, 100), cv::Point(400, 150), cv::Point(350, 400), cv::Point(100, 350) });  // Rectangle 2
            coordonneesRectangles.push_back({ cv::Point(175, 75), cv::Point(425, 175), cv::Point(325, 425), cv::Point(75, 325) });  // Rectangle 3
            coordonneesRectangles.push_back({ cv::Point(200, 50), cv::Point(450, 200), cv::Point(300, 450), cv::Point(50, 300) });  // Rectangle 4
            coordonneesRectangles.push_back({ cv::Point(225, 25), cv::Point(475, 225), cv::Point(275, 475), cv::Point(25, 275) });  // Rectangle 5
            coordonneesRectangles.push_back({ cv::Point(250, 0), cv::Point(500, 250), cv::Point(250, 500), cv::Point(0, 250) });  // Rectangle 6
            coordonneesRectangles.push_back({ cv::Point(275, 25), cv::Point(475, 275), cv::Point(225, 475), cv::Point(25, 225) });  // Rectangle 7
            coordonneesRectangles.push_back({ cv::Point(300, 50), cv::Point(450, 300), cv::Point(200, 450), cv::Point(50, 200) });  // Rectangle 8
            coordonneesRectangles.push_back({ cv::Point(325, 75), cv::Point(425, 325), cv::Point(175, 425), cv::Point(75, 175) });  // Rectangle 9
            coordonneesRectangles.push_back({ cv::Point(350, 100), cv::Point(400, 350), cv::Point(150, 400), cv::Point(100, 150) });  // Rectangle 10

            RectAnim.Rect(coordonneesRectangles, 800, 600);

            cv::waitKey(0);
            std::cin >> message;
        }
        
        else {
            std::cin >> message;
        }
    }

    return 0;
}




