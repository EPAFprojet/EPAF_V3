/********************************************************************************
** Form generated from reading UI file 'recu.ui'
**
** Created by: Qt User Interface Compiler version 5.8.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_RECU_H
#define UI_RECU_H

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

class Ui_recu
{
public:
    QMenuBar *menubar;
    QWidget *centralwidget;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *recu)
    {
        if (recu->objectName().isEmpty())
            recu->setObjectName(QStringLiteral("recu"));
        recu->resize(800, 600);
        menubar = new QMenuBar(recu);
        menubar->setObjectName(QStringLiteral("menubar"));
        recu->setMenuBar(menubar);
        centralwidget = new QWidget(recu);
        centralwidget->setObjectName(QStringLiteral("centralwidget"));
        recu->setCentralWidget(centralwidget);
        statusbar = new QStatusBar(recu);
        statusbar->setObjectName(QStringLiteral("statusbar"));
        recu->setStatusBar(statusbar);

        retranslateUi(recu);

        QMetaObject::connectSlotsByName(recu);
    } // setupUi

    void retranslateUi(QMainWindow *recu)
    {
        recu->setWindowTitle(QApplication::translate("recu", "MainWindow", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class recu: public Ui_recu {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_RECU_H
