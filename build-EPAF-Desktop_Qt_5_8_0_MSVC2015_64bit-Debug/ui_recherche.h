/********************************************************************************
** Form generated from reading UI file 'recherche.ui'
**
** Created by: Qt User Interface Compiler version 5.8.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_RECHERCHE_H
#define UI_RECHERCHE_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QStackedWidget>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_recherche
{
public:
    QWidget *centralwidget;
    QStackedWidget *stackedWidget;
    QWidget *page;
    QLabel *label;
    QWidget *page_2;
    QLabel *label_2;
    QMenuBar *menubar;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *recherche)
    {
        if (recherche->objectName().isEmpty())
            recherche->setObjectName(QStringLiteral("recherche"));
        recherche->resize(800, 600);
        centralwidget = new QWidget(recherche);
        centralwidget->setObjectName(QStringLiteral("centralwidget"));
        stackedWidget = new QStackedWidget(centralwidget);
        stackedWidget->setObjectName(QStringLiteral("stackedWidget"));
        stackedWidget->setGeometry(QRect(0, 0, 791, 551));
        page = new QWidget();
        page->setObjectName(QStringLiteral("page"));
        label = new QLabel(page);
        label->setObjectName(QStringLiteral("label"));
        label->setGeometry(QRect(10, 20, 91, 21));
        stackedWidget->addWidget(page);
        page_2 = new QWidget();
        page_2->setObjectName(QStringLiteral("page_2"));
        label_2 = new QLabel(page_2);
        label_2->setObjectName(QStringLiteral("label_2"));
        label_2->setGeometry(QRect(20, 20, 91, 31));
        stackedWidget->addWidget(page_2);
        recherche->setCentralWidget(centralwidget);
        menubar = new QMenuBar(recherche);
        menubar->setObjectName(QStringLiteral("menubar"));
        menubar->setGeometry(QRect(0, 0, 800, 21));
        recherche->setMenuBar(menubar);
        statusbar = new QStatusBar(recherche);
        statusbar->setObjectName(QStringLiteral("statusbar"));
        recherche->setStatusBar(statusbar);

        retranslateUi(recherche);

        stackedWidget->setCurrentIndex(0);


        QMetaObject::connectSlotsByName(recherche);
    } // setupUi

    void retranslateUi(QMainWindow *recherche)
    {
        recherche->setWindowTitle(QApplication::translate("recherche", "MainWindow", Q_NULLPTR));
        label->setText(QApplication::translate("recherche", "Recherche", Q_NULLPTR));
        label_2->setText(QApplication::translate("recherche", "Modifier pat", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class recherche: public Ui_recherche {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_RECHERCHE_H
