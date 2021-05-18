//
// Created by s1000633 on 5/18/21.
//
#include "TransformImage.h"
using namespace cv;

int main() {
    //Load image
    Mat image = cv::imread("photo.jpg");

    TransformImage transformImage(image);
    int cols = image.cols * 2;
    int rows = image.rows * 2;
    //resize image to size cols and rows
    transformImage.resize_image(cols, rows);

    constexpr int angle = 90;
    constexpr int scale = 50;
    //rotate by angle, scale, make a different border mode
    transformImage.affine_warm(angle, scale, BORDER_REFLECT);
    transformImage.show_res();

    waitKey(0);
    destroyAllWindows();
    return 0;
}
