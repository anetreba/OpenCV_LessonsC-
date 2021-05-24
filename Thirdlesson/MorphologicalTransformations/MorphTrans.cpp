//
// Created by s1000633 on 5/24/21.
//

#include "MorphTrans.h"

MorphTrans::MorphTrans(const std::string& filename) {
    _img = cv::imread(filename);
    if (_img.empty())
        std::cout << "Can not open file" << std::endl;
}

void MorphTrans::erode() {
    cv::erode(_img, _img_erode, cv::getStructuringElement(cv::MORPH_RECT, cv::Size(5, 5)));
}

void MorphTrans::dilate() {
    cv::Mat kernel(5, 5, CV_8UC1, 1);
    cv::dilate(_img, _img_dilation, kernel);
}

void MorphTrans::erode_followed_dilation() {
    cv::Mat kernel(5, 5, CV_8UC1, 1);
    cv::morphologyEx(_img, _img_open, cv::MORPH_OPEN, kernel);
}

void MorphTrans::dilate_followed_erode() {
    cv::Mat kernel(5, 5, CV_8UC1, 1);
    cv::morphologyEx(_img, _img_close,cv::MORPH_CLOSE, kernel);
}

void MorphTrans::make_gradient() {
    cv::Mat kernel(5, 5, CV_8UC1, 1);
    cv::morphologyEx(_img, _img_gradient,cv::MORPH_GRADIENT, kernel);
}

void MorphTrans::make_top_hat() {
    cv::Mat kernel(5, 5, CV_8UC1, 1);
    cv::morphologyEx(_img, _img_top_hat,cv::MORPH_TOPHAT, kernel);
}

void MorphTrans::make_black_hat() {
    cv::Mat kernel(5, 5, CV_8UC1, 1);
    cv::morphologyEx(_img, _img_black_hat,cv::MORPH_BLACKHAT, kernel);
}

void MorphTrans::show() const {
    cv::namedWindow("image"); // Create a window
    cv::imshow("image", _img);
    if (!_img_erode.empty()) {
        cv::namedWindow("Erosion"); // Create a window
        cv::imshow("Erosion", _img_erode);
    }
    if (!_img_dilation.empty()) {
        cv::namedWindow("Dilation"); // Create a window
        cv::imshow("Dilation", _img_dilation);
    }
    if (!_img_open.empty()) {
        cv::namedWindow("Opening"); // Create a window
        cv::imshow("Opening", _img_open);
    }
    if (!_img_close.empty()) {
        cv::namedWindow("Closing"); // Create a window
        cv::imshow("Closing", _img_close);
    }
    if (!_img_gradient.empty()) {
        cv::namedWindow("Morphological Gradient"); // Create a window
        cv::imshow("Morphological Gradient", _img_gradient);
    }
    if (!_img_top_hat.empty()) {
        cv::namedWindow("Top Hat"); // Create a window
        cv::imshow("Top Hat", _img_top_hat);
    }
    if (!_img_black_hat.empty()) {
        cv::namedWindow("Black Hat"); // Create a window
        cv::imshow("Black Hat", _img_black_hat);
    }
}
