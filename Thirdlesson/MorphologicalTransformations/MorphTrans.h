//
// Created by s1000633 on 5/24/21.
//

#ifndef MORPHOLOGICALTRANSFORMATIONS_MORPHTRANS_H
#define MORPHOLOGICALTRANSFORMATIONS_MORPHTRANS_H

#include <iostream>
#include <opencv2/opencv.hpp>
#include <opencv2/imgproc/types_c.h>

class MorphTrans {
private:
    cv::Mat _img;
    cv::Mat _img_erode;
    cv::Mat _img_dilation;
    cv::Mat _img_open;
    cv::Mat _img_close;
    cv::Mat _img_gradient;
    cv::Mat _img_top_hat;
    cv::Mat _img_black_hat;
public:
    MorphTrans(const std::string& filename);
    void erode();
    void dilate();
    void erode_followed_dilation();
    void dilate_followed_erode();
    void make_gradient();
    void make_top_hat();
    void make_black_hat();
    void show() const;
};


#endif //MORPHOLOGICALTRANSFORMATIONS_MORPHTRANS_H
