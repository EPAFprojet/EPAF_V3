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
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QRadioButton>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QTableView>
#include <QtWidgets/QToolBar>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_recu
{
public:
    QWidget *centralwidget;
    QPushButton *imprimerButton;
    QWidget *horizontalLayoutWidget;
    QHBoxLayout *horizontalLayout;
    QRadioButton *groupeRadioButton;
    QRadioButton *saisonRadioButton;
    QRadioButton *nomRadioButton;
    QWidget *verticalLayoutWidget;
    QVBoxLayout *verticalLayout;
    QLabel *Recherche;
    QLineEdit *rechercheEdit;
    QLabel *Recus;
    QTableView *tableView;
    QMenuBar *menubar;
    QStatusBar *statusbar;
    QToolBar *toolBar;

    void setupUi(QMainWindow *recu)
    {
        if (recu->objectName().isEmpty())
            recu->setObjectName(QStringLiteral("recu"));
        recu->resize(956, 739);
        centralwidget = new QWidget(recu);
        centralwidget->setObjectName(QStringLiteral("centralwidget"));
        imprimerButton = new QPushButton(centralwidget);
        imprimerButton->setObjectName(QStringLiteral("imprimerButton"));
        imprimerButton->setGeometry(QRect(319, 590, 121, 31));
        horizontalLayoutWidget = new QWidget(centralwidget);
        horizontalLayoutWidget->setObjectName(QStringLiteral("horizontalLayoutWidget"));
        horizontalLayoutWidget->setGeometry(QRect(100, 150, 181, 31));
        horizontalLayout = new QHBoxLayout(horizontalLayoutWidget);
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        horizontalLayout->setContentsMargins(0, 0, 0, 0);
        groupeRadioButton = new QRadioButton(horizontalLayoutWidget);
        groupeRadioButton->setObjectName(QStringLiteral("groupeRadioButton"));

        horizontalLayout->addWidget(groupeRadioButton);

        saisonRadioButton = new QRadioButton(horizontalLayoutWidget);
        saisonRadioButton->setObjectName(QStringLiteral("saisonRadioButton"));

        horizontalLayout->addWidget(saisonRadioButton);

        nomRadioButton = new QRadioButton(horizontalLayoutWidget);
        nomRadioButton->setObjectName(QStringLiteral("nomRadioButton"));

        horizontalLayout->addWidget(nomRadioButton);

        verticalLayoutWidget = new QWidget(centralwidget);
        verticalLayoutWidget->setObjectName(QStringLiteral("verticalLayoutWidget"));
        verticalLayoutWidget->setGeometry(QRect(100, 71, 301, 80));
        verticalLayout = new QVBoxLayout(verticalLayoutWidget);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        verticalLayout->setContentsMargins(0, 0, 0, 0);
        Recherche = new QLabel(verticalLayoutWidget);
        Recherche->setObjectName(QStringLiteral("Recherche"));
        QFont font;
        font.setPointSize(16);
        font.setBold(true);
        font.setWeight(75);
        Recherche->setFont(font);

        verticalLayout->addWidget(Recherche);

        rechercheEdit = new QLineEdit(verticalLayoutWidget);
        rechercheEdit->setObjectName(QStringLiteral("rechercheEdit"));

        verticalLayout->addWidget(rechercheEdit);

        Recus = new QLabel(centralwidget);
        Recus->setObjectName(QStringLiteral("Recus"));
        Recus->setGeometry(QRect(320, 20, 271, 31));
        Recus->setFont(font);
        Recus->setAlignment(Qt::AlignCenter);
        tableView = new QTableView(centralwidget);
        tableView->setObjectName(QStringLiteral("tableView"));
        tableView->setGeometry(QRect(20, 210, 831, 351));
        recu->setCentralWidget(centralwidget);
        imprimerButton->raise();
        horizontalLayoutWidget->raise();
        verticalLayoutWidget->raise();
        Recus->raise();
        tableView->raise();
        Recherche->raise();
        menubar = new QMenuBar(recu);
        menubar->setObjectName(QStringLiteral("menubar"));
        menubar->setGeometry(QRect(0, 0, 956, 21));
        recu->setMenuBar(menubar);
        statusbar = new QStatusBar(recu);
        statusbar->setObjectName(QStringLiteral("statusbar"));
        recu->setStatusBar(statusbar);
        toolBar = new QToolBar(recu);
        toolBar->setObjectName(QStringLiteral("toolBar"));
        recu->addToolBar(Qt::TopToolBarArea, toolBar);

        retranslateUi(recu);

        QMetaObject::connectSlotsByName(recu);
    } // setupUi

    void retranslateUi(QMainWindow *recu)
    {
        recu->setWindowTitle(QApplication::translate("recu", "MainWindow", Q_NULLPTR));
        imprimerButton->setText(QApplication::translate("recu", "Imprimer", Q_NULLPTR));
        groupeRadioButton->setText(QApplication::translate("recu", "Groupe", Q_NULLPTR));
        saisonRadioButton->setText(QApplication::translate("recu", "Saison", Q_NULLPTR));
        nomRadioButton->setText(QApplication::translate("recu", "Nom", Q_NULLPTR));
        Recherche->setText(QApplication::translate("recu", "Recherche", Q_NULLPTR));
        Recus->setText(QApplication::translate("recu", "Re\303\247us", Q_NULLPTR));
        toolBar->setWindowTitle(QApplication::translate("recu", "toolBar", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class recu: public Ui_recu {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_RECU_H
