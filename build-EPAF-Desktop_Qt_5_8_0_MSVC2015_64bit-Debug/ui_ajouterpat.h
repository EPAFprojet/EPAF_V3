/********************************************************************************
** Form generated from reading UI file 'ajouterpat.ui'
**
** Created by: Qt User Interface Compiler version 5.8.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_AJOUTERPAT_H
#define UI_AJOUTERPAT_H

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

class Ui_ajouterPat
{
public:
    QMenuBar *menubar;
    QWidget *centralwidget;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *ajouterPat)
    {
        if (ajouterPat->objectName().isEmpty())
            ajouterPat->setObjectName(QStringLiteral("ajouterPat"));
        ajouterPat->resize(800, 600);
        menubar = new QMenuBar(ajouterPat);
        menubar->setObjectName(QStringLiteral("menubar"));
        ajouterPat->setMenuBar(menubar);
        centralwidget = new QWidget(ajouterPat);
        centralwidget->setObjectName(QStringLiteral("centralwidget"));
        ajouterPat->setCentralWidget(centralwidget);
        statusbar = new QStatusBar(ajouterPat);
        statusbar->setObjectName(QStringLiteral("statusbar"));
        ajouterPat->setStatusBar(statusbar);

        retranslateUi(ajouterPat);

        QMetaObject::connectSlotsByName(ajouterPat);
    } // setupUi

    void retranslateUi(QMainWindow *ajouterPat)
    {
        ajouterPat->setWindowTitle(QApplication::translate("ajouterPat", "MainWindow", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class ajouterPat: public Ui_ajouterPat {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_AJOUTERPAT_H
