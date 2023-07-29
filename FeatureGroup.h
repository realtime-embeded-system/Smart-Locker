#ifndef FEATUREGROUP_H
#define FEATUREGROUP_H

#include <fstream>
#include <iostream>
#include <queue>
#include <string>
#include "FaceRecognition.h"
struct Feature
{
	std::string filename;
	float* data;
	float similarity_with_goal;
	friend bool operator < (Feature f1, Feature f2)
	{
		return f1.similarity_with_goal < f2.similarity_with_goal;
	}
};

class FeatureGroup
{
public:
	FeatureGroup(int feat_dims, FaceRecognition* fr);
	FeatureGroup(string model_file, FaceRecognition* fr);
	bool AddFeature(float* feat, string filename);
	bool SaveModel(string model_file);
	int GetFeatureDims();
	bool FindTopK(int k, float* feat, std::vector<Feature>& result);
	~FeatureGroup();

public:
	std::vector<Feature> features;

private:
	int feat_dims;  
	FaceRecognition* fr;
};



#endif //FEATUREGROUP_H
