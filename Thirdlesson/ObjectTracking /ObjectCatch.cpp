//
// Created by s1000633 on 5/18/21.
//

#include "ObjectCatch.h"

ObjectCatch::ObjectCatch(const cv::Mat &image, const cv::Scalar& lower_b, const cv::Scalar& upper_b) {
    cv::cvtColor(image, _imgHSV, cv::COLOR_BGR2HSV); //Convert the captured frame from BGR to HSV
    cv::inRange(_imgHSV, lower_b, upper_b, _imgThresholded); //Threshold the HSV image to get only blue colors
    cv::bitwise_and(image,image,_res, _imgThresholded); // Bitwise-AND mask and original image
}

void ObjectCatch::show_res() {
    cv::namedWindow("mask"); // Create a window
    cv::imshow("mask", _imgThresholded);
    cv::namedWindow("res"); // Create a window
    cv::imshow("res", _res);
}
