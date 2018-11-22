#-------------------------------------------------
#
# Project created by QtCreator 2018-11-22T09:28:06
#
#-------------------------------------------------

QT       += core gui

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

TARGET = QuizzCardQt
TEMPLATE = app


SOURCES += main.cpp\
        mainwindow.cpp \
    client.cpp \
    gestionnairedialogue.cpp \
    paquet.cpp \
    face.cpp \
    carte.cpp

HEADERS  += mainwindow.h \
    client.h \
    gestionnairedialogue.h \
    paquet.h \
    face.h \
    carte.h

FORMS    += mainwindow.ui
