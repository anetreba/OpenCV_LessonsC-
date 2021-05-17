//
// Created by s1000633 on 5/17/21.
//
#include "ImageInfo.h"
#include "InfoPixel.h"
using namespace cv;
using namespace std;

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

    //Set info of image
    ImageInfo imageInfo(image);
    imageInfo.print_info();

    //coordinate for pixel
    int x = 0;
    int y = 0;

    //values for blue, green, red in position (x, y)
    InfoPixel infoPixel(image, x, y);
    infoPixel.print_info_pix();

    String windowName = "The Image"; //Name of the window
    namedWindow(windowName); // Create a window
    imshow(windowName, image); // Show our image inside the created window.

    waitKey(0); // Wait for any keystroke in the window

    destroyWindow(windowName); //destroy the created window

    return 0;
}

