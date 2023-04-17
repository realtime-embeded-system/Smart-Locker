/********************************************************************************
** Form generated from reading UI file 'pageofloginsuccess.ui'
**
** Created by: Qt User Interface Compiler version 5.7.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_PAGEOFLOGINSUCCESS_H
#define UI_PAGEOFLOGINSUCCESS_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_pageofloginsuccess
{
public:
    QGridLayout *gridLayout;
    QSpacerItem *verticalSpacer_2;
    QSpacerItem *horizontalSpacer;
    QLabel *label;
    QSpacerItem *horizontalSpacer_2;
    QSpacerItem *verticalSpacer;

    void setupUi(QWidget *pageofloginsuccess)
    {
        if (pageofloginsuccess->objectName().isEmpty())
            pageofloginsuccess->setObjectName(QStringLiteral("pageofloginsuccess"));
        pageofloginsuccess->resize(720, 565);
        pageofloginsuccess->setStyleSheet(QStringLiteral(""));
        gridLayout = new QGridLayout(pageofloginsuccess);
        gridLayout->setObjectName(QStringLiteral("gridLayout"));
        verticalSpacer_2 = new QSpacerItem(20, 224, QSizePolicy::Minimum, QSizePolicy::Expanding);

        gridLayout->addItem(verticalSpacer_2, 0, 1, 1, 1);

        horizontalSpacer = new QSpacerItem(177, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout->addItem(horizontalSpacer, 1, 0, 1, 1);

        label = new QLabel(pageofloginsuccess);
        label->setObjectName(QStringLiteral("label"));
        QFont font;
        font.setPointSize(41);
        label->setFont(font);

        gridLayout->addWidget(label, 1, 1, 1, 1);

        horizontalSpacer_2 = new QSpacerItem(177, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout->addItem(horizontalSpacer_2, 1, 2, 1, 1);

        verticalSpacer = new QSpacerItem(20, 223, QSizePolicy::Minimum, QSizePolicy::Expanding);

        gridLayout->addItem(verticalSpacer, 2, 1, 1, 1);


        retranslateUi(pageofloginsuccess);

        QMetaObject::connectSlotsByName(pageofloginsuccess);
    } // setupUi

    void retranslateUi(QWidget *pageofloginsuccess)
    {
        pageofloginsuccess->setWindowTitle(QApplication::translate("pageofloginsuccess", "Form", 0));
        label->setText(QApplication::translate("pageofloginsuccess", "\344\272\272\350\204\270\345\275\225\345\205\245\346\210\220\345\212\237", 0));
    } // retranslateUi

};

namespace Ui {
    class pageofloginsuccess: public Ui_pageofloginsuccess {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_PAGEOFLOGINSUCCESS_H
