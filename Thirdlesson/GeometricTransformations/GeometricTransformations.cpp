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

    transformImage.resize_image(cols, rows);

    int angle = 90;
    int scale = 50;
    int border_mode = 0;

    transformImage.affine_warm(angle, scale, border_mode);
    transformImage.show_res();

    waitKey(0);
    destroyAllWindows();
    return 0;
}
