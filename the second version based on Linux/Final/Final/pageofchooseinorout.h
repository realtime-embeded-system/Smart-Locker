#ifndef PAGEOFCHOOSEINOROUT_H
#define PAGEOFCHOOSEINOROUT_H

#include <QWidget>
#include<QDateTime>
#include <sstream>
#include <fstream>

#include <QSqlDatabase>
#include <QSqlQuery>
#include <QSqlError>
#include <qdebug.h>

#include <QSqlTableModel>
#include <QTableView>

using namespace std;

namespace Ui {
class pageofchooseinorout;
}

class pageofchooseinorout : public QWidget
{
    Q_OBJECT

public:
    explicit pageofchooseinorout(QWidget *parent = 0);
    ~pageofchooseinorout();

    void getcheckname(string name);

    void setcheckname();

private slots:
    void on_chuqinbutton_clicked();

    void on_tuiqinbutton_clicked();

    void on_cancelbutton_clicked();



private:
    Ui::pageofchooseinorout *ui;

    QString nowtime;


    string checkname;

};

#endif // PAGEOFCHOOSEINOROUT_H
