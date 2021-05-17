//
// Created by s1000633 on 5/17/21.
//

#include "InfoPixel.h"

InfoPixel::InfoPixel(cv::Mat &image, int x, int y) {
    this->x = x;
    this->y = y;
    cv::Vec3b intensity = image.at<cv::Vec3b>(y, x);
    blue = intensity.val[0];
    green = intensity.val[1];
    red = intensity.val[2];
}

void InfoPixel::print_info_pix() {
    std::cout << "--------------------" << std::endl;
    std::cout << "Colors in position (" << x << " ," << y << ")" << std::endl;
    std::cout << "Blue = " << blue << std::endl;
    std::cout << "Green = " << green << std::endl;
    std::cout << "Red = " << red << std::endl;
    std::cout << "--------------------" << std::endl;
}
