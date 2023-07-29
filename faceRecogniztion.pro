#-------------------------------------------------
#
# Project created by QtCreator 2018-10-25T19:52:12
#
#-------------------------------------------------

QT       += core gui sql

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

TARGET = faceRecogniztion
TEMPLATE = app

# The following define makes your compiler emit warnings if you use
# any feature of Qt which has been marked as deprecated (the exact warnings
# depend on your compiler). Please consult the documentation of the
# deprecated API in order to know how to port your code away from it.
DEFINES += QT_DEPRECATED_WARNINGS

# You can also make your code fail to compile if you use deprecated APIs.
# In order to do so, uncomment the following line.
# You can also select to disable deprecated APIs only up to a certain version of Qt.
#DEFINES += QT_DISABLE_DEPRECATED_BEFORE=0x060000    # disables all the APIs deprecated before Qt 6.0.0


SOURCES += \
        main.cpp \
        mainwindow.cpp \
    FaceRecognition.cpp \
    featuregroup.cpp \
    dlgfaceinput.cpp \

HEADERS += \
        mainwindow.h \
    FeatureGroup.h \
    FaceRecognition.h \
    dlgfaceinput.h \

FORMS += \
        mainwindow.ui \
    dlgfaceinput.ui \


RESOURCES += \
    images.qrc

LIBS += -lopencv_core \
         -lopencv_highgui \
         -lopencv_imgproc \
         -lwiringPi \

INCLUDEPATH +=faceEngine/include/FaceDetection/include \
            faceEngine/include/FaceAlignment/include \
            faceEngine/include/FaceIdentification/include




unix:!macx: LIBS += -L$$PWD/SeetaFaceEngine/lib/ -lseeta_facedet_lib

INCLUDEPATH += $$PWD/SeetaFaceEngine/include
DEPENDPATH += $$PWD/SeetaFaceEngine/include


unix:!macx: LIBS += -L$$PWD/SeetaFaceEngine/lib/ -lseeta_fa_lib

INCLUDEPATH += $$PWD/SeetaFaceEngine/include
DEPENDPATH += $$PWD/SeetaFaceEngine/include


unix:!macx: LIBS += -L$$PWD/SeetaFaceEngine/lib/ -lviplnet

INCLUDEPATH += $$PWD/SeetaFaceEngine/include
DEPENDPATH += $$PWD/SeetaFaceEngine/include
