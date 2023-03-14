/********************************************************************************
** Form generated from reading UI file 'ctrl4.ui'
**
** Created by: Qt User Interface Compiler version 5.9.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_CTRL4_H
#define UI_CTRL4_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_ctrl4
{
public:
    QLabel *label;
    QPushButton *pushButton;
    QLabel *label_2;
    QLabel *label_3;

    void setupUi(QWidget *ctrl4)
    {
        if (ctrl4->objectName().isEmpty())
            ctrl4->setObjectName(QStringLiteral("ctrl4"));
        ctrl4->resize(651, 483);
        ctrl4->setStyleSheet(QLatin1String("background-color: qlineargradient(spread:pad, x1:0, y1:0, x2:1, y2:0, stop:0 rgba(251,102,102, 200), stop:1 rgba(20,196,188, 210));\n"
""));
        label = new QLabel(ctrl4);
        label->setObjectName(QStringLiteral("label"));
        label->setGeometry(QRect(180, 100, 321, 51));
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
        pushButton = new QPushButton(ctrl4);
        pushButton->setObjectName(QStringLiteral("pushButton"));
        pushButton->setGeometry(QRect(420, 370, 131, 41));
        pushButton->setStyleSheet(QString::fromUtf8("QPushButton{font: 25 22pt '\345\276\256\350\275\257\351\233\205\351\273\221 Light';color: rgb(255,255,255);background-color: rgb(251,102,102, 200);\n"
"         border: none;border-radius:15px;}\n"
"      QPushButton:hover{background-color: rgb(22,218,208);}//hover\n"
"      QPushButton:pressed{background-color: rgb(17,171,164);}//pressed\n"
"\n"
"\n"
""));
        label_2 = new QLabel(ctrl4);
        label_2->setObjectName(QStringLiteral("label_2"));
        label_2->setGeometry(QRect(140, 200, 391, 31));
        label_2->setFont(font);
        label_2->setStyleSheet(QString::fromUtf8("background-color: rgb(0,0,0,0);\n"
"font: 25 35pt '\345\276\256\350\275\257\351\233\205\351\273\221 Light';\n"
"color: rgb(255,255,255);\n"
"\n"
"\n"
"\n"
"\n"
"\n"
""));
        label_2->setWordWrap(true);
        label_3 = new QLabel(ctrl4);
        label_3->setObjectName(QStringLiteral("label_3"));
        label_3->setGeometry(QRect(230, 270, 431, 41));
        label_3->setFont(font);
        label_3->setStyleSheet(QString::fromUtf8("background-color: rgb(0,0,0,0);\n"
"font: 25 35pt '\345\276\256\350\275\257\351\233\205\351\273\221 Light';\n"
"color: rgb(255,255,255);\n"
"\n"
"\n"
"\n"
"\n"
"\n"
""));
        label_3->setWordWrap(true);

        retranslateUi(ctrl4);

        QMetaObject::connectSlotsByName(ctrl4);
    } // setupUi

    void retranslateUi(QWidget *ctrl4)
    {
        ctrl4->setWindowTitle(QApplication::translate("ctrl4", "Form", Q_NULLPTR));
        label->setText(QApplication::translate("ctrl4", "The box is open", Q_NULLPTR));
        pushButton->setText(QApplication::translate("ctrl4", "GOBACK", Q_NULLPTR));
        label_2->setText(QApplication::translate("ctrl4", "Please close the door after ", Q_NULLPTR));
        label_3->setText(QApplication::translate("ctrl4", "after using", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class ctrl4: public Ui_ctrl4 {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_CTRL4_H
