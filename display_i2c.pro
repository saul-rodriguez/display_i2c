#-------------------------------------------------
#
# Project created by QtCreator 2014-04-23T18:38:29
#
#-------------------------------------------------

QT       += core gui

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

TARGET = display_i2c
TEMPLATE = app


SOURCES += main.cpp\
        mainwindow.cpp \
    ht16k33.cpp \
    display7seg.cpp

LIBS += -lwiringPi

HEADERS  += mainwindow.h \
    ht16k33.h \
    display7seg.h

FORMS    += mainwindow.ui
