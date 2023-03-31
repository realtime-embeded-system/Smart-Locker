#include "widget.h"
#include "ui_widget.h"

#include<QDesktopWidget>

//#include <QDebug>

//#define cout qDebug() << "[ "<<__FILE__<<" : "<<__LINE__<<" ]"

//   使用前在头文件里加入#include<opencv2/face.hpp> .pro文件里记得添加-lopencv_face库
Ptr<cv::face::FaceRecognizer> model = cv::face::createEigenFaceRecognizer();
//在函数外定义model为全局对象

int trainedflag=0;


Hongwai *hw = new Hongwai;//用 Hongwai类创建对象,声明为全局变量，一旦程序开始运行，这玩意旧一直呆在堆里了

//这个函数是Widget的构造函数，Widget是个类，一旦用它创造对象，对象的生命周期一开始，就会执行构造函数
Widget::Widget(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::Widget)
{
    ui->setupUi(this);

    timer_camera   = new QTimer(this);//人脸识别函数用的计时器
    timer_time   = new QTimer(this);//当前时间刷新用的计时器
    timer_temp  = new QTimer(this);//红外测温函数用的定时器


    //这个函数并不是循环运行的，但是connect函数会保持对信号的持续监听，connect一旦监测到相应的信号，就会执行参数里所写的函数

    connect(timer_camera,&QTimer::timeout,this,&Widget::Face_recognition);// 时间到，进行一次人脸识别
    connect(ui->pushButton_open,&QPushButton::clicked,this,&Widget::openCamara); //打开摄像头
//    connect(ui->pushButton_close,&QPushButton::clicked,this,&Widget::closeCamera); //打开摄像头

    connect(ui->pushButton_takefacephoto,&QPushButton::clicked,this,&Widget::go_setname_page);//进入人脸录入流程，显示打开新窗口设置新人脸名字

    connect(timer_time,&QTimer::timeout,this,&Widget::Show_now_time);// 时间到，刷新显示当前时间

    connect(ui->pushButton_checkin,&QPushButton::clicked,this,&Widget::check_in);//点击考勤登记按钮后将进行考勤登记

    connect(ui->pushButton_listchecked,&QPushButton::clicked,this,&Widget::go_list_page);//点击查看考勤列表按钮后，跳转到考勤列表页面

    connect(ui->pushButton_hongwai,&QPushButton::clicked,this,&Widget::go_hongwai_timer);//开启计时器来循环执行获取红外温度的函数

    connect(timer_temp,&QTimer::timeout,this,&Widget::go_hongwai_get);//计时器每跳出一次timeout信号，执行一个红外获取函数

    timer_time->start(300);// 开始计时，超时则发出timeout()信号,connect捕捉到一次timeout信号就执行一次show_now_time函数

    //下边这几句是用来自动获取屏幕大小并且使窗口这么大的
    QDesktopWidget *desktopWidget=QApplication::desktop();
    QRect deskReck = desktopWidget->availableGeometry();
    int appH = deskReck.height();
    int appW = deskReck.width();
    this->setFixedSize(appW,appH);
    setGeometry(0,0,appW,appH);



}

Widget::~Widget()
{
    delete ui;

}

void delay(unsigned int msec)
 {
     QEventLoop loop;//定义一个新的事件循环
     QTimer::singleShot(msec, &loop, SLOT(quit()));//创建单次定时器，槽函数为事件循环的退出函数
     loop.exec();//事件循环开始执行，程序会卡在这里，直到定时时间到，本循环被退出
 }

void Widget::go_hongwai_get()//红外传感器的连接和开启I2C看E:\毕业设计\重点程序参考里记载的步骤
{

    hw->gettemp();//获取红外实时温度
    QString finalgetbodytemp = QString::number(hw->fBodyTempture,'f',2);//获取体温并转换为QString变量
//    QString finalgetenvtemp = QString::number(hw->fEnvTempture,'f',2);//获取室温并转换为QString变量
    ui->label_temp->setText(finalgetbodytemp);//将体温显示在label上
    if(finalgetbodytemp.toFloat()>35)//当超过38度的时候报警
    {
//        wiringPiSetup();
        pinMode(23,OUTPUT);//4号wiringPi引脚对应的是23号GPIO，具体看图,设置为OUTPUT模式
        digitalWrite(23,HIGH);//拉高
//        delay(500);
    }
    else
    {
//        wiringPiSetup();
        pinMode(23,OUTPUT);
        digitalWrite(23,LOW);
    }


}

void Widget::go_hongwai_timer()//用来启动定时器
{
    hw->InitI2C();//初始化I2C的部分放在这，因为用定时器反复执行的话会导致I2C文件打开过多导致程序崩溃
    timer_temp->start(30);
}


void Widget::go_list_page()
{
    this->close();
    camera.release();
    pageoflistcheckedman *plc = new pageoflistcheckedman;
    plc->show();//创建页面对象，跳转到该页面
    plc->listallchecked();

}


void Widget::check_in()
{

    if(finalname!="")
    {
    pageofchooseinorout *pio = new pageofchooseinorout;
    pio->getcheckname(finalname);//把当前识别到的人脸的名字给传参过去
    pio->setcheckname();//用来显示人脸名字的
    pio->show();
    }
    else//如果识别的名字的"",也就是识别不到人脸所属,就不让考勤
    {
    pageofcheckfailed *pof = new pageofcheckfailed;
    pof->show();
    delay(2000);
    pof->close();
    }



}



void read_sql(vector<Mat>& images,vector<int>& labels)
{

    //创建sqlite数据库my.db,无则创建，有则链接
    QSqlDatabase db;
    if(QSqlDatabase::contains("qt_sql_default_connection"))
      db = QSqlDatabase::database("qt_sql_default_connection");
    else
      db = QSqlDatabase::addDatabase("QSQLITE");

       db.setDatabaseName("my.db");
       db.open();//open

       //创建表
       QSqlQuery query;
       query.exec("create table user (name varchar,id int,Path varchar)");//user表包含 名字 id 和照片路径

    //用命令的方式查表
     query.exec("select * from user");
     while(query.next())
     {
         QString name = query.value(0).toString();
         int id = query.value(1).toInt();
         QString path =query.value(2).toString();

         string rname=name.toStdString();
         string rpath=path.toStdString();//把user表的所有行的名字 id 和照片路径查出来并转换好

         if (!rname.empty()&&!rpath.empty())           //假设读取成功，则把所有行依次将图片和相应标签压入相应容器中
         {
             images.push_back(imread(rpath,0));        //读取训练样本,这里这个参数设置为0是指按灰度图读入图像，设置为1的话则是三通道彩色图读入
             labels.push_back(id);   //读取训练样本标号
         }


     }


     db.close();



}



void Widget::go_setname_page()
{
    this->close();//先把当前窗口关了
    camera.release();//然后释放掉摄像头资源，后边再打开
    pageOfSetName *psn = new pageOfSetName;
//    psn->setWindowModality(Qt::ApplicationModal);//设置为模态窗口，也就是这个窗口打开的时候别的窗口都用不了
    psn->show();//打开这个窗口
}


void Widget::take_face_photo(string getname)//拍下人脸的gray灰度照片并写入到.jpg文件
{

    Mat src;
    Mat dst;
    vector<Rect> faces;
    int i = 0;
    Mat image;
    Mat imagex;
    int count;
    int times=0;//用来循环自加控制本次拍照次数的
    ofstream writePhotoFlag;//创建用来写文件的对象,记录拍照总次数
//    ofstream writeFaceCSV;//用来写照片路径和标号的csv文件
    ifstream readPhotoFlag;//用来读取已经拍照的总次数，新拍的人类照片命名将在总次数上叠加
//    ofstream writeFaceIdAndNameCSV;//用来把人脸标号和在新窗口里输入的人脸名字写进一个新的csv文件

    readPhotoFlag.open("photoFlag.csv",ios::in);//读这个记载着拍照总次数的文件

    if(!readPhotoFlag.is_open())//如果读不到，说明程序是第一次在这个机器运行，将总拍照次数置零
    {
//       cout << "打开photoFlag.csv失败" <<endl;
       count = 0;
    }
    else//如果能读到文件，将文件内记载的拍照次数读取赋值给count
    {
       readPhotoFlag >> count;

       readPhotoFlag.close();
    }


    int allowstate=0;//只有当此标志位为1时才允许录入人脸


    while(camera.read(src)){
        dst = Mat::zeros(src.size(),src.type());
        cvtColor(src,dst,CV_BGR2GRAY);//灰度化
        face_cascade.detectMultiScale(dst,faces,1.1,3,0,Size(50,50));//人脸检测
//        cout<<"num :"<<faces.size()<<endl;
        for(i = 0;i < faces.size();i++)
        {
            rectangle(src,faces[i],Scalar(0,0,255),2,LINE_8,0);//矩形框
            image = dst(Rect(faces[i].x,faces[i].y,faces[i].width, faces[i].height));//只取人脸部分
            cv::resize(image,imagex,Size(100,100));//归一化大小100x100,imagex是处理后得到的



            if(trainedflag==1&&allowstate==0)//当训练过人脸识别分类器且还没有允许过录入人脸
            {
                int i=0;
                for(i=0;i<10;i++)
                {
                    int resid=-1;
                    double confidence=9999.0;
                    model->predict(imagex,resid,confidence);
                    if(confidence<1500)
                    {
                        break;//先人脸识别对比十次，只要有一次置信度较高就拒绝录入
                    }

                }
                if(i>9)
                {
                    allowstate=1;//如果人脸识别对比了十次置信度都较低，通过考验，允许录入此人脸
                }

            }
            else if(trainedflag==0)//没训练过人脸识别分类器的情况下直接允许录入人脸
            {
                allowstate=1;
            }



            if(allowstate==1)//当标志为为1，允许录入人脸
            {
            imwrite(format("face%d.jpg",count),imagex);//用cv::imwrite的方式创建并写入图片文件

//            writeFaceCSV.open("FacePathAndId.csv",ios::ate|ios::app);
//            writeFaceCSV << "face" << count << ".jpg" << ";" << count/10 << endl;//用追加写入到文件尾的方式把每拍下的一张新人脸的照片路径和标号写进csv文件中,格式为 照片路径;标号
//            writeFaceCSV.close();

            //创建sqlite数据库my.db,无则创建，有则链接
            QSqlDatabase db;
            if(QSqlDatabase::contains("qt_sql_default_connection"))
              db = QSqlDatabase::database("qt_sql_default_connection");
            else
              db = QSqlDatabase::addDatabase("QSQLITE");

            db.setDatabaseName("my.db");
            db.open();//open

            //创建表
            QSqlQuery query;
            query.exec("create table user (name varchar,id int,Path varchar)");//user表包含 名字 id 和照片路径

            //用QSqlTable的方式插入表
            QSqlTableModel *model = new QSqlTableModel;
            model->setTable("user");//确认当前数据库需要操作的表
            int row = model->rowCount();//获取表的行数,其实就是最后一行
            model->insertRow(row);//在总行数上加一行
            model->setData(model->index(row,0),QString::fromStdString(getname));//对加完一行后的最后一行进行数据操作,名字
            model->setData(model->index(row,1),count/10);//对加完一行后的最后一行进行数据操作,标号，也就是id

            QString photoPath="face"+QString::number(count)+".jpg";
            model->setData(model->index(row,2),photoPath);//照片路径
            model->submitAll();//提交

            db.close();

            times++;//本次拍照次数++
            count++;//拍照总次数++
            }

            else//当标志位为0，说明系统中肯定存在人脸识别分类器，且当前人脸有较大概率被录入过，拒绝录入此人脸并跳转到失败界面
            {
                camera.release();
                this->close();
                pageoftakefacefailed *ptkff = new pageoftakefacefailed;
                ptkff->show();
                delay(2000);
                ptkff->close();
                Widget *nnww = new Widget;
                nnww->show();
                nnww->openCamara();
                break;

            }
        }
        if(times>9)//一次拍10张，存入当前目录，也就是可执行程序所在的目录,也就是说10张照片，对应一个人，因为这样算法好算，用count/10就能把每十位归为同一个数字0~9,10~19,20~29....
        {
//            writeFaceIdAndNameCSV.open("FaceIdAndName.csv",ios::ate|ios::app);
//            writeFaceIdAndNameCSV << (count/10)-1 << ";" << pageOfSetName::facename << endl;//用追加写入到文件尾的方式把每拍下的新人脸照片的标号和之前在新窗口输入的名字写入另一个csv文件中,格式为 人脸标号；人脸名字
//            writeFaceIdAndNameCSV.close();
            //采用数据库的形式，这个文件用不到了

            writePhotoFlag.open("photoFlag.csv",ios::out);
            writePhotoFlag << count <<endl;//本次拍照全部结束后，把拍过的照片总次数计入到另一个csv文件中，下次读取，防止生成照片的文件名混乱
            writePhotoFlag.close();

            //...........用来关闭摄像头并重新运行openCamera函数,该函数内有训练人脸识别模型的函数，执行能够重新将本次新拍录的人脸训练成新的模型.............
            camera.release();
            openCamara();

            pageofloginsuccess *plss =new pageofloginsuccess;
            plss->show();
            delay(2000);
            plss->close();
            //.............................................................................................
            break;
        }

}

}





void Widget::Show_now_time()//将label_time设置显示为当前系统时间
{
    QDateTime timeCurrent = QDateTime::currentDateTime();
    QString gettime = timeCurrent.toString("yyyy-MM-dd hh:mm:ss");

    ui->label_time->setText(gettime);

}





/******************************
********* 打开摄像头 ***********
*******************************/
void Widget::openCamara()
{

   camera.open(0);

   //****** 这个路径自行修改 ******
   face_cascade_name = "haarcascade_frontalface_alt.xml";//要尤其注意这个人脸检测xml有没有放在当前目录，没有必报错

   if(face_cascade_name.empty())
   {
       cout << "没有读到人脸检测分类器的xml文件，请检测该文件是否存在";
       exit(-1);
   }

   face_cascade.load(face_cascade_name);//加载级联分类器，用于人脸检测

   //................通过.csv文件加载图片和标签到images和labels并训练...........................

      vector<Mat> images;
      vector<int> labels;
//      string csvPath = "FacePathAndId.csv";//.csv文件所在目录
//      read_csv(csvPath,images,labels);//需要注意的是，csv文件里写了多少个图片路径和标号，在对应目录下就得有多少个人脸图片，否则会导致文件读取失败进一步导致人脸模型训练失败

      read_sql(images,labels);//查询数据库，把查到的照片路径对应的照片和对应的标号按顺序压入images和labels容器中

      if(!images.empty())//设立这个判断调节是为了防止程序首次执行没有人脸库，也没有csv文件说明照片目录和标号就train空的images和lables导致内存错误
      {
      model->train(images, labels);//要训练后才能完成人脸识别
      model->save("trainedmodel.xml");//训练完后保存模型，人脸识别就是通过这个模型来的
      model->load("trainedmodel.xml");//加载这个.xml文件作为人脸识别模型
      trainedflag=1;//如果上边的train函数得到了执行，把这个flag由默认定义的0置为1
      }
//      else
//      {
//          cout << "暂时没有人脸库，请先录入" << endl;
//      }
      //其实save和load是可以省略的，因为在这个源文件里就是现“train”现用了，在这里写出来是为了更清楚的表现人脸识别的工作过程
   //...............model在最前边有定义，csv文件是自己写的.................................



   timer_camera->start(2);        // 开始计时，超时则发出timeout()信号


}





void Widget::Face_recognition()//显示图像 人脸检测  画框 人脸识别 查数据库
{


        camera >> cameraFrame;


        //人脸检测只试用于灰度图像

        Pic2Gray(cameraFrame, gray);

        //直方图均匀化(改善图像的对比度和亮度)

//        equalizeHist(gray, equalizedImg);


        face_cascade.detectMultiScale(gray,faces,1.1,3,0,Size(10,10));


        int resid=-1;

        double confidence=9999.0;

        //画矩形框
        Point text_lb;
        for (size_t i = 0; i < faces.size(); i++)
        {
            if (faces[i].height > 0 && faces[i].width > 0)
            {

                text_lb = Point(faces[i].x, faces[i].y);
                rectangle(cameraFrame, faces[i], Scalar(0, 255, 0), 4, 8, 0);

                //................................................
                Mat getface = gray(Rect(faces[i].x,faces[i].y,faces[i].width, faces[i].height));//获取摄像头拍出的图中的人脸部分
                Mat img(100,100,CV_8UC1);
                cv::resize(getface,img,Size(100,100));//现在所拍人脸的尺寸必须要与前边录入的照片匹配,100x100
                //将当前摄像头采集图像截取人脸部分，并灰度化，归一化大小为100x100,得到img

                if(trainedflag==1)//这个flag默认定义为0，如果model->train成功执行，这个flag就置为1，这里的判断也就成立，
                //否则如果model没有train过，就执行下边这句话会导致错误，一般是为了程序首次执行啥人脸库和csv路径都没有的时候出错
                {
//                resid = model->predict(img);//把img与train过所有的人脸库相匹配，返回匹配度最高的人脸的标号

                model->predict(img,resid,confidence);
                }
                //................................................

            }
            else
            {
                finalname="";//检测不到人脸时清空名字
            }

         }


        if(confidence<3500)//返回的这玩意越小说明相似度越高,如果相似度不够，就别查表显示名字了
        {
        //创建sqlite数据库my.db,无则创建，有则链接
        QSqlDatabase db;
        if(QSqlDatabase::contains("qt_sql_default_connection"))
          db = QSqlDatabase::database("qt_sql_default_connection");
        else
          db = QSqlDatabase::addDatabase("QSQLITE");


           db.setDatabaseName("my.db");
           db.open();//open

           //创建表
           QSqlQuery query;
           query.exec("create table user (name varchar,id int,Path varchar)");

        //用命令的方式查表
         query.exec("select * from user");//先把数据库所有的信息查出来
         while(query.next())//一条一条地查
         {
             QString name = query.value(0).toString();
             int id = query.value(1).toInt();

             if(id==resid)//如果当前这条数据和resid一样
             {
                 finalname=name.toStdString();//就把当前这条的名字取出来然后走出循环
                 break;
             }
         }

         db.close();

        ui->label_manname->setText(QString::fromStdString(finalname));//在Qt的Label上显示用opencv模型返回的resid通过sqlite数据库查询到的名字

        }

        else
         {
            ui->label_manname->setText("");
            finalname="";//置信度过低时将名字清空
         }


        LabelDisplayMat(ui->label_camera,cameraFrame);


    }


void Widget::Pic2Gray(Mat cameraFrame,Mat &gray)//根据图像通道数决定使用哪种方式灰度化
{
    //普通台式机3通道BGR,移动设备为4通道
    if (cameraFrame.channels() == 3)
    {
        cvtColor(cameraFrame, gray, CV_BGR2GRAY);
    }
    else if (cameraFrame.channels() == 4)
    {
        cvtColor(cameraFrame, gray, CV_BGRA2GRAY);
     }
    else
        gray = cameraFrame;
}


//void Widget::closeCamera()
//{
//    camera.release();//释放摄像头资源
//    exit(0);//代表正常退出程序
//}


void LabelDisplayMat(QLabel *label, cv::Mat &mat)//自适应地将Mat显示在label上
{
    cv::Mat Rgb;
    QImage Img;
    if (mat.channels() == 3)//RGB Img
    {
        cv::cvtColor(mat, Rgb, CV_BGR2RGB);//颜色空间转换
        Img = QImage((const uchar*)(Rgb.data), Rgb.cols, Rgb.rows, Rgb.cols * Rgb.channels(), QImage::Format_RGB888);
    }
    else//Gray Img
    {
        Img = QImage((const uchar*)(mat.data), mat.cols, mat.rows, mat.cols*mat.channels(), QImage::Format_Indexed8);
    }


//    label->setPixmap(QPixmap::fromImage(Img));

//    QPixmap pix;//只是为了使用fromImage函数创建的它
//    QImage image(Img);//
//    label->setPixmap(pix.fromImage(image));
    label->setPixmap(QPixmap::fromImage(Img));
    label->setScaledContents(true);//自适应label的关键

}







