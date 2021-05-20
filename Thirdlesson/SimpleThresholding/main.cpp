#include <opencv2/opencv.hpp>
#include <iostream>

using namespace cv;

int main() {
    Mat image = imread("gradient.png");
    if (image.empty()) {
        std::cout << "Error loading the image" << std::endl;
        return -1;
    }

    std::array <Mat, 5> thresh;
    std::array <std::string, 6> name_window = {"Original Image","BINARY","BINARY_INV","TRUNC","TOZERO","TOZERO_INV"};

    namedWindow(name_window[0]);
    imshow(name_window[0], image);

    threshold(image, thresh[0],127,255,THRESH_BINARY);
    threshold(image, thresh[1],127,255,THRESH_BINARY_INV);
    threshold(image, thresh[2],127,255,THRESH_TRUNC);
    threshold(image, thresh[3],127,255,THRESH_TOZERO);
    threshold(image, thresh[4],127,255,THRESH_TOZERO_INV);

    for (int i = 0; i < 5; i++) {
        namedWindow(name_window[i + 1]);
        imshow(name_window[i + 1], thresh[i]);
    }
    waitKey(0);
    destroyAllWindows();
    return 0;
}
