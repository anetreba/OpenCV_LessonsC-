//
// Created by s1000633 on 5/19/21.
//

#include "Border.h"

void Border::set_size_params(int top, int bottom, int left, int right) {
    _top = top;
    _bottom = bottom;
    _left = left;
    _right = right;
}

void Border::set_border_type(int border_type) {
    _border_type = border_type;
}

void Border::set_color(const cv::Scalar& color) {
    _color = color;
}

void Border::make_border_and_show(const cv::Mat& src) {
    cv::copyMakeBorder(src, _image_border, _top, _bottom, _left, _right, _border_type, _color);
    namedWindow("Image with border", cv::WINDOW_AUTOSIZE);
    cv::imshow("Image with border", _image_border);
}
