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
    void erode(); //erode image with 5x5 kernel with full of ones
    void dilate(); //dilate image with 5x5 kernel with full of ones
    void erode_followed_dilation(); //Opening image with 5x5 kernel with full of ones
    void dilate_followed_erode(); //Closing image with 5x5 kernel with full of ones
    void make_gradient(); //Make gradient, the difference between dilation and erosion with  5x5 kernel with full of ones
    void make_top_hat(); //Make top hat, the difference between input image and Opening of the image with  5x5 kernel with full of ones
    void make_black_hat(); //Make black hat, he difference between the closing of the input image and input image with  5x5 kernel with full of ones
    void show() const; //Show all images
};


#endif //MORPHOLOGICALTRANSFORMATIONS_MORPHTRANS_H
