//
// Created by s1000633 on 5/13/21.
//

#include <opencv2/opencv.hpp>
using namespace cv;

void my_rect(Mat img, Point start, Point end) {
    // Draw a green rectangle with thickness of 5 px
    rectangle(img, start, end,Scalar( 0, 255, 0 ) , FILLED , LINE_8);
}

int main() {
    Mat image(512, 512, CV_8UC3, Scalar(0, 0, 0));

    String windowName = "Window with Blank Image"; //Name of the window

    Point start(2, 2);
    Point end(256, 256);

    my_rect(image, start, end);
    namedWindow(windowName); // Create a window

    imshow(windowName, image); // Show our image inside the created window.

    waitKey(0); // Wait for any keystroke in the window

    destroyWindow(windowName); //destroy the created window

    return 0;
}
