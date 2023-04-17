/********************************************************************************
** Form generated from reading UI file 'pageofsetname.ui'
**
** Created by: Qt User Interface Compiler version 5.7.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_PAGEOFSETNAME_H
#define UI_PAGEOFSETNAME_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_pageOfSetName
{
public:
    QLabel *label;
    QLineEdit *lineEdit_facename;
    QPushButton *pushButton_okfromsetnamepage;
    QLabel *label_2;
    QPushButton *pushButton_cancelfromsetnamepage;

    void setupUi(QWidget *pageOfSetName)
    {
        if (pageOfSetName->objectName().isEmpty())
            pageOfSetName->setObjectName(QStringLiteral("pageOfSetName"));
        pageOfSetName->resize(720, 565);
        QFont font;
        font.setPointSize(25);
        pageOfSetName->setFont(font);
        pageOfSetName->setStyleSheet(QStringLiteral(""));
        label = new QLabel(pageOfSetName);
        label->setObjectName(QStringLiteral("label"));
        label->setGeometry(QRect(190, 40, 321, 71));
        QSizePolicy sizePolicy(QSizePolicy::Ignored, QSizePolicy::Ignored);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(label->sizePolicy().hasHeightForWidth());
        label->setSizePolicy(sizePolicy);
        QFont font1;
        font1.setPointSize(30);
        label->setFont(font1);
        label->setAlignment(Qt::AlignCenter);
        lineEdit_facename = new QLineEdit(pageOfSetName);
        lineEdit_facename->setObjectName(QStringLiteral("lineEdit_facename"));
        lineEdit_facename->setGeometry(QRect(160, 290, 401, 81));
        sizePolicy.setHeightForWidth(lineEdit_facename->sizePolicy().hasHeightForWidth());
        lineEdit_facename->setSizePolicy(sizePolicy);
        lineEdit_facename->setFont(font);
        lineEdit_facename->setStyleSheet(QStringLiteral("background-color: rgb(255, 255, 255);"));
        pushButton_okfromsetnamepage = new QPushButton(pageOfSetName);
        pushButton_okfromsetnamepage->setObjectName(QStringLiteral("pushButton_okfromsetnamepage"));
        pushButton_okfromsetnamepage->setGeometry(QRect(91, 403, 251, 74));
        sizePolicy.setHeightForWidth(pushButton_okfromsetnamepage->sizePolicy().hasHeightForWidth());
        pushButton_okfromsetnamepage->setSizePolicy(sizePolicy);
        QFont font2;
        font2.setPointSize(32);
        pushButton_okfromsetnamepage->setFont(font2);
        label_2 = new QLabel(pageOfSetName);
        label_2->setObjectName(QStringLiteral("label_2"));
        label_2->setGeometry(QRect(90, 190, 531, 91));
        sizePolicy.setHeightForWidth(label_2->sizePolicy().hasHeightForWidth());
        label_2->setSizePolicy(sizePolicy);
        QFont font3;
        font3.setPointSize(27);
        label_2->setFont(font3);
        label_2->setAlignment(Qt::AlignCenter);
        pushButton_cancelfromsetnamepage = new QPushButton(pageOfSetName);
        pushButton_cancelfromsetnamepage->setObjectName(QStringLiteral("pushButton_cancelfromsetnamepage"));
        pushButton_cancelfromsetnamepage->setGeometry(QRect(359, 403, 261, 74));
        sizePolicy.setHeightForWidth(pushButton_cancelfromsetnamepage->sizePolicy().hasHeightForWidth());
        pushButton_cancelfromsetnamepage->setSizePolicy(sizePolicy);
        pushButton_cancelfromsetnamepage->setFont(font2);

        retranslateUi(pageOfSetName);

        QMetaObject::connectSlotsByName(pageOfSetName);
    } // setupUi

    void retranslateUi(QWidget *pageOfSetName)
    {
        pageOfSetName->setWindowTitle(QApplication::translate("pageOfSetName", "Form", 0));
        label->setText(QApplication::translate("pageOfSetName", "\350\257\267\350\276\223\345\205\245\346\202\250\347\232\204\345\220\215\345\255\227", 0));
        pushButton_okfromsetnamepage->setText(QApplication::translate("pageOfSetName", "\347\241\256\345\256\232", 0));
        label_2->setText(QApplication::translate("pageOfSetName", "\347\202\271\345\207\273\347\241\256\345\256\232\345\211\215\350\257\267\344\277\235\350\257\201\350\204\270\345\234\250\346\221\204\345\203\217\345\244\264\345\211\215", 0));
        pushButton_cancelfromsetnamepage->setText(QApplication::translate("pageOfSetName", "\345\217\226\346\266\210", 0));
    } // retranslateUi

};

namespace Ui {
    class pageOfSetName: public Ui_pageOfSetName {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_PAGEOFSETNAME_H
