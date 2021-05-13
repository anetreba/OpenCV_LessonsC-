//
// Created by s1000633 on 5/13/21.
//
#include <opencv2/opencv.hpp>
using namespace cv;
#define w 512

void MyEllipse( Mat img, double angle, Point center, Point axes) {
    int thickness = 2;

    ellipse(img, center, axes, angle, 0, 360, Scalar( 0, 0, 255 ), thickness, LINE_8);
}

void MyPolygon( Mat img ) {
    int lineType = LINE_8;

    Point rook_points[1][20];
    rook_points[0][0]  = Point(    w/4,   7*w/8 );
    rook_points[0][1]  = Point(  3*w/4,   7*w/8 );
    rook_points[0][2]  = Point(  3*w/4,  13*w/16 );
    rook_points[0][3]  = Point( 11*w/16, 13*w/16 );
    rook_points[0][4]  = Point( 19*w/32,  3*w/8 );
    rook_points[0][5]  = Point(  3*w/4,   3*w/8 );
    rook_points[0][6]  = Point(  3*w/4,     w/8 );
    rook_points[0][7]  = Point( 26*w/40,    w/8 );
    rook_points[0][8]  = Point( 26*w/40,    w/4 );
    rook_points[0][9]  = Point( 22*w/40,    w/4 );
    rook_points[0][10] = Point( 22*w/40,    w/8 );
    rook_points[0][11] = Point( 18*w/40,    w/8 );
    rook_points[0][12] = Point( 18*w/40,    w/4 );
    rook_points[0][13] = Point( 14*w/40,    w/4 );
    rook_points[0][14] = Point( 14*w/40,    w/8 );
    rook_points[0][15] = Point(    w/4,     w/8 );
    rook_points[0][16] = Point(    w/4,   3*w/8 );
    rook_points[0][17] = Point( 13*w/32,  3*w/8 );
    rook_points[0][18] = Point(  5*w/16, 13*w/16 );
    rook_points[0][19] = Point(    w/4,  13*w/16 );
    const Point* ppt[1] = { rook_points[0] };
    int npt[] = { 20 };
    fillPoly( img,
              ppt,
              npt,
              1,
              Scalar( 255, 255, 255 ),
              lineType );
}

int main() {
    Mat image(512, 512, CV_8UC3, Scalar(0, 0, 0));

    String windowName = "Window with Blank Image"; //Name of the window

    Point center(256, 256);
    Point axes(128, 32);

    MyPolygon(image);
    MyEllipse(image, 90, center, axes);
    MyEllipse( image, 0 , center, axes);
    MyEllipse( image, 45 , center, axes);
    MyEllipse( image, -45 , center, axes);
    circle( image,
            center,
            w/32,
            Scalar( 0, 0, 255 ),
            FILLED,
            LINE_8 );
    namedWindow(windowName); // Create a window

    imshow(windowName, image); // Show our image inside the created window.

    waitKey(0); // Wait for any keystroke in the window

    destroyWindow(windowName); //destroy the created window

    return 0;
}
