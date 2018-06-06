#-------------------------------------------------
#
# Project created by QtCreator 2018-01-06T20:03:40
#
#-------------------------------------------------

QT       += core gui

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

TARGET = RegExpTrainer
TEMPLATE = app

RC_ICONS += RegExp.ico

VERSION = 1.0.0
QMAKE_TARGET_COMPANY = Ted Inc.
QMAKE_TARGET_COPYRIGHT = Ted COPYRIGHT
QMAKE_TARGET_PRODUCT = RegExp Trainer

# The following define makes your compiler emit warnings if you use
# any feature of Qt which has been marked as deprecated (the exact warnings
# depend on your compiler). Please consult the documentation of the
# deprecated API in order to know how to port your code away from it.
DEFINES += QT_DEPRECATED_WARNINGS

# You can also make your code fail to compile if you use deprecated APIs.
# In order to do so, uncomment the following line.
# You can also select to disable deprecated APIs only up to a certain version of Qt.
#DEFINES += QT_DISABLE_DEPRECATED_BEFORE=0x060000    # disables all the APIs deprecated before Qt 6.0.0


SOURCES += \
        main.cpp \
        regexptrainer.cpp

HEADERS += \
        regexptrainer.h

FORMS += \
        regexptrainer.ui
