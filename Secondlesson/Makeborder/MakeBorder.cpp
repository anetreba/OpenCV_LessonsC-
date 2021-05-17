//
// Created by s1000633 on 5/17/21.
//
#include "opencv2/imgproc.hpp"
#include "opencv2/imgcodecs.hpp"
#include "opencv2/highgui.hpp"
#include <iostream>
using namespace cv;
using namespace std;

void print_info_of_prog() {
    // Brief how-to for this program
    cout <<  "\n \t \t MAKE A BORDER: \n";
    cout << "\t \t ************* \n";
    cout << " ** Press 'c' to set the border to a random constant value \n";
    cout <<" ** Press 'r' to set the border to be replicated \n";
    cout << " ** Press 'ESC' to exit the program \n";
}

int main() {
    // Loads an image
    Mat src = imread("opencv-logo.png", IMREAD_COLOR); // Load an image
    Mat dst;
    int borderType = BORDER_CONSTANT;
    RNG rng(12345);
    // Check if image is loaded fine
    if( src.empty()) {
        printf("Error opening image\n");
        return -1;
    }
    print_info_of_prog();

    const char* window_name = "copyMakeBorder";
    namedWindow( window_name, WINDOW_AUTOSIZE );
    // Initialize arguments for make border
    int top = src.rows / 6;
    int bottom = top;
    int left = src.cols / 6;
    int right = left;
    while (1) {
        Scalar value(rng.uniform(0, 255), rng.uniform(0, 255), rng.uniform(0, 255));

        copyMakeBorder(src, dst, top, bottom, left, right, borderType, value);
        imshow(window_name, dst);
        int c = waitKey(500);
        if (c == 27)
            break;
        else if (c == 'c')
            borderType = BORDER_CONSTANT;
        else if( c == 'r' )
            borderType = BORDER_REPLICATE;
    }
    destroyWindow(window_name); //destroy the created window
    return 0;
}
