/********************************************************************************
** Form generated from reading UI file 'ctrl3.ui'
**
** Created by: Qt User Interface Compiler version 5.9.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_CTRL3_H
#define UI_CTRL3_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_ctrl3
{
public:
    QLabel *label;
    QPushButton *one;
    QPushButton *three;
    QPushButton *two;
    QPushButton *four;
    QPushButton *pushButton_5;

    void setupUi(QWidget *ctrl3)
    {
        if (ctrl3->objectName().isEmpty())
            ctrl3->setObjectName(QStringLiteral("ctrl3"));
        ctrl3->resize(645, 520);
        ctrl3->setStyleSheet(QLatin1String("background-color: qlineargradient(spread:pad, x1:0, y1:0, x2:1, y2:0, stop:0 rgba(251,102,102, 200), stop:1 rgba(20,196,188, 210));\n"
""));
        label = new QLabel(ctrl3);
        label->setObjectName(QStringLiteral("label"));
        label->setGeometry(QRect(120, 30, 411, 61));
        QFont font;
        font.setFamily(QString::fromUtf8("\345\276\256\350\275\257\351\233\205\351\273\221 Light"));
        font.setPointSize(35);
        font.setBold(false);
        font.setItalic(false);
        font.setWeight(3);
        label->setFont(font);
        label->setStyleSheet(QString::fromUtf8("background-color: rgb(0,0,0,0);\n"
"font: 25 35pt '\345\276\256\350\275\257\351\233\205\351\273\221 Light';\n"
"color: rgb(255,255,255);\n"
"\n"
"\n"
"\n"
"\n"
"\n"
""));
        label->setWordWrap(true);
        one = new QPushButton(ctrl3);
        one->setObjectName(QStringLiteral("one"));
        one->setGeometry(QRect(120, 130, 131, 91));
        QFont font1;
        font1.setFamily(QString::fromUtf8("\345\276\256\350\275\257\351\233\205\351\273\221 Light"));
        font1.setPointSize(30);
        font1.setBold(false);
        font1.setItalic(false);
        font1.setWeight(3);
        one->setFont(font1);
        one->setStyleSheet(QString::fromUtf8("QPushButton{font: 25 30pt '\345\276\256\350\275\257\351\233\205\351\273\221 Light';color: rgb(255,255,255);background-color: rgb(20,196,188);\n"
"         border: none;border-radius:15px;}\n"
"      QPushButton:hover{background-color: rgb(22,218,208);}//hover\n"
"      QPushButton:pressed{background-color: rgb(17,171,164);}//pressed"));
        three = new QPushButton(ctrl3);
        three->setObjectName(QStringLiteral("three"));
        three->setGeometry(QRect(120, 260, 131, 91));
        three->setFont(font1);
        three->setStyleSheet(QString::fromUtf8("QPushButton{font: 25 30pt '\345\276\256\350\275\257\351\233\205\351\273\221 Light';color: rgb(255,255,255);background-color: rgb(20,196,188);\n"
"         border: none;border-radius:15px;}\n"
"      QPushButton:hover{background-color: rgb(22,218,208);}//hover\n"
"      QPushButton:pressed{background-color: rgb(17,171,164);}//pressed"));
        two = new QPushButton(ctrl3);
        two->setObjectName(QStringLiteral("two"));
        two->setGeometry(QRect(400, 130, 131, 91));
        two->setFont(font1);
        two->setStyleSheet(QString::fromUtf8("QPushButton{font: 25 30pt '\345\276\256\350\275\257\351\233\205\351\273\221 Light';color: rgb(255,255,255);background-color: rgb(20,196,188);\n"
"         border: none;border-radius:15px;}\n"
"      QPushButton:hover{background-color: rgb(22,218,208);}//hover\n"
"      QPushButton:pressed{background-color: rgb(17,171,164);}//pressed"));
        four = new QPushButton(ctrl3);
        four->setObjectName(QStringLiteral("four"));
        four->setGeometry(QRect(400, 250, 131, 91));
        four->setFont(font1);
        four->setStyleSheet(QString::fromUtf8("QPushButton{font: 25 30pt '\345\276\256\350\275\257\351\233\205\351\273\221 Light';color: rgb(255,255,255);background-color: rgb(20,196,188);\n"
"         border: none;border-radius:15px;}\n"
"      QPushButton:hover{background-color: rgb(22,218,208);}//hover\n"
"      QPushButton:pressed{background-color: rgb(17,171,164);}//pressed"));
        pushButton_5 = new QPushButton(ctrl3);
        pushButton_5->setObjectName(QStringLiteral("pushButton_5"));
        pushButton_5->setGeometry(QRect(430, 390, 131, 41));
        pushButton_5->setStyleSheet(QString::fromUtf8("QPushButton{font: 25 22pt '\345\276\256\350\275\257\351\233\205\351\273\221 Light';color: rgb(255,255,255);background-color: rgb(251,102,102, 200);\n"
"         border: none;border-radius:15px;}\n"
"      QPushButton:hover{background-color: rgb(22,218,208);}//hover\n"
"      QPushButton:pressed{background-color: rgb(17,171,164);}//pressed\n"
"\n"
"\n"
""));

        retranslateUi(ctrl3);

        QMetaObject::connectSlotsByName(ctrl3);
    } // setupUi

    void retranslateUi(QWidget *ctrl3)
    {
        ctrl3->setWindowTitle(QApplication::translate("ctrl3", "Form", Q_NULLPTR));
        label->setText(QApplication::translate("ctrl3", "Please select one box", Q_NULLPTR));
        one->setText(QApplication::translate("ctrl3", "1", Q_NULLPTR));
        three->setText(QApplication::translate("ctrl3", "3", Q_NULLPTR));
        two->setText(QApplication::translate("ctrl3", "2", Q_NULLPTR));
        four->setText(QApplication::translate("ctrl3", "4", Q_NULLPTR));
        pushButton_5->setText(QApplication::translate("ctrl3", "GOBACK", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class ctrl3: public Ui_ctrl3 {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_CTRL3_H
