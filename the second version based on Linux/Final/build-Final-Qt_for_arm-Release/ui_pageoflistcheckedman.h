/********************************************************************************
** Form generated from reading UI file 'pageoflistcheckedman.ui'
**
** Created by: Qt User Interface Compiler version 5.7.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_PAGEOFLISTCHECKEDMAN_H
#define UI_PAGEOFLISTCHECKEDMAN_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QTextBrowser>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_pageoflistcheckedman
{
public:
    QLabel *label;
    QPushButton *pushButton_cancel;
    QTextBrowser *textBrowser_listcheckedman;
    QPushButton *pushButton_list_chuqin;
    QPushButton *pushButton_list_tuiqin;
    QPushButton *pushButton_list_all;
    QComboBox *comboBox_choostwho;
    QLabel *label_2;

    void setupUi(QWidget *pageoflistcheckedman)
    {
        if (pageoflistcheckedman->objectName().isEmpty())
            pageoflistcheckedman->setObjectName(QStringLiteral("pageoflistcheckedman"));
        pageoflistcheckedman->resize(720, 565);
        pageoflistcheckedman->setStyleSheet(QStringLiteral(""));
        label = new QLabel(pageoflistcheckedman);
        label->setObjectName(QStringLiteral("label"));
        label->setGeometry(QRect(350, 10, 141, 41));
        QFont font;
        font.setPointSize(23);
        label->setFont(font);
        pushButton_cancel = new QPushButton(pageoflistcheckedman);
        pushButton_cancel->setObjectName(QStringLiteral("pushButton_cancel"));
        pushButton_cancel->setGeometry(QRect(490, 370, 178, 68));
        QFont font1;
        font1.setPointSize(25);
        pushButton_cancel->setFont(font1);
        textBrowser_listcheckedman = new QTextBrowser(pageoflistcheckedman);
        textBrowser_listcheckedman->setObjectName(QStringLiteral("textBrowser_listcheckedman"));
        textBrowser_listcheckedman->setGeometry(QRect(50, 60, 631, 281));
        textBrowser_listcheckedman->setFont(font1);
        textBrowser_listcheckedman->setStyleSheet(QStringLiteral("background-color: rgb(255, 255, 255);"));
        textBrowser_listcheckedman->setVerticalScrollBarPolicy(Qt::ScrollBarAlwaysOn);
        pushButton_list_chuqin = new QPushButton(pageoflistcheckedman);
        pushButton_list_chuqin->setObjectName(QStringLiteral("pushButton_list_chuqin"));
        pushButton_list_chuqin->setGeometry(QRect(50, 450, 201, 68));
        pushButton_list_chuqin->setFont(font1);
        pushButton_list_tuiqin = new QPushButton(pageoflistcheckedman);
        pushButton_list_tuiqin->setObjectName(QStringLiteral("pushButton_list_tuiqin"));
        pushButton_list_tuiqin->setGeometry(QRect(490, 450, 178, 68));
        pushButton_list_tuiqin->setFont(font1);
        pushButton_list_all = new QPushButton(pageoflistcheckedman);
        pushButton_list_all->setObjectName(QStringLiteral("pushButton_list_all"));
        pushButton_list_all->setGeometry(QRect(270, 450, 201, 68));
        pushButton_list_all->setFont(font1);
        comboBox_choostwho = new QComboBox(pageoflistcheckedman);
        comboBox_choostwho->setObjectName(QStringLiteral("comboBox_choostwho"));
        comboBox_choostwho->setGeometry(QRect(270, 370, 201, 71));
        comboBox_choostwho->setFont(font1);
        comboBox_choostwho->setIconSize(QSize(25, 25));
        label_2 = new QLabel(pageoflistcheckedman);
        label_2->setObjectName(QStringLiteral("label_2"));
        label_2->setGeometry(QRect(90, 380, 151, 41));
        label_2->setFont(font);

        retranslateUi(pageoflistcheckedman);

        QMetaObject::connectSlotsByName(pageoflistcheckedman);
    } // setupUi

    void retranslateUi(QWidget *pageoflistcheckedman)
    {
        pageoflistcheckedman->setWindowTitle(QApplication::translate("pageoflistcheckedman", "Form", 0));
        label->setText(QApplication::translate("pageoflistcheckedman", "\347\231\273\350\256\260\345\210\227\350\241\250", 0));
        pushButton_cancel->setText(QApplication::translate("pageoflistcheckedman", "\350\277\224\345\233\236", 0));
        pushButton_list_chuqin->setText(QApplication::translate("pageoflistcheckedman", "\345\217\252\347\234\213\345\207\272\345\213\244", 0));
        pushButton_list_tuiqin->setText(QApplication::translate("pageoflistcheckedman", "\345\217\252\347\234\213\351\200\200\345\213\244", 0));
        pushButton_list_all->setText(QApplication::translate("pageoflistcheckedman", "\345\210\227\345\207\272\345\205\250\351\203\250", 0));
        label_2->setText(QApplication::translate("pageoflistcheckedman", "\346\214\211\344\272\272\346\237\245\350\257\242\357\274\232", 0));
    } // retranslateUi

};

namespace Ui {
    class pageoflistcheckedman: public Ui_pageoflistcheckedman {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_PAGEOFLISTCHECKEDMAN_H
