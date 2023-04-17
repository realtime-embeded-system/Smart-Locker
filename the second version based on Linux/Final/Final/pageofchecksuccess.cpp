#include "pageofchecksuccess.h"
#include "ui_pageofchecksuccess.h"

#include<QDesktopWidget>



pageofchecksuccess::pageofchecksuccess(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::pageofchecksuccess)
{
    ui->setupUi(this);

    //下边这几句是用来自动获取屏幕大小并且使窗口这么大的
    QDesktopWidget *desktopWidget=QApplication::desktop();
    QRect deskReck = desktopWidget->availableGeometry();
    int appH = deskReck.height();
    int appW = deskReck.width();
    this->setFixedSize(appW,appH);
    setGeometry(0,0,appW,appH);


}

pageofchecksuccess::~pageofchecksuccess()
{
    delete ui;
}
