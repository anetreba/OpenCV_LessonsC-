//
// Created by s1000633 on 5/13/21.
//
#include <opencv2/opencv.hpp>
using namespace cv;
constexpr int width = 512;


void MyEllipse( Mat img, double angle, Point center, Point axes) {
    int thickness = 2;

    //draw an red ellipse
    ellipse(img, center, axes, angle, 0, 360, Scalar( 0, 0, 255 ), thickness, LINE_8);
}

void MyPolygon( Mat img ) {
    int lineType = LINE_8;

    //initialize a raw of the point for drawing a Rook
    Point rook_points[1][20];
    rook_points[0][0]  = Point(    width/4,   7*width/8 );
    rook_points[0][1]  = Point(  3*width/4,   7*width/8 );
    rook_points[0][2]  = Point(  3*width/4,  13*width/16 );
    rook_points[0][3]  = Point( 11*width/16, 13*width/16 );
    rook_points[0][4]  = Point( 19*width/32,  3*width/8 );
    rook_points[0][5]  = Point(  3*width/4,   3*width/8 );
    rook_points[0][6]  = Point(  3*width/4,     width/8 );
    rook_points[0][7]  = Point( 26*width/40,    width/8 );
    rook_points[0][8]  = Point( 26*width/40,    width/4 );
    rook_points[0][9]  = Point( 22*width/40,    width/4 );
    rook_points[0][10] = Point( 22*width/40,    width/8 );
    rook_points[0][11] = Point( 18*width/40,    width/8 );
    rook_points[0][12] = Point( 18*width/40,    width/4 );
    rook_points[0][13] = Point( 14*width/40,    width/4 );
    rook_points[0][14] = Point( 14*width/40,    width/8 );
    rook_points[0][15] = Point(    width/4,     width/8 );
    rook_points[0][16] = Point(    width/4,   3*width/8 );
    rook_points[0][17] = Point( 13*width/32,  3*width/8 );
    rook_points[0][18] = Point(  5*width/16, 13*width/16 );
    rook_points[0][19] = Point(    width/4,  13*width/16 );
    const Point* ppt[1] = { rook_points[0] };
    int npt[] = { 20 };
    //draw a polygon for this raw of the points
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
            width/32,
            Scalar( 0, 0, 255 ),
            FILLED,
            LINE_8 );
    namedWindow(windowName); // Create a window

    imshow(windowName, image); // Show our image inside the created window.

    waitKey(0); // Wait for any keystroke in the window

    destroyWindow(windowName); //destroy the created window

    return 0;
}
