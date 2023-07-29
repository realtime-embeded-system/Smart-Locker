#pragma once
#include "FaceRecognition.h"
#include "FeatureGroup.h"

#include <QObject>

#include <memory>
#include <iostream>
#include <string>

#include <opencv2/opencv.hpp>


#include <unistd.h>

class FaceRC:public QObject{
Q_OBJECT

public:
    FaceRC(std::string index_path){
        fr = std::make_shared<FaceRecognition>();
        if (access("feature.index", F_OK ) != -1)
            fg = std::make_shared<FeatureGroup>("feature.index", fr);
        else
            fg = std::make_shared<FeatureGroup>(fr.GetFeatureDims(), fr);
    }
    void train(const std::vector<std::string> filenames){
        float **feat;
        feat = new float*[10];

        for (int i = 0; i < 10; i++)
        {
            feat[i] = new float[fr->face_recognizer->feature_size()];
        }
        for (int i = 0; i < filenames.size(); i++)
        {
            if (fr->GetFeature(filenames[i], feat))
            {
                fg->AddFeature(feat[0], filenames[i]);
            }
        }

        fg->SaveModel("feature.index");
    }

    void detect(cv::Mat & imgDetect){
        float **feat;

        feat = new float*[100];

        for (int i = 0; i < 100; i++)
        {
            feat[i] = new float[fr->face_recognizer->feature_size()];
        }

        std::vector<Feature> result;

        if (!fr->GetFeature(imgDetect, feat))
        {
            return;
        }

        cv::Rect face_rect;
        int32_t num_face = static_cast<int32_t>(fr->faces.size());
        std::string name;

        for (int32_t i = 0; i < num_face; i++)
        {
            fg->FindTopK(1, feat[i], result);

            face_rect.x = fr->faces[i].bbox.x;
            face_rect.y = fr->faces[i].bbox.y;
            face_rect.width = fr->faces[i].bbox.width;
            face_rect.height = fr->faces[i].bbox.height;

            cv::rectangle(imgDetect, face_rect, CV_RGB(0, 0, 255), 4, 4, 0);

            if (result[0].similarity_with_goal > 0.6)
            {
                size_t len = result[0].filename.length();
                name=result[0].filename.substr(9, len - 13);
                cv::putText(imgDetect, result[0].filename.substr(9, len - 13), cv::Point2d(face_rect.x - 5, face_rect.y - 5), CV_FONT_HERSHEY_COMPLEX, 0.4, cv::Scalar(0, 0, 255));
                
                
            }
            else
            {
                name="Unknown";
                cv::putText(imgDetect, "Unknown", cv::Point2d(face_rect.x - 5, face_rect.y - 5), CV_FONT_HERSHEY_COMPLEX, 0.5, cv::Scalar(255, 255, 0));
                
            }
            result.clear();
            
        }

        //TODO:emit信号
        //cv::imshow("DetectImage", img);
    }
    
private:
    std::shared_ptr<FaceRecognition> fr;
    std::shared_ptr<FeatureGroup> fg;
};