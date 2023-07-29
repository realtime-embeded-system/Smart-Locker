#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include <opencv2/opencv.hpp>
#include <QProcess>

#include "facerc.h"

namespace Ui {
class MainWindow;
}

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    explicit MainWindow(QWidget *parent = 0);
    ~MainWindow();

private slots:
    void on_pushButton_trainFaces_clicked();

    //void on_pushButton_faceRecoginiztion_clicked();

    void on_pushButton_clicked();


    void on_pushButton_faceInput_clicked();

    void on_pushButton_cameraOpen_clicked();

    //void on_pushButton_add_clicked();

   // void on_pushButton_queryRecord_clicked();

    void on_pushButton_2_clicked();

//    void on_pushButton_cameraTime_clicked();
    // void on_faceRC_detected(QString);

    void on_faceRC_trained();
private:
    Ui::MainWindow *ui;
    cv::Mat img;

    QProcess * m_process;
    FaceRC * faceRC;
};

#endif // MAINWINDOW_H
