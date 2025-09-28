#include <opencv2/imgcodecs.hpp>
#include <opencv2/highgui.hpp>
#include <opencv2/imgproc.hpp>	
#include <iostream>
using namespace cv;
using namespace std;
void main() {
	string path = "Resources/test.jpeg";
	Mat img = imread(path, IMREAD_COLOR_RGB);
	Mat imgResize, imgCrop;
	//cout << img.size() << endl;
	//resize the image with a factor of 0.5
	          //resize(img, imgResize, Size(),0.5,0.5);
	//resize the image to a specific size
	resize(img, imgResize, Size(120,100));
	//crop the image
	imgCrop = img(Rect(100,100,100,100));
	imshow("Image Crop", imgCrop);
	imshow("Image", img);
	imshow("Image Resize", imgResize);
	waitKey(0);
}