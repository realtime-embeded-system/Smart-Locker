/********************************************************************************
** Form generated from reading UI file 'pageofcheckfailed.ui'
**
** Created by: Qt User Interface Compiler version 5.7.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_PAGEOFCHECKFAILED_H
#define UI_PAGEOFCHECKFAILED_H

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

class Ui_pageofcheckfailed
{
public:
    QGridLayout *gridLayout;
    QSpacerItem *horizontalSpacer;
    QLabel *label;
    QSpacerItem *horizontalSpacer_2;
    QSpacerItem *horizontalSpacer_3;
    QLabel *label_2;
    QSpacerItem *horizontalSpacer_4;

    void setupUi(QWidget *pageofcheckfailed)
    {
        if (pageofcheckfailed->objectName().isEmpty())
            pageofcheckfailed->setObjectName(QStringLiteral("pageofcheckfailed"));
        pageofcheckfailed->resize(720, 565);
        QFont font;
        font.setPointSize(5);
        pageofcheckfailed->setFont(font);
        gridLayout = new QGridLayout(pageofcheckfailed);
        gridLayout->setObjectName(QStringLiteral("gridLayout"));
        horizontalSpacer = new QSpacerItem(147, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout->addItem(horizontalSpacer, 0, 0, 1, 1);

        label = new QLabel(pageofcheckfailed);
        label->setObjectName(QStringLiteral("label"));
        QFont font1;
        font1.setPointSize(29);
        label->setFont(font1);

        gridLayout->addWidget(label, 0, 1, 1, 1);

        horizontalSpacer_2 = new QSpacerItem(147, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout->addItem(horizontalSpacer_2, 0, 2, 1, 1);

        horizontalSpacer_3 = new QSpacerItem(147, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout->addItem(horizontalSpacer_3, 1, 0, 1, 1);

        label_2 = new QLabel(pageofcheckfailed);
        label_2->setObjectName(QStringLiteral("label_2"));
        label_2->setFont(font1);

        gridLayout->addWidget(label_2, 1, 1, 1, 1);

        horizontalSpacer_4 = new QSpacerItem(147, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout->addItem(horizontalSpacer_4, 1, 2, 1, 1);


        retranslateUi(pageofcheckfailed);

        QMetaObject::connectSlotsByName(pageofcheckfailed);
    } // setupUi

    void retranslateUi(QWidget *pageofcheckfailed)
    {
        pageofcheckfailed->setWindowTitle(QApplication::translate("pageofcheckfailed", "Form", 0));
        label->setText(QApplication::translate("pageofcheckfailed", "\346\262\241\350\203\275\350\257\206\345\210\253\346\202\250\345\271\266\350\216\267\345\217\226\345\220\215\345\255\227", 0));
        label_2->setText(QApplication::translate("pageofcheckfailed", "\350\257\267\346\202\250\351\207\215\346\226\260\350\277\233\350\241\214\344\272\272\350\204\270\350\257\206\345\210\253", 0));
    } // retranslateUi

};

namespace Ui {
    class pageofcheckfailed: public Ui_pageofcheckfailed {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_PAGEOFCHECKFAILED_H
