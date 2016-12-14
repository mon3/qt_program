#-------------------------------------------------
#
# Project created by QtCreator 2016-12-13T23:34:50
#
#-------------------------------------------------

QT       += core gui

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

TARGET = prog6
TEMPLATE = app


SOURCES += main.cpp\
        mainwindow.cpp

HEADERS  += mainwindow.h

FORMS    += mainwindow.ui

CONFIG += Qwt

INCLUDEPATH += /usr/local/qwt-5.2.4-svn/include
LIBS += -L/usr/local/qwt-5.2.4-svn/lib -lqwt

