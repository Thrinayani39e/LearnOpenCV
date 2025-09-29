#include <opencv2/imgcodecs.hpp>
#include <opencv2/highgui.hpp>
#include <opencv2/imgproc.hpp>
#include <iostream>
using namespace cv;
using namespace std;
//Draw shapes and text
void main() {
	//blank image with a random color
	Mat img(512, 512, CV_8UC3, Scalar(100, 123, 255));
	//draw a circle 
	circle(img, Point(256, 256), 155, Scalar(255, 255, 255), FILLED); //can also give a number for thickness
	//draw a rectangle
	rectangle(img, Point(130, 226), Point(382, 286), Scalar(0, 255, 0), 3);
	//draw a line
	line(img, Point(130, 226), Point(382, 286), Scalar(255, 0, 0), 2);
	//write text
	putText(img, "Hello World", Point(150, 256), FONT_HERSHEY_DUPLEX, 1, Scalar(0, 0, 0), 2);
	imshow("Image", img);
	waitKey(0);
}