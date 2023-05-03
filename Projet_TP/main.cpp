#include <opencv2/core.hpp>
#include <opencv2/highgui.hpp>
#include <opencv2/imgproc.hpp>

int main()
{
    // Create a black image
    cv::Mat image(400, 400, CV_8UC3, cv::Scalar(0, 0, 0));

    // Define the rectangle
    cv::Rect rect(100, 100, 200, 150);

    // Draw the rectangle on the image
    cv::rectangle(image, rect, cv::Scalar(0, 255, 0), 2);

    // Show the image
    cv::imshow("Rectangle", image);
    cv::waitKey(0);

    return 0;
}