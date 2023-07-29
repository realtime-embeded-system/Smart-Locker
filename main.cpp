#include "mainwindow.h"
#include <QApplication>
#include <wiringPi.h>

int main(int argc, char *argv[])
{ int wiringPiSetup(void);
    QApplication a(argc, argv);
    MainWindow w;

    w.show();
    return a.exec();
}
