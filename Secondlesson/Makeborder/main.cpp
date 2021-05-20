#include <iostream>
//
// Created by s1000633 on 5/17/21.
//
#include "Border.h"
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
    RNG rng(12345);
    // Check if image is loaded fine
    if(src.empty()) {
        printf("Error opening image\n");
        return -1;
    }
    print_info_of_prog();

    Border border;
    // Initialize arguments for make border
    int top = src.rows / 6;
    int bottom = top;
    int left = src.cols / 6;
    int right = left;
    border.set_size_params(top, bottom, left, right);
    border.set_border_type(BORDER_CONSTANT);

    while (1) {
        border.set_color(Scalar(rng.uniform(0, 255), rng.uniform(0, 255), rng.uniform(0, 255)));
        border.make_border_and_show(src);
        int c = waitKey(500);
        if (c == 27)
            break;
        else if (c == 'c')
            border.set_border_type(BORDER_CONSTANT);
        else if( c == 'r' )
            border.set_border_type(BORDER_REPLICATE);
    }
    destroyAllWindows(); //destroy the created window
    return 0;
}
