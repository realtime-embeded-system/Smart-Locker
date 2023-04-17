#ifndef WIDGET_H
#define WIDGET_H

#include <QWidget>

#include <QImage>

#include <QTimer>   // 设置采集数据的间隔时间

#include <highgui.h>  //包含opencv库头文件
#include <cv.h>
#include <highgui.hpp>
#include <cv.hpp>

#include <iostream>
#include <stdio.h>

#include<QLabel>

#include<QDateTime>

#include<opencv2/opencv.hpp>

#include<opencv2/face.hpp>

#include <sstream>
#include <fstream>

#include<pageofsetname.h>


#include<map>

#include<pageoflistcheckedman.h>

#include<MLX90614.h>

#include<pageofchooseinorout.h>

#include <QSqlDatabase>
#include <QSqlQuery>
#include <QSqlError>
#include <qdebug.h>

#include <QSqlTableModel>
#include <QTableView>

#include<pageofloginsuccess.h>
#include<pageofcheckfailed.h>
#include "pageoftakefacefailed.h"

#include<wiringPi.h>


using namespace std;
using namespace cv;

namespace Ui {
class Widget;
}

class Widget : public QWidget
{
    Q_OBJECT

public:
    explicit Widget(QWidget *parent = 0);
    ~Widget();

    void Face_recognition();
    void Pic2Gray(Mat camerFrame,Mat &gray);
    void Show_now_time();
    void take_face_photo(string getname);
    void go_setname_page();
    void check_in();
    void go_list_page();
    void go_hongwai_timer();
    void go_hongwai_get();




public slots:
    void openCamara();      // 打开摄像头
//    void closeCamera();


private:
    Ui::Widget *ui;

    VideoCapture camera;//打开摄像头，从摄像头中获取视频
    Mat cameraFrame;//申请Mat，就是申请内存空间来存放每一帧图像
    Mat gray;
    Mat equalizedImg;



    string face_cascade_name;
    CascadeClassifier face_cascade;

    QTimer    *timer_camera;
    QTimer    *timer_time;
    QTimer    *timer_temp;

    vector<Rect> faces;



    string finalname;




};


void LabelDisplayMat(QLabel *label, cv::Mat &mat);


#endif // WIDGET_H
