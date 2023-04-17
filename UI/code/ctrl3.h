#ifndef CTRL3_H
#define CTRL3_H

#include <QWidget>

namespace Ui {
class ctrl3;
}

class ctrl3 : public QWidget
{
    Q_OBJECT

public:
    explicit ctrl3(QWidget *parent = 0);
    ~ctrl3();

private slots:
    void on_one_clicked();

    void on_two_clicked();

    void on_three_clicked();

    void on_four_clicked();

private:
    Ui::ctrl3 *ui;
};

#endif // CTRL3_H
