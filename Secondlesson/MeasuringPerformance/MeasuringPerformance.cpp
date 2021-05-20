//
// Created by s1000633 on 5/20/21.
//

#include <opencv2/opencv.hpp>
#include <iostream>

using namespace cv;
using namespace std;

int main() {
    Mat src = imread("opencv-logo.png", IMREAD_COLOR); // Load an image
    int64 e1 = getTickCount(); //Returns the number of ticks per second

    for (int i = 5; i < 49; i += 2)
        medianBlur(src, src, i); //MedianBlur filter
    int64 e2 = getTickCount(); //Returns the number of ticks per second
    double t = e2 - e1;
    t /= getTickFrequency(); //Count time

    cout << "Time = " << t << endl;
    return 0;
}
