//
// Created by s1000633 on 5/18/21.
//

#ifndef OPENCV_TUTORIALS_OBJECTCATCH_H
#define OPENCV_TUTORIALS_OBJECTCATCH_H

#include <opencv2/opencv.hpp>
#include <iostream>

class ObjectCatch {
private:
    cv::Mat _imgHSV;
    cv::Mat _imgThresholded;
    cv::Mat _res;
public:
    ObjectCatch(const cv::Mat& image, const cv::Scalar& lower_b, const cv::Scalar& upper_b);
    void show_res();
};


#endif //OPENCV_TUTORIALS_OBJECTCATCH_H
