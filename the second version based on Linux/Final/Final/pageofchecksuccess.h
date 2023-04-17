#ifndef PAGEOFCHECKSUCCESS_H
#define PAGEOFCHECKSUCCESS_H

#include <QWidget>

namespace Ui {
class pageofchecksuccess;
}

class pageofchecksuccess : public QWidget
{
    Q_OBJECT

public:
    explicit pageofchecksuccess(QWidget *parent = 0);
    ~pageofchecksuccess();

private:
    Ui::pageofchecksuccess *ui;
};

#endif // PAGEOFCHECKSUCCESS_H
