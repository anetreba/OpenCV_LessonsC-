//
// Created by s1000633 on 5/17/21.
//

#ifndef OPENCV_TUTORIALS_IMAGEINFO_H
#define OPENCV_TUTORIALS_IMAGEINFO_H

#include <opencv2/opencv.hpp>
#include <iostream>
#include <string>

class ImageInfo {
    private:
        int _cols;
        int _rows;
        std::string _type;
    public:
        ImageInfo(const cv::Mat& image);
        std::string set_type(int type);
        void print_info();
};


#endif //OPENCV_TUTORIALS_IMAGEINFO_H
