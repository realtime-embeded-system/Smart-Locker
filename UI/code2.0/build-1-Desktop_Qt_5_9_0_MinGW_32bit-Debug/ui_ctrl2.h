/********************************************************************************
** Form generated from reading UI file 'ctrl2.ui'
**
** Created by: Qt User Interface Compiler version 5.9.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_CTRL2_H
#define UI_CTRL2_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_ctrl2
{
public:
    QPushButton *deposit;
    QPushButton *pushButton_2;
    QPushButton *pushButton;

    void setupUi(QWidget *ctrl2)
    {
        if (ctrl2->objectName().isEmpty())
            ctrl2->setObjectName(QStringLiteral("ctrl2"));
        ctrl2->resize(641, 482);
        ctrl2->setStyleSheet(QLatin1String("background-color: qlineargradient(spread:pad, x1:0, y1:0, x2:1, y2:0, stop:0 rgba(251,102,102, 200), stop:1 rgba(20,196,188, 210));\n"
""));
        deposit = new QPushButton(ctrl2);
        deposit->setObjectName(QStringLiteral("deposit"));
        deposit->setGeometry(QRect(90, 110, 161, 151));
        QFont font;
        font.setFamily(QString::fromUtf8("\345\276\256\350\275\257\351\233\205\351\273\221 Light"));
        font.setPointSize(30);
        font.setBold(false);
        font.setItalic(false);
        font.setWeight(3);
        deposit->setFont(font);
        deposit->setStyleSheet(QString::fromUtf8("QPushButton{font: 25 30pt '\345\276\256\350\275\257\351\233\205\351\273\221 Light';color: rgb(255,255,255);background-color: rgb(20,196,188);\n"
"         border: none;border-radius:15px;}\n"
"      QPushButton:hover{background-color: rgb(22,218,208);}//hover\n"
"      QPushButton:pressed{background-color: rgb(17,171,164);}//pressed\n"
"\n"
"\n"
""));
        pushButton_2 = new QPushButton(ctrl2);
        pushButton_2->setObjectName(QStringLiteral("pushButton_2"));
        pushButton_2->setGeometry(QRect(390, 110, 161, 151));
        pushButton_2->setFont(font);
        pushButton_2->setStyleSheet(QString::fromUtf8("QPushButton{font: 25 30pt '\345\276\256\350\275\257\351\233\205\351\273\221 Light';color: rgb(255,255,255);background-color: rgb(20,196,188);\n"
"         border: none;border-radius:15px;}\n"
"      QPushButton:hover{background-color: rgb(22,218,208);}//hover\n"
"      QPushButton:pressed{background-color: rgb(17,171,164);}//pressed\n"
"\n"
"\n"
""));
        pushButton = new QPushButton(ctrl2);
        pushButton->setObjectName(QStringLiteral("pushButton"));
        pushButton->setGeometry(QRect(420, 330, 121, 51));
        pushButton->setStyleSheet(QString::fromUtf8("QPushButton{font: 25 22pt '\345\276\256\350\275\257\351\233\205\351\273\221 Light';color: rgb(255,255,255);background-color: rgb(251,102,102, 200);\n"
"         border: none;border-radius:15px;}\n"
"      QPushButton:hover{background-color: rgb(22,218,208);}//hover\n"
"      QPushButton:pressed{background-color: rgb(17,171,164);}//pressed\n"
"\n"
"\n"
""));

        retranslateUi(ctrl2);

        QMetaObject::connectSlotsByName(ctrl2);
    } // setupUi

    void retranslateUi(QWidget *ctrl2)
    {
        ctrl2->setWindowTitle(QApplication::translate("ctrl2", "Form", Q_NULLPTR));
        deposit->setText(QApplication::translate("ctrl2", "Deposit", Q_NULLPTR));
        pushButton_2->setText(QApplication::translate("ctrl2", "Collect", Q_NULLPTR));
        pushButton->setText(QApplication::translate("ctrl2", "GOBACK", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class ctrl2: public Ui_ctrl2 {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_CTRL2_H
