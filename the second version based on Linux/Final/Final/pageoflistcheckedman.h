#ifndef PAGEOFLISTCHECKEDMAN_H
#define PAGEOFLISTCHECKEDMAN_H

#include <QWidget>

#include <sstream>
#include <fstream>

#include <QSqlDatabase>
#include <QSqlQuery>
#include <QSqlError>
#include <qdebug.h>

#include <QSqlTableModel>
#include <QTableView>

#include<widget.h>


using namespace std;

namespace Ui {
class pageoflistcheckedman;
}

class pageoflistcheckedman : public QWidget
{
    Q_OBJECT

public:
    explicit pageoflistcheckedman(QWidget *parent = 0);
    ~pageoflistcheckedman();
    void listallchecked();

private slots:

    void on_pushButton_list_chuqin_clicked();

    void on_pushButton_list_tuiqin_clicked();

    void on_pushButton_list_all_clicked();

    void on_comboBox_choostwho_activated(const QString &arg1);

    void on_pushButton_cancel_clicked();

private:
    Ui::pageoflistcheckedman *ui;
};

#endif // PAGEOFLISTCHECKEDMAN_H
