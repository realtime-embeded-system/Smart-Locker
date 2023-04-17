/********************************************************************************
** Form generated from reading UI file 'pageofsetnamefailed.ui'
**
** Created by: Qt User Interface Compiler version 5.7.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_PAGEOFSETNAMEFAILED_H
#define UI_PAGEOFSETNAMEFAILED_H

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

class Ui_pageofsetnamefailed
{
public:
    QGridLayout *gridLayout;
    QSpacerItem *verticalSpacer;
    QSpacerItem *horizontalSpacer;
    QLabel *label;
    QSpacerItem *horizontalSpacer_2;
    QSpacerItem *verticalSpacer_2;

    void setupUi(QWidget *pageofsetnamefailed)
    {
        if (pageofsetnamefailed->objectName().isEmpty())
            pageofsetnamefailed->setObjectName(QStringLiteral("pageofsetnamefailed"));
        pageofsetnamefailed->resize(720, 565);
        gridLayout = new QGridLayout(pageofsetnamefailed);
        gridLayout->setObjectName(QStringLiteral("gridLayout"));
        verticalSpacer = new QSpacerItem(20, 238, QSizePolicy::Minimum, QSizePolicy::Expanding);

        gridLayout->addItem(verticalSpacer, 0, 1, 1, 1);

        horizontalSpacer = new QSpacerItem(145, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout->addItem(horizontalSpacer, 1, 0, 1, 1);

        label = new QLabel(pageofsetnamefailed);
        label->setObjectName(QStringLiteral("label"));
        QFont font;
        font.setPointSize(26);
        label->setFont(font);

        gridLayout->addWidget(label, 1, 1, 1, 1);

        horizontalSpacer_2 = new QSpacerItem(145, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout->addItem(horizontalSpacer_2, 1, 2, 1, 1);

        verticalSpacer_2 = new QSpacerItem(20, 238, QSizePolicy::Minimum, QSizePolicy::Expanding);

        gridLayout->addItem(verticalSpacer_2, 2, 1, 1, 1);


        retranslateUi(pageofsetnamefailed);

        QMetaObject::connectSlotsByName(pageofsetnamefailed);
    } // setupUi

    void retranslateUi(QWidget *pageofsetnamefailed)
    {
        pageofsetnamefailed->setWindowTitle(QApplication::translate("pageofsetnamefailed", "Form", 0));
        label->setText(QApplication::translate("pageofsetnamefailed", "\346\255\244\345\220\215\345\255\227\345\267\262\345\255\230\345\234\250,\350\257\267\351\207\215\346\226\260\350\276\223\345\205\245", 0));
    } // retranslateUi

};

namespace Ui {
    class pageofsetnamefailed: public Ui_pageofsetnamefailed {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_PAGEOFSETNAMEFAILED_H
