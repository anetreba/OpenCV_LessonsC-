//
// Created by s1000633 on 5/18/21.
//
#include "ObjectCatch.h"

using namespace cv;
using namespace std;

int main() {
    //Load image
    Mat image = imread("photo.jpg");
    //define range of blue color in HSV
    Scalar lower_blue(110,50,50);
    Scalar upper_blue(130,255,255);

    ObjectCatch objectCatch(image, lower_blue, upper_blue);

    namedWindow("image"); // Create a window
    imshow("image", image);
    objectCatch.show_res();
    waitKey(0);
    destroyAllWindows();
}
