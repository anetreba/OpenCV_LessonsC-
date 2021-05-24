#include "MorphTrans.h"

int main() {
    MorphTrans morphTrans("j.png");
    morphTrans.erode();
    morphTrans.dilate();
    morphTrans.erode_followed_dilation();
    morphTrans.dilate_followed_erode();
    morphTrans.make_gradient();
    morphTrans.make_top_hat();
    morphTrans.make_black_hat();
    morphTrans.show();
    cv::waitKey(0);
    cv::destroyAllWindows();
    return 0;
}
