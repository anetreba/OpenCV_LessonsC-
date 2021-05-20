//
// Created by s1000633 on 5/20/21.
//
#include <opencv2/opencv.hpp>
#include "opencv2/imgcodecs.hpp"
#include "opencv2/highgui.hpp"
#include <iostream>
using namespace cv;

int main()
{
    double alpha = 0.5;
    double beta = 0.3;
    Mat dst;

    //Load images
    Mat src1 = imread( samples::findFile("1.jpg") );
    Mat src2 = imread( samples::findFile("2.jpg") );
    resize(src2, src2, src1.size());

    if(src1.empty()) {
        std::cout << "Error loading src1" << std::endl;
        return EXIT_FAILURE;
    }

    if(src2.empty()) {
        std::cout << "Error loading src2" << std::endl;
        return EXIT_FAILURE;
    }
    //Image Blending
    addWeighted( src1, alpha, src2, beta, 0.0, dst);
    imshow( "Linear Blend", dst );
    waitKey(0);
    destroyAllWindows(); //destroy all windows
    return 0;
}vvvvvvvvvv#include <opencv2/opencv.hpp>
#include "opencv2/imgcodecs.hpp"
#include "opencv2/highgui.hpp"
#include <iostream>
using namespace cv;

int main()
{
    double alpha = 0.5;
    double beta = 0.3;
    Mat dst;

    //Load images
    Mat src1 = imread( samples::findFile("1.jpg") );
    Mat src2 = imread( samples::findFile("2.jpg") );
    resize(src2, src2, src1.size());

    if(src1.empty()) {
        std::cout << "Error loading src1" << std::endl;
        return EXIT_FAILURE;
    }

    if(src2.empty()) {
        std::cout << "Error loading src2" << std::endl;
        return EXIT_FAILURE;
    }
    //Image Blending
    addWeighted( src1, alpha, src2, beta, 0.0, dst);
    imshow( "Linear Blend", dst );
    waitKey(0);
    destroyAllWindows(); //destroy all windows
    return 0;
}#include <opencv2/opencv.hpp>
#include "opencv2/imgcodecs.hpp"
#include "opencv2/highgui.hpp"
#include <iostream>
using namespace cv;

int main()
{
    double alpha = 0.5;
    double beta = 0.3;
    Mat dst;

    //Load images
    Mat src1 = imread( samples::findFile("1.jpg") );
    Mat src2 = imread( samples::findFile("2.jpg") );
    resize(src2, src2, src1.size());

    if(src1.empty()) {
        std::cout << "Error loading src1" << std::endl;
        return EXIT_FAILURE;
    }

    if(src2.empty()) {
        std::cout << "Error loading src2" << std::endl;
        return EXIT_FAILURE;
    }
    //Image Blending
    addWeighted( src1, alpha, src2, beta, 0.0, dst);
    imshow( "Linear Blend", dst );
    waitKey(0);
    destroyAllWindows(); //destroy all windows
    return 0;
}#include <opencv2/opencv.hpp>
#include "opencv2/imgcodecs.hpp"
#include "opencv2/highgui.hpp"
#include <iostream>
using namespace cv;

int main()
{
    double alpha = 0.5;
    double beta = 0.3;
    Mat dst;

    //Load images
    Mat src1 = imread( samples::findFile("1.jpg") );
    Mat src2 = imread( samples::findFile("2.jpg") );
    resize(src2, src2, src1.size());

    if(src1.empty()) {
        std::cout << "Error loading src1" << std::endl;
        return EXIT_FAILURE;
    }

    if(src2.empty()) {
        std::cout << "Error loading src2" << std::endl;
        return EXIT_FAILURE;
    }
    //Image Blending
    addWeighted( src1, alpha, src2, beta, 0.0, dst);
    imshow( "Linear Blend", dst );
    waitKey(0);
    destroyAllWindows(); //destroy all windows
    return 0;
}#include <opencv2/opencv.hpp>
#include "opencv2/imgcodecs.hpp"
#include "opencv2/highgui.hpp"
#include <iostream>
using namespace cv;

int main()
{
    double alpha = 0.5;
    double beta = 0.3;
    Mat dst;

    //Load images
    Mat src1 = imread( samples::findFile("1.jpg") );
    Mat src2 = imread( samples::findFile("2.jpg") );
    resize(src2, src2, src1.size());

    if(src1.empty()) {
        std::cout << "Error loading src1" << std::endl;
        return EXIT_FAILURE;
    }

    if(src2.empty()) {
        std::cout << "Error loading src2" << std::endl;
        return EXIT_FAILURE;
    }
    //Image Blending
    addWeighted( src1, alpha, src2, beta, 0.0, dst);
    imshow( "Linear Blend", dst );
    waitKey(0);
    destroyAllWindows(); //destroy all windows
    return 0;
}#include <opencv2/opencv.hpp>
#include "opencv2/imgcodecs.hpp"
#include "opencv2/highgui.hpp"
#include <iostream>
using namespace cv;

int main()
{
    double alpha = 0.5;
    double beta = 0.3;
    Mat dst;

    //Load images
    Mat src1 = imread( samples::findFile("1.jpg") );
    Mat src2 = imread( samples::findFile("2.jpg") );
    resize(src2, src2, src1.size());

    if(src1.empty()) {
        std::cout << "Error loading src1" << std::endl;
        return EXIT_FAILURE;
    }

    if(src2.empty()) {
        std::cout << "Error loading src2" << std::endl;
        return EXIT_FAILURE;
    }
    //Image Blending
    addWeighted( src1, alpha, src2, beta, 0.0, dst);
    imshow( "Linear Blend", dst );
    waitKey(0);
    destroyAllWindows(); //destroy all windows
    return 0;
}#include <opencv2/opencv.hpp>
#include "opencv2/imgcodecs.hpp"
#include "opencv2/highgui.hpp"
#include <iostream>
using namespace cv;

int main()
{
    double alpha = 0.5;
    double beta = 0.3;
    Mat dst;

    //Load images
    Mat src1 = imread( samples::findFile("1.jpg") );
    Mat src2 = imread( samples::findFile("2.jpg") );
    resize(src2, src2, src1.size());

    if(src1.empty()) {
        std::cout << "Error loading src1" << std::endl;
        return EXIT_FAILURE;
    }

    if(src2.empty()) {
        std::cout << "Error loading src2" << std::endl;
        return EXIT_FAILURE;
    }
    //Image Blending
    addWeighted( src1, alpha, src2, beta, 0.0, dst);
    imshow( "Linear Blend", dst );
    waitKey(0);
    destroyAllWindows(); //destroy all windows
    return 0;
}#include <opencv2/opencv.hpp>
#include "opencv2/imgcodecs.hpp"
#include "opencv2/highgui.hpp"
#include <iostream>
using namespace cv;

int main()
{
    double alpha = 0.5;
    double beta = 0.3;
    Mat dst;

    //Load images
    Mat src1 = imread( samples::findFile("1.jpg") );
    Mat src2 = imread( samples::findFile("2.jpg") );
    resize(src2, src2, src1.size());

    if(src1.empty()) {
        std::cout << "Error loading src1" << std::endl;
        return EXIT_FAILURE;
    }

    if(src2.empty()) {
        std::cout << "Error loading src2" << std::endl;
        return EXIT_FAILURE;
    }
    //Image Blending
    addWeighted( src1, alpha, src2, beta, 0.0, dst);
    imshow( "Linear Blend", dst );
    waitKey(0);
    destroyAllWindows(); //destroy all windows
    return 0;
}#include <opencv2/opencv.hpp>
#include "opencv2/imgcodecs.hpp"
#include "opencv2/highgui.hpp"
#include <iostream>
using namespace cv;

int main()
{
    double alpha = 0.5;
    double beta = 0.3;
    Mat dst;

    //Load images
    Mat src1 = imread( samples::findFile("1.jpg") );
    Mat src2 = imread( samples::findFile("2.jpg") );
    resize(src2, src2, src1.size());

    if(src1.empty()) {
        std::cout << "Error loading src1" << std::endl;
        return EXIT_FAILURE;
    }

    if(src2.empty()) {
        std::cout << "Error loading src2" << std::endl;
        return EXIT_FAILURE;
    }
    //Image Blending
    addWeighted( src1, alpha, src2, beta, 0.0, dst);
    imshow( "Linear Blend", dst );
    waitKey(0);
    destroyAllWindows(); //destroy all windows
    return 0;
}#include <opencv2/opencv.hpp>
#include "opencv2/imgcodecs.hpp"
#include "opencv2/highgui.hpp"
#include <iostream>
using namespace cv;

int main()
{
    double alpha = 0.5;
    double beta = 0.3;
    Mat dst;

    //Load images
    Mat src1 = imread( samples::findFile("1.jpg") );
    Mat src2 = imread( samples::findFile("2.jpg") );
    resize(src2, src2, src1.size());

    if(src1.empty()) {
        std::cout << "Error loading src1" << std::endl;
        return EXIT_FAILURE;
    }

    if(src2.empty()) {
        std::cout << "Error loading src2" << std::endl;
        return EXIT_FAILURE;
    }
    //Image Blending
    addWeighted( src1, alpha, src2, beta, 0.0, dst);
    imshow( "Linear Blend", dst );
    waitKey(0);
    destroyAllWindows(); //destroy all windows
    return 0;
}#include <opencv2/opencv.hpp>
#include "opencv2/imgcodecs.hpp"
#include "opencv2/highgui.hpp"
#include <iostream>
using namespace cv;

int main()
{
    double alpha = 0.5;
    double beta = 0.3;
    Mat dst;

    //Load images
    Mat src1 = imread( samples::findFile("1.jpg") );
    Mat src2 = imread( samples::findFile("2.jpg") );
    resize(src2, src2, src1.size());

    if(src1.empty()) {
        std::cout << "Error loading src1" << std::endl;
        return EXIT_FAILURE;
    }

    if(src2.empty()) {
        std::cout << "Error loading src2" << std::endl;
        return EXIT_FAILURE;
    }
    //Image Blending
    addWeighted( src1, alpha, src2, beta, 0.0, dst);
    imshow( "Linear Blend", dst );
    waitKey(0);
    destroyAllWindows(); //destroy all windows
    return 0;
}#include <opencv2/opencv.hpp>
#include "opencv2/imgcodecs.hpp"
#include "opencv2/highgui.hpp"
#include <iostream>
using namespace cv;

int main()
{
    double alpha = 0.5;
    double beta = 0.3;
    Mat dst;

    //Load images
    Mat src1 = imread( samples::findFile("1.jpg") );
    Mat src2 = imread( samples::findFile("2.jpg") );
    resize(src2, src2, src1.size());

    if(src1.empty()) {
        std::cout << "Error loading src1" << std::endl;
        return EXIT_FAILURE;
    }

    if(src2.empty()) {
        std::cout << "Error loading src2" << std::endl;
        return EXIT_FAILURE;
    }
    //Image Blending
    addWeighted( src1, alpha, src2, beta, 0.0, dst);
    imshow( "Linear Blend", dst );
    waitKey(0);
    destroyAllWindows(); //destroy all windows
    return 0;
}#include <opencv2/opencv.hpp>
#include "opencv2/imgcodecs.hpp"
#include "opencv2/highgui.hpp"
#include <iostream>
using namespace cv;

int main()
{
    double alpha = 0.5;
    double beta = 0.3;
    Mat dst;

    //Load images
    Mat src1 = imread( samples::findFile("1.jpg") );
    Mat src2 = imread( samples::findFile("2.jpg") );
    resize(src2, src2, src1.size());

    if(src1.empty()) {
        std::cout << "Error loading src1" << std::endl;
        return EXIT_FAILURE;
    }

    if(src2.empty()) {
        std::cout << "Error loading src2" << std::endl;
        return EXIT_FAILURE;
    }
    //Image Blending
    addWeighted( src1, alpha, src2, beta, 0.0, dst);
    imshow( "Linear Blend", dst );
    waitKey(0);
    destroyAllWindows(); //destroy all windows
    return 0;
}#include <opencv2/opencv.hpp>
#include "opencv2/imgcodecs.hpp"
#include "opencv2/highgui.hpp"
#include <iostream>
using namespace cv;

int main()
{
    double alpha = 0.5;
    double beta = 0.3;
    Mat dst;

    //Load images
    Mat src1 = imread( samples::findFile("1.jpg") );
    Mat src2 = imread( samples::findFile("2.jpg") );
    resize(src2, src2, src1.size());

    if(src1.empty()) {
        std::cout << "Error loading src1" << std::endl;
        return EXIT_FAILURE;
    }

    if(src2.empty()) {
        std::cout << "Error loading src2" << std::endl;
        return EXIT_FAILURE;
    }
    //Image Blending
    addWeighted( src1, alpha, src2, beta, 0.0, dst);
    imshow( "Linear Blend", dst );
    waitKey(0);
    destroyAllWindows(); //destroy all windows
    return 0;
}#include <opencv2/opencv.hpp>
#include "opencv2/imgcodecs.hpp"
#include "opencv2/highgui.hpp"
#include <iostream>
using namespace cv;

int main()
{
    double alpha = 0.5;
    double beta = 0.3;
    Mat dst;

    //Load images
    Mat src1 = imread( samples::findFile("1.jpg") );
    Mat src2 = imread( samples::findFile("2.jpg") );
    resize(src2, src2, src1.size());

    if(src1.empty()) {
        std::cout << "Error loading src1" << std::endl;
        return EXIT_FAILURE;
    }

    if(src2.empty()) {
        std::cout << "Error loading src2" << std::endl;
        return EXIT_FAILURE;
    }
    //Image Blending
    addWeighted( src1, alpha, src2, beta, 0.0, dst);
    imshow( "Linear Blend", dst );
    waitKey(0);
    destroyAllWindows(); //destroy all windows
    return 0;
}#include <opencv2/opencv.hpp>
#include "opencv2/imgcodecs.hpp"
#include "opencv2/highgui.hpp"
#include <iostream>
using namespace cv;

int main()
{
    double alpha = 0.5;
    double beta = 0.3;
    Mat dst;

    //Load images
    Mat src1 = imread( samples::findFile("1.jpg") );
    Mat src2 = imread( samples::findFile("2.jpg") );
    resize(src2, src2, src1.size());

    if(src1.empty()) {
        std::cout << "Error loading src1" << std::endl;
        return EXIT_FAILURE;
    }

    if(src2.empty()) {
        std::cout << "Error loading src2" << std::endl;
        return EXIT_FAILURE;
    }
    //Image Blending
    addWeighted( src1, alpha, src2, beta, 0.0, dst);
    imshow( "Linear Blend", dst );
    waitKey(0);
    destroyAllWindows(); //destroy all windows
    return 0;
}#include <opencv2/opencv.hpp>
#include "opencv2/imgcodecs.hpp"
#include "opencv2/highgui.hpp"
#include <iostream>
using namespace cv;

int main()
{
    double alpha = 0.5;
    double beta = 0.3;
    Mat dst;

    //Load images
    Mat src1 = imread( samples::findFile("1.jpg") );
    Mat src2 = imread( samples::findFile("2.jpg") );
    resize(src2, src2, src1.size());

    if(src1.empty()) {
        std::cout << "Error loading src1" << std::endl;
        return EXIT_FAILURE;
    }

    if(src2.empty()) {
        std::cout << "Error loading src2" << std::endl;
        return EXIT_FAILURE;
    }
    //Image Blending
    addWeighted( src1, alpha, src2, beta, 0.0, dst);
    imshow( "Linear Blend", dst );
    waitKey(0);
    destroyAllWindows(); //destroy all windows
    return 0;
}#include <opencv2/opencv.hpp>
#include "opencv2/imgcodecs.hpp"
#include "opencv2/highgui.hpp"
#include <iostream>
using namespace cv;

int main()
{
    double alpha = 0.5;
    double beta = 0.3;
    Mat dst;

    //Load images
    Mat src1 = imread( samples::findFile("1.jpg") );
    Mat src2 = imread( samples::findFile("2.jpg") );
    resize(src2, src2, src1.size());

    if(src1.empty()) {
        std::cout << "Error loading src1" << std::endl;
        return EXIT_FAILURE;
    }

    if(src2.empty()) {
        std::cout << "Error loading src2" << std::endl;
        return EXIT_FAILURE;
    }
    //Image Blending
    addWeighted( src1, alpha, src2, beta, 0.0, dst);
    imshow( "Linear Blend", dst );
    waitKey(0);
    destroyAllWindows(); //destroy all windows
    return 0;
}#include <opencv2/opencv.hpp>
#include "opencv2/imgcodecs.hpp"
#include "opencv2/highgui.hpp"
#include <iostream>
using namespace cv;

int main()
{
    double alpha = 0.5;
    double beta = 0.3;
    Mat dst;

    //Load images
    Mat src1 = imread( samples::findFile("1.jpg") );
    Mat src2 = imread( samples::findFile("2.jpg") );
    resize(src2, src2, src1.size());

    if(src1.empty()) {
        std::cout << "Error loading src1" << std::endl;
        return EXIT_FAILURE;
    }

    if(src2.empty()) {
        std::cout << "Error loading src2" << std::endl;
        return EXIT_FAILURE;
    }
    //Image Blending
    addWeighted( src1, alpha, src2, beta, 0.0, dst);
    imshow( "Linear Blend", dst );
    waitKey(0);
    destroyAllWindows(); //destroy all windows
    return 0;
}#include <opencv2/opencv.hpp>
#include "opencv2/imgcodecs.hpp"
#include "opencv2/highgui.hpp"
#include <iostream>
using namespace cv;

int main()
{
    double alpha = 0.5;
    double beta = 0.3;
    Mat dst;

    //Load images
    Mat src1 = imread( samples::findFile("1.jpg") );
    Mat src2 = imread( samples::findFile("2.jpg") );
    resize(src2, src2, src1.size());

    if(src1.empty()) {
        std::cout << "Error loading src1" << std::endl;
        return EXIT_FAILURE;
    }

    if(src2.empty()) {
        std::cout << "Error loading src2" << std::endl;
        return EXIT_FAILURE;
    }
    //Image Blending
    addWeighted( src1, alpha, src2, beta, 0.0, dst);
    imshow( "Linear Blend", dst );
    waitKey(0);
    destroyAllWindows(); //destroy all windows
    return 0;
}#include <opencv2/opencv.hpp>
#include "opencv2/imgcodecs.hpp"
#include "opencv2/highgui.hpp"
#include <iostream>
using namespace cv;

int main()
{
    double alpha = 0.5;
    double beta = 0.3;
    Mat dst;

    //Load images
    Mat src1 = imread( samples::findFile("1.jpg") );
    Mat src2 = imread( samples::findFile("2.jpg") );
    resize(src2, src2, src1.size());

    if(src1.empty()) {
        std::cout << "Error loading src1" << std::endl;
        return EXIT_FAILURE;
    }

    if(src2.empty()) {
        std::cout << "Error loading src2" << std::endl;
        return EXIT_FAILURE;
    }
    //Image Blending
    addWeighted( src1, alpha, src2, beta, 0.0, dst);
    imshow( "Linear Blend", dst );
    waitKey(0);
    destroyAllWindows(); //destroy all windows
    return 0;
}#include <opencv2/opencv.hpp>
#include "opencv2/imgcodecs.hpp"
#include "opencv2/highgui.hpp"
#include <iostream>
using namespace cv;

int main()
{
    double alpha = 0.5;
    double beta = 0.3;
    Mat dst;

    //Load images
    Mat src1 = imread( samples::findFile("1.jpg") );
    Mat src2 = imread( samples::findFile("2.jpg") );
    resize(src2, src2, src1.size());

    if(src1.empty()) {
        std::cout << "Error loading src1" << std::endl;
        return EXIT_FAILURE;
    }

    if(src2.empty()) {
        std::cout << "Error loading src2" << std::endl;
        return EXIT_FAILURE;
    }
    //Image Blending
    addWeighted( src1, alpha, src2, beta, 0.0, dst);
    imshow( "Linear Blend", dst );
    waitKey(0);
    destroyAllWindows(); //destroy all windows
    return 0;
}
