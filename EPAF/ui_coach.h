/********************************************************************************
** Form generated from reading UI file 'Coach.ui'
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
#include <QtWidgets/QCheckBox>
#include <QtWidgets/QFormLayout>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPlainTextEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QRadioButton>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Coach
{
public:
    QWidget *centralwidget;
    QWidget *verticalLayoutWidget;
    QVBoxLayout *verticalLayout;
    QLabel *labelCoachLundi;
    QRadioButton *radioButtonCoachLundiChoix1;
    QRadioButton *radioButtonCoachLundiChoix2;
    QWidget *verticalLayoutWidget_2;
    QVBoxLayout *verticalLayout_2;
    QLabel *labelCoachMardi;
    QRadioButton *radioButtonCoachMardiChoix1;
    QRadioButton *radioButtonCoachMardiChoix2;
    QWidget *verticalLayoutWidget_3;
    QVBoxLayout *verticalLayout_3;
    QLabel *labelCoachMercredi;
    QRadioButton *radioButtonCoachMercrediChoix1;
    QRadioButton *radioButtonCoachMercrediChoix2;
    QWidget *verticalLayoutWidget_4;
    QVBoxLayout *verticalLayout_4;
    QLabel *labelCoachJeudi;
    QRadioButton *radioButtonCoachJeudiChoix1;
    QRadioButton *radioButtonCoachJeudiChoix2;
    QWidget *formLayoutWidget;
    QFormLayout *formLayout;
    QLabel *labelCoachPrenom;
    QLabel *labelCoachNom;
    QLineEdit *lineEditCoachPrenom;
    QLineEdit *lineEditCoachNom;
    QPushButton *pushButtonCoachValider;
    QWidget *horizontalLayoutWidget;
    QHBoxLayout *horizontalLayout;
    QLabel *labelCoachNonRepas;
    QCheckBox *checkBoxCoachNonRepas;
    QLabel *labelAjouterCoach;
    QPlainTextEdit *plainTextEditCoachCommentaire;
    QWidget *verticalLayoutWidget_5;
    QVBoxLayout *verticalLayout_5;
    QLabel *labelCoachCommentaire;
    QLabel *label;
    QMenuBar *menubar;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *Coach)
    {
        if (Coach->objectName().isEmpty())
            Coach->setObjectName(QStringLiteral("Coach"));
        Coach->resize(907, 700);
        centralwidget = new QWidget(Coach);
        centralwidget->setObjectName(QStringLiteral("centralwidget"));
        verticalLayoutWidget = new QWidget(centralwidget);
        verticalLayoutWidget->setObjectName(QStringLiteral("verticalLayoutWidget"));
        verticalLayoutWidget->setGeometry(QRect(600, 260, 291, 80));
        verticalLayout = new QVBoxLayout(verticalLayoutWidget);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        verticalLayout->setContentsMargins(0, 0, 0, 0);
        labelCoachLundi = new QLabel(verticalLayoutWidget);
        labelCoachLundi->setObjectName(QStringLiteral("labelCoachLundi"));
        labelCoachLundi->setEnabled(true);

        verticalLayout->addWidget(labelCoachLundi);

        radioButtonCoachLundiChoix1 = new QRadioButton(verticalLayoutWidget);
        radioButtonCoachLundiChoix1->setObjectName(QStringLiteral("radioButtonCoachLundiChoix1"));
        radioButtonCoachLundiChoix1->setEnabled(true);

        verticalLayout->addWidget(radioButtonCoachLundiChoix1);

        radioButtonCoachLundiChoix2 = new QRadioButton(verticalLayoutWidget);
        radioButtonCoachLundiChoix2->setObjectName(QStringLiteral("radioButtonCoachLundiChoix2"));

        verticalLayout->addWidget(radioButtonCoachLundiChoix2);

        verticalLayoutWidget_2 = new QWidget(centralwidget);
        verticalLayoutWidget_2->setObjectName(QStringLiteral("verticalLayoutWidget_2"));
        verticalLayoutWidget_2->setGeometry(QRect(600, 340, 291, 80));
        verticalLayout_2 = new QVBoxLayout(verticalLayoutWidget_2);
        verticalLayout_2->setObjectName(QStringLiteral("verticalLayout_2"));
        verticalLayout_2->setContentsMargins(0, 0, 0, 0);
        labelCoachMardi = new QLabel(verticalLayoutWidget_2);
        labelCoachMardi->setObjectName(QStringLiteral("labelCoachMardi"));

        verticalLayout_2->addWidget(labelCoachMardi);

        radioButtonCoachMardiChoix1 = new QRadioButton(verticalLayoutWidget_2);
        radioButtonCoachMardiChoix1->setObjectName(QStringLiteral("radioButtonCoachMardiChoix1"));

        verticalLayout_2->addWidget(radioButtonCoachMardiChoix1);

        radioButtonCoachMardiChoix2 = new QRadioButton(verticalLayoutWidget_2);
        radioButtonCoachMardiChoix2->setObjectName(QStringLiteral("radioButtonCoachMardiChoix2"));

        verticalLayout_2->addWidget(radioButtonCoachMardiChoix2);

        verticalLayoutWidget_3 = new QWidget(centralwidget);
        verticalLayoutWidget_3->setObjectName(QStringLiteral("verticalLayoutWidget_3"));
        verticalLayoutWidget_3->setGeometry(QRect(600, 420, 291, 80));
        verticalLayout_3 = new QVBoxLayout(verticalLayoutWidget_3);
        verticalLayout_3->setObjectName(QStringLiteral("verticalLayout_3"));
        verticalLayout_3->setContentsMargins(0, 0, 0, 0);
        labelCoachMercredi = new QLabel(verticalLayoutWidget_3);
        labelCoachMercredi->setObjectName(QStringLiteral("labelCoachMercredi"));

        verticalLayout_3->addWidget(labelCoachMercredi);

        radioButtonCoachMercrediChoix1 = new QRadioButton(verticalLayoutWidget_3);
        radioButtonCoachMercrediChoix1->setObjectName(QStringLiteral("radioButtonCoachMercrediChoix1"));

        verticalLayout_3->addWidget(radioButtonCoachMercrediChoix1);

        radioButtonCoachMercrediChoix2 = new QRadioButton(verticalLayoutWidget_3);
        radioButtonCoachMercrediChoix2->setObjectName(QStringLiteral("radioButtonCoachMercrediChoix2"));

        verticalLayout_3->addWidget(radioButtonCoachMercrediChoix2);

        verticalLayoutWidget_4 = new QWidget(centralwidget);
        verticalLayoutWidget_4->setObjectName(QStringLiteral("verticalLayoutWidget_4"));
        verticalLayoutWidget_4->setGeometry(QRect(600, 500, 291, 80));
        verticalLayout_4 = new QVBoxLayout(verticalLayoutWidget_4);
        verticalLayout_4->setObjectName(QStringLiteral("verticalLayout_4"));
        verticalLayout_4->setContentsMargins(0, 0, 0, 0);
        labelCoachJeudi = new QLabel(verticalLayoutWidget_4);
        labelCoachJeudi->setObjectName(QStringLiteral("labelCoachJeudi"));

        verticalLayout_4->addWidget(labelCoachJeudi);

        radioButtonCoachJeudiChoix1 = new QRadioButton(verticalLayoutWidget_4);
        radioButtonCoachJeudiChoix1->setObjectName(QStringLiteral("radioButtonCoachJeudiChoix1"));

        verticalLayout_4->addWidget(radioButtonCoachJeudiChoix1);

        radioButtonCoachJeudiChoix2 = new QRadioButton(verticalLayoutWidget_4);
        radioButtonCoachJeudiChoix2->setObjectName(QStringLiteral("radioButtonCoachJeudiChoix2"));

        verticalLayout_4->addWidget(radioButtonCoachJeudiChoix2);

        formLayoutWidget = new QWidget(centralwidget);
        formLayoutWidget->setObjectName(QStringLiteral("formLayoutWidget"));
        formLayoutWidget->setGeometry(QRect(80, 120, 351, 51));
        formLayout = new QFormLayout(formLayoutWidget);
        formLayout->setObjectName(QStringLiteral("formLayout"));
        formLayout->setContentsMargins(0, 0, 0, 0);
        labelCoachPrenom = new QLabel(formLayoutWidget);
        labelCoachPrenom->setObjectName(QStringLiteral("labelCoachPrenom"));

        formLayout->setWidget(0, QFormLayout::LabelRole, labelCoachPrenom);

        labelCoachNom = new QLabel(formLayoutWidget);
        labelCoachNom->setObjectName(QStringLiteral("labelCoachNom"));

        formLayout->setWidget(1, QFormLayout::LabelRole, labelCoachNom);

        lineEditCoachPrenom = new QLineEdit(formLayoutWidget);
        lineEditCoachPrenom->setObjectName(QStringLiteral("lineEditCoachPrenom"));

        formLayout->setWidget(0, QFormLayout::FieldRole, lineEditCoachPrenom);

        lineEditCoachNom = new QLineEdit(formLayoutWidget);
        lineEditCoachNom->setObjectName(QStringLiteral("lineEditCoachNom"));

        formLayout->setWidget(1, QFormLayout::FieldRole, lineEditCoachNom);

        pushButtonCoachValider = new QPushButton(centralwidget);
        pushButtonCoachValider->setObjectName(QStringLiteral("pushButtonCoachValider"));
        pushButtonCoachValider->setEnabled(false);
        pushButtonCoachValider->setGeometry(QRect(190, 460, 251, 101));
        horizontalLayoutWidget = new QWidget(centralwidget);
        horizontalLayoutWidget->setObjectName(QStringLiteral("horizontalLayoutWidget"));
        horizontalLayoutWidget->setGeometry(QRect(680, 160, 101, 51));
        horizontalLayout = new QHBoxLayout(horizontalLayoutWidget);
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        horizontalLayout->setContentsMargins(0, 0, 0, 0);
        labelCoachNonRepas = new QLabel(horizontalLayoutWidget);
        labelCoachNonRepas->setObjectName(QStringLiteral("labelCoachNonRepas"));

        horizontalLayout->addWidget(labelCoachNonRepas);

        checkBoxCoachNonRepas = new QCheckBox(horizontalLayoutWidget);
        checkBoxCoachNonRepas->setObjectName(QStringLiteral("checkBoxCoachNonRepas"));

        horizontalLayout->addWidget(checkBoxCoachNonRepas);

        labelAjouterCoach = new QLabel(centralwidget);
        labelAjouterCoach->setObjectName(QStringLiteral("labelAjouterCoach"));
        labelAjouterCoach->setGeometry(QRect(260, 20, 261, 81));
        QFont font;
        font.setPointSize(26);
        labelAjouterCoach->setFont(font);
        plainTextEditCoachCommentaire = new QPlainTextEdit(centralwidget);
        plainTextEditCoachCommentaire->setObjectName(QStringLiteral("plainTextEditCoachCommentaire"));
        plainTextEditCoachCommentaire->setGeometry(QRect(100, 320, 481, 101));
        verticalLayoutWidget_5 = new QWidget(centralwidget);
        verticalLayoutWidget_5->setObjectName(QStringLiteral("verticalLayoutWidget_5"));
        verticalLayoutWidget_5->setGeometry(QRect(10, 350, 91, 41));
        verticalLayout_5 = new QVBoxLayout(verticalLayoutWidget_5);
        verticalLayout_5->setObjectName(QStringLiteral("verticalLayout_5"));
        verticalLayout_5->setContentsMargins(0, 0, 0, 0);
        labelCoachCommentaire = new QLabel(verticalLayoutWidget_5);
        labelCoachCommentaire->setObjectName(QStringLiteral("labelCoachCommentaire"));

        verticalLayout_5->addWidget(labelCoachCommentaire);

        label = new QLabel(verticalLayoutWidget_5);
        label->setObjectName(QStringLiteral("label"));

        verticalLayout_5->addWidget(label);

        Coach->setCentralWidget(centralwidget);
        menubar = new QMenuBar(Coach);
        menubar->setObjectName(QStringLiteral("menubar"));
        menubar->setGeometry(QRect(0, 0, 907, 21));
        Coach->setMenuBar(menubar);
        statusbar = new QStatusBar(Coach);
        statusbar->setObjectName(QStringLiteral("statusbar"));
        Coach->setStatusBar(statusbar);

        retranslateUi(Coach);

        QMetaObject::connectSlotsByName(Coach);
    } // setupUi

    void retranslateUi(QMainWindow *Coach)
    {
        Coach->setWindowTitle(QApplication::translate("Coach", "MainWindow", Q_NULLPTR));
        labelCoachLundi->setText(QApplication::translate("Coach", "Lundi", Q_NULLPTR));
        radioButtonCoachLundiChoix1->setText(QApplication::translate("Coach", "Choix 1", Q_NULLPTR));
        radioButtonCoachLundiChoix2->setText(QApplication::translate("Coach", "Choix 2", Q_NULLPTR));
        labelCoachMardi->setText(QApplication::translate("Coach", "Mardi", Q_NULLPTR));
        radioButtonCoachMardiChoix1->setText(QApplication::translate("Coach", "Choix 1", Q_NULLPTR));
        radioButtonCoachMardiChoix2->setText(QApplication::translate("Coach", "Choix 2", Q_NULLPTR));
        labelCoachMercredi->setText(QApplication::translate("Coach", "Mercredi", Q_NULLPTR));
        radioButtonCoachMercrediChoix1->setText(QApplication::translate("Coach", "Choix 1", Q_NULLPTR));
        radioButtonCoachMercrediChoix2->setText(QApplication::translate("Coach", "Choix 2", Q_NULLPTR));
        labelCoachJeudi->setText(QApplication::translate("Coach", "Jeudi", Q_NULLPTR));
        radioButtonCoachJeudiChoix1->setText(QApplication::translate("Coach", "Choix 1", Q_NULLPTR));
        radioButtonCoachJeudiChoix2->setText(QApplication::translate("Coach", "Choix 2", Q_NULLPTR));
        labelCoachPrenom->setText(QApplication::translate("Coach", "Pr\303\251nom", Q_NULLPTR));
        labelCoachNom->setText(QApplication::translate("Coach", "Nom", Q_NULLPTR));
        pushButtonCoachValider->setText(QApplication::translate("Coach", "Valider", Q_NULLPTR));
        labelCoachNonRepas->setText(QApplication::translate("Coach", "Pas de repas :", Q_NULLPTR));
        checkBoxCoachNonRepas->setText(QString());
        labelAjouterCoach->setText(QApplication::translate("Coach", "Ajouter Coach", Q_NULLPTR));
        labelCoachCommentaire->setText(QApplication::translate("Coach", "Commentaire :", Q_NULLPTR));
        label->setText(QApplication::translate("Coach", "(facultatif)", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class Coach: public Ui_Coach {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_COACH_H
