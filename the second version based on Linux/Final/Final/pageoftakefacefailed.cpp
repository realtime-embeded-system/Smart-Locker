#include "pageoftakefacefailed.h"
#include "ui_pageoftakefacefailed.h"

pageoftakefacefailed::pageoftakefacefailed(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::pageoftakefacefailed)
{
    ui->setupUi(this);
}

pageoftakefacefailed::~pageoftakefacefailed()
{
    delete ui;
}
