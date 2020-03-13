#include <iostream>
#include <opencv.hpp>
using namespace cv;
using namespace std;

int main()
{

	cv::Mat firstMat = imread("E:\\PIC\\112.jpg");
	Mat GrayMat;
	Mat all_result;
	Mat local_result;
	cvtColor(firstMat, GrayMat, CV_BGR2GRAY);

	//全局二值化
	threshold(GrayMat, all_result, 100, 255, THRESH_BINARY);

	//区域自适应二值化
	adaptiveThreshold(GrayMat, local_result, 255, ADAPTIVE_THRESH_GAUSSIAN_C, THRESH_BINARY_INV, 15, 10);

	imshow("src1", all_result);
	imshow("src2", local_result);
	waitKey(0);

}