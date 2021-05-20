//
// Created by s1000633 on 5/19/21.
//

#ifndef MAKEBORDER_BORDER_H
#define MAKEBORDER_BORDER_H

#include "opencv2/imgproc.hpp"
#include "opencv2/imgcodecs.hpp"
#include "opencv2/highgui.hpp"
#include <iostream>

class Border {
private:
    int _top;
    int _bottom;
    int _left;
    int _right;
    cv::Scalar _color;
    cv::Mat _image_border;
    int _border_type;
public:
    void set_size_params(int top, int bottom, int left, int right);
    void set_border_type(int border_type);
    void set_color(const cv::Scalar& color);
    void make_border_and_show(const cv::Mat& src);
};


#endif //MAKEBORDER_BORDER_H
