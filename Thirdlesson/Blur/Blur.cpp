//
// Created by s1000633 on 5/24/21.
//

#include "Blur.h"

Blur::Blur(const std::string &filename) {
    _image = cv::imread(filename);
}

void Blur::averaging() {
    cv::blur(_image, _image_averag, cv::Size(5, 5));
}

void Blur::convolution_2d() {
    cv::Mat kernel(5, 5, CV_32FC1, 0.4);
    cv::filter2D(_image,_image_2d_conv,-1,kernel);
}

void Blur::gaussian_blurring() {
    cv::GaussianBlur(_image, _image_gauss, cv::Size(5, 5), 0);
}

void Blur::median_filtering() {
    cv::medianBlur(_image, _image_median, 5);
}

void Blur::bilateral_filtering() {
    cv::bilateralFilter(_image, _image_bilateral, 9, 75, 75);
}

void Blur::show_blur() const {
    cv::namedWindow("image"); // Create a window
    cv::imshow("image", _image);
    if (!_image_averag.empty()) {
        cv::namedWindow("averaging"); // Create a window
        cv::imshow("averaging", _image_averag);
    }
    if (!_image_2d_conv.empty()) {
        cv::namedWindow("2D Convolution"); // Create a window
        cv::imshow("2D Convolution", _image_averag);
    }
    if (!_image_gauss.empty()) {
        cv::namedWindow("Gaussian Blurring"); // Create a window
        cv::imshow("Gaussian Blurring", _image_gauss);
    }
    if (!_image_median.empty()) {
        cv::namedWindow("Median Blurring"); // Create a window
        cv::imshow("Median Blurring", _image_median);
    }
    if (!_image_bilateral.empty()) {
        cv::namedWindow("Bilateral Filtering"); // Create a window
        cv::imshow("Bilateral Filtering", _image_bilateral);
    }
}
