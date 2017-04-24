#-------------------------------------------------
#
# Project created by QtCreator 2017-04-11T10:16:23
#
#-------------------------------------------------

QT       += core gui
QT       += sql

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

TARGET = EPAF
TEMPLATE = app

# The following define makes your compiler emit warnings if you use
# any feature of Qt which as been marked as deprecated (the exact warnings
# depend on your compiler). Please consult the documentation of the
# deprecated API in order to know how to port your code away from it.
DEFINES += QT_DEPRECATED_WARNINGS

# You can also make your code fail to compile if you use deprecated APIs.
# In order to do so, uncomment the following line.
# You can also select to disable deprecated APIs only up to a certain version of Qt.
#DEFINES += QT_DISABLE_DEPRECATED_BEFORE=0x060000    # disables all the APIs deprecated before Qt 6.0.0


SOURCES += main.cpp\
        mainwindow.cpp \
    connexionmainmenu.cpp \
    recherche.cpp \
    coach.cpp \
    accesrapide.cpp \
    gestiongroupe.cpp \
    recu.cpp \
    patineur.cpp \
    patinageartistique.cpp \
    powerskating.cpp \
    hockey.cpp \
    date.cpp \
    ajouterpat.cpp

HEADERS  += mainwindow.h \
    connexionmainmenu.h \
    recherche.h \
    coach.h \
    accesrapide.h \
    gestiongroupe.h \
    recu.h \
    patineur.h \
    powerskating.h \
    patinageartistique.h \
    hockey.h \
    date.h \
    ajouterpat.h

FORMS    += mainwindow.ui \
    connexionmainmenu.ui \
    recherche.ui \
    coach.ui \
    accesrapide.ui \
    gestiongroupe.ui \
    recu.ui \
    ajouterpat.ui

RESOURCES += \
    ressources.qrc
