/*
 * color_filter.cpp
 *
 *  Created on: Jan 24, 2014
 *      Author: Olivier BALLAND
 */


#include <ros/ros.h>

#include <opencv/cv.h>
#include <opencv/cxcore.h>
#include <opencv/highgui.h>
#include <image_transport/image_transport.h>
#include <cv_bridge/cv_bridge.h>
#include <sensor_msgs/image_encodings.h>
#include <opencv2/imgproc/imgproc.hpp>
#include <opencv2/highgui/highgui.hpp>

#include "headers/color_filter.hpp"

namespace enc = sensor_msgs::image_encodings;


class ImageConverter
{
	ros::NodeHandle nh;
	image_transport::ImageTransport it;
	image_transport::Subscriber image_sub;

public:
	IplImage* img;
	IplImage* hsv_image;
	IplImage* hsv_mask;

	ImageConverter()
	: it(nh)
	{
		image_sub = it.subscribe("/image_raw" + nao,1,&ImageConverter::imageConv,this);
	}

	~ImageConverter()
	{
	}

	void imageConv(const sensor_msgs::ImageConstPtr& msg)
	{
		cv_bridge::CvImagePtr cv_ptr;
		try
		{
			cv_ptr = cv_bridge::toCvCopy(msg, enc::BGR8);
		}
		catch (cv_bridge::Exception& e)
		{
			ROS_ERROR("cv_bridge exception: %s", e.what());
			return;
		}

		img = new IplImage(cv_ptr->image);
		CvSize sz = cvGetSize(img);
		hsv_image = cvCreateImage(sz,8,3);
		hsv_mask = cvCreateImage(sz,8,1);
		cvCvtColor(img,hsv_image,CV_BGR2HSV);
		CvScalar hsv_min = cvScalar(H_MIN,S_MIN,V_MIN,0);
		CvScalar hsv_max = cvScalar(H_MAX,S_MAX,V_MAX,0);
		cvInRangeS(hsv_image, hsv_min, hsv_max, hsv_mask);

		cvNamedWindow("hsv-msk",1); cvShowImage("hsv-msk", hsv_mask);
		cvWaitKey(10);
	}
};


void on_trackbar( int,void*)
{
}


int main(int argc, char** argv)
{
	ros::init(argc, argv,"color_filter");

	// Trackbars
	cvNamedWindow("HSV Thresholds",1);
	cv::createTrackbar("HUE MIN:","HSV Thresholds",&H_MIN,180,on_trackbar);
	cv::createTrackbar("HUE MAX:","HSV Thresholds",&H_MAX,180,on_trackbar);
	cv::createTrackbar("SAT MIN:","HSV Thresholds",&S_MIN,255,on_trackbar);
	cv::createTrackbar("SAT MAX:","HSV Thresholds",&S_MAX,255,on_trackbar);
	cv::createTrackbar("VAL MIN:","HSV Thresholds",&V_MIN,255,on_trackbar);
	cv::createTrackbar("VAL MAX:","HSV Thresholds",&V_MAX,255,on_trackbar);
	cvWaitKey(10);

	if(argc != 1)
	{
		// Robot selection
		if(atoi(argv[1]) == 1) {nao = "1";}
		if(atoi(argv[1]) == 2) {nao = "2";}

		ImageConverter ic;
		ros::spin();
		cvDestroyAllWindows();
	}

	else
	{
		puts("Error, not enough arguments");
	}

	return 0;
}
