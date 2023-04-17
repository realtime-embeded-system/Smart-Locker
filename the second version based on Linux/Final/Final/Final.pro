#-------------------------------------------------
#
# Project created by QtCreator 2021-02-20T00:11:44
#
#-------------------------------------------------

QT       += core gui sql

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

TARGET = Final
TEMPLATE = app


SOURCES += main.cpp\
        widget.cpp \
    pageofsetname.cpp \
    pageoflistcheckedman.cpp \
    MLX90614.cpp \
    pageofchooseinorout.cpp \
    softkeyboard.cpp \
    pageofloginsuccess.cpp \
    pageofchecksuccess.cpp \
    pageofcheckfailed.cpp \
    pageofsetnamefailed.cpp \
    pageoftakefacefailed.cpp

HEADERS  += widget.h \
    pageofsetname.h \
    pageoflistcheckedman.h \
    MLX90614.h \
    pageofchooseinorout.h \
    softkeyboard.h \
    pageofloginsuccess.h \
    pageofchecksuccess.h \
    pageofcheckfailed.h \
    pageofsetnamefailed.h \
    pageoftakefacefailed.h

FORMS    += widget.ui \
    pageofsetname.ui \
    pageoflistcheckedman.ui \
    pageofchooseinorout.ui \
    pageofloginsuccess.ui \
    pageofchecksuccess.ui \
    pageofcheckfailed.ui \
    pageofsetnamefailed.ui \
    pageoftakefacefailed.ui

#CONFIG += c++11

#opencv_for_local
#opencv_for_arm


#交叉编译的时候把opencv_for_local都换成opencv_for_arm


INCLUDEPATH += /home/penson/opencv_for_arm/include
INCLUDEPATH += /home/penson/opencv_for_arm/include/opencv2
INCLUDEPATH += /home/penson/opencv_for_arm/include/opencv


LIBS += -L/home/penson/opencv_for_arm/lib/ \
-lopencv_core \
-lopencv_highgui \
-lopencv_video \
-lopencv_imgcodecs \
-lopencv_calib3d \
-lopencv_features2d \
-lopencv_flann \
-lopencv_imgproc \
-lopencv_ml \
-lopencv_objdetect \
-lopencv_photo \
-lopencv_shape \
-lopencv_stitching \
-lopencv_superres \
#-lopencv_ts \
-lopencv_videoio \
-lopencv_videostab \
-lopencv_face

INCLUDEPATH += /home/penson/BiYeSheJi/HongWaiCeWen/include

LIBS += -L/home/penson/BiYeSheJi/HongWaiCeWen/lib/ \
-lwiringPi \
-lwiringPiDev






