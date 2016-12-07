#-------------------------------------------------
#
# Project created by QtCreator 2016-11-28T08:16:21
#
#-------------------------------------------------

QT       += core gui

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

TARGET = LearningHelper
TEMPLATE = app


SOURCES += main.cpp\
        mainwindow.cpp \
    infodialog.cpp \
    session.cpp \
    sessionwindow.cpp \
    sessionpredialog.cpp \
    dialogaddcolumn.cpp

HEADERS  += mainwindow.h \
    infodialog.h \
    session.h \
    sessionwindow.h \
    sessionpredialog.h \
    dialogaddcolumn.h

FORMS    += mainwindow.ui \
    infodialog.ui \
    sessionwindow.ui \
    sessionpredialog.ui \
    dialogaddcolumn.ui

CONFIG += mobility
MOBILITY = 

