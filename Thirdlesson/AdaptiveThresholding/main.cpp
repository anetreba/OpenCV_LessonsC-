#include <iostream>
#include <opencv2/opencv.hpp>
#include <opencv2/imgproc/types_c.h>
using namespace cv;

int main() {
    Mat image = imread("sudoku.png");
    if (image.empty()) {
        std::cout << "Can not open image" << std::endl;
    }
    medianBlur(image, image,5);

    Mat OneChannel;
    cvtColor(image, OneChannel, CV_BGR2GRAY);
    std::array<Mat, 3> images;
    std::array<std::string, 4> name_window = {"Original Image", "Global Thresholding (v = 127)",
                                              "Adaptive Mean Thresholding", "Adaptive Gaussian Thresholding"};

    threshold(image,images[0], 127,255,THRESH_BINARY);
    adaptiveThreshold(OneChannel,images[1], 255,ADAPTIVE_THRESH_MEAN_C, THRESH_BINARY,11,2);
    adaptiveThreshold(OneChannel,images[2], 255,ADAPTIVE_THRESH_GAUSSIAN_C, THRESH_BINARY,11,2);

    namedWindow(name_window[0]);
    imshow(name_window[0], image);
    for (int i = 0; i < images.size(); i++) {
        namedWindow(name_window[i + 1]);
        imshow(name_window[i + 1], images[i]);
    }
    waitKey(0);
    destroyAllWindows();
    return 0;
}
