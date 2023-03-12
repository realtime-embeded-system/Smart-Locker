#include "ctrl2.h"
#include "ui_ctrl2.h"
#include "ctrl3.h"
#include "ctrl4.h"
#include "ctrl.h"
#include "widget.h"
#include "ctrl.h"
ctrl2::ctrl2(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::ctrl2)
{
    ui->setupUi(this);
}

ctrl2::~ctrl2()
{
    delete ui;
}


void ctrl2::on_deposit_clicked()
{
    ctrl3 *ct =new ctrl3;
    ct->setGeometry(this->geometry());
    ct->show();
        this->close();
}

void ctrl2::on_pushButton_2_clicked()
{
    ctrl4 *ct =new ctrl4;
    ct->setGeometry(this->geometry());
    ct->show();
        this->close();
}





void ctrl2::on_pushButton_clicked()
{
    ctrl *ct =new ctrl;
    ct->setGeometry(this->geometry());
    ct->show();
        this->close();
}
