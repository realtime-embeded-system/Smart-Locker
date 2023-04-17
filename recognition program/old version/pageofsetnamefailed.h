#ifndef PAGEOFSETNAMEFAILED_H
#define PAGEOFSETNAMEFAILED_H

#include <QWidget>

namespace Ui {
class pageofsetnamefailed;
}

class pageofsetnamefailed : public QWidget
{
    Q_OBJECT

public:
    explicit pageofsetnamefailed(QWidget *parent = 0);
    ~pageofsetnamefailed();

private:
    Ui::pageofsetnamefailed *ui;
};

#endif // PAGEOFSETNAMEFAILED_H
