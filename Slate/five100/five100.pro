#-------------------------------------------------
#
# Project created by QtCreator 2018-04-01T07:47:21
#
#-------------------------------------------------

QT       += core gui

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

TARGET = five100
TEMPLATE = app


SOURCES += main.cpp\
        mainwindow.cpp \
    constructors.cpp \
    conversion.cpp \
    draw.cpp \
    frontgl.cpp \
    oglwidget.cpp \
    sidegl.cpp \
    topgl.cpp \
    transformations2D.cpp \
    transformations3D.cpp \
    workspace2d.cpp

HEADERS  += mainwindow.h \
    classes.h \
    frontgl.h \
    oglwidget.h \
    primitive.h \
    sidegl.h \
    topgl.h \
    try.h \
    ui_mainwindow.h \
    ui_workspace2d.h \
    workspace2d.h

FORMS    += mainwindow.ui \
    workspace2d.ui
