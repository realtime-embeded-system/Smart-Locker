#include "dlgfaceinput.h"
#include "ui_dlgfaceinput.h"
#include <QDebug>
#include <QMessageBox>

dlgFaceInput::dlgFaceInput(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::dlgFaceInput)
{
    ui->setupUi(this);
}

dlgFaceInput::~dlgFaceInput()
{
    delete ui;
}

QImage MatToQImage(const cv::Mat& mat)
{
    // 8-bits unsigned, NO. OF CHANNELS = 1
    if (mat.type() == CV_8UC1)
    {
        QImage image(mat.cols, mat.rows, QImage::Format_Indexed8);
        // Set the color table (used to translate colour indexes to qRgb values)
        image.setColorCount(256);
        for (int i = 0; i < 256; i++)
        {
            image.setColor(i, qRgb(i, i, i));
        }
        // Copy input Mat
        uchar *pSrc = mat.data;
        for (int row = 0; row < mat.rows; row++)
        {
            uchar *pDest = image.scanLine(row);
            memcpy(pDest, pSrc, mat.cols);
            pSrc += mat.step;
        }
        return image;
    }
    // 8-bits unsigned, NO. OF CHANNELS = 3
    else if (mat.type() == CV_8UC3)
    {
        // Copy input Mat
        const uchar *pSrc = (const uchar*)mat.data;
        // Create QImage with same dimensions as input Mat
        QImage image(pSrc, mat.cols, mat.rows, mat.step, QImage::Format_RGB888);
        return image.rgbSwapped();
    }
    else if (mat.type() == CV_8UC4)
    {
        qDebug() << "CV_8UC4";
        // Copy input Mat
        const uchar *pSrc = (const uchar*)mat.data;
        // Create QImage with same dimensions as input Mat
        QImage image(pSrc, mat.cols, mat.rows, mat.step, QImage::Format_ARGB32);
        return image.copy();
    }
    else
    {
        qDebug() << "ERROR: Mat could not be converted to QImage.";
        return QImage();
    }
}

void dlgFaceInput::on_pushButton_cap_clicked()
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

void dlgFaceInput::on_pushButton_inpput_clicked()
{
    QString imageName = ui->lineEdit_name->text();

    if(imageName.isEmpty())
    {
        QMessageBox::warning(NULL, QStringLiteral("提示"), "姓名为空", QMessageBox::Yes);
        return;
    }
    QString path = "./images/";

    cv::imwrite(path.append(imageName).append(".jpg").toStdString(),img);
    QMessageBox::information(NULL, QStringLiteral("提示"), "录入成功", QMessageBox::Yes);
    close();
}
