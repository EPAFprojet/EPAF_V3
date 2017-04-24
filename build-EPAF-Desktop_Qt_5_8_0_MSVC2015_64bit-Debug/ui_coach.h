/********************************************************************************
** Form generated from reading UI file 'coach.ui'
**
** Created by: Qt User Interface Compiler version 5.8.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_COACH_H
#define UI_COACH_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_coach
{
public:
    QMenuBar *menubar;
    QWidget *centralwidget;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *coach)
    {
        if (coach->objectName().isEmpty())
            coach->setObjectName(QStringLiteral("coach"));
        coach->resize(800, 600);
        menubar = new QMenuBar(coach);
        menubar->setObjectName(QStringLiteral("menubar"));
        coach->setMenuBar(menubar);
        centralwidget = new QWidget(coach);
        centralwidget->setObjectName(QStringLiteral("centralwidget"));
        coach->setCentralWidget(centralwidget);
        statusbar = new QStatusBar(coach);
        statusbar->setObjectName(QStringLiteral("statusbar"));
        coach->setStatusBar(statusbar);

        retranslateUi(coach);

        QMetaObject::connectSlotsByName(coach);
    } // setupUi

    void retranslateUi(QMainWindow *coach)
    {
        coach->setWindowTitle(QApplication::translate("coach", "MainWindow", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class coach: public Ui_coach {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_COACH_H
