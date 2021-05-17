//
// Created by s1000633 on 5/13/21.
//
#include <opencv2/opencv.hpp>
using namespace cv;

void my_line(Mat img, Point start, Point end) {
    int thickness = 2;
    int lineType = LINE_4;

    // Draw a diagonal blue line with thickness of 2 px
    line(img, start, end, Scalar( 255, 0, 0 ), thickness, lineType);
}

int main() {
    Mat image(512, 512, CV_8UC3, Scalar(0, 0, 0));

    String windowName = "Window with Blank Image"; //Name of the window

    Point start(0, 0);
    Point end(511, 511);

    my_line(image, start, end);
    namedWindow(windowName); // Create a window

    imshow(windowName, image); // Show our image inside the created window.

    waitKey(0); // Wait for any keystroke in the window

    destroyWindow(windowName); //destroy the created window

    return 0;
}

