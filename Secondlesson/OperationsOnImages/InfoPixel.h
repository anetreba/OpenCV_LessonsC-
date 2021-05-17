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
        int x;
        int y;
        int blue;
        int green;
        int red;
    public:
        InfoPixel(cv::Mat& image, int x, int y);
        void print_info_pix();
};


#endif //OPENCV_TUTORIALS_INFOPIXEL_H
