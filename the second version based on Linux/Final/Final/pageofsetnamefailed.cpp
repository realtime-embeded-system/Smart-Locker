#include "pageofsetnamefailed.h"
#include "ui_pageofsetnamefailed.h"

pageofsetnamefailed::pageofsetnamefailed(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::pageofsetnamefailed)
{
    ui->setupUi(this);
}

pageofsetnamefailed::~pageofsetnamefailed()
{
    delete ui;
}
