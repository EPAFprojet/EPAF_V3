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
#include <QtWidgets/QComboBox>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QRadioButton>
#include <QtWidgets/QStackedWidget>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QTableView>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_accesrapide
{
public:
    QWidget *centralwidget;
    QStackedWidget *accesstackedWidget;
    QWidget *page;
    QWidget *verticalLayoutWidget;
    QVBoxLayout *verticalLayout;
    QPushButton *gererGroupepushButton;
    QPushButton *ListeJoueursGroupepushButton;
    QPushButton *listeRparJpushButton;
    QPushButton *coachpushButton;
    QPushButton *listeRepaspushButton;
    QWidget *page_2;
    QGroupBox *groupBox_5;
    QWidget *horizontalLayoutWidget_3;
    QHBoxLayout *horizontalLayout_3;
    QComboBox *RepasListeGroupecomboBox;
    QPushButton *AfficherListeRepaspushButton;
    QTableView *RepasParGroupetableView;
    QWidget *page_3;
    QGroupBox *groupBox_4;
    QPushButton *AfficherRepaspushButton;
    QGroupBox *groupBox_6;
    QWidget *verticalLayoutWidget_3;
    QVBoxLayout *verticalLayout_7;
    QHBoxLayout *horizontalLayout_6;
    QLabel *label_2;
    QLineEdit *Lundi1lineEdit;
    QHBoxLayout *horizontalLayout_7;
    QLabel *label_3;
    QLineEdit *Lundi2lineEdit;
    QGroupBox *groupBox_7;
    QWidget *verticalLayoutWidget_4;
    QVBoxLayout *verticalLayout_8;
    QHBoxLayout *horizontalLayout_8;
    QLabel *label_5;
    QLineEdit *Mardi1lineEdit;
    QHBoxLayout *horizontalLayout_9;
    QLabel *label_6;
    QLineEdit *Mardi2lineEdit;
    QGroupBox *groupBox_8;
    QWidget *verticalLayoutWidget_5;
    QVBoxLayout *verticalLayout_9;
    QHBoxLayout *horizontalLayout_10;
    QLabel *label_7;
    QLineEdit *Mercredi1lineEdit;
    QHBoxLayout *horizontalLayout_11;
    QLabel *label_8;
    QLineEdit *Mercredi2lineEdit;
    QGroupBox *groupBox_9;
    QWidget *verticalLayoutWidget_6;
    QVBoxLayout *verticalLayout_10;
    QHBoxLayout *horizontalLayout_12;
    QLabel *label_9;
    QLineEdit *Jeudi1lineEdit;
    QHBoxLayout *horizontalLayout_13;
    QLabel *label_10;
    QLineEdit *Jeudi2lineEdit;
    QWidget *page_4;
    QGroupBox *groupBox_2;
    QPushButton *AfficherCoachpushButton;
    QTableView *CoachtableView;
    QGroupBox *groupBox_3;
    QWidget *horizontalLayoutWidget_2;
    QHBoxLayout *horizontalLayout_2;
    QLabel *label_4;
    QLineEdit *supprimerCoachlineEdit;
    QPushButton *SupprimerCoachpushButton;
    QWidget *page_5;
    QLabel *label;
    QWidget *page_6;
    QTableView *JoueurParGroupetableView;
    QGroupBox *groupBox;
    QWidget *horizontalLayoutWidget;
    QHBoxLayout *horizontalLayout;
    QComboBox *ListeGroupecomboBox;
    QPushButton *AfficherListepushButton;
    QWidget *verticalLayoutWidget_2;
    QVBoxLayout *verticalLayout_3;
    QRadioButton *PAradioButton;
    QRadioButton *PSradioButton;
    QRadioButton *HradioButton;
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
        verticalLayoutWidget = new QWidget(page);
        verticalLayoutWidget->setObjectName(QStringLiteral("verticalLayoutWidget"));
        verticalLayoutWidget->setGeometry(QRect(220, 90, 301, 271));
        verticalLayout = new QVBoxLayout(verticalLayoutWidget);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        verticalLayout->setContentsMargins(0, 0, 0, 0);
        gererGroupepushButton = new QPushButton(verticalLayoutWidget);
        gererGroupepushButton->setObjectName(QStringLiteral("gererGroupepushButton"));
        QFont font;
        font.setPointSize(10);
        gererGroupepushButton->setFont(font);

        verticalLayout->addWidget(gererGroupepushButton);

        ListeJoueursGroupepushButton = new QPushButton(verticalLayoutWidget);
        ListeJoueursGroupepushButton->setObjectName(QStringLiteral("ListeJoueursGroupepushButton"));
        ListeJoueursGroupepushButton->setFont(font);

        verticalLayout->addWidget(ListeJoueursGroupepushButton);

        listeRparJpushButton = new QPushButton(verticalLayoutWidget);
        listeRparJpushButton->setObjectName(QStringLiteral("listeRparJpushButton"));
        listeRparJpushButton->setFont(font);

        verticalLayout->addWidget(listeRparJpushButton);

        coachpushButton = new QPushButton(verticalLayoutWidget);
        coachpushButton->setObjectName(QStringLiteral("coachpushButton"));
        coachpushButton->setFont(font);

        verticalLayout->addWidget(coachpushButton);

        listeRepaspushButton = new QPushButton(verticalLayoutWidget);
        listeRepaspushButton->setObjectName(QStringLiteral("listeRepaspushButton"));
        listeRepaspushButton->setFont(font);

        verticalLayout->addWidget(listeRepaspushButton);

        accesstackedWidget->addWidget(page);
        page_2 = new QWidget();
        page_2->setObjectName(QStringLiteral("page_2"));
        groupBox_5 = new QGroupBox(page_2);
        groupBox_5->setObjectName(QStringLiteral("groupBox_5"));
        groupBox_5->setGeometry(QRect(10, 10, 281, 81));
        QFont font1;
        font1.setPointSize(12);
        groupBox_5->setFont(font1);
        horizontalLayoutWidget_3 = new QWidget(groupBox_5);
        horizontalLayoutWidget_3->setObjectName(QStringLiteral("horizontalLayoutWidget_3"));
        horizontalLayoutWidget_3->setGeometry(QRect(10, 30, 261, 41));
        horizontalLayout_3 = new QHBoxLayout(horizontalLayoutWidget_3);
        horizontalLayout_3->setObjectName(QStringLiteral("horizontalLayout_3"));
        horizontalLayout_3->setContentsMargins(0, 0, 0, 0);
        RepasListeGroupecomboBox = new QComboBox(horizontalLayoutWidget_3);
        RepasListeGroupecomboBox->setObjectName(QStringLiteral("RepasListeGroupecomboBox"));
        QFont font2;
        font2.setPointSize(8);
        RepasListeGroupecomboBox->setFont(font2);

        horizontalLayout_3->addWidget(RepasListeGroupecomboBox);

        AfficherListeRepaspushButton = new QPushButton(horizontalLayoutWidget_3);
        AfficherListeRepaspushButton->setObjectName(QStringLiteral("AfficherListeRepaspushButton"));
        AfficherListeRepaspushButton->setFont(font2);

        horizontalLayout_3->addWidget(AfficherListeRepaspushButton);

        RepasParGroupetableView = new QTableView(page_2);
        RepasParGroupetableView->setObjectName(QStringLiteral("RepasParGroupetableView"));
        RepasParGroupetableView->setGeometry(QRect(10, 110, 771, 192));
        accesstackedWidget->addWidget(page_2);
        page_3 = new QWidget();
        page_3->setObjectName(QStringLiteral("page_3"));
        groupBox_4 = new QGroupBox(page_3);
        groupBox_4->setObjectName(QStringLiteral("groupBox_4"));
        groupBox_4->setGeometry(QRect(0, 0, 581, 421));
        groupBox_4->setFont(font1);
        AfficherRepaspushButton = new QPushButton(groupBox_4);
        AfficherRepaspushButton->setObjectName(QStringLiteral("AfficherRepaspushButton"));
        AfficherRepaspushButton->setGeometry(QRect(10, 20, 75, 23));
        AfficherRepaspushButton->setFont(font);
        groupBox_6 = new QGroupBox(groupBox_4);
        groupBox_6->setObjectName(QStringLiteral("groupBox_6"));
        groupBox_6->setGeometry(QRect(10, 50, 171, 111));
        verticalLayoutWidget_3 = new QWidget(groupBox_6);
        verticalLayoutWidget_3->setObjectName(QStringLiteral("verticalLayoutWidget_3"));
        verticalLayoutWidget_3->setGeometry(QRect(10, 20, 161, 80));
        verticalLayout_7 = new QVBoxLayout(verticalLayoutWidget_3);
        verticalLayout_7->setObjectName(QStringLiteral("verticalLayout_7"));
        verticalLayout_7->setContentsMargins(0, 0, 0, 0);
        horizontalLayout_6 = new QHBoxLayout();
        horizontalLayout_6->setObjectName(QStringLiteral("horizontalLayout_6"));
        label_2 = new QLabel(verticalLayoutWidget_3);
        label_2->setObjectName(QStringLiteral("label_2"));
        label_2->setFont(font);

        horizontalLayout_6->addWidget(label_2);

        Lundi1lineEdit = new QLineEdit(verticalLayoutWidget_3);
        Lundi1lineEdit->setObjectName(QStringLiteral("Lundi1lineEdit"));
        Lundi1lineEdit->setFont(font);

        horizontalLayout_6->addWidget(Lundi1lineEdit);


        verticalLayout_7->addLayout(horizontalLayout_6);

        horizontalLayout_7 = new QHBoxLayout();
        horizontalLayout_7->setObjectName(QStringLiteral("horizontalLayout_7"));
        label_3 = new QLabel(verticalLayoutWidget_3);
        label_3->setObjectName(QStringLiteral("label_3"));
        label_3->setFont(font);

        horizontalLayout_7->addWidget(label_3);

        Lundi2lineEdit = new QLineEdit(verticalLayoutWidget_3);
        Lundi2lineEdit->setObjectName(QStringLiteral("Lundi2lineEdit"));
        Lundi2lineEdit->setFont(font);

        horizontalLayout_7->addWidget(Lundi2lineEdit);


        verticalLayout_7->addLayout(horizontalLayout_7);

        groupBox_7 = new QGroupBox(groupBox_4);
        groupBox_7->setObjectName(QStringLiteral("groupBox_7"));
        groupBox_7->setGeometry(QRect(190, 50, 271, 111));
        verticalLayoutWidget_4 = new QWidget(groupBox_7);
        verticalLayoutWidget_4->setObjectName(QStringLiteral("verticalLayoutWidget_4"));
        verticalLayoutWidget_4->setGeometry(QRect(10, 20, 251, 80));
        verticalLayout_8 = new QVBoxLayout(verticalLayoutWidget_4);
        verticalLayout_8->setObjectName(QStringLiteral("verticalLayout_8"));
        verticalLayout_8->setContentsMargins(0, 0, 0, 0);
        horizontalLayout_8 = new QHBoxLayout();
        horizontalLayout_8->setObjectName(QStringLiteral("horizontalLayout_8"));
        label_5 = new QLabel(verticalLayoutWidget_4);
        label_5->setObjectName(QStringLiteral("label_5"));
        label_5->setFont(font);

        horizontalLayout_8->addWidget(label_5);

        Mardi1lineEdit = new QLineEdit(verticalLayoutWidget_4);
        Mardi1lineEdit->setObjectName(QStringLiteral("Mardi1lineEdit"));
        Mardi1lineEdit->setFont(font);

        horizontalLayout_8->addWidget(Mardi1lineEdit);


        verticalLayout_8->addLayout(horizontalLayout_8);

        horizontalLayout_9 = new QHBoxLayout();
        horizontalLayout_9->setObjectName(QStringLiteral("horizontalLayout_9"));
        label_6 = new QLabel(verticalLayoutWidget_4);
        label_6->setObjectName(QStringLiteral("label_6"));
        label_6->setFont(font);

        horizontalLayout_9->addWidget(label_6);

        Mardi2lineEdit = new QLineEdit(verticalLayoutWidget_4);
        Mardi2lineEdit->setObjectName(QStringLiteral("Mardi2lineEdit"));
        Mardi2lineEdit->setFont(font);

        horizontalLayout_9->addWidget(Mardi2lineEdit);


        verticalLayout_8->addLayout(horizontalLayout_9);

        groupBox_8 = new QGroupBox(groupBox_4);
        groupBox_8->setObjectName(QStringLiteral("groupBox_8"));
        groupBox_8->setGeometry(QRect(10, 170, 251, 111));
        verticalLayoutWidget_5 = new QWidget(groupBox_8);
        verticalLayoutWidget_5->setObjectName(QStringLiteral("verticalLayoutWidget_5"));
        verticalLayoutWidget_5->setGeometry(QRect(10, 20, 231, 80));
        verticalLayout_9 = new QVBoxLayout(verticalLayoutWidget_5);
        verticalLayout_9->setObjectName(QStringLiteral("verticalLayout_9"));
        verticalLayout_9->setContentsMargins(0, 0, 0, 0);
        horizontalLayout_10 = new QHBoxLayout();
        horizontalLayout_10->setObjectName(QStringLiteral("horizontalLayout_10"));
        label_7 = new QLabel(verticalLayoutWidget_5);
        label_7->setObjectName(QStringLiteral("label_7"));
        label_7->setFont(font);

        horizontalLayout_10->addWidget(label_7);

        Mercredi1lineEdit = new QLineEdit(verticalLayoutWidget_5);
        Mercredi1lineEdit->setObjectName(QStringLiteral("Mercredi1lineEdit"));
        Mercredi1lineEdit->setFont(font);

        horizontalLayout_10->addWidget(Mercredi1lineEdit);


        verticalLayout_9->addLayout(horizontalLayout_10);

        horizontalLayout_11 = new QHBoxLayout();
        horizontalLayout_11->setObjectName(QStringLiteral("horizontalLayout_11"));
        label_8 = new QLabel(verticalLayoutWidget_5);
        label_8->setObjectName(QStringLiteral("label_8"));
        label_8->setFont(font);

        horizontalLayout_11->addWidget(label_8);

        Mercredi2lineEdit = new QLineEdit(verticalLayoutWidget_5);
        Mercredi2lineEdit->setObjectName(QStringLiteral("Mercredi2lineEdit"));
        Mercredi2lineEdit->setFont(font);

        horizontalLayout_11->addWidget(Mercredi2lineEdit);


        verticalLayout_9->addLayout(horizontalLayout_11);

        groupBox_9 = new QGroupBox(groupBox_4);
        groupBox_9->setObjectName(QStringLiteral("groupBox_9"));
        groupBox_9->setGeometry(QRect(270, 170, 191, 111));
        verticalLayoutWidget_6 = new QWidget(groupBox_9);
        verticalLayoutWidget_6->setObjectName(QStringLiteral("verticalLayoutWidget_6"));
        verticalLayoutWidget_6->setGeometry(QRect(10, 20, 171, 80));
        verticalLayout_10 = new QVBoxLayout(verticalLayoutWidget_6);
        verticalLayout_10->setObjectName(QStringLiteral("verticalLayout_10"));
        verticalLayout_10->setContentsMargins(0, 0, 0, 0);
        horizontalLayout_12 = new QHBoxLayout();
        horizontalLayout_12->setObjectName(QStringLiteral("horizontalLayout_12"));
        label_9 = new QLabel(verticalLayoutWidget_6);
        label_9->setObjectName(QStringLiteral("label_9"));
        label_9->setFont(font);

        horizontalLayout_12->addWidget(label_9);

        Jeudi1lineEdit = new QLineEdit(verticalLayoutWidget_6);
        Jeudi1lineEdit->setObjectName(QStringLiteral("Jeudi1lineEdit"));
        Jeudi1lineEdit->setFont(font);

        horizontalLayout_12->addWidget(Jeudi1lineEdit);


        verticalLayout_10->addLayout(horizontalLayout_12);

        horizontalLayout_13 = new QHBoxLayout();
        horizontalLayout_13->setObjectName(QStringLiteral("horizontalLayout_13"));
        label_10 = new QLabel(verticalLayoutWidget_6);
        label_10->setObjectName(QStringLiteral("label_10"));
        label_10->setFont(font);

        horizontalLayout_13->addWidget(label_10);

        Jeudi2lineEdit = new QLineEdit(verticalLayoutWidget_6);
        Jeudi2lineEdit->setObjectName(QStringLiteral("Jeudi2lineEdit"));
        Jeudi2lineEdit->setFont(font);

        horizontalLayout_13->addWidget(Jeudi2lineEdit);


        verticalLayout_10->addLayout(horizontalLayout_13);

        accesstackedWidget->addWidget(page_3);
        page_4 = new QWidget();
        page_4->setObjectName(QStringLiteral("page_4"));
        groupBox_2 = new QGroupBox(page_4);
        groupBox_2->setObjectName(QStringLiteral("groupBox_2"));
        groupBox_2->setGeometry(QRect(0, 10, 581, 461));
        groupBox_2->setFont(font1);
        AfficherCoachpushButton = new QPushButton(groupBox_2);
        AfficherCoachpushButton->setObjectName(QStringLiteral("AfficherCoachpushButton"));
        AfficherCoachpushButton->setGeometry(QRect(10, 30, 75, 23));
        AfficherCoachpushButton->setFont(font);
        CoachtableView = new QTableView(groupBox_2);
        CoachtableView->setObjectName(QStringLiteral("CoachtableView"));
        CoachtableView->setGeometry(QRect(10, 60, 561, 161));
        groupBox_3 = new QGroupBox(groupBox_2);
        groupBox_3->setObjectName(QStringLiteral("groupBox_3"));
        groupBox_3->setGeometry(QRect(20, 230, 261, 81));
        horizontalLayoutWidget_2 = new QWidget(groupBox_3);
        horizontalLayoutWidget_2->setObjectName(QStringLiteral("horizontalLayoutWidget_2"));
        horizontalLayoutWidget_2->setGeometry(QRect(0, 30, 171, 31));
        horizontalLayout_2 = new QHBoxLayout(horizontalLayoutWidget_2);
        horizontalLayout_2->setObjectName(QStringLiteral("horizontalLayout_2"));
        horizontalLayout_2->setContentsMargins(0, 0, 0, 0);
        label_4 = new QLabel(horizontalLayoutWidget_2);
        label_4->setObjectName(QStringLiteral("label_4"));
        label_4->setFont(font);

        horizontalLayout_2->addWidget(label_4);

        supprimerCoachlineEdit = new QLineEdit(horizontalLayoutWidget_2);
        supprimerCoachlineEdit->setObjectName(QStringLiteral("supprimerCoachlineEdit"));
        supprimerCoachlineEdit->setFont(font);

        horizontalLayout_2->addWidget(supprimerCoachlineEdit);

        SupprimerCoachpushButton = new QPushButton(groupBox_3);
        SupprimerCoachpushButton->setObjectName(QStringLiteral("SupprimerCoachpushButton"));
        SupprimerCoachpushButton->setGeometry(QRect(170, 30, 91, 31));
        SupprimerCoachpushButton->setFont(font);
        accesstackedWidget->addWidget(page_4);
        page_5 = new QWidget();
        page_5->setObjectName(QStringLiteral("page_5"));
        label = new QLabel(page_5);
        label->setObjectName(QStringLiteral("label"));
        label->setGeometry(QRect(180, 240, 171, 51));
        accesstackedWidget->addWidget(page_5);
        page_6 = new QWidget();
        page_6->setObjectName(QStringLiteral("page_6"));
        JoueurParGroupetableView = new QTableView(page_6);
        JoueurParGroupetableView->setObjectName(QStringLiteral("JoueurParGroupetableView"));
        JoueurParGroupetableView->setGeometry(QRect(20, 140, 581, 192));
        groupBox = new QGroupBox(page_6);
        groupBox->setObjectName(QStringLiteral("groupBox"));
        groupBox->setGeometry(QRect(20, 10, 441, 121));
        groupBox->setFont(font1);
        horizontalLayoutWidget = new QWidget(groupBox);
        horizontalLayoutWidget->setObjectName(QStringLiteral("horizontalLayoutWidget"));
        horizontalLayoutWidget->setGeometry(QRect(170, 30, 261, 41));
        horizontalLayout = new QHBoxLayout(horizontalLayoutWidget);
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        horizontalLayout->setContentsMargins(0, 0, 0, 0);
        ListeGroupecomboBox = new QComboBox(horizontalLayoutWidget);
        ListeGroupecomboBox->setObjectName(QStringLiteral("ListeGroupecomboBox"));
        ListeGroupecomboBox->setFont(font2);

        horizontalLayout->addWidget(ListeGroupecomboBox);

        AfficherListepushButton = new QPushButton(horizontalLayoutWidget);
        AfficherListepushButton->setObjectName(QStringLiteral("AfficherListepushButton"));
        AfficherListepushButton->setFont(font2);

        horizontalLayout->addWidget(AfficherListepushButton);

        verticalLayoutWidget_2 = new QWidget(groupBox);
        verticalLayoutWidget_2->setObjectName(QStringLiteral("verticalLayoutWidget_2"));
        verticalLayoutWidget_2->setGeometry(QRect(10, 30, 160, 83));
        verticalLayout_3 = new QVBoxLayout(verticalLayoutWidget_2);
        verticalLayout_3->setObjectName(QStringLiteral("verticalLayout_3"));
        verticalLayout_3->setContentsMargins(0, 0, 0, 0);
        PAradioButton = new QRadioButton(verticalLayoutWidget_2);
        PAradioButton->setObjectName(QStringLiteral("PAradioButton"));
        PAradioButton->setFont(font2);

        verticalLayout_3->addWidget(PAradioButton);

        PSradioButton = new QRadioButton(verticalLayoutWidget_2);
        PSradioButton->setObjectName(QStringLiteral("PSradioButton"));
        PSradioButton->setFont(font2);

        verticalLayout_3->addWidget(PSradioButton);

        HradioButton = new QRadioButton(verticalLayoutWidget_2);
        HradioButton->setObjectName(QStringLiteral("HradioButton"));
        HradioButton->setFont(font2);

        verticalLayout_3->addWidget(HradioButton);

        accesstackedWidget->addWidget(page_6);
        accesrapide->setCentralWidget(centralwidget);
        menubar = new QMenuBar(accesrapide);
        menubar->setObjectName(QStringLiteral("menubar"));
        menubar->setGeometry(QRect(0, 0, 800, 21));
        accesrapide->setMenuBar(menubar);
        statusbar = new QStatusBar(accesrapide);
        statusbar->setObjectName(QStringLiteral("statusbar"));
        accesrapide->setStatusBar(statusbar);

        retranslateUi(accesrapide);

        accesstackedWidget->setCurrentIndex(5);


        QMetaObject::connectSlotsByName(accesrapide);
    } // setupUi

    void retranslateUi(QMainWindow *accesrapide)
    {
        accesrapide->setWindowTitle(QApplication::translate("accesrapide", "MainWindow", Q_NULLPTR));
        gererGroupepushButton->setText(QApplication::translate("accesrapide", "G\303\251rer groupe", Q_NULLPTR));
        ListeJoueursGroupepushButton->setText(QApplication::translate("accesrapide", "Liste des joueurs d'un groupe", Q_NULLPTR));
        listeRparJpushButton->setText(QApplication::translate("accesrapide", "Liste des repas par groupe par jour", Q_NULLPTR));
        coachpushButton->setText(QApplication::translate("accesrapide", "Liste des coachs", Q_NULLPTR));
        listeRepaspushButton->setText(QApplication::translate("accesrapide", "Liste repas", Q_NULLPTR));
        groupBox_5->setTitle(QApplication::translate("accesrapide", "Liste des repas par joueur par groupe", Q_NULLPTR));
        AfficherListeRepaspushButton->setText(QApplication::translate("accesrapide", "Afficher", Q_NULLPTR));
        groupBox_4->setTitle(QApplication::translate("accesrapide", "Liste des repas", Q_NULLPTR));
        AfficherRepaspushButton->setText(QApplication::translate("accesrapide", "Afficher", Q_NULLPTR));
        groupBox_6->setTitle(QApplication::translate("accesrapide", "Lundi", Q_NULLPTR));
        label_2->setText(QApplication::translate("accesrapide", "Lasagne:", Q_NULLPTR));
        label_3->setText(QApplication::translate("accesrapide", "Sous-Marin:", Q_NULLPTR));
        groupBox_7->setTitle(QApplication::translate("accesrapide", "Mardi", Q_NULLPTR));
        label_5->setText(QApplication::translate("accesrapide", "P\303\242t\303\251 au poulet avec salade:", Q_NULLPTR));
        label_6->setText(QApplication::translate("accesrapide", "P\303\242t\303\251 Chinois:", Q_NULLPTR));
        groupBox_8->setTitle(QApplication::translate("accesrapide", "Mercredi", Q_NULLPTR));
        label_7->setText(QApplication::translate("accesrapide", "Poulet BBQ avec riz:", Q_NULLPTR));
        label_8->setText(QApplication::translate("accesrapide", "P\303\242t\303\251 \303\240 la viande avec salade:", Q_NULLPTR));
        groupBox_9->setTitle(QApplication::translate("accesrapide", "Jeudi", Q_NULLPTR));
        label_9->setText(QApplication::translate("accesrapide", "Sous-Marin:", Q_NULLPTR));
        label_10->setText(QApplication::translate("accesrapide", "Spaghetti:", Q_NULLPTR));
        groupBox_2->setTitle(QApplication::translate("accesrapide", "Liste des coachs", Q_NULLPTR));
        AfficherCoachpushButton->setText(QApplication::translate("accesrapide", "Afficher", Q_NULLPTR));
        groupBox_3->setTitle(QApplication::translate("accesrapide", "Supprimer coach", Q_NULLPTR));
        label_4->setText(QApplication::translate("accesrapide", "Num\303\251ro:", Q_NULLPTR));
        SupprimerCoachpushButton->setText(QApplication::translate("accesrapide", "Supprimer", Q_NULLPTR));
        label->setText(QApplication::translate("accesrapide", "modifier coach", Q_NULLPTR));
        groupBox->setTitle(QApplication::translate("accesrapide", "Liste des joueurs par groupe", Q_NULLPTR));
        AfficherListepushButton->setText(QApplication::translate("accesrapide", "Afficher", Q_NULLPTR));
        PAradioButton->setText(QApplication::translate("accesrapide", "Patinage artistique", Q_NULLPTR));
        PSradioButton->setText(QApplication::translate("accesrapide", "Power skating", Q_NULLPTR));
        HradioButton->setText(QApplication::translate("accesrapide", "Hockey", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class accesrapide: public Ui_accesrapide {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_ACCESRAPIDE_H
