#pragma once
#include "FaceRecognition.h"
#include "FeatureGroup.h"

#include <QThread>

#include <memory>
#include <iostream>
#include <string>

#include <opencv2/opencv.hpp>


#include <unistd.h>


class FaceRC:public QThread{
Q_OBJECT

public:
    FaceRC();
    void train(const std::vector<std::string> filenames);

    std::string detect(cv::Mat & imgDetect);

    void run() override;
public slots:
    void startTrainning(const std::vector<std::string> filenames);
signals:
    void detected(QString name);
    void trained();
private:
    std::shared_ptr<FaceRecognition> fr;
    std::shared_ptr<FeatureGroup> fg;
    int running;
    std::vector<std::string> filenames;
};
