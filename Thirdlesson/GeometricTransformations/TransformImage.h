//
// Created by s1000633 on 5/18/21.
//

#ifndef OPENCV_TUTORIALS_TRANSFORMIMAGE_H
#define OPENCV_TUTORIALS_TRANSFORMIMAGE_H

#include <opencv2/opencv.hpp>

class TransformImage {
private:
    cv::Mat _image;
    cv::Mat _res_resize;
    cv::Mat _res_affine;
public:
    TransformImage(const cv::Mat& image);
    void resize_image(int cols, int rows);
    void affine_warm(int angle, int scale, int border_mode);
    void show_res();
};


#endif //OPENCV_TUTORIALS_TRANSFORMIMAGE_H
