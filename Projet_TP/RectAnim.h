#ifndef RECTANIM_H
#define RECTANIM_H

#include <opencv2/opencv.hpp>
#include <vector>

class RectAnim
{
private:

	cv::Mat image4;
	bool continuerAfficher;
	


public:
	
	void Rect(const std::vector<std::vector<cv::Point>>& coordonnees, int largeur, int hauteur);
	RectAnim();
};

#endif  // RECTANIM_H
