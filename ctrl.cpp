#include "ctrl.h"
#include "ui_ctrl.h"
#include "ctrl2.h"
ctrl::ctrl(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::ctrl)
{
    ui->setupUi(this);
}

ctrl::~ctrl()
{
    delete ui;
}

void ctrl::on_pushButton_clicked()
{
    ctrl2 *ct =new ctrl2;
    ct->setGeometry(this->geometry());
    ct->show();
        this->close();
}
