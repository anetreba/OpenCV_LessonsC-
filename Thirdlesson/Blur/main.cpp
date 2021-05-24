//
// Created by s1000633 on 5/24/21.
//
#include "Blur.h"

int main() {
    Blur blur("opencv-logo.png");
    blur.averaging();
    blur.convolution_2d();
    blur.gaussian_blurring();
    blur.median_filtering();
    blur.bilateral_filtering();
    blur.show_blur();
    cv::waitKey(0);
    cv::destroyAllWindows();
    return 0;
}
