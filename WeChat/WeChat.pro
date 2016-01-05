#-------------------------------------------------
#
# Project created by QtCreator 2015-12-22T20:51:38
#
#-------------------------------------------------

QT       += core gui

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

TARGET = WeChat
TEMPLATE = app

SOURCES += main.cpp\
        mainwindow.cpp \
    logindialog.cpp \
    resigndialog.cpp \
    frienddialog.cpp \
    personlist.cpp \
    person.cpp \
    persongrounditem.cpp

HEADERS  += mainwindow.h \
    logindialog.h \
    resigndialog.h \
    frienddialog.h \
    personlist.h \
    person.h \
    persongrounditem.h

FORMS    += mainwindow.ui \
    logindialog.ui \
    resigndialog.ui \
    frienddialog.ui
