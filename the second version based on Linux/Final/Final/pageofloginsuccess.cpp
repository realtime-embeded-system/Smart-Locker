#include "pageofloginsuccess.h"
#include "ui_pageofloginsuccess.h"

#include<QDesktopWidget>

pageofloginsuccess::pageofloginsuccess(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::pageofloginsuccess)
{
    ui->setupUi(this);

    QDesktopWidget *desktopWidget=QApplication::desktop();
    QRect deskReck = desktopWidget->availableGeometry();
    int appH = deskReck.height();
    int appW = deskReck.width();
    this->setFixedSize(appW,appH);
    setGeometry(0,0,appW,appH);

}

pageofloginsuccess::~pageofloginsuccess()
{
    delete ui;
}
