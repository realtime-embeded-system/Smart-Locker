#include "pageofchooseinorout.h"
#include "ui_pageofchooseinorout.h"
#include<QDesktopWidget>

#include<pageofchecksuccess.h>

#include<widget.h>



pageofchooseinorout::pageofchooseinorout(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::pageofchooseinorout)
{
    ui->setupUi(this);

    //下边这几句是用来自动获取屏幕大小并且使窗口这么大的
    QDesktopWidget *desktopWidget=QApplication::desktop();
    QRect deskReck = desktopWidget->availableGeometry();
    int appH = deskReck.height();
    int appW = deskReck.width();
    this->setFixedSize(appW,appH);
    setGeometry(0,0,appW,appH);


    QDateTime timeCurrent = QDateTime::currentDateTime();
    nowtime = timeCurrent.toString("yyyy-MM-dd.hh:mm:ss");//获取系统当前时间

    ui->checktime->setText(nowtime);//显示创建本类并打开页面那一瞬间的时间


}

pageofchooseinorout::~pageofchooseinorout()
{
    delete ui;
}

void pageofchooseinorout::getcheckname(string name)//用传参的形式从主界面获取当前人脸名字
{
    checkname=name;
}

void pageofchooseinorout::setcheckname()//设置显示好将要考勤的名字
{
        ui->checkname->setText(QString::fromStdString(checkname));
}


void pageofchooseinorout::on_chuqinbutton_clicked()//点了上班按钮
{

//    ofstream writeCheckedMan;
//    writeCheckedMan.open("checkedman.csv",ios::ate|ios::app);
//    writeCheckedMan << "登记人:" << checkname << "," << "登记时间：" << nowtime.toStdString() << ",打卡备注：上班" << endl;//以在文件末尾追加的方式写入登记人和登记时间
//    writeCheckedMan.close();

    //创建sqlite数据库my.db,无则创建，有则链接
    QSqlDatabase db;
    if(QSqlDatabase::contains("qt_sql_default_connection"))
      db = QSqlDatabase::database("qt_sql_default_connection");
    else
      db = QSqlDatabase::addDatabase("QSQLITE");

        db.setDatabaseName("my.db");
        db.open();//open

        QSqlQuery query;
        query.exec("create table log (name varchar,time varchar,remarks varchar)");

        //用QSqlTable的方式插入表
        QSqlTableModel *model = new QSqlTableModel;
        model->setTable("log");//确认当前数据库需要操作的表
        int row = model->rowCount();//获取表的行数,其实就是最后一行
        model->insertRow(row);//在总行数上加一行
        model->setData(model->index(row,0),QString::fromStdString(checkname));//对加完一行后的最后一行进行数据操作
        model->setData(model->index(row,1),QString::fromStdString(nowtime.toStdString()));//对加完一行后的最后一行进行数据操作
        model->setData(model->index(row,2),"出勤");//对加完一行后的最后一行进行数据操作
        model->submitAll();//提交

        db.close();


    this->close();

    pageofchecksuccess *pgss = new pageofchecksuccess;
    pgss->show();
    delay(2000);
    pgss->close();

}

void pageofchooseinorout::on_tuiqinbutton_clicked()//点了下班按钮
{


//    ofstream writeCheckedMan;
//    writeCheckedMan.open("checkedman.csv",ios::ate|ios::app);
//    writeCheckedMan << "登记人:" << checkname << "," << "登记时间：" << nowtime.toStdString() << ",打卡备注：下班" <<endl;//以在文件末尾追加的方式写入登记人和登记时间
//    writeCheckedMan.close();

    //创建sqlite数据库my.db,无则创建，有则链接
        QSqlDatabase db = QSqlDatabase::addDatabase("QSQLITE");
        db.setDatabaseName("my.db");
        db.open();//open

        QSqlQuery query;
        query.exec("create table log (name varchar,time varchar,remarks varchar)");

        //用QSqlTable的方式插入表
        QSqlTableModel *model = new QSqlTableModel;
        model->setTable("log");//确认当前数据库需要操作的表
        int row = model->rowCount();//获取表的行数,其实就是最后一行
        model->insertRow(row);//在总行数上加一行
        model->setData(model->index(row,0),QString::fromStdString(checkname));//对加完一行后的最后一行进行数据操作
        model->setData(model->index(row,1),QString::fromStdString(nowtime.toStdString()));//对加完一行后的最后一行进行数据操作
        model->setData(model->index(row,2),"退勤");//对加完一行后的最后一行进行数据操作
        model->submitAll();//提交

        db.close();


    this->close(); 

        pageofchecksuccess *pgss = new pageofchecksuccess;
        pgss->show();
        delay(2000);
        pgss->close();

}

void pageofchooseinorout::on_cancelbutton_clicked()
{
    this->close();
}
