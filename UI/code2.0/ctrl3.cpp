#include "ctrl3.h"
#include "ui_ctrl3.h"
#include "ctrl4.h"
#include "ctrl2.h"
ctrl3::ctrl3(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::ctrl3)
{
    ui->setupUi(this);
}

ctrl3::~ctrl3()
{
    delete ui;
}

void ctrl3::on_one_clicked()
{
    ctrl4 *ct =new ctrl4;
    ct->setGeometry(this->geometry());
    ct->show();
    this->close();
}

void ctrl3::on_two_clicked()
{
    ctrl4 *ct =new ctrl4;
    ct->setGeometry(this->geometry());
    ct->show();
    this->close();
}

void ctrl3::on_three_clicked()
{
    ctrl4 *ct =new ctrl4;
    ct->setGeometry(this->geometry());
    ct->show();
    this->close();
}

void ctrl3::on_four_clicked()
{
    ctrl4 *ct =new ctrl4;
    ct->setGeometry(this->geometry());
    ct->show();
    this->close();
}

void ctrl3::on_pushButton_5_clicked()
{
    ctrl2 *ct =new ctrl2;
    ct->setGeometry(this->geometry());
    ct->show();
    this->close();
}
