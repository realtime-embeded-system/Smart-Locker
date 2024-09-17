#include "FeatureGroup.h"

FeatureGroup::FeatureGroup(int feat_dims, FaceRecognition* fr)
{
    this->feat_dims = feat_dims;
    this->fr = fr;
}

FeatureGroup::FeatureGroup(string model_file, FaceRecognition* fr)
{
    std::ifstream file;
    file.open(model_file);
    int size;
    float* new_feat;
    char* buffer = new char[1000];
    //read data from model file
    file >> size;
    file >> this->feat_dims;
    for (int i = 0; i < size; i++)
    {
        Feature tmp;
        file.getline(buffer, 1000);
        while (buffer[0] == '\0' || buffer[0] == ' ')
        {
            file.getline(buffer, 1000);
        }
        tmp.filename = buffer;
        new_feat = new float[this->feat_dims];
        for (int j = 0; j < this->feat_dims; j++)
        {
            file >> new_feat[j];
        }
        tmp.data = new_feat;
        this->features.push_back(tmp);
    }
    file.close();
    this->fr = fr;
}

int FeatureGroup::GetFeatureDims()
{
    return this->feat_dims;
}

bool FeatureGroup::AddFeature(float* feat, string filename)
{
    Feature tmp;
    float* new_feat = new float[this->feat_dims];
    //memcpy(new_feat, feat, sizeof(new_feat) * this->feat_dims);
    for (int i = 0; i < this->feat_dims; i++)
    {
        new_feat[i] = feat[i];
    }
    tmp.data = new_feat;
    tmp.filename = filename;
    this->features.push_back(tmp);
    return true;
}

bool FeatureGroup::SaveModel(string model_file)
{
    std::ofstream file;
    file.open(model_file);
    file << int(this->features.size()) << std::endl; 
    file << this->feat_dims << std::endl; 
    
    for (int i = 0; i < int(this->features.size()); i++)
    {
        file << this->features[i].filename << std::endl;
        for (int j = 0; j < this->feat_dims; j++)
        {
            file << this->features[i].data[j] << " ";
        }
        file << std::endl;
    }
    file.close();
    return true;
}

bool FeatureGroup::FindTopK(int k, float* feat, std::vector<Feature>& result)
{
    std::cout << "Calculating Similarities..." << std::endl;
    for (int i = 0; i < int(this->features.size()); i++)
    {
        this->features[i].similarity_with_goal = this->fr->FeatureCompare(this->features[i].data, feat);
    }
    std::cout << "Finding Topk..." << std::endl;
    std::priority_queue<Feature> q;
    for (int i = 0; i < int(this->features.size()); i++)
    {
        q.push(this->features[i]);
    }
    for (int i = 0; i < k; i++)
    {
        if (q.empty())
            return true;
        result.push_back(q.top());
        q.pop();
    }

    return true;

}

FeatureGroup::~FeatureGroup()  
{
    for (int i = 0; i < int(this->features.size()); i++)
    {
        delete [](this->features[i].data);
    }

}
