//
// Created by s1000633 on 5/14/21.
//

#include "opencv2/imgproc/imgproc.hpp"
#include "opencv2/highgui/highgui.hpp"
#include <iostream>

using namespace std;
using namespace cv;

int main(int argc, char** argv) {
    //create a new image which consists of
    //3 channels
    //image depth of 8 bits
    //800 x 600 of resolution (800 wide and 600 high)
    //each pixels initialized to the value of (300, 512, 3) for Blue, Green and Red planes respectively.
    Mat img(600, 800, CV_8UC3, Scalar(0, 0, 0));

    //if fail to read the image
    if (img.empty()) {
        cout << "Error loading the image" << endl;
        return -1;
    }

    //Create a window
    namedWindow("My Window", 1);

    int iValueForRed = 0;
    int iValueForGreen = 0;
    int iValueForBlue = 0;
    int iValueForSwitch = 0;

    //Create track bar to change red
    createTrackbar("Red", "My Window", &iValueForRed, 255);
    //Create track bar to change green
    createTrackbar("Green", "My Window", &iValueForGreen, 255);
    //Create track bar to change blue

    createTrackbar("Blue", "My Window", &iValueForBlue, 255);

    // create switch for ON/OFF functionality
    createTrackbar("0 : OFF \n1 : ON", "My Window", &iValueForSwitch, 1);

    // Wait until user press esc key
    while (waitKey(10) != 27) {
        //show the image
        imshow("My Window", img);
        //if trackbar switch is on, change color of the image
        if (iValueForSwitch) {
            img.setTo(Scalar(iValueForBlue, iValueForGreen, iValueForRed));
        }
    }
    destroyWindow("My Window");
    return 0;
}
