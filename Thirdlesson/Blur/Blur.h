//
// Created by s1000633 on 5/24/21.
//

#ifndef OPENCV_C_BLUR_H
#define OPENCV_C_BLUR_H

#include <iostream>
#include <opencv2/opencv.hpp>
#include <opencv2/imgproc/types_c.h>

class Blur {
private:
    cv::Mat _image;
    cv::Mat _image_2d_conv;
    cv::Mat _image_averag;
    cv::Mat _image_gauss;
    cv::Mat _image_median;
    cv::Mat _image_bilateral;
public:
    Blur(const std::string& filename);
    void convolution_2d();
    void averaging();
    void gaussian_blurring();
    void median_filtering();
    void bilateral_filtering();
    void show_blur() const;
};


#endif //OPENCV_C_BLUR_H
