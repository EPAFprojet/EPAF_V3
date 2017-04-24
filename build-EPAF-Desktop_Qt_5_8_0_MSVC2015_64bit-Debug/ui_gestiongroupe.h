/********************************************************************************
** Form generated from reading UI file 'gestiongroupe.ui'
**
** Created by: Qt User Interface Compiler version 5.8.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_GESTIONGROUPE_H
#define UI_GESTIONGROUPE_H

#include <QtCore/QLocale>
#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QDoubleSpinBox>
#include <QtWidgets/QFormLayout>
#include <QtWidgets/QGroupBox>
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
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_gestiongroupe
{
public:
    QWidget *centralwidget;
    QGroupBox *groupBox;
    QPushButton *ajouterGroupeButton;
    QWidget *formLayoutWidget_8;
    QFormLayout *formLayout_8;
    QLabel *label_48;
    QLabel *label_49;
    QLabel *label_50;
    QLineEdit *groupeNomEdit;
    QLineEdit *groupeDescritpionEdit;
    QLabel *label_58;
    QComboBox *groupeTypeCampEdit;
    QDoubleSpinBox *groupePrixSpinBox;
    QGroupBox *groupBox_2;
    QWidget *horizontalLayoutWidget;
    QHBoxLayout *horizontalLayout;
    QLabel *label;
    QLineEdit *RechercheGroupelineEdit;
    QGroupBox *groupBox_3;
    QRadioButton *NomGrouperadioButton;
    QRadioButton *TypeCampradioButton;
    QTableView *rechercheGroupetableView;
    QGroupBox *groupBox_4;
    QWidget *formLayoutWidget_9;
    QFormLayout *formLayout_9;
    QLabel *label_51;
    QLabel *label_52;
    QLabel *label_53;
    QLineEdit *ModifergroupeNomEdit;
    QLineEdit *ModifergroupeDescritpionEdit;
    QLabel *label_59;
    QComboBox *ModifergroupeTypeCampEdit;
    QDoubleSpinBox *ModifergroupePrixSpinBox;
    QWidget *horizontalLayoutWidget_2;
    QHBoxLayout *horizontalLayout_2;
    QPushButton *RechercherModGroupeButton;
    QPushButton *ModifierGroupeButton;
    QGroupBox *groupBox_5;
    QWidget *formLayoutWidget_10;
    QFormLayout *formLayout_10;
    QLabel *label_54;
    QLineEdit *SupprimergroupeNomEdit;
    QWidget *horizontalLayoutWidget_3;
    QHBoxLayout *horizontalLayout_3;
    QPushButton *SupprimerGroupeButton;
    QMenuBar *menubar;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *gestiongroupe)
    {
        if (gestiongroupe->objectName().isEmpty())
            gestiongroupe->setObjectName(QStringLiteral("gestiongroupe"));
        gestiongroupe->resize(915, 634);
        centralwidget = new QWidget(gestiongroupe);
        centralwidget->setObjectName(QStringLiteral("centralwidget"));
        groupBox = new QGroupBox(centralwidget);
        groupBox->setObjectName(QStringLiteral("groupBox"));
        groupBox->setGeometry(QRect(10, 0, 291, 191));
        QFont font;
        font.setPointSize(16);
        groupBox->setFont(font);
        ajouterGroupeButton = new QPushButton(groupBox);
        ajouterGroupeButton->setObjectName(QStringLiteral("ajouterGroupeButton"));
        ajouterGroupeButton->setEnabled(false);
        ajouterGroupeButton->setGeometry(QRect(100, 150, 75, 23));
        QFont font1;
        font1.setPointSize(8);
        ajouterGroupeButton->setFont(font1);
        formLayoutWidget_8 = new QWidget(groupBox);
        formLayoutWidget_8->setObjectName(QStringLiteral("formLayoutWidget_8"));
        formLayoutWidget_8->setGeometry(QRect(10, 30, 271, 121));
        formLayout_8 = new QFormLayout(formLayoutWidget_8);
        formLayout_8->setObjectName(QStringLiteral("formLayout_8"));
        formLayout_8->setContentsMargins(0, 0, 0, 0);
        label_48 = new QLabel(formLayoutWidget_8);
        label_48->setObjectName(QStringLiteral("label_48"));
        label_48->setFont(font1);

        formLayout_8->setWidget(1, QFormLayout::LabelRole, label_48);

        label_49 = new QLabel(formLayoutWidget_8);
        label_49->setObjectName(QStringLiteral("label_49"));
        label_49->setFont(font1);

        formLayout_8->setWidget(2, QFormLayout::LabelRole, label_49);

        label_50 = new QLabel(formLayoutWidget_8);
        label_50->setObjectName(QStringLiteral("label_50"));
        label_50->setFont(font1);

        formLayout_8->setWidget(3, QFormLayout::LabelRole, label_50);

        groupeNomEdit = new QLineEdit(formLayoutWidget_8);
        groupeNomEdit->setObjectName(QStringLiteral("groupeNomEdit"));
        groupeNomEdit->setFont(font1);
        groupeNomEdit->setMaxLength(15);

        formLayout_8->setWidget(1, QFormLayout::FieldRole, groupeNomEdit);

        groupeDescritpionEdit = new QLineEdit(formLayoutWidget_8);
        groupeDescritpionEdit->setObjectName(QStringLiteral("groupeDescritpionEdit"));
        groupeDescritpionEdit->setFont(font1);
        groupeDescritpionEdit->setMaxLength(50);

        formLayout_8->setWidget(3, QFormLayout::FieldRole, groupeDescritpionEdit);

        label_58 = new QLabel(formLayoutWidget_8);
        label_58->setObjectName(QStringLiteral("label_58"));
        label_58->setFont(font1);

        formLayout_8->setWidget(4, QFormLayout::LabelRole, label_58);

        groupeTypeCampEdit = new QComboBox(formLayoutWidget_8);
        groupeTypeCampEdit->setObjectName(QStringLiteral("groupeTypeCampEdit"));
        groupeTypeCampEdit->setFont(font1);

        formLayout_8->setWidget(4, QFormLayout::FieldRole, groupeTypeCampEdit);

        groupePrixSpinBox = new QDoubleSpinBox(formLayoutWidget_8);
        groupePrixSpinBox->setObjectName(QStringLiteral("groupePrixSpinBox"));
        groupePrixSpinBox->setFont(font1);
        groupePrixSpinBox->setLocale(QLocale(QLocale::English, QLocale::Canada));
        groupePrixSpinBox->setMaximum(500);

        formLayout_8->setWidget(2, QFormLayout::FieldRole, groupePrixSpinBox);

        groupBox_2 = new QGroupBox(centralwidget);
        groupBox_2->setObjectName(QStringLiteral("groupBox_2"));
        groupBox_2->setGeometry(QRect(10, 190, 671, 381));
        groupBox_2->setFont(font);
        horizontalLayoutWidget = new QWidget(groupBox_2);
        horizontalLayoutWidget->setObjectName(QStringLiteral("horizontalLayoutWidget"));
        horizontalLayoutWidget->setGeometry(QRect(10, 30, 291, 41));
        horizontalLayout = new QHBoxLayout(horizontalLayoutWidget);
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        horizontalLayout->setContentsMargins(0, 0, 0, 0);
        label = new QLabel(horizontalLayoutWidget);
        label->setObjectName(QStringLiteral("label"));
        QFont font2;
        font2.setPointSize(10);
        label->setFont(font2);

        horizontalLayout->addWidget(label);

        RechercheGroupelineEdit = new QLineEdit(horizontalLayoutWidget);
        RechercheGroupelineEdit->setObjectName(QStringLiteral("RechercheGroupelineEdit"));
        RechercheGroupelineEdit->setEnabled(true);
        RechercheGroupelineEdit->setFont(font1);
        RechercheGroupelineEdit->setMaxLength(25);

        horizontalLayout->addWidget(RechercheGroupelineEdit);

        groupBox_3 = new QGroupBox(groupBox_2);
        groupBox_3->setObjectName(QStringLiteral("groupBox_3"));
        groupBox_3->setGeometry(QRect(310, 20, 161, 61));
        groupBox_3->setFont(font2);
        NomGrouperadioButton = new QRadioButton(groupBox_3);
        NomGrouperadioButton->setObjectName(QStringLiteral("NomGrouperadioButton"));
        NomGrouperadioButton->setGeometry(QRect(10, 20, 131, 17));
        TypeCampradioButton = new QRadioButton(groupBox_3);
        TypeCampradioButton->setObjectName(QStringLiteral("TypeCampradioButton"));
        TypeCampradioButton->setGeometry(QRect(10, 40, 131, 17));
        rechercheGroupetableView = new QTableView(groupBox_2);
        rechercheGroupetableView->setObjectName(QStringLiteral("rechercheGroupetableView"));
        rechercheGroupetableView->setGeometry(QRect(10, 90, 591, 281));
        QFont font3;
        font3.setPointSize(9);
        rechercheGroupetableView->setFont(font3);
        rechercheGroupetableView->raise();
        horizontalLayoutWidget->raise();
        groupBox_3->raise();
        groupBox_4 = new QGroupBox(centralwidget);
        groupBox_4->setObjectName(QStringLiteral("groupBox_4"));
        groupBox_4->setGeometry(QRect(310, 0, 301, 191));
        groupBox_4->setFont(font);
        formLayoutWidget_9 = new QWidget(groupBox_4);
        formLayoutWidget_9->setObjectName(QStringLiteral("formLayoutWidget_9"));
        formLayoutWidget_9->setGeometry(QRect(10, 30, 271, 121));
        formLayout_9 = new QFormLayout(formLayoutWidget_9);
        formLayout_9->setObjectName(QStringLiteral("formLayout_9"));
        formLayout_9->setContentsMargins(0, 0, 0, 0);
        label_51 = new QLabel(formLayoutWidget_9);
        label_51->setObjectName(QStringLiteral("label_51"));
        label_51->setFont(font1);

        formLayout_9->setWidget(1, QFormLayout::LabelRole, label_51);

        label_52 = new QLabel(formLayoutWidget_9);
        label_52->setObjectName(QStringLiteral("label_52"));
        label_52->setFont(font1);

        formLayout_9->setWidget(2, QFormLayout::LabelRole, label_52);

        label_53 = new QLabel(formLayoutWidget_9);
        label_53->setObjectName(QStringLiteral("label_53"));
        label_53->setFont(font1);

        formLayout_9->setWidget(3, QFormLayout::LabelRole, label_53);

        ModifergroupeNomEdit = new QLineEdit(formLayoutWidget_9);
        ModifergroupeNomEdit->setObjectName(QStringLiteral("ModifergroupeNomEdit"));
        ModifergroupeNomEdit->setFont(font1);
        ModifergroupeNomEdit->setMaxLength(15);

        formLayout_9->setWidget(1, QFormLayout::FieldRole, ModifergroupeNomEdit);

        ModifergroupeDescritpionEdit = new QLineEdit(formLayoutWidget_9);
        ModifergroupeDescritpionEdit->setObjectName(QStringLiteral("ModifergroupeDescritpionEdit"));
        ModifergroupeDescritpionEdit->setFont(font1);
        ModifergroupeDescritpionEdit->setMaxLength(50);

        formLayout_9->setWidget(3, QFormLayout::FieldRole, ModifergroupeDescritpionEdit);

        label_59 = new QLabel(formLayoutWidget_9);
        label_59->setObjectName(QStringLiteral("label_59"));
        label_59->setFont(font1);

        formLayout_9->setWidget(4, QFormLayout::LabelRole, label_59);

        ModifergroupeTypeCampEdit = new QComboBox(formLayoutWidget_9);
        ModifergroupeTypeCampEdit->setObjectName(QStringLiteral("ModifergroupeTypeCampEdit"));
        ModifergroupeTypeCampEdit->setFont(font1);

        formLayout_9->setWidget(4, QFormLayout::FieldRole, ModifergroupeTypeCampEdit);

        ModifergroupePrixSpinBox = new QDoubleSpinBox(formLayoutWidget_9);
        ModifergroupePrixSpinBox->setObjectName(QStringLiteral("ModifergroupePrixSpinBox"));
        ModifergroupePrixSpinBox->setFont(font1);
        ModifergroupePrixSpinBox->setLocale(QLocale(QLocale::English, QLocale::Canada));
        ModifergroupePrixSpinBox->setMaximum(500);

        formLayout_9->setWidget(2, QFormLayout::FieldRole, ModifergroupePrixSpinBox);

        horizontalLayoutWidget_2 = new QWidget(groupBox_4);
        horizontalLayoutWidget_2->setObjectName(QStringLiteral("horizontalLayoutWidget_2"));
        horizontalLayoutWidget_2->setGeometry(QRect(70, 150, 197, 35));
        horizontalLayout_2 = new QHBoxLayout(horizontalLayoutWidget_2);
        horizontalLayout_2->setObjectName(QStringLiteral("horizontalLayout_2"));
        horizontalLayout_2->setContentsMargins(0, 0, 0, 0);
        RechercherModGroupeButton = new QPushButton(horizontalLayoutWidget_2);
        RechercherModGroupeButton->setObjectName(QStringLiteral("RechercherModGroupeButton"));
        RechercherModGroupeButton->setEnabled(true);
        RechercherModGroupeButton->setFont(font1);

        horizontalLayout_2->addWidget(RechercherModGroupeButton);

        ModifierGroupeButton = new QPushButton(horizontalLayoutWidget_2);
        ModifierGroupeButton->setObjectName(QStringLiteral("ModifierGroupeButton"));
        ModifierGroupeButton->setEnabled(false);
        ModifierGroupeButton->setFont(font1);

        horizontalLayout_2->addWidget(ModifierGroupeButton);

        groupBox_5 = new QGroupBox(centralwidget);
        groupBox_5->setObjectName(QStringLiteral("groupBox_5"));
        groupBox_5->setGeometry(QRect(610, 0, 301, 101));
        groupBox_5->setFont(font);
        formLayoutWidget_10 = new QWidget(groupBox_5);
        formLayoutWidget_10->setObjectName(QStringLiteral("formLayoutWidget_10"));
        formLayoutWidget_10->setGeometry(QRect(10, 30, 271, 31));
        formLayout_10 = new QFormLayout(formLayoutWidget_10);
        formLayout_10->setObjectName(QStringLiteral("formLayout_10"));
        formLayout_10->setContentsMargins(0, 0, 0, 0);
        label_54 = new QLabel(formLayoutWidget_10);
        label_54->setObjectName(QStringLiteral("label_54"));
        label_54->setFont(font1);

        formLayout_10->setWidget(1, QFormLayout::LabelRole, label_54);

        SupprimergroupeNomEdit = new QLineEdit(formLayoutWidget_10);
        SupprimergroupeNomEdit->setObjectName(QStringLiteral("SupprimergroupeNomEdit"));
        SupprimergroupeNomEdit->setFont(font1);
        SupprimergroupeNomEdit->setMaxLength(15);

        formLayout_10->setWidget(1, QFormLayout::FieldRole, SupprimergroupeNomEdit);

        horizontalLayoutWidget_3 = new QWidget(groupBox_5);
        horizontalLayoutWidget_3->setObjectName(QStringLiteral("horizontalLayoutWidget_3"));
        horizontalLayoutWidget_3->setGeometry(QRect(76, 60, 111, 35));
        horizontalLayout_3 = new QHBoxLayout(horizontalLayoutWidget_3);
        horizontalLayout_3->setObjectName(QStringLiteral("horizontalLayout_3"));
        horizontalLayout_3->setContentsMargins(0, 0, 0, 0);
        SupprimerGroupeButton = new QPushButton(horizontalLayoutWidget_3);
        SupprimerGroupeButton->setObjectName(QStringLiteral("SupprimerGroupeButton"));
        SupprimerGroupeButton->setEnabled(true);
        SupprimerGroupeButton->setFont(font1);

        horizontalLayout_3->addWidget(SupprimerGroupeButton);

        gestiongroupe->setCentralWidget(centralwidget);
        menubar = new QMenuBar(gestiongroupe);
        menubar->setObjectName(QStringLiteral("menubar"));
        menubar->setGeometry(QRect(0, 0, 915, 21));
        gestiongroupe->setMenuBar(menubar);
        statusbar = new QStatusBar(gestiongroupe);
        statusbar->setObjectName(QStringLiteral("statusbar"));
        gestiongroupe->setStatusBar(statusbar);

        retranslateUi(gestiongroupe);

        QMetaObject::connectSlotsByName(gestiongroupe);
    } // setupUi

    void retranslateUi(QMainWindow *gestiongroupe)
    {
        gestiongroupe->setWindowTitle(QApplication::translate("gestiongroupe", "MainWindow", Q_NULLPTR));
        groupBox->setTitle(QApplication::translate("gestiongroupe", "Nouveau groupe", Q_NULLPTR));
        ajouterGroupeButton->setText(QApplication::translate("gestiongroupe", "Valider", Q_NULLPTR));
        label_48->setText(QApplication::translate("gestiongroupe", "Nom du groupe:", Q_NULLPTR));
        label_49->setText(QApplication::translate("gestiongroupe", "Prix:", Q_NULLPTR));
        label_50->setText(QApplication::translate("gestiongroupe", "Description:", Q_NULLPTR));
        label_58->setText(QApplication::translate("gestiongroupe", "Type de camp:", Q_NULLPTR));
        groupeTypeCampEdit->clear();
        groupeTypeCampEdit->insertItems(0, QStringList()
         << QApplication::translate("gestiongroupe", "Aucun", Q_NULLPTR)
         << QApplication::translate("gestiongroupe", "Patinage artistique", Q_NULLPTR)
         << QApplication::translate("gestiongroupe", "Hockey", Q_NULLPTR)
         << QApplication::translate("gestiongroupe", "Power skating", Q_NULLPTR)
        );
        groupBox_2->setTitle(QApplication::translate("gestiongroupe", "Recherche de groupe", Q_NULLPTR));
        label->setText(QApplication::translate("gestiongroupe", "Recherche:", Q_NULLPTR));
        RechercheGroupelineEdit->setInputMask(QString());
        groupBox_3->setTitle(QApplication::translate("gestiongroupe", "Type de recherche", Q_NULLPTR));
        NomGrouperadioButton->setText(QApplication::translate("gestiongroupe", "Par nom de groupe", Q_NULLPTR));
        TypeCampradioButton->setText(QApplication::translate("gestiongroupe", "Par type de camp", Q_NULLPTR));
        groupBox_4->setTitle(QApplication::translate("gestiongroupe", "Modifier groupe", Q_NULLPTR));
        label_51->setText(QApplication::translate("gestiongroupe", "Nom du groupe:", Q_NULLPTR));
        label_52->setText(QApplication::translate("gestiongroupe", "Prix:", Q_NULLPTR));
        label_53->setText(QApplication::translate("gestiongroupe", "Description:", Q_NULLPTR));
        label_59->setText(QApplication::translate("gestiongroupe", "Type de camp:", Q_NULLPTR));
        ModifergroupeTypeCampEdit->clear();
        ModifergroupeTypeCampEdit->insertItems(0, QStringList()
         << QApplication::translate("gestiongroupe", "Aucun", Q_NULLPTR)
         << QApplication::translate("gestiongroupe", "Patinage artistique", Q_NULLPTR)
         << QApplication::translate("gestiongroupe", "Hockey", Q_NULLPTR)
         << QApplication::translate("gestiongroupe", "Powerskating", Q_NULLPTR)
        );
        RechercherModGroupeButton->setText(QApplication::translate("gestiongroupe", "Rechercher", Q_NULLPTR));
        ModifierGroupeButton->setText(QApplication::translate("gestiongroupe", "Valider", Q_NULLPTR));
        groupBox_5->setTitle(QApplication::translate("gestiongroupe", "Supprimer groupe", Q_NULLPTR));
        label_54->setText(QApplication::translate("gestiongroupe", "Nom du groupe:", Q_NULLPTR));
        SupprimerGroupeButton->setText(QApplication::translate("gestiongroupe", "Supprimer", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class gestiongroupe: public Ui_gestiongroupe {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_GESTIONGROUPE_H
