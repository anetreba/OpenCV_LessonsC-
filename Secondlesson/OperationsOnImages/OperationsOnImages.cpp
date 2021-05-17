//
// Created by s1000633 on 5/17/21.
//
#include <opencv2/opencv.hpp>
#include <iostream>

using namespace cv;
using namespace std;

//function to make a string which represent type of image
string type2str(int type) {
    string r;

    uchar depth = type & CV_MAT_DEPTH_MASK;
    uchar chans = 1 + (type >> CV_CN_SHIFT);

    switch ( depth ) {
        case CV_8U:
            r = "8U";
            break;
        case CV_8S:
            r = "8S";
            break;
        case CV_16U:
            r = "16U";
            break;
        case CV_16S:
            r = "16S";
            break;
        case CV_32S:
            r = "32S";
            break;
        case CV_32F:
            r = "32F";
            break;
        case CV_64F:
            r = "64F";
            break;
        default:
            r = "User";
            break;
    }
    r += "C";
    r += (chans + '0');
    return r;
}

int main(int argc, char** argv)

{
    // Read the image file
    Mat image = imread("roi.jpg");

    // Check for failure
    if (image.empty()) {
        cout << "Could not open or find the image" << endl;
        cin.get(); //wait for any key press
        return -1;
    }

    //coordinate for pixel
    int x = 0;
    int y = 0;
    //values for blue, green, red in position (x, y)
    Vec3b intensity = image.at<Vec3b>(y, x);
    int blue = intensity.val[0];
    int green = intensity.val[1];
    int red = intensity.val[2];

    cout << "Blue = " << blue << endl;
    cout << "Green = " << green << endl;
    cout << "Red = " << red << endl;

    //image size
    cout << "Width : " << image.cols << endl;
    cout << "Height: " << image.rows << endl;

    int type = image.type();
    cout << "Type: " << type2str(type) << endl;

    String windowName = "The Image"; //Name of the window
    namedWindow(windowName); // Create a window
    imshow(windowName, image); // Show our image inside the created window.

    waitKey(0); // Wait for any keystroke in the window

    destroyWindow(windowName); //destroy the created window

    return 0;
}

