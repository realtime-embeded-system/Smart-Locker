/********************************************************************************
** Form generated from reading UI file 'pageofchooseinorout.ui'
**
** Created by: Qt User Interface Compiler version 5.7.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_PAGEOFCHOOSEINOROUT_H
#define UI_PAGEOFCHOOSEINOROUT_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_pageofchooseinorout
{
public:
    QLabel *label;
    QLabel *checkname;
    QLabel *label_2;
    QLabel *checktime;
    QLabel *label_3;
    QPushButton *chuqinbutton;
    QPushButton *tuiqinbutton;
    QPushButton *cancelbutton;

    void setupUi(QWidget *pageofchooseinorout)
    {
        if (pageofchooseinorout->objectName().isEmpty())
            pageofchooseinorout->setObjectName(QStringLiteral("pageofchooseinorout"));
        pageofchooseinorout->resize(720, 565);
        pageofchooseinorout->setStyleSheet(QStringLiteral(""));
        label = new QLabel(pageofchooseinorout);
        label->setObjectName(QStringLiteral("label"));
        label->setGeometry(QRect(160, 20, 131, 81));
        QFont font;
        font.setPointSize(30);
        label->setFont(font);
        checkname = new QLabel(pageofchooseinorout);
        checkname->setObjectName(QStringLiteral("checkname"));
        checkname->setGeometry(QRect(310, 20, 211, 81));
        checkname->setFont(font);
        label_2 = new QLabel(pageofchooseinorout);
        label_2->setObjectName(QStringLiteral("label_2"));
        label_2->setGeometry(QRect(30, 140, 241, 61));
        QFont font1;
        font1.setPointSize(25);
        label_2->setFont(font1);
        checktime = new QLabel(pageofchooseinorout);
        checktime->setObjectName(QStringLiteral("checktime"));
        checktime->setGeometry(QRect(250, 140, 451, 71));
        checktime->setFont(font1);
        label_3 = new QLabel(pageofchooseinorout);
        label_3->setObjectName(QStringLiteral("label_3"));
        label_3->setGeometry(QRect(120, 240, 501, 51));
        QFont font2;
        font2.setPointSize(24);
        label_3->setFont(font2);
        chuqinbutton = new QPushButton(pageofchooseinorout);
        chuqinbutton->setObjectName(QStringLiteral("chuqinbutton"));
        chuqinbutton->setGeometry(QRect(120, 310, 251, 101));
        QFont font3;
        font3.setPointSize(41);
        chuqinbutton->setFont(font3);
        tuiqinbutton = new QPushButton(pageofchooseinorout);
        tuiqinbutton->setObjectName(QStringLiteral("tuiqinbutton"));
        tuiqinbutton->setGeometry(QRect(380, 310, 251, 101));
        tuiqinbutton->setFont(font3);
        cancelbutton = new QPushButton(pageofchooseinorout);
        cancelbutton->setObjectName(QStringLiteral("cancelbutton"));
        cancelbutton->setGeometry(QRect(230, 420, 281, 121));
        cancelbutton->setFont(font3);

        retranslateUi(pageofchooseinorout);

        QMetaObject::connectSlotsByName(pageofchooseinorout);
    } // setupUi

    void retranslateUi(QWidget *pageofchooseinorout)
    {
        pageofchooseinorout->setWindowTitle(QApplication::translate("pageofchooseinorout", "Form", 0));
        label->setText(QApplication::translate("pageofchooseinorout", "\346\202\250\346\230\257:", 0));
        checkname->setText(QString());
        label_2->setText(QApplication::translate("pageofchooseinorout", "\346\211\223\345\215\241\347\232\204\346\227\266\351\227\264\346\230\257:", 0));
        checktime->setText(QString());
        label_3->setText(QApplication::translate("pageofchooseinorout", "\350\257\267\351\200\211\346\213\251\346\202\250\346\230\257\345\207\272\345\213\244\346\211\223\345\215\241\350\277\230\346\230\257\351\200\200\345\213\244\346\211\223\345\215\241\357\274\232", 0));
        chuqinbutton->setText(QApplication::translate("pageofchooseinorout", "\345\207\272\345\213\244", 0));
        tuiqinbutton->setText(QApplication::translate("pageofchooseinorout", "\351\200\200\345\213\244", 0));
        cancelbutton->setText(QApplication::translate("pageofchooseinorout", "\345\217\226\346\266\210", 0));
    } // retranslateUi

};

namespace Ui {
    class pageofchooseinorout: public Ui_pageofchooseinorout {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_PAGEOFCHOOSEINOROUT_H
