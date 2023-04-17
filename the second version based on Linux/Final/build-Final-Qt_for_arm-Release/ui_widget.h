/********************************************************************************
** Form generated from reading UI file 'widget.ui'
**
** Created by: Qt User Interface Compiler version 5.7.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_WIDGET_H
#define UI_WIDGET_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Widget
{
public:
    QLabel *label_camera;
    QLabel *label;
    QLabel *label_time;
    QLabel *label_title_2;
    QLabel *label_manname;
    QLabel *label_title_3;
    QLabel *label_temp;
    QWidget *layoutWidget;
    QVBoxLayout *verticalLayout;
    QPushButton *pushButton_hongwai;
    QPushButton *pushButton_open;
    QPushButton *pushButton_takefacephoto;
    QPushButton *pushButton_checkin;
    QPushButton *pushButton_listchecked;

    void setupUi(QWidget *Widget)
    {
        if (Widget->objectName().isEmpty())
            Widget->setObjectName(QStringLiteral("Widget"));
        Widget->resize(720, 565);
        Widget->setStyleSheet(QStringLiteral(""));
        label_camera = new QLabel(Widget);
        label_camera->setObjectName(QStringLiteral("label_camera"));
        label_camera->setGeometry(QRect(10, 150, 481, 401));
        QSizePolicy sizePolicy(QSizePolicy::Ignored, QSizePolicy::Ignored);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(label_camera->sizePolicy().hasHeightForWidth());
        label_camera->setSizePolicy(sizePolicy);
        QFont font;
        font.setPointSize(24);
        label_camera->setFont(font);
        label_camera->setStyleSheet(QStringLiteral("background-color: rgb(0, 0, 0);"));
        label = new QLabel(Widget);
        label->setObjectName(QStringLiteral("label"));
        label->setGeometry(QRect(10, 10, 241, 61));
        sizePolicy.setHeightForWidth(label->sizePolicy().hasHeightForWidth());
        label->setSizePolicy(sizePolicy);
        QFont font1;
        font1.setPointSize(27);
        label->setFont(font1);
        label_time = new QLabel(Widget);
        label_time->setObjectName(QStringLiteral("label_time"));
        label_time->setGeometry(QRect(250, 10, 461, 61));
        sizePolicy.setHeightForWidth(label_time->sizePolicy().hasHeightForWidth());
        label_time->setSizePolicy(sizePolicy);
        label_time->setFont(font1);
        label_title_2 = new QLabel(Widget);
        label_title_2->setObjectName(QStringLiteral("label_title_2"));
        label_title_2->setGeometry(QRect(10, 78, 241, 61));
        sizePolicy.setHeightForWidth(label_title_2->sizePolicy().hasHeightForWidth());
        label_title_2->setSizePolicy(sizePolicy);
        label_title_2->setFont(font1);
        label_manname = new QLabel(Widget);
        label_manname->setObjectName(QStringLiteral("label_manname"));
        label_manname->setGeometry(QRect(540, 96, 171, 41));
        sizePolicy.setHeightForWidth(label_manname->sizePolicy().hasHeightForWidth());
        label_manname->setSizePolicy(sizePolicy);
        label_manname->setFont(font1);
        label_title_3 = new QLabel(Widget);
        label_title_3->setObjectName(QStringLiteral("label_title_3"));
        label_title_3->setGeometry(QRect(420, 90, 96, 49));
        sizePolicy.setHeightForWidth(label_title_3->sizePolicy().hasHeightForWidth());
        label_title_3->setSizePolicy(sizePolicy);
        label_title_3->setFont(font1);
        label_temp = new QLabel(Widget);
        label_temp->setObjectName(QStringLiteral("label_temp"));
        label_temp->setGeometry(QRect(260, 90, 141, 41));
        sizePolicy.setHeightForWidth(label_temp->sizePolicy().hasHeightForWidth());
        label_temp->setSizePolicy(sizePolicy);
        label_temp->setFont(font1);
        layoutWidget = new QWidget(Widget);
        layoutWidget->setObjectName(QStringLiteral("layoutWidget"));
        layoutWidget->setGeometry(QRect(500, 150, 212, 401));
        sizePolicy.setHeightForWidth(layoutWidget->sizePolicy().hasHeightForWidth());
        layoutWidget->setSizePolicy(sizePolicy);
        verticalLayout = new QVBoxLayout(layoutWidget);
        verticalLayout->setSpacing(6);
        verticalLayout->setContentsMargins(11, 11, 11, 11);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        verticalLayout->setContentsMargins(0, 0, 0, 0);
        pushButton_hongwai = new QPushButton(layoutWidget);
        pushButton_hongwai->setObjectName(QStringLiteral("pushButton_hongwai"));
        sizePolicy.setHeightForWidth(pushButton_hongwai->sizePolicy().hasHeightForWidth());
        pushButton_hongwai->setSizePolicy(sizePolicy);
        pushButton_hongwai->setFont(font);

        verticalLayout->addWidget(pushButton_hongwai);

        pushButton_open = new QPushButton(layoutWidget);
        pushButton_open->setObjectName(QStringLiteral("pushButton_open"));
        sizePolicy.setHeightForWidth(pushButton_open->sizePolicy().hasHeightForWidth());
        pushButton_open->setSizePolicy(sizePolicy);
        pushButton_open->setFont(font);

        verticalLayout->addWidget(pushButton_open);

        pushButton_takefacephoto = new QPushButton(layoutWidget);
        pushButton_takefacephoto->setObjectName(QStringLiteral("pushButton_takefacephoto"));
        sizePolicy.setHeightForWidth(pushButton_takefacephoto->sizePolicy().hasHeightForWidth());
        pushButton_takefacephoto->setSizePolicy(sizePolicy);
        pushButton_takefacephoto->setFont(font);

        verticalLayout->addWidget(pushButton_takefacephoto);

        pushButton_checkin = new QPushButton(layoutWidget);
        pushButton_checkin->setObjectName(QStringLiteral("pushButton_checkin"));
        sizePolicy.setHeightForWidth(pushButton_checkin->sizePolicy().hasHeightForWidth());
        pushButton_checkin->setSizePolicy(sizePolicy);
        pushButton_checkin->setFont(font);

        verticalLayout->addWidget(pushButton_checkin);

        pushButton_listchecked = new QPushButton(layoutWidget);
        pushButton_listchecked->setObjectName(QStringLiteral("pushButton_listchecked"));
        sizePolicy.setHeightForWidth(pushButton_listchecked->sizePolicy().hasHeightForWidth());
        pushButton_listchecked->setSizePolicy(sizePolicy);
        pushButton_listchecked->setFont(font);

        verticalLayout->addWidget(pushButton_listchecked);


        retranslateUi(Widget);

        QMetaObject::connectSlotsByName(Widget);
    } // setupUi

    void retranslateUi(QWidget *Widget)
    {
        Widget->setWindowTitle(QApplication::translate("Widget", "Widget", 0));
        label_camera->setText(QString());
        label->setText(QApplication::translate("Widget", "\347\263\273\347\273\237\345\275\223\345\211\215\346\227\266\351\227\264\357\274\232", 0));
        label_time->setText(QString());
        label_title_2->setText(QApplication::translate("Widget", "\347\272\242\345\244\226\345\256\236\346\227\266\346\270\251\345\272\246\357\274\232", 0));
        label_manname->setText(QString());
        label_title_3->setText(QApplication::translate("Widget", "\346\202\250\346\230\257:", 0));
        label_temp->setText(QString());
        pushButton_hongwai->setText(QApplication::translate("Widget", "\345\274\200\347\272\242\345\244\226\344\274\240\346\204\237\345\231\250", 0));
        pushButton_open->setText(QApplication::translate("Widget", "\345\274\200\345\220\257\346\221\204\345\203\217\345\244\264", 0));
        pushButton_takefacephoto->setText(QApplication::translate("Widget", "\345\275\225\345\205\245\344\272\272\350\204\270", 0));
        pushButton_checkin->setText(QApplication::translate("Widget", "\350\200\203\345\213\244\347\231\273\350\256\260", 0));
        pushButton_listchecked->setText(QApplication::translate("Widget", "\346\237\245\347\234\213\350\200\203\345\213\244\345\210\227\350\241\250", 0));
    } // retranslateUi

};

namespace Ui {
    class Widget: public Ui_Widget {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_WIDGET_H
