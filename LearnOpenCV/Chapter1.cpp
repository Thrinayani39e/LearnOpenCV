#include <opencv2/imgcodecs.hpp>
#include <opencv2/highgui.hpp>
#include <opencv2/imgproc.hpp>
#include <iostream>
using namespace std;
using namespace cv;
/// <summary>
/// Importing Images
/// </summary>
/// 
/*
void main() {
	
	string path = "Resources/test.jpeg";
	Mat img = imread(path); //Mat is matrix data type to handle images in OpenCV
	imshow("Image", img); //imshow is used to display image in window
	waitKey(0); //waitKey is used to hold the image window
	
} */
//videos
/*
void main() {
	string path = "Resources/small.mp4";
	VideoCapture cap(path);
	Mat img;
	while (true) {
		cap.read(img);
		imshow("Image", img); //imshow is used to display image in window
		waitKey(20); //waitKey is used to hold the image window
	}
}
*/
//webcam
void main() {
	VideoCapture cap(0); //0 is the default camera
	Mat img;
	while (true) {
		cap.read(img);
		imshow("Image", img); //imshow is used to display image in window
		waitKey(20); //waitKey is used to hold the image window
	}
}