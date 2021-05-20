//
// Created by s1000633 on 5/17/21.
//

#include "ImageInfo.h"

ImageInfo::ImageInfo(const cv::Mat& image) {
    _cols = image.cols;
    _rows = image.rows;
    _type = set_type(image.type());
}

//function to make a string which represent type of image
std::string ImageInfo::set_type(int type) {
    std::string r;

    uchar depth = type & CV_MAT_DEPTH_MASK;
    uchar chans = 1 + (type >> CV_CN_SHIFT);

    switch (depth) {
        case CV_8U:
            r = "8U";
            break;
        case CV_8S:
            r = "8S";
            break;
        case CV_16U:
            r = "16U";
            break;
        case CV_16S:
            r = "16S";
            break;
        case CV_32S:
            r = "32S";
            break;
        case CV_32F:
            r = "32F";
            break;
        case CV_64F:
            r = "64F";
            break;
        default:
            r = "User";
            break;
    }
    r += "C";
    r += (chans + '0');
    return r;
}

void ImageInfo::print_info() const{
    std::cout << "--------------------" << std::endl;
    std::cout << "Width : " << _cols << std::endl;
    std::cout << "Height: " << _rows << std::endl;
    std::cout << "Type: " << _type << std::endl;
    std::cout << "--------------------" << std::endl;
}
