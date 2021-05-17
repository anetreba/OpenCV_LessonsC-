//
// Created by s1000633 on 5/17/21.
//

#ifndef OPENCV_TUTORIALS_INFOPIXEL_H
#define OPENCV_TUTORIALS_INFOPIXEL_H

#include <opencv2/opencv.hpp>
#include <iostream>
#include <string>

class InfoPixel {
    private:
        int _x;
        int _y;
        int _blue;
        int _green;
        int _red;
    public:
        InfoPixel(const cv::Mat& image, int x, int y);
        void print_info_pix();
};


#endif //OPENCV_TUTORIALS_INFOPIXEL_H
