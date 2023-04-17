#ifndef PAGEOFSETNAME_H
#define PAGEOFSETNAME_H

#include <QWidget>

#include<widget.h>

#include <QMouseEvent>

#include<softkeyboard.h>

#include<pageofsetnamefailed.h>

#include<widget.h>

using namespace std;

namespace Ui {
class pageOfSetName;
}

class pageOfSetName : public QWidget
{
    Q_OBJECT

public:
    explicit pageOfSetName(QWidget *parent = 0);
    ~pageOfSetName();

protected:
    bool eventFilter(QObject *watched, QEvent *event);

private slots:
    void on_pushButton_okfromsetnamepage_clicked();

    void on_pushButton_cancelfromsetnamepage_clicked();

private:
    Ui::pageOfSetName *ui;
    SoftKeyboard *softKeyboard;

};






#endif // PAGEOFSETNAME_H
