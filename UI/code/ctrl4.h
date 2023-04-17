#ifndef CTRL4_H
#define CTRL4_H

#include <QWidget>

namespace Ui {
class ctrl4;
}

class ctrl4 : public QWidget
{
    Q_OBJECT

public:
    explicit ctrl4(QWidget *parent = 0);
    ~ctrl4();

private:
    Ui::ctrl4 *ui;
};

#endif // CTRL4_H
