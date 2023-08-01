#include "mainwindow.h"
#include "ui_mainwindow.h"

#include "FaceRecognition.h"
#include "FeatureGroup.h"

#include <QMessageBox>
#include <QDebug>
#include<QDateTime>
#include <QFileDialog>
#include "dlgfaceinput.h"
#include <iostream>


#include <QInputDialog>

extern QImage MatToQImage(const cv::Mat &mat);

MainWindow::MainWindow(QWidget *parent) : QMainWindow(parent),
                                          ui(new Ui::MainWindow),
                                          faceRC(new FaceRC()),
                                          device(new Device)
{
    ui->setupUi(this);
    connect(faceRC, SIGNAL(trained()), this, SLOT(on_faceRC_trained()));
    faceRC -> start();

}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::on_pushButton_trainFaces_clicked()
{
    wiringPiSetup();
    pinMode(23, OUTPUT);
    pinMode(22, OUTPUT);
    std::vector<string> filenames;
    QString imagePath = "./images/";

    QDir dir(imagePath);

    QStringList imageFilter;

    imageFilter << "*.bmp"
                << "*.jpg"
                << "*.png"; 

    dir.setNameFilters(imageFilter); 

    int cnt = dir.count(); 

    for (int i = 0; i < cnt; i++)
    {
        QString imageName = dir[i];
        QString temp = "./images/";
        qDebug() << imageName; 
        filenames.push_back(temp.append(imageName).toStdString());
    }

    for (int i = 0; i < filenames.size(); i++)
    {
        std::cout << filenames[i] << std::endl;
    }

    faceRC->startTrainning(filenames);
    this -> setWindowTitle("start trainning [ "+ QDateTime::currentDateTime().toString("yyyy-MM-dd HH:mm:ss:zzz")+" ]");
}

void MainWindow::on_pushButton_clicked()
{
    
    cv::Mat imgDetect = img;
    if (!imgDetect.data)
    {
        QMessageBox msgBox;
        msgBox.setText(tr("image data is null"));
        msgBox.exec();
    }



    std::string name = faceRC->detect(imgDetect);
    if (name == "Unknown")
    {
        
    }
    else
    {
        if (name == "lzy")
        {
            device -> open(face1_PIN);

        }
        else if (name == "ljr")
        {
            device -> open(face2_PIN);

        }
        else if (name == "pyy")
        {
            device -> open(face3_PIN);

        };
        else if (name == "hlt")
        {
            device -> open(face4_PIN);

        }
    }
}

void MainWindow::on_pushButton_faceInput_clicked()
{
    dlgFaceInput w;
    w.exec();
}

void MainWindow::on_pushButton_cameraOpen_clicked()
{
    cv::VideoCapture cap(0);

    if (!cap.isOpened())
    {
        return;
    }

    while (true)
    {
        cap >> img;

        cv::imshow("faceInput", img);
        if (27 == cv::waitKey(30))
        {
            QImage qimg = MatToQImage(img);
            ui->label_image->setPixmap(QPixmap::fromImage(qimg));

            break;
        }
    }

    cv::destroyAllWindows();
}

void MainWindow::on_pushButton_2_clicked()
{
    bool isOK;
    QString name = QInputDialog::getText(NULL, "input",
                                         "please input name",
                                         QLineEdit::Normal,
                                         "",
                                         &isOK);

    QString imagePath = "./images/";
    QFile::remove(imagePath.append(name).append(".jpg"));

    if (isOK)
    {
        QMessageBox::information(NULL, "hint",
                                 "name is: <b>" + name + "</b>",
                                 QMessageBox::Yes | QMessageBox::No,
                                 QMessageBox::Yes);
    }
}

void MainWindow::on_faceRC_trained()
{
    this -> setWindowTitle("trained [ "+ QDateTime::currentDateTime().toString("yyyy-MM-dd HH:mm:ss:zzz")+" ]");
}
