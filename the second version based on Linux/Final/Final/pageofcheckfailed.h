#ifndef PAGEOFCHECKFAILED_H
#define PAGEOFCHECKFAILED_H

#include <QWidget>

namespace Ui {
class pageofcheckfailed;
}

class pageofcheckfailed : public QWidget
{
    Q_OBJECT

public:
    explicit pageofcheckfailed(QWidget *parent = 0);
    ~pageofcheckfailed();

private:
    Ui::pageofcheckfailed *ui;
};

#endif // PAGEOFCHECKFAILED_H
