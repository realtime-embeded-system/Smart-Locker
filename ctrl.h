#ifndef CTRL_H
#define CTRL_H

#include <QWidget>

namespace Ui {
class ctrl;
}

class ctrl : public QWidget
{
    Q_OBJECT

public:
    explicit ctrl(QWidget *parent = 0);
    ~ctrl();

private slots:
    void on_pushButton_clicked();

private:
    Ui::ctrl *ui;
};

#endif // CTRL_H
