#ifndef TRIANGLE_H
#define TRIANGLE_H

#include <opencv2/opencv.hpp>


class Triangle
{
private:

	cv::Mat image3;
	cv::Scalar couleur;
	cv::Point sommet1;
	cv::Point sommet2;
	cv::Point sommet3;
	int epaisseur;

public :

	Triangle(cv::Scalar couleurTriangle, cv::Point sommet1Triangle, cv::Point sommet2Triangle, cv::Point sommet3Triangle, int epaisseurTriangle);
	void dessiner();
};

#endif  // TRIANGLE_H


