#ifndef PAGEOFTAKEFACEFAILED_H
#define PAGEOFTAKEFACEFAILED_H

#include <QWidget>

namespace Ui {
class pageoftakefacefailed;
}

class pageoftakefacefailed : public QWidget
{
    Q_OBJECT

public:
    explicit pageoftakefacefailed(QWidget *parent = 0);
    ~pageoftakefacefailed();

private:
    Ui::pageoftakefacefailed *ui;
};

#endif // PAGEOFTAKEFACEFAILED_H
