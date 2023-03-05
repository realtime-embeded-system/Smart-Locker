#ifndef CTRL2_H
#define CTRL2_H

#include <QWidget>

namespace Ui {
class ctrl2;
}

class ctrl2 : public QWidget
{
    Q_OBJECT

public:
    explicit ctrl2(QWidget *parent = 0);
    ~ctrl2();

private slots:

    void on_deposit_clicked();

    void on_pushButton_2_clicked();

    void on_pushButton_clicked();

private:
    Ui::ctrl2 *ui;
};

#endif // CTRL2_H
