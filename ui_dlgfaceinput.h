/********************************************************************************
** Form generated from reading UI file 'dlgfaceinput.ui'
**
** Created by: Qt User Interface Compiler version 5.7.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_DLGFACEINPUT_H
#define UI_DLGFACEINPUT_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QDialog>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>

QT_BEGIN_NAMESPACE

class Ui_dlgFaceInput
{
public:
    QGroupBox *groupBox;
    QLabel *label_image;
    QPushButton *pushButton_cap;
    QGroupBox *groupBox_2;
    QHBoxLayout *horizontalLayout;
    QLabel *label;
    QLineEdit *lineEdit_name;
    QPushButton *pushButton_inpput;

    void setupUi(QDialog *dlgFaceInput)
    {
        if (dlgFaceInput->objectName().isEmpty())
            dlgFaceInput->setObjectName(QStringLiteral("dlgFaceInput"));
        dlgFaceInput->resize(342, 175);
        groupBox = new QGroupBox(dlgFaceInput);
        groupBox->setObjectName(QStringLiteral("groupBox"));
        groupBox->setGeometry(QRect(0, 10, 151, 151));
        label_image = new QLabel(groupBox);
        label_image->setObjectName(QStringLiteral("label_image"));
        label_image->setGeometry(QRect(10, 20, 121, 111));
        label_image->setScaledContents(true);
        pushButton_cap = new QPushButton(dlgFaceInput);
        pushButton_cap->setObjectName(QStringLiteral("pushButton_cap"));
        pushButton_cap->setGeometry(QRect(160, 20, 171, 23));
        groupBox_2 = new QGroupBox(dlgFaceInput);
        groupBox_2->setObjectName(QStringLiteral("groupBox_2"));
        groupBox_2->setGeometry(QRect(160, 60, 171, 61));
        horizontalLayout = new QHBoxLayout(groupBox_2);
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        label = new QLabel(groupBox_2);
        label->setObjectName(QStringLiteral("label"));

        horizontalLayout->addWidget(label);

        lineEdit_name = new QLineEdit(groupBox_2);
        lineEdit_name->setObjectName(QStringLiteral("lineEdit_name"));

        horizontalLayout->addWidget(lineEdit_name);

        pushButton_inpput = new QPushButton(dlgFaceInput);
        pushButton_inpput->setObjectName(QStringLiteral("pushButton_inpput"));
        pushButton_inpput->setGeometry(QRect(160, 130, 171, 23));

        retranslateUi(dlgFaceInput);

        QMetaObject::connectSlotsByName(dlgFaceInput);
    } // setupUi

    void retranslateUi(QDialog *dlgFaceInput)
    {
        dlgFaceInput->setWindowTitle(QApplication::translate("dlgFaceInput", "\344\272\272\350\204\270\345\275\225\345\205\245", Q_NULLPTR));
        groupBox->setTitle(QApplication::translate("dlgFaceInput", "image", Q_NULLPTR));
        label_image->setText(QString());
        pushButton_cap->setText(QApplication::translate("dlgFaceInput", "open camera", Q_NULLPTR));
        groupBox_2->setTitle(QApplication::translate("dlgFaceInput", "infor", Q_NULLPTR));
        label->setText(QApplication::translate("dlgFaceInput", "name:", Q_NULLPTR));
        pushButton_inpput->setText(QApplication::translate("dlgFaceInput", "input", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class dlgFaceInput: public Ui_dlgFaceInput {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_DLGFACEINPUT_H
