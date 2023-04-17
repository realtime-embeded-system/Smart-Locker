#include "widget.h"
#include "ui_widget.h"
#include "ctrl.h"

Widget::Widget(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::Widget)
{
    ui->setupUi(this);
}

Widget::~Widget()
{
    delete ui;
}

void Widget::on_pushButton_clicked()
{
    ctrl *ct =new ctrl;
    ct->setGeometry(this->geometry());
    ct->show();
    this->close();
}
