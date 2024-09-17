#include "FaceRecognition.h"

Detector::Detector(const char* model_name) :seeta::FaceDetection(model_name)
{
	this->SetMinFaceSize(40);
	this->SetScoreThresh(2.f);
	this->SetImagePyramidScaleFactor(0.8f);
	this->SetWindowStep(4, 4);
}

FaceRecognition::FaceRecognition()
{
    this->detector = new Detector("seeta_fd_frontal_v1.0.bin");
    this->point_detector = new seeta::FaceAlignment("seeta_fa_v1.1.bin");
    this->face_recognizer = new seeta::FaceIdentification("seeta_fr_v1.0.bin");
}

float* FaceRecognition::NewFeatureBuffer()
{
	return new float[this->face_recognizer->feature_size()];
}

int FaceRecognition::GetFeatureDims()
{
	return this->face_recognizer->feature_size();
}

float FaceRecognition::FeatureCompare(float* feat1, float* feat2)
{
	return this->face_recognizer->CalcSimilarity(feat1, feat2);
}


bool FaceRecognition::GetFeature(string filename, float** feat)
{
	//load image and convert to gray
	cv::Mat src_img_color = cv::imread(filename, 1);
	cv::Mat src_img_gray;
	cv::cvtColor(src_img_color, src_img_gray, CV_BGR2GRAY);

	//convert to ImageData type
	seeta::ImageData src_img_data_color(src_img_color.cols, src_img_color.rows, src_img_color.channels());
	src_img_data_color.data = src_img_color.data;

	seeta::ImageData src_img_data_gray(src_img_gray.cols, src_img_gray.rows, src_img_gray.channels());
	src_img_data_gray.data = src_img_gray.data;

	//Detect faces
	this->faces = this->detector->Detect(src_img_data_gray);
	int32_t face_num = static_cast<int32_t>(faces.size());
	if (face_num == 0)
	{
		std::cout << "Faces are not detected." << std::endl;
		return false;
	}

	//Detect 5 facial landmarks
	seeta::FacialLandmark points[5];
	

	for (size_t i = 0; i < face_num; i++)
	{
		this->point_detector->PointDetectLandmarks(src_img_data_gray, faces[i], points);
		//Extract face identity feature
		this->face_recognizer->ExtractFeatureWithCrop(src_img_data_color, points, feat[i]);
	}
	

	return true;

}


bool FaceRecognition::GetFeature(cv::Mat src_img_color, float** feat)
{
    //load image and convert to gray
    cv::Mat src_img_gray;
    cv::cvtColor(src_img_color, src_img_gray, CV_BGR2GRAY);

    //convert to ImageData type
    seeta::ImageData src_img_data_color(src_img_color.cols, src_img_color.rows, src_img_color.channels());
    src_img_data_color.data = src_img_color.data;

    seeta::ImageData src_img_data_gray(src_img_gray.cols, src_img_gray.rows, src_img_gray.channels());
    src_img_data_gray.data = src_img_gray.data;

    //Detect faces
    this->faces = this->detector->Detect(src_img_data_gray);
    int32_t face_num = static_cast<int32_t>(faces.size());
    if (face_num == 0)
    {
        std::cout << "Faces are not detected." << std::endl;
        return false;
    }

    //Detect 5 facial landmarks
    seeta::FacialLandmark points[5];


    for (size_t i = 0; i < face_num; i++)
    {
        this->point_detector->PointDetectLandmarks(src_img_data_gray, faces[i], points);
        //Extract face identity feature
        this->face_recognizer->ExtractFeatureWithCrop(src_img_data_color, points, feat[i]);
    }

    return true;

}

FaceRecognition::~FaceRecognition()
{
	if (detector)
		delete detector;
	if (point_detector)
		delete point_detector;
	if (face_recognizer)
		delete face_recognizer;
}
