#-------------------------------------------------
#
# Project created by QtCreator 2015-05-16T09:23:49
#
#-------------------------------------------------

QT       += core gui

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

TARGET = HardDiskDrive
TEMPLATE = app


SOURCES += main.cpp\
        mainwindow.cpp \
    hdd.cpp

HEADERS  += mainwindow.h \
    hdd.h \
    directblock.h

FORMS    += mainwindow.ui
