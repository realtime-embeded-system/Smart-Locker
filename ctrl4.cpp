#include "ctrl4.h"
#include "ui_ctrl4.h"

ctrl4::ctrl4(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::ctrl4)
{
    ui->setupUi(this);
}

ctrl4::~ctrl4()
{
    delete ui;
}
