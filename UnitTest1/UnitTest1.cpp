#include "pch.h"
#include "CppUnitTest.h"
#include <opencv2/opencv.hpp>
#include "../Projet_TP/main.cpp"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace UniteTest
{
    TEST_CLASS(UnitTest)
    {
    public:
        TEST_METHOD(TestDessinerLigne_Longueur5)
        {
            // Crée un objet cercle avec les paramètres spécifiés : couleur verte, centre (250, 250), rayon 100 et épaisseur du contour 3
            Cercle cercle(cv::Scalar(255, 255, 0), cv::Point(250, 250), 100, 3);
            // Dessine le cercle sur l'image
            cercle.dessiner();

            // TODO: Ajouter des assertions pour vérifier l'image résultante
            // Exemple : vérifier les pixels de l'image ou comparer avec une image de référence
            Assert::Fail(L"Not implemented");
        }

        TEST_METHOD(TestDessinerLigne_Longueur10)
        {
            // Définit un rectangle avec les coordonnées (125, 125), largeur 250 et hauteur 250
            Rectangle rect(cv::Scalar(0, 255, 0), cv::Rect(125, 125, 250, 250), 3);
            //dessine le rectangle sur l'image
            rect.dessiner();

            // TODO: Ajouter des assertions pour vérifier l'image résultante
            // Exemple : vérifier les pixels de l'image ou comparer avec une image de référence
            Assert::Fail(L"Not implemented");
        }
    };
}