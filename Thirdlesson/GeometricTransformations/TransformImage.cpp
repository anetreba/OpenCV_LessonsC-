//
// Created by s1000633 on 5/18/21.
//

#include "TransformImage.h"

TransformImage::TransformImage(const cv::Mat& image) {
    _image = image;
}

void TransformImage::resize_image(int cols, int rows) {
    cv::resize(_image, _res_resize, cv::Size(cols, rows), 1, 1, cv::INTER_CUBIC);
}

void TransformImage::show_res() const {
    cv::namedWindow("image"); // Create a window
    cv::imshow("image", _image);
    if (!_res_resize.empty()) {
        cv::namedWindow("resized"); // Create a window
        cv::imshow("resized", _res_resize);
    }
    if (!_res_affine.empty()) {
        cv::namedWindow("rotate affine"); // Create a window
        cv::imshow("rotate affine", _res_affine);
    }
}

void TransformImage::affine_warm(int angle, int scale, int border_mode) {
    int imageCenterY = _image.rows / 2;
    int imageCenterX = _image.cols / 2;

    cv::Mat matRotation = cv::getRotationMatrix2D(cv::Point(imageCenterX, imageCenterY), angle - 180, scale / 50 );

    // Rotate the image
    cv::warpAffine(_image, _res_affine, matRotation, _image.size(), cv::INTER_LINEAR, border_mode);
}
