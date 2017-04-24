/********************************************************************************
** Form generated from reading UI file 'connexionmainmenu.ui'
**
** Created by: Qt User Interface Compiler version 5.8.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_CONNEXIONMAINMENU_H
#define UI_CONNEXIONMAINMENU_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QFormLayout>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStackedWidget>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_connexionmainmenu
{
public:
    QWidget *centralwidget;
    QStackedWidget *MainMenustackedWidget;
    QWidget *page;
    QWidget *formLayoutWidget_7;
    QFormLayout *formLayout_7;
    QLabel *label_44;
    QLineEdit *lineEdit_28;
    QLabel *label_45;
    QLineEdit *lineEdit_29;
    QPushButton *connexionpushButton;
    QWidget *page_2;
    QWidget *MenuP;
    QLabel *label_22;
    QWidget *gridLayoutWidget;
    QGridLayout *Menugrid;
    QPushButton *ajouterPatpushButton;
    QPushButton *ajouterCoachpushButton;
    QPushButton *accesRapidepushButton;
    QPushButton *recherchepushButton;
    QPushButton *creationRecuspushButton;
    QMenuBar *menubar;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *connexionmainmenu)
    {
        if (connexionmainmenu->objectName().isEmpty())
            connexionmainmenu->setObjectName(QStringLiteral("connexionmainmenu"));
        connexionmainmenu->resize(1011, 731);
        centralwidget = new QWidget(connexionmainmenu);
        centralwidget->setObjectName(QStringLiteral("centralwidget"));
        MainMenustackedWidget = new QStackedWidget(centralwidget);
        MainMenustackedWidget->setObjectName(QStringLiteral("MainMenustackedWidget"));
        MainMenustackedWidget->setGeometry(QRect(-10, 0, 951, 671));
        page = new QWidget();
        page->setObjectName(QStringLiteral("page"));
        formLayoutWidget_7 = new QWidget(page);
        formLayoutWidget_7->setObjectName(QStringLiteral("formLayoutWidget_7"));
        formLayoutWidget_7->setGeometry(QRect(180, 170, 381, 71));
        formLayout_7 = new QFormLayout(formLayoutWidget_7);
        formLayout_7->setObjectName(QStringLiteral("formLayout_7"));
        formLayout_7->setContentsMargins(0, 0, 0, 0);
        label_44 = new QLabel(formLayoutWidget_7);
        label_44->setObjectName(QStringLiteral("label_44"));

        formLayout_7->setWidget(0, QFormLayout::LabelRole, label_44);

        lineEdit_28 = new QLineEdit(formLayoutWidget_7);
        lineEdit_28->setObjectName(QStringLiteral("lineEdit_28"));

        formLayout_7->setWidget(0, QFormLayout::FieldRole, lineEdit_28);

        label_45 = new QLabel(formLayoutWidget_7);
        label_45->setObjectName(QStringLiteral("label_45"));

        formLayout_7->setWidget(1, QFormLayout::LabelRole, label_45);

        lineEdit_29 = new QLineEdit(formLayoutWidget_7);
        lineEdit_29->setObjectName(QStringLiteral("lineEdit_29"));

        formLayout_7->setWidget(1, QFormLayout::FieldRole, lineEdit_29);

        connexionpushButton = new QPushButton(page);
        connexionpushButton->setObjectName(QStringLiteral("connexionpushButton"));
        connexionpushButton->setGeometry(QRect(320, 250, 75, 23));
        MainMenustackedWidget->addWidget(page);
        page_2 = new QWidget();
        page_2->setObjectName(QStringLiteral("page_2"));
        MenuP = new QWidget(page_2);
        MenuP->setObjectName(QStringLiteral("MenuP"));
        MenuP->setGeometry(QRect(30, 70, 951, 481));
        label_22 = new QLabel(MenuP);
        label_22->setObjectName(QStringLiteral("label_22"));
        label_22->setGeometry(QRect(390, 20, 151, 51));
        QFont font;
        font.setPointSize(14);
        font.setBold(true);
        font.setWeight(75);
        label_22->setFont(font);
        gridLayoutWidget = new QWidget(MenuP);
        gridLayoutWidget->setObjectName(QStringLiteral("gridLayoutWidget"));
        gridLayoutWidget->setGeometry(QRect(60, 80, 821, 301));
        Menugrid = new QGridLayout(gridLayoutWidget);
        Menugrid->setObjectName(QStringLiteral("Menugrid"));
        Menugrid->setContentsMargins(0, 0, 0, 0);
        ajouterPatpushButton = new QPushButton(gridLayoutWidget);
        ajouterPatpushButton->setObjectName(QStringLiteral("ajouterPatpushButton"));

        Menugrid->addWidget(ajouterPatpushButton, 0, 0, 1, 1);

        ajouterCoachpushButton = new QPushButton(gridLayoutWidget);
        ajouterCoachpushButton->setObjectName(QStringLiteral("ajouterCoachpushButton"));

        Menugrid->addWidget(ajouterCoachpushButton, 0, 1, 1, 1);

        accesRapidepushButton = new QPushButton(gridLayoutWidget);
        accesRapidepushButton->setObjectName(QStringLiteral("accesRapidepushButton"));

        Menugrid->addWidget(accesRapidepushButton, 0, 2, 1, 1);

        recherchepushButton = new QPushButton(gridLayoutWidget);
        recherchepushButton->setObjectName(QStringLiteral("recherchepushButton"));

        Menugrid->addWidget(recherchepushButton, 0, 3, 1, 1);

        creationRecuspushButton = new QPushButton(gridLayoutWidget);
        creationRecuspushButton->setObjectName(QStringLiteral("creationRecuspushButton"));

        Menugrid->addWidget(creationRecuspushButton, 1, 0, 1, 1);

        MainMenustackedWidget->addWidget(page_2);
        connexionmainmenu->setCentralWidget(centralwidget);
        menubar = new QMenuBar(connexionmainmenu);
        menubar->setObjectName(QStringLiteral("menubar"));
        menubar->setGeometry(QRect(0, 0, 1011, 21));
        connexionmainmenu->setMenuBar(menubar);
        statusbar = new QStatusBar(connexionmainmenu);
        statusbar->setObjectName(QStringLiteral("statusbar"));
        connexionmainmenu->setStatusBar(statusbar);

        retranslateUi(connexionmainmenu);

        MainMenustackedWidget->setCurrentIndex(1);


        QMetaObject::connectSlotsByName(connexionmainmenu);
    } // setupUi

    void retranslateUi(QMainWindow *connexionmainmenu)
    {
        connexionmainmenu->setWindowTitle(QApplication::translate("connexionmainmenu", "MainWindow", Q_NULLPTR));
        label_44->setText(QApplication::translate("connexionmainmenu", "Nom d'utilisateur", Q_NULLPTR));
        label_45->setText(QApplication::translate("connexionmainmenu", "Mot de passe", Q_NULLPTR));
        connexionpushButton->setText(QApplication::translate("connexionmainmenu", "Connexion", Q_NULLPTR));
        label_22->setText(QApplication::translate("connexionmainmenu", "Menu Principal", Q_NULLPTR));
        ajouterPatpushButton->setText(QApplication::translate("connexionmainmenu", "Ajouter patineur", Q_NULLPTR));
        ajouterCoachpushButton->setText(QApplication::translate("connexionmainmenu", "Ajouter coach", Q_NULLPTR));
        accesRapidepushButton->setText(QApplication::translate("connexionmainmenu", "Acc\303\250s rapide", Q_NULLPTR));
        recherchepushButton->setText(QApplication::translate("connexionmainmenu", "Recherche", Q_NULLPTR));
        creationRecuspushButton->setText(QApplication::translate("connexionmainmenu", "Cr\303\251ation de re\303\247u", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class connexionmainmenu: public Ui_connexionmainmenu {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_CONNEXIONMAINMENU_H
