#ifndef DLGFACEINPUT_H
#define DLGFACEINPUT_H

#include <QDialog>
#include <opencv2/opencv.hpp>

namespace Ui {
class dlgFaceInput;
}

class dlgFaceInput : public QDialog
{
    Q_OBJECT

public:
    explicit dlgFaceInput(QWidget *parent = nullptr);
    ~dlgFaceInput();

private slots:
    void on_pushButton_cap_clicked();

    void on_pushButton_inpput_clicked();

private:
    Ui::dlgFaceInput *ui;
    cv::Mat img;
};

#endif // DLGFACEINPUT_H
