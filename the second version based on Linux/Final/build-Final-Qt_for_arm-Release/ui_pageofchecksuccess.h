/********************************************************************************
** Form generated from reading UI file 'pageofchecksuccess.ui'
**
** Created by: Qt User Interface Compiler version 5.7.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_PAGEOFCHECKSUCCESS_H
#define UI_PAGEOFCHECKSUCCESS_H

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

class Ui_pageofchecksuccess
{
public:
    QGridLayout *gridLayout;
    QSpacerItem *verticalSpacer;
    QSpacerItem *horizontalSpacer;
    QLabel *label;
    QSpacerItem *horizontalSpacer_2;
    QSpacerItem *verticalSpacer_2;

    void setupUi(QWidget *pageofchecksuccess)
    {
        if (pageofchecksuccess->objectName().isEmpty())
            pageofchecksuccess->setObjectName(QStringLiteral("pageofchecksuccess"));
        pageofchecksuccess->resize(720, 565);
        pageofchecksuccess->setStyleSheet(QStringLiteral(""));
        gridLayout = new QGridLayout(pageofchecksuccess);
        gridLayout->setObjectName(QStringLiteral("gridLayout"));
        verticalSpacer = new QSpacerItem(20, 217, QSizePolicy::Minimum, QSizePolicy::Expanding);

        gridLayout->addItem(verticalSpacer, 0, 1, 1, 1);

        horizontalSpacer = new QSpacerItem(216, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout->addItem(horizontalSpacer, 1, 0, 1, 1);

        label = new QLabel(pageofchecksuccess);
        label->setObjectName(QStringLiteral("label"));
        QFont font;
        font.setPointSize(47);
        label->setFont(font);

        gridLayout->addWidget(label, 1, 1, 1, 1);

        horizontalSpacer_2 = new QSpacerItem(216, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout->addItem(horizontalSpacer_2, 1, 2, 1, 1);

        verticalSpacer_2 = new QSpacerItem(20, 217, QSizePolicy::Minimum, QSizePolicy::Expanding);

        gridLayout->addItem(verticalSpacer_2, 2, 1, 1, 1);


        retranslateUi(pageofchecksuccess);

        QMetaObject::connectSlotsByName(pageofchecksuccess);
    } // setupUi

    void retranslateUi(QWidget *pageofchecksuccess)
    {
        pageofchecksuccess->setWindowTitle(QApplication::translate("pageofchecksuccess", "Form", 0));
        label->setText(QApplication::translate("pageofchecksuccess", "\347\231\273\350\256\260\346\210\220\345\212\237", 0));
    } // retranslateUi

};

namespace Ui {
    class pageofchecksuccess: public Ui_pageofchecksuccess {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_PAGEOFCHECKSUCCESS_H
