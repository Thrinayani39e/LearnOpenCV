#include <opencv2/imgcodecs.hpp>
#include <opencv2/highgui.hpp>
#include <opencv2/imgproc.hpp>
#include <iostream>
using namespace cv;
using namespace std;
//basic functions on images
void main() {
	String path = "Resources/test.jpeg";
	Mat image = imread(path);
	Mat imageGray, imageBlur, imageEdge, imageDia, imageErode;
	//converting into greyscale
	cvtColor(image, imageGray, COLOR_BGR2GRAY);
	//blurring the image
	GaussianBlur(image, imageBlur, Size(7, 7), 5, 0);
	//edge detection using canny algorithm
	Canny(imageBlur, imageEdge, 50, 80);
	//dilating the image
	dilate(imageEdge, imageDia, getStructuringElement(MORPH_RECT, Size(3,3)));
	//eroding the image
	erode(imageDia, imageErode, getStructuringElement(MORPH_RECT, Size(3, 3)));
	//showing the images
	imshow("Image", image);
	imshow("Image1", imageGray);
	imshow("Image2", imageBlur);
	imshow("Image3", imageEdge);
	imshow("Image4", imageDia);
	imshow("Image5", imageErode);
	waitKey(0);
}
