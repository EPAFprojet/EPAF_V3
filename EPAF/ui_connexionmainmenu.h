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
#include <QtWidgets/QHBoxLayout>
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
    QFormLayout *connexionformLayout;
    QLabel *nomUtilisateurlabel;
    QLineEdit *nomUtilisateurlineEdit;
    QLabel *motPasselabel;
    QLineEdit *motPasselineEdit;
    QLabel *logolabel;
    QWidget *horizontalLayoutWidget;
    QHBoxLayout *horizontalLayout;
    QPushButton *connexionpushButton;
    QPushButton *annulerpushButton;
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
        MainMenustackedWidget->setGeometry(QRect(0, 0, 1001, 681));
        page = new QWidget();
        page->setObjectName(QStringLiteral("page"));
        formLayoutWidget_7 = new QWidget(page);
        formLayoutWidget_7->setObjectName(QStringLiteral("formLayoutWidget_7"));
        formLayoutWidget_7->setGeometry(QRect(190, 410, 611, 61));
        connexionformLayout = new QFormLayout(formLayoutWidget_7);
        connexionformLayout->setObjectName(QStringLiteral("connexionformLayout"));
        connexionformLayout->setContentsMargins(0, 0, 0, 0);
        nomUtilisateurlabel = new QLabel(formLayoutWidget_7);
        nomUtilisateurlabel->setObjectName(QStringLiteral("nomUtilisateurlabel"));

        connexionformLayout->setWidget(1, QFormLayout::LabelRole, nomUtilisateurlabel);

        nomUtilisateurlineEdit = new QLineEdit(formLayoutWidget_7);
        nomUtilisateurlineEdit->setObjectName(QStringLiteral("nomUtilisateurlineEdit"));

        connexionformLayout->setWidget(1, QFormLayout::FieldRole, nomUtilisateurlineEdit);

        motPasselabel = new QLabel(formLayoutWidget_7);
        motPasselabel->setObjectName(QStringLiteral("motPasselabel"));

        connexionformLayout->setWidget(2, QFormLayout::LabelRole, motPasselabel);

        motPasselineEdit = new QLineEdit(formLayoutWidget_7);
        motPasselineEdit->setObjectName(QStringLiteral("motPasselineEdit"));
        motPasselineEdit->setEchoMode(QLineEdit::Password);

        connexionformLayout->setWidget(2, QFormLayout::FieldRole, motPasselineEdit);

        logolabel = new QLabel(page);
        logolabel->setObjectName(QStringLiteral("logolabel"));
        logolabel->setGeometry(QRect(240, 90, 524, 227));
        logolabel->setPixmap(QPixmap(QString::fromUtf8(":/img/logo_epaf.jpg")));
        horizontalLayoutWidget = new QWidget(page);
        horizontalLayoutWidget->setObjectName(QStringLiteral("horizontalLayoutWidget"));
        horizontalLayoutWidget->setGeometry(QRect(190, 470, 611, 41));
        horizontalLayout = new QHBoxLayout(horizontalLayoutWidget);
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        horizontalLayout->setContentsMargins(0, 0, 0, 0);
        connexionpushButton = new QPushButton(horizontalLayoutWidget);
        connexionpushButton->setObjectName(QStringLiteral("connexionpushButton"));

        horizontalLayout->addWidget(connexionpushButton);

        annulerpushButton = new QPushButton(horizontalLayoutWidget);
        annulerpushButton->setObjectName(QStringLiteral("annulerpushButton"));

        horizontalLayout->addWidget(annulerpushButton);

        MainMenustackedWidget->addWidget(page);
        logolabel->raise();
        formLayoutWidget_7->raise();
        logolabel->raise();
        horizontalLayoutWidget->raise();
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
        QWidget::setTabOrder(nomUtilisateurlineEdit, motPasselineEdit);
        QWidget::setTabOrder(motPasselineEdit, connexionpushButton);
        QWidget::setTabOrder(connexionpushButton, annulerpushButton);
        QWidget::setTabOrder(annulerpushButton, accesRapidepushButton);
        QWidget::setTabOrder(accesRapidepushButton, recherchepushButton);
        QWidget::setTabOrder(recherchepushButton, creationRecuspushButton);
        QWidget::setTabOrder(creationRecuspushButton, ajouterPatpushButton);
        QWidget::setTabOrder(ajouterPatpushButton, ajouterCoachpushButton);

        retranslateUi(connexionmainmenu);
        QObject::connect(annulerpushButton, SIGNAL(clicked()), motPasselineEdit, SLOT(clear()));
        QObject::connect(annulerpushButton, SIGNAL(clicked()), nomUtilisateurlineEdit, SLOT(clear()));

        MainMenustackedWidget->setCurrentIndex(0);


        QMetaObject::connectSlotsByName(connexionmainmenu);
    } // setupUi

    void retranslateUi(QMainWindow *connexionmainmenu)
    {
        connexionmainmenu->setWindowTitle(QApplication::translate("connexionmainmenu", "MainWindow", Q_NULLPTR));
        nomUtilisateurlabel->setText(QApplication::translate("connexionmainmenu", "Nom d'utilisateur", Q_NULLPTR));
        motPasselabel->setText(QApplication::translate("connexionmainmenu", "Mot de passe", Q_NULLPTR));
        logolabel->setText(QString());
        connexionpushButton->setText(QApplication::translate("connexionmainmenu", "Connexion", Q_NULLPTR));
        annulerpushButton->setText(QApplication::translate("connexionmainmenu", "Annuler", Q_NULLPTR));
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
