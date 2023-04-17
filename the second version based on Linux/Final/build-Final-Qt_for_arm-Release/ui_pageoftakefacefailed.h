/********************************************************************************
** Form generated from reading UI file 'pageoftakefacefailed.ui'
**
** Created by: Qt User Interface Compiler version 5.7.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_PAGEOFTAKEFACEFAILED_H
#define UI_PAGEOFTAKEFACEFAILED_H

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

class Ui_pageoftakefacefailed
{
public:
    QGridLayout *gridLayout;
    QSpacerItem *horizontalSpacer;
    QLabel *label;
    QSpacerItem *horizontalSpacer_2;

    void setupUi(QWidget *pageoftakefacefailed)
    {
        if (pageoftakefacefailed->objectName().isEmpty())
            pageoftakefacefailed->setObjectName(QStringLiteral("pageoftakefacefailed"));
        pageoftakefacefailed->resize(720, 565);
        gridLayout = new QGridLayout(pageoftakefacefailed);
        gridLayout->setObjectName(QStringLiteral("gridLayout"));
        horizontalSpacer = new QSpacerItem(125, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout->addItem(horizontalSpacer, 0, 0, 1, 1);

        label = new QLabel(pageoftakefacefailed);
        label->setObjectName(QStringLiteral("label"));
        QFont font;
        font.setPointSize(22);
        label->setFont(font);

        gridLayout->addWidget(label, 0, 1, 1, 1);

        horizontalSpacer_2 = new QSpacerItem(124, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout->addItem(horizontalSpacer_2, 0, 2, 1, 1);


        retranslateUi(pageoftakefacefailed);

        QMetaObject::connectSlotsByName(pageoftakefacefailed);
    } // setupUi

    void retranslateUi(QWidget *pageoftakefacefailed)
    {
        pageoftakefacefailed->setWindowTitle(QApplication::translate("pageoftakefacefailed", "Form", 0));
        label->setText(QApplication::translate("pageoftakefacefailed", "\346\255\244\344\272\272\350\204\270\344\274\274\344\271\216\345\267\262\350\242\253\345\275\225\345\205\245\350\277\207\357\274\214\346\213\222\347\273\235\345\275\225\345\205\245", 0));
    } // retranslateUi

};

namespace Ui {
    class pageoftakefacefailed: public Ui_pageoftakefacefailed {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_PAGEOFTAKEFACEFAILED_H
