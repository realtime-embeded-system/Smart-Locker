#include "pageofcheckfailed.h"
#include "ui_pageofcheckfailed.h"

pageofcheckfailed::pageofcheckfailed(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::pageofcheckfailed)
{
    ui->setupUi(this);
}

pageofcheckfailed::~pageofcheckfailed()
{
    delete ui;
}
