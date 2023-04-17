/********************************************************************************
** Form generated from reading UI file 'ctrl.ui'
**
** Created by: Qt User Interface Compiler version 5.9.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_CTRL_H
#define UI_CTRL_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_ctrl
{
public:
    QLabel *label;
    QPushButton *pushButton;
    QLabel *label_2;

    void setupUi(QWidget *ctrl)
    {
        if (ctrl->objectName().isEmpty())
            ctrl->setObjectName(QStringLiteral("ctrl"));
        ctrl->resize(673, 490);
        ctrl->setStyleSheet(QLatin1String("background-color: qlineargradient(spread:pad, x1:0, y1:0, x2:1, y2:0, stop:0 rgba(251,102,102, 200), stop:1 rgba(20,196,188, 210));\n"
"\n"
"\n"
"\n"
"  \n"
"\n"
"\n"
"\n"
""));
        label = new QLabel(ctrl);
        label->setObjectName(QStringLiteral("label"));
        label->setGeometry(QRect(100, 80, 461, 71));
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
        pushButton = new QPushButton(ctrl);
        pushButton->setObjectName(QStringLiteral("pushButton"));
        pushButton->setGeometry(QRect(240, 280, 171, 71));
        QFont font1;
        font1.setFamily(QString::fromUtf8("\345\276\256\350\275\257\351\233\205\351\273\221 Light"));
        font1.setPointSize(25);
        font1.setBold(false);
        font1.setItalic(false);
        font1.setWeight(3);
        pushButton->setFont(font1);
        pushButton->setStyleSheet(QString::fromUtf8("QPushButton{font: 25 25pt '\345\276\256\350\275\257\351\233\205\351\273\221 Light';color: rgb(255,255,255);background-color: rgb(20,196,188);\n"
"         border: none;border-radius:15px;}\n"
"      QPushButton:hover{background-color: rgb(22,218,208);}//hover\n"
"      QPushButton:pressed{background-color: rgb(17,171,164);}//pressed\n"
"\n"
"\n"
""));
        label_2 = new QLabel(ctrl);
        label_2->setObjectName(QStringLiteral("label_2"));
        label_2->setGeometry(QRect(130, 150, 461, 81));
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

        retranslateUi(ctrl);

        QMetaObject::connectSlotsByName(ctrl);
    } // setupUi

    void retranslateUi(QWidget *ctrl)
    {
        ctrl->setWindowTitle(QApplication::translate("ctrl", "Form", Q_NULLPTR));
        label->setText(QApplication::translate("ctrl", "Please put your face right", Q_NULLPTR));
        pushButton->setText(QApplication::translate("ctrl", "START", Q_NULLPTR));
        label_2->setText(QApplication::translate("ctrl", "                                                           in front of the camera", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class ctrl: public Ui_ctrl {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_CTRL_H
