//
// Created by s1000633 on 5/20/21.
//
#include "opencv2/imgproc.hpp"
#include "opencv2/imgcodecs.hpp"
#include "opencv2/highgui.hpp"
using namespace cv;

int main() {
    //creation of two image
    Mat img1(600, 800, CV_8UC3, Scalar(240, 240, 0));
    Mat img2(600, 800, CV_8UC3, Scalar(10, 12, 240));

    //addition of two images
    Mat res;
    add(img1, img2, res);

    const char* window_name1 = "img1";
    namedWindow( window_name1, WINDOW_AUTOSIZE );
    imshow(window_name1, img1);

    const char* window_name2 = "img2";
    namedWindow( window_name2, WINDOW_AUTOSIZE );
    imshow(window_name2, img2);

    const char* window_name = "res";
    namedWindow( window_name, WINDOW_AUTOSIZE );
    imshow(window_name, res);

    waitKey(0);
    destroyAllWindows(); //destroy all windows
}
