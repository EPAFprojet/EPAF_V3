/********************************************************************************
** Form generated from reading UI file 'accesrapide.ui'
**
** Created by: Qt User Interface Compiler version 5.8.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_ACCESRAPIDE_H
#define UI_ACCESRAPIDE_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStackedWidget>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_accesrapide
{
public:
    QWidget *centralwidget;
    QStackedWidget *accesstackedWidget;
    QWidget *page;
    QPushButton *gererGroupepushButton;
    QPushButton *listeRparJpushButton;
    QPushButton *coachpushButton;
    QPushButton *listeRepaspushButton;
    QWidget *page_2;
    QLabel *label_2;
    QWidget *page_3;
    QLabel *label_3;
    QWidget *page_4;
    QLabel *label_4;
    QWidget *page_5;
    QLabel *label;
    QMenuBar *menubar;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *accesrapide)
    {
        if (accesrapide->objectName().isEmpty())
            accesrapide->setObjectName(QStringLiteral("accesrapide"));
        accesrapide->resize(800, 600);
        centralwidget = new QWidget(accesrapide);
        centralwidget->setObjectName(QStringLiteral("centralwidget"));
        accesstackedWidget = new QStackedWidget(centralwidget);
        accesstackedWidget->setObjectName(QStringLiteral("accesstackedWidget"));
        accesstackedWidget->setGeometry(QRect(10, 0, 781, 541));
        page = new QWidget();
        page->setObjectName(QStringLiteral("page"));
        gererGroupepushButton = new QPushButton(page);
        gererGroupepushButton->setObjectName(QStringLiteral("gererGroupepushButton"));
        gererGroupepushButton->setGeometry(QRect(260, 120, 75, 23));
        listeRparJpushButton = new QPushButton(page);
        listeRparJpushButton->setObjectName(QStringLiteral("listeRparJpushButton"));
        listeRparJpushButton->setGeometry(QRect(260, 180, 151, 31));
        coachpushButton = new QPushButton(page);
        coachpushButton->setObjectName(QStringLiteral("coachpushButton"));
        coachpushButton->setGeometry(QRect(300, 250, 75, 23));
        listeRepaspushButton = new QPushButton(page);
        listeRepaspushButton->setObjectName(QStringLiteral("listeRepaspushButton"));
        listeRepaspushButton->setGeometry(QRect(480, 170, 75, 23));
        accesstackedWidget->addWidget(page);
        page_2 = new QWidget();
        page_2->setObjectName(QStringLiteral("page_2"));
        label_2 = new QLabel(page_2);
        label_2->setObjectName(QStringLiteral("label_2"));
        label_2->setGeometry(QRect(130, 90, 101, 31));
        accesstackedWidget->addWidget(page_2);
        page_3 = new QWidget();
        page_3->setObjectName(QStringLiteral("page_3"));
        label_3 = new QLabel(page_3);
        label_3->setObjectName(QStringLiteral("label_3"));
        label_3->setGeometry(QRect(170, 130, 101, 31));
        accesstackedWidget->addWidget(page_3);
        page_4 = new QWidget();
        page_4->setObjectName(QStringLiteral("page_4"));
        label_4 = new QLabel(page_4);
        label_4->setObjectName(QStringLiteral("label_4"));
        label_4->setGeometry(QRect(250, 140, 71, 31));
        accesstackedWidget->addWidget(page_4);
        page_5 = new QWidget();
        page_5->setObjectName(QStringLiteral("page_5"));
        label = new QLabel(page_5);
        label->setObjectName(QStringLiteral("label"));
        label->setGeometry(QRect(180, 240, 171, 51));
        accesstackedWidget->addWidget(page_5);
        accesrapide->setCentralWidget(centralwidget);
        menubar = new QMenuBar(accesrapide);
        menubar->setObjectName(QStringLiteral("menubar"));
        menubar->setGeometry(QRect(0, 0, 800, 21));
        accesrapide->setMenuBar(menubar);
        statusbar = new QStatusBar(accesrapide);
        statusbar->setObjectName(QStringLiteral("statusbar"));
        accesrapide->setStatusBar(statusbar);

        retranslateUi(accesrapide);

        accesstackedWidget->setCurrentIndex(0);


        QMetaObject::connectSlotsByName(accesrapide);
    } // setupUi

    void retranslateUi(QMainWindow *accesrapide)
    {
        accesrapide->setWindowTitle(QApplication::translate("accesrapide", "MainWindow", Q_NULLPTR));
        gererGroupepushButton->setText(QApplication::translate("accesrapide", "G\303\251rer groupe", Q_NULLPTR));
        listeRparJpushButton->setText(QApplication::translate("accesrapide", "Liste repas groupe jour", Q_NULLPTR));
        coachpushButton->setText(QApplication::translate("accesrapide", "Liste coach", Q_NULLPTR));
        listeRepaspushButton->setText(QApplication::translate("accesrapide", "Liste repas", Q_NULLPTR));
        label_2->setText(QApplication::translate("accesrapide", "listeR par J", Q_NULLPTR));
        label_3->setText(QApplication::translate("accesrapide", "liste repas ", Q_NULLPTR));
        label_4->setText(QApplication::translate("accesrapide", "liste coach", Q_NULLPTR));
        label->setText(QApplication::translate("accesrapide", "modifier coach", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class accesrapide: public Ui_accesrapide {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_ACCESRAPIDE_H
