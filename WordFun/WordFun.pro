#-------------------------------------------------
#
# Project created by QtCreator 2016-12-17T12:28:35
#
#-------------------------------------------------

QT       += core gui
QT       += sql widgets
QT       += network widgets

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

TARGET = WordFun
TEMPLATE = app


SOURCES += main.cpp\
        wordfun.cpp\
letters.cpp\
checker.cpp

HEADERS  += wordfun.h\
letters.h\
checker.h

FORMS    += wordfun.ui
