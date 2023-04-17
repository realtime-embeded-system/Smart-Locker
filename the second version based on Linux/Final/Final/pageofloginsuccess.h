#ifndef PAGEOFLOGINSUCCESS_H
#define PAGEOFLOGINSUCCESS_H

#include <QWidget>

namespace Ui {
class pageofloginsuccess;
}

class pageofloginsuccess : public QWidget
{
    Q_OBJECT

public:
    explicit pageofloginsuccess(QWidget *parent = 0);
    ~pageofloginsuccess();

private:
    Ui::pageofloginsuccess *ui;
};

#endif // PAGEOFLOGINSUCCESS_H
