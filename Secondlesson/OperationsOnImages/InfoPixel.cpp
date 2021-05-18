//
// Created by s1000633 on 5/17/21.
//

#include "InfoPixel.h"

InfoPixel::InfoPixel(const cv::Mat &image, int x, int y) {
    _x = x;
    _y = y;
    cv::Vec3b intensity = image.at<cv::Vec3b>(y, x);
    _blue = intensity.val[0];
    _green = intensity.val[1];
    _red = intensity.val[2];
}

void InfoPixel::print_info_pix() const {
    std::cout << "--------------------" << std::endl;
    std::cout << "Colors in position (" << _x << " ," << _y << ")" << std::endl;
    std::cout << "Blue = " << _blue << std::endl;
    std::cout << "Green = " << _green << std::endl;
    std::cout << "Red = " << _red << std::endl;
    std::cout << "--------------------" << std::endl;
}
