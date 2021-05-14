//
// Created by s1000633 on 5/13/21.
//

#include <opencv2/opencv.hpp>
#include "opencv2/highgui/highgui.hpp"
#include <iostream>

using namespace std;
using namespace cv;
bool mode = true;

void CallBackFunc(int event, int x, int y, int flags, void* userdata)
{
    Mat image = *((Mat *)userdata);
    static bool drawing = false;
    static int ix = -1;
    static int iy = -1;

    if  ( event == EVENT_LBUTTONDOWN )
    {
        drawing = true;
        ix = x;
        iy = y;
        //Left button of the mouse is clicked - position  (x, y)  and start to paint figure
    }
    else if ( event == EVENT_MOUSEMOVE ) {
        if (drawing) {
            if (mode) {
                //draw a red rectangle in a position of the mouse when middle button is clicked
                rectangle(image, Point(ix, iy), Point(x, y), Scalar(0, 0, 255), FILLED, LINE_8);
            }
            else {
                //draw a white circle in a position of the mouse when left button is clicked
                circle(image, Point(x, y), 16, Scalar(255, 255, 255), FILLED, LINE_8);
            }
        }
    }
    else if (event == EVENT_LBUTTONUP) {
        drawing = false;
        if (mode) {
            //draw a red rectangle in a position of the mouse when middle button is clicked
            rectangle(image, Point(ix, iy), Point(x, y), Scalar(0, 0, 255), FILLED, LINE_8);
        }
        else {
            //draw a white circle in a position of the mouse when left button is clicked
            circle(image, Point(x, y), 16, Scalar(255, 255, 255), FILLED, LINE_8);
        }
    }
}

int main(int argc, char** argv)
{
    //create a new image which consists of
    //3 channels
    //image depth of 8 bits
    //800 x 600 of resolution (800 wide and 600 high)
    //each pixels initialized to the value of (100, 250, 30) for Blue, Green and Red planes respectively.
    Mat img(600, 800, CV_8UC3, Scalar(100, 250, 30));

    //if fail to read the image
    if ( img.empty() )
    {
        cout << "Error loading the image" << endl;
        return -1;
    }

    //Create a window
    namedWindow("My Window", 1);

    //set the callback function for any mouse event
    setMouseCallback("My Window", CallBackFunc, &img);

    // Wait until user press esc key
    while (waitKey(10) != 27) {
        //show the image
        imshow("My Window", img);
        //wait press 'm' to shange mode of drawing
        if (waitKey(10) == 'm')
            mode = !mode;
    }
    return 0;

}
