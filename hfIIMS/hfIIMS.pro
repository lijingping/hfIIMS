#-------------------------------------------------
#
# Project created by QtCreator 2020-12-14T11:24:48
#
#-------------------------------------------------

QT       += core gui charts sql

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

TARGET = hfIIMS
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

INCLUDEPATH += src \
            ui

SOURCES += \
        src/main.cpp \
        src/mainwindow.cpp \
    src/maintitle.cpp \
    src/global.cpp \
    src/hftemperature.cpp \
    src/hfwetdisplay.cpp \
    src/hfnoisedisplay.cpp \
    src/hfVolumeSet.cpp \
    src/hfHeartRate.cpp \
    src/database.cpp \
    src/hfLogo.cpp \
    src/hfModifyUser.cpp

HEADERS += \
    util/signleton.hpp \
    src/global.h \
    src/mainwindow.h \
    src/maintitle.h \
    src/hftemperature.h \
    src/hfwetdisplay.h \
    src/hfnoisedisplay.h \
    src/hfVolumeSet.h \
    src/hfHeartRate.h \
    src/database.h \
    src/hfLogo.h \
    src/hfModifyUser.h

FORMS += \
      ui/mainwindow.ui \
    ui/maintitle.ui \
    src/hftemperature.ui \
    src/hfwetdisplay.ui \
    src/hfnoisedisplay.ui \
    src/hfVolumeSet.ui \
    src/hfHeartRate.ui \
    src/hfLogo.ui \
    src/hfModifyUser.ui

DISTFILES += \
    res/img/logo.svg  \
    res/qss/qss.css \
    res/img/rectangle.svg \
    res/qss/mainwindow.css \
    res/qss/hfmaintitle.css

RESOURCES += \
    res/logo/logo.qrc \
    res/img/img.qrc
