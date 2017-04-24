#include "gestiongroupe.h"
#include "ui_gestiongroupe.h"
#include <QSqlDatabase>
#include <QSqlError>
#include <QMessageBox>
#include <QtSql>

gestiongroupe::gestiongroupe(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::gestiongroupe)
{
    ui->setupUi(this);

    //======================================== AJOUTER GROUPE ========================================//
    QObject::connect(ui->ajouterGroupeButton,          SIGNAL(clicked(bool)),            this, SLOT(AjouterGroupe()));
    QObject::connect(ui->ajouterGroupeButton,          SIGNAL(clicked(bool)),            this, SLOT(validerAjouterGroupe()));
    QObject::connect(ui->groupeNomEdit,                SIGNAL(textChanged(QString)),     this, SLOT(validerAjouterGroupe()));
    QObject::connect(ui->groupeDescritpionEdit,        SIGNAL(textChanged(QString)),     this, SLOT(validerAjouterGroupe()));
    QObject::connect(ui->groupePrixSpinBox,            SIGNAL(valueChanged(QString)),    this, SLOT(validerAjouterGroupe()));
    QObject::connect(ui->groupeTypeCampEdit,           SIGNAL(currentIndexChanged(int)), this, SLOT(validerAjouterGroupe()));

    //======================================== MODIFIER GROUPE ========================================//
    QObject::connect(ui->RechercherModGroupeButton,    SIGNAL(clicked(bool)),            this, SLOT(RechercherGroupePourMod()));
    QObject::connect(ui->ModifierGroupeButton,         SIGNAL(clicked(bool)),            this, SLOT(ModifierGroupe()));
    QObject::connect(ui->ModifierGroupeButton,         SIGNAL(clicked(bool)),            this, SLOT(validerModifierGroupe()));
    QObject::connect(ui->ModifergroupeNomEdit,         SIGNAL(textChanged(QString)),     this, SLOT(validerModifierGroupe()));
    QObject::connect(ui->ModifergroupeDescritpionEdit, SIGNAL(textChanged(QString)),     this, SLOT(validerModifierGroupe()));
    QObject::connect(ui->ModifergroupePrixSpinBox,     SIGNAL(valueChanged(QString)),    this, SLOT(validerModifierGroupe()));
    QObject::connect(ui->ModifergroupeTypeCampEdit,    SIGNAL(currentIndexChanged(int)), this, SLOT(validerModifierGroupe()));

    //======================================== RECHERCHER GROUPE ========================================//
    QObject::connect(ui->RechercheGroupelineEdit,      SIGNAL(textChanged(QString)),     this, SLOT(RechercherGroupe()));

    //======================================== SUPPRIMER GROUPE ========================================//
    QObject::connect(ui->SupprimerGroupeButton,        SIGNAL(clicked(bool)),            this, SLOT(SupprimerGroupe()));


}

void gestiongroupe::AjouterGroupe()
{
    QSqlQuery query;
    query.prepare ("INSERT INTO `groupe` (`GRO_nom`, `GRO_description`, `GRO_typeCamp`, `GRO_prix`) VALUES ('"+ ui->groupeNomEdit->text() +"', '"+ ui->groupeDescritpionEdit->text() +"', '"+ ui->groupeTypeCampEdit->currentText() +"', '"+ ui->groupePrixSpinBox->text() +"')");


    if(ui->groupePrixSpinBox->value() == 0.00)
    {
        QMessageBox::StandardButton ouiNon;
        ouiNon = QMessageBox::question(this, "Le prix du groupe est de 0$", "Le prix du groupe est de 0$, voulez-vous quand même procéder à la création du groupe?");

        if(ouiNon == QMessageBox::Yes)
        {
            query.exec();
            ui->groupeNomEdit->clear();
            ui->groupeDescritpionEdit->clear();
            ui->groupePrixSpinBox->setValue(0.00);
            ui->groupeTypeCampEdit->setCurrentIndex(0);
        }

        else if(ouiNon == QMessageBox::No)
        {
            ui->groupePrixSpinBox->setFocus();
        }
    }
    else if (ui->groupePrixSpinBox->value() != 0.00)
    {
        query.exec();
        ui->groupeNomEdit->clear();
        ui->groupeDescritpionEdit->clear();
        ui->groupePrixSpinBox->setValue(0.00);
        ui->groupeTypeCampEdit->setCurrentIndex(0);
    }
}

void gestiongroupe::validerAjouterGroupe()
{
    bool result = false;

    if((ui->groupeNomEdit->text().isEmpty() == false)&&(ui->groupeDescritpionEdit->text().isEmpty() == false)&&(ui->groupeTypeCampEdit->currentIndex() != 0))
    {
        result = true;
    }

    ui->ajouterGroupeButton->setEnabled(result);

}
void gestiongroupe::RechercherGroupePourMod()
{
    bool recherche = false;
    QString nomGroupe = ui->ModifergroupeNomEdit->text();

    QSqlQuery query;
    query.exec("SELECT groupe.GRO_nom, groupe.GRO_description, groupe.GRO_typeCamp, groupe.GRO_prix FROM groupe WHERE groupe.GRO_nom = '" + nomGroupe +"'");

    if(!query.first())
    {
        QMessageBox::critical(this, "Groupe invalide", "Ce groupe n'existe pas");
        recherche = false;
        ui->ModifergroupeNomEdit->setFocus();
    }
    else
    {
        recherche = true;

        QString description = query.record().value(1).toString();
        QString typecamp = query.record().value(2).toString();
        float_t prix = query.record().value(3).toFloat();

        ui->ModifergroupeDescritpionEdit->setText(description);
        ui->ModifergroupePrixSpinBox->setValue(prix);

        if(typecamp == "Patinage artistique")
        {
            ui->ModifergroupeTypeCampEdit->setCurrentIndex(1);
        }
        else if(typecamp == "Hockey")
        {
            ui->ModifergroupeTypeCampEdit->setCurrentIndex(2);
        }
        else if(typecamp == "Power skating")
        {
            ui->ModifergroupeTypeCampEdit->setCurrentIndex(3);
        }
    }

    ui->ModifergroupeDescritpionEdit->setEnabled(recherche);
    ui->ModifergroupePrixSpinBox->setEnabled(recherche);
    ui->ModifergroupeTypeCampEdit->setEnabled(recherche);
}

void gestiongroupe::ModifierGroupe()
{
    QString nomGroupeTemp = ui->ModifergroupeNomEdit->text();
    QSqlQuery query;
    query.prepare ("UPDATE groupe SET GRO_nom = '" + ui->ModifergroupeNomEdit->text() + "', GRO_description = '"+ ui->ModifergroupeDescritpionEdit->text() +"', GRO_prix = '"+ ui->ModifergroupePrixSpinBox->text() +"', GRO_typeCamp = '"+ ui->ModifergroupeTypeCampEdit->currentText() +"' WHERE groupe.GRO_nom = '" + nomGroupeTemp +"'");

    if(ui->ModifergroupePrixSpinBox->value() == 0.00)
    {
        QMessageBox::StandardButton ouiNon;
        ouiNon = QMessageBox::question(this, "Le prix du groupe est de 0$", "Le prix du groupe est de 0$, voulez-vous quand même procéder à la création du groupe?");

        if(ouiNon == QMessageBox::Yes)
        {
            query.exec();
            ui->ModifergroupeNomEdit->clear();
            ui->ModifergroupeDescritpionEdit->clear();
            ui->ModifergroupePrixSpinBox->setValue(0.00);
            ui->ModifergroupeTypeCampEdit->setCurrentIndex(0);
        }

        else if(ouiNon == QMessageBox::No)
        {
            ui->ModifergroupePrixSpinBox->setFocus();
        }
    }
    else if (ui->ModifergroupePrixSpinBox->value() != 0.00)
    {
        query.exec();
        ui->ModifergroupeNomEdit->clear();
        ui->ModifergroupeDescritpionEdit->clear();
        ui->ModifergroupePrixSpinBox->setValue(0.00);
        ui->ModifergroupeTypeCampEdit->setCurrentIndex(0);
    }
}

void gestiongroupe::validerModifierGroupe()
{

    bool mod = false;
    if((ui->ModifergroupeNomEdit->text().isEmpty() == false)&&(ui->ModifergroupeDescritpionEdit->text().isEmpty() == false)&&(ui->ModifergroupeTypeCampEdit->currentIndex() != 0))
    {
        mod = true;
    }

    ui->ModifierGroupeButton->setEnabled(mod);
}

void gestiongroupe::SupprimerGroupe()
{
    QString nomGroupeTemp = ui->SupprimergroupeNomEdit->text();
    QSqlQuery queryRecherche;
    queryRecherche.exec("SELECT groupe.GRO_nom, groupe.GRO_description, groupe.GRO_typeCamp, groupe.GRO_prix FROM groupe WHERE groupe.GRO_nom = '" + nomGroupeTemp +"'");

    QSqlQuery querySupprimer;
    querySupprimer.prepare("DELETE FROM groupe WHERE groupe.GRO_nom = '" + nomGroupeTemp +"'");

    if(!queryRecherche.first())
    {
        QMessageBox::critical(this, "Groupe invalide", "Ce groupe n'existe pas");
        ui->SupprimergroupeNomEdit->setFocus();
    }
    else
    {
        QMessageBox::StandardButton ouiNon;
        ouiNon = QMessageBox::question(this, "Confirmation de la suppression de groupe", "Voulez-vous vraiment supprimer ce groupe définitivement ?");

        if(ouiNon == QMessageBox::Yes)
        {
            querySupprimer.exec();
            ui->SupprimergroupeNomEdit->clear();
        }

        else if(ouiNon == QMessageBox::No)
        {
            ui->SupprimergroupeNomEdit->setFocus();
        }
    }
}

void gestiongroupe::RechercherGroupe()
{
    if(ui->NomGrouperadioButton->isChecked())
    {
        //SELECT * FROM `groupe` WHERE `GRO_nom` LIKE '% %'
        bool recherche = true;
        ui->RechercheGroupelineEdit->setEnabled(recherche);

        QString champRecherche = ui->RechercheGroupelineEdit->text();

        QSqlQuery query;
        //query.exec("SELECT * FROM groupe WHERE GRO_nom LIKE '%" + champRecherche + "%'");
        query.exec("SELECT groupe.GRO_nom as 'Nom', groupe.GRO_description as 'Description', groupe.GRO_typeCamp as 'Type de camp', groupe.GRO_prix as 'Prix' FROM groupe WHERE GRO_nom LIKE '%" + champRecherche + "%'");

        QSqlQueryModel *model = new QSqlQueryModel();
        model->setQuery(query);
        ui->rechercheGroupetableView->setModel(model);

        ui->rechercheGroupetableView->setColumnWidth(0, 100);
        ui->rechercheGroupetableView->setColumnWidth(1, 250);
        ui->rechercheGroupetableView->setColumnWidth(2, 150);
        ui->rechercheGroupetableView->setColumnWidth(3, 50);

    }

    else if(ui->TypeCampradioButton->isChecked())
    {
        bool recherche = true;
        ui->RechercheGroupelineEdit->setEnabled(recherche);

        QString champRecherche = ui->RechercheGroupelineEdit->text();

        QSqlQuery query;
        //query.exec("SELECT * FROM groupe WHERE GRO_nom LIKE '%" + champRecherche + "%'");
        query.exec("SELECT groupe.GRO_nom as 'Nom', groupe.GRO_description as 'Description', groupe.GRO_typeCamp as 'Type de camp', groupe.GRO_prix as 'Prix' FROM groupe WHERE GRO_typeCamp LIKE '%" + champRecherche + "%'");

        QSqlQueryModel *model = new QSqlQueryModel();
        model->setQuery(query);
        ui->rechercheGroupetableView->setModel(model);

        ui->rechercheGroupetableView->setColumnWidth(0, 100);
        ui->rechercheGroupetableView->setColumnWidth(1, 250);
        ui->rechercheGroupetableView->setColumnWidth(2, 150);
        ui->rechercheGroupetableView->setColumnWidth(3, 50);

    }
    else
    {
        QMessageBox::warning(this, "Recherche invalide", "Vous devz choisir un type de recherche");
    }
}

gestiongroupe::~gestiongroupe()
{
    delete ui;
}





































