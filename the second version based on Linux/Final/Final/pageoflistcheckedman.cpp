#include "pageoflistcheckedman.h"
#include "ui_pageoflistcheckedman.h"
#include<QDesktopWidget>

//此为构造函数，所以写在该函数内部的所有语句在用该类创建对象后都会执行
pageoflistcheckedman::pageoflistcheckedman(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::pageoflistcheckedman)
{
    ui->setupUi(this);

    //下边这几句是用来自动获取屏幕大小并且使窗口这么大的
    QDesktopWidget *desktopWidget=QApplication::desktop();
    QRect deskReck = desktopWidget->availableGeometry();
    int appH = deskReck.height();
    int appW = deskReck.width();
    this->setFixedSize(appW,appH);
    setGeometry(0,0,appW,appH);


    ui->comboBox_choostwho->addItem("");//先往选人框里加个空白名字
 //........................将数据库中所有的人名不重复地填入下拉框
    //创建sqlite数据库my.db,无则创建，有则链接
    QSqlDatabase db;
    if(QSqlDatabase::contains("qt_sql_default_connection"))
      db = QSqlDatabase::database("qt_sql_default_connection");
    else
      db = QSqlDatabase::addDatabase("QSQLITE");

       db.setDatabaseName("my.db");
       db.open();//open

       QSqlQuery query;
       //用命令的方式查表
       query.exec("select * from user");//查user表获取名字
       QString last_name="qwerkjrqwedgfsa";//随便设置一个
       while(query.next())//每次读下一行,读完为止
       {
           QString name = query.value(0).toString();

           if(name!=last_name)//这个机制使得获取的名字不重复，因为user表里一个名字会重复十次
           {
           ui->comboBox_choostwho->addItem(name);
           }

           last_name=name;

       }


       db.close();

//......................................



}


pageoflistcheckedman::~pageoflistcheckedman()
{
    delete ui;
}

void pageoflistcheckedman::listallchecked()
{
//    ifstream readListofCheckedMan;
//    string line;
//    readListofCheckedMan.open("checkedman.csv",ios::in);//读入记载着登记人和考勤时间的文件
//    while(getline(readListofCheckedMan,line))
//    {
//        QString finalgetList = QString::fromStdString(line);
//        ui->textBrowser_listcheckedman->append(finalgetList);//逐行读入并以在末尾添加的方式添加进text browser里
//    }

//    readListofCheckedMan.close();

    //创建sqlite数据库my.db,无则创建，有则链接
    QSqlDatabase db;
    if(QSqlDatabase::contains("qt_sql_default_connection"))
      db = QSqlDatabase::database("qt_sql_default_connection");
    else
      db = QSqlDatabase::addDatabase("QSQLITE");

       db.setDatabaseName("my.db");
       db.open();//open

       QSqlQuery query;
       //用命令的方式查表
       query.exec("select * from log");
       while(query.next())//每次读下一行,读完为止
       {
           QString name = query.value(0).toString();
           QString time =query.value(1).toString();
           QString remarks = query.value(2).toString();

           ui->textBrowser_listcheckedman->append("登记人:"+name+",登记时间:"+time+",打卡备注:"+remarks);
       }


       db.close();


}



void pageoflistcheckedman::on_pushButton_list_chuqin_clicked()//只列出上班考勤
{

    ui->textBrowser_listcheckedman->clear();//先清空显示框

    QSqlDatabase db;
    if(QSqlDatabase::contains("qt_sql_default_connection"))
      db = QSqlDatabase::database("qt_sql_default_connection");
    else
      db = QSqlDatabase::addDatabase("QSQLITE");

    db.setDatabaseName("my.db");
    db.open();//open

    QSqlQuery query;
    //用命令的方式查表
    query.exec("select * from log");
    while(query.next())//每次读下一行,读完为止
    {
        QString name = query.value(0).toString();
        QString time =query.value(1).toString();
        QString remarks = query.value(2).toString();

        if(remarks=="出勤")
        {
        ui->textBrowser_listcheckedman->append("登记人:"+name+",登记时间:"+time+",打卡备注:"+remarks);
        }


    }


    db.close();
}

void pageoflistcheckedman::on_pushButton_list_tuiqin_clicked()//只列出下班考勤
{

    ui->textBrowser_listcheckedman->clear();//先清空显示框

    QSqlDatabase db;
    if(QSqlDatabase::contains("qt_sql_default_connection"))
      db = QSqlDatabase::database("qt_sql_default_connection");
    else
      db = QSqlDatabase::addDatabase("QSQLITE");

    db.setDatabaseName("my.db");
    db.open();//open

    QSqlQuery query;
    //用命令的方式查表
    query.exec("select * from log");
    while(query.next())//每次读下一行,读完为止
    {
        QString name = query.value(0).toString();
        QString time =query.value(1).toString();
        QString remarks = query.value(2).toString();

        if(remarks=="退勤")
        {
        ui->textBrowser_listcheckedman->append("登记人:"+name+",登记时间:"+time+",打卡备注:"+remarks);
        }


    }


    db.close();
}

void pageoflistcheckedman::on_pushButton_list_all_clicked()//列出全部考勤登记
{

    ui->textBrowser_listcheckedman->clear();//先清空显示框

    QSqlDatabase db;
    if(QSqlDatabase::contains("qt_sql_default_connection"))
      db = QSqlDatabase::database("qt_sql_default_connection");
    else
      db = QSqlDatabase::addDatabase("QSQLITE");

    db.setDatabaseName("my.db");
    db.open();//open

    QSqlQuery query;
    //用命令的方式查表
    query.exec("select * from log");
    while(query.next())//每次读下一行,读完为止
    {
        QString name = query.value(0).toString();
        QString time =query.value(1).toString();
        QString remarks = query.value(2).toString();

        ui->textBrowser_listcheckedman->append("登记人:"+name+",登记时间:"+time+",打卡备注:"+remarks);
    }


    db.close();
}

void pageoflistcheckedman::on_comboBox_choostwho_activated(const QString &arg1)//当选中了下拉框中的某项信息
{
    ui->textBrowser_listcheckedman->clear();//先清空显示框

    QSqlDatabase db;
    if(QSqlDatabase::contains("qt_sql_default_connection"))
      db = QSqlDatabase::database("qt_sql_default_connection");
    else
      db = QSqlDatabase::addDatabase("QSQLITE");

    db.setDatabaseName("my.db");
    db.open();//open

    QSqlQuery query;
    //用命令的方式查表
    query.exec("select * from log");
    while(query.next())//每次读下一行,读完为止
    {
        QString name = query.value(0).toString();
        QString time =query.value(1).toString();
        QString remarks = query.value(2).toString();

        if(name==ui->comboBox_choostwho->currentText())//如果当前查询到人名与下拉框中选择的名字一致
        {
        ui->textBrowser_listcheckedman->append("登记人:"+name+",登记时间:"+time+",打卡备注:"+remarks);
        }


    }


    db.close();

}



void pageoflistcheckedman::on_pushButton_cancel_clicked()
{
    this->close();
    Widget *www = new Widget;
    www->show();
    www->openCamara();
}
