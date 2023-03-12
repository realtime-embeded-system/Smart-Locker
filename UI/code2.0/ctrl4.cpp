#include "ctrl4.h"
#include "ui_ctrl4.h"
#include "ctrl3.h"
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

void ctrl4::on_pushButton_clicked()
{
    ctrl3 *ct =new ctrl3;
    ct->setGeometry(this->geometry());
    ct->show();
    this->close();
}
