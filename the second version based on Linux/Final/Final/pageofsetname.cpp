#include "pageofsetname.h"
#include "ui_pageofsetname.h"
#include<QDesktopWidget>





pageOfSetName::pageOfSetName(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::pageOfSetName)
{
    ui->setupUi(this);

    //下边这几句是用来自动获取屏幕大小并且使窗口这么大的
    QDesktopWidget *desktopWidget=QApplication::desktop();
    QRect deskReck = desktopWidget->availableGeometry();
    int appH = deskReck.height();
    int appW = deskReck.width();
    this->setFixedSize(appW,appH);
    setGeometry(0,0,appW,appH);

    softKeyboard = new SoftKeyboard();
    ui->lineEdit_facename->installEventFilter(this);

    softKeyboard->hideInputBufferArea(ui->lineEdit_facename);
//    softKeyboard->resize(640,480);
//    QPoint point = this->pos();
//    softKeyboard->move(point+ui->lineEdit_facename->pos());

//    softKeyboard->show();


}



pageOfSetName::~pageOfSetName()
{
    delete ui;
}


bool pageOfSetName::eventFilter(QObject *watched, QEvent *event)
{
    if(event->type()==QEvent::MouseButtonRelease)//事件类型
    {
        QMouseEvent *mouseEvent = static_cast<QMouseEvent *>(event);//将事件强制转换
        if(mouseEvent->button() == Qt::LeftButton)
        {
            if(watched == ui->lineEdit_facename)
            {
                softKeyboard->hideInputBufferArea(ui->lineEdit_facename);
                softKeyboard->resize(640,480);
                softKeyboard->show();
            }

        }
    }
    return QWidget::eventFilter(watched,event);//返回父类的事件过滤器
}

void pageOfSetName::on_pushButton_okfromsetnamepage_clicked()
{

    QString FaceName;
    string facename;

    FaceName=ui->lineEdit_facename->text();//获取输入框中输入的数据并赋值给QString变量FaceName
    facename=FaceName.toStdString();//将QString变量转换为string并赋值给facename

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
       int flag=0;
       while(query.next())//每次读下一行,读完为止
       {
           QString name = query.value(0).toString();

           if(name.toStdString()==facename)//如果名字在数据库中已经有过了
           {
               this->close();
               pageofsetnamefailed *psnf = new pageofsetnamefailed;
               psnf->show();
               delay(2000);
               psnf->close();
               Widget *ww = new Widget;//重新创建一个主界面窗口，因为原来的关了
               ww->show();//打开窗口
               ww->openCamara();//打开摄像头
               db.close();
               flag=1;
               break;
           }

       }


       if(flag==0)
       {
       this->close();//把输入框里的东西赋值给facename变量后就可以关闭这个设置名字的窗口了
       Widget *ww = new Widget;//重新创建一个主界面窗口的对象，因为原来的关了
       ww->show();//打开窗口
       ww->openCamara();//打开摄像头
       ww->take_face_photo(facename);//此处神来之笔，在得到名字之后真正去执行这个人脸录入函数
       db.close();
       }

}



void pageOfSetName::on_pushButton_cancelfromsetnamepage_clicked()
{
    this->close();
    Widget *ww = new Widget;//重新创建一个主界面窗口，因为原来的关了
    ww->show();//打开窗口
    ww->openCamara();//打开摄像头
    //如果是取消的话，回复到之前打开摄像头的状态就行了
}
