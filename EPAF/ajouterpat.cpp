#include "ajouterpat.h"
#include "ui_ajouterpat.h"

#include <QSqlDatabase>
#include <QSqlError>
#include <QMessageBox>
#include <QtSql>
#include "patineur.h"
#include "patinageartistique.h"
#include "hockey.h"
#include "powerskating.h"
#include "date.h"

ajouterPat::ajouterPat(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::ajouterPat)
{
    ui->setupUi(this);
    ui->IDErrorlabel->setVisible(false);
    ui->prenomErrorlabel->setVisible(false);
    ui->nomErrorlabel->setVisible(false);
    ui->adresseErrorlabel->setVisible(false);
    ui->condiErrorlabel->setVisible(false);
    ui->courrielErrorLabel->setVisible(false);
    ui->VilleErrorlabel->setVisible(false);
    ui->provinceErrorlabel->setVisible(false);
    ui->parentResErrorlabel->setVisible(false);
    ui->numTelErrorlabel->setVisible(false);
    ui->dateNaissanceErrorLable->setVisible(false);
    ui->cpErrorlabel->setVisible(false);
    QSqlDatabase db = QSqlDatabase::addDatabase("QODBC");
    db.setDatabaseName("MarcoServ");
    db.setUserName("EPAF");
    db.setPassword("");
    if (!db.open())
    {
        QMessageBox::critical(0,QObject::tr("database error"), db.lastError().text());
    }
    ui->traiteurWid->hide();
    ui->traiteurTitre->hide();
    ui->Lieulabel->hide();
    ui->LieulineEdit->hide();
    ui->IDEdit->setEnabled(false);
    QObject::connect(ui->traiteurCheck,SIGNAL(toggled(bool)), this, SLOT(isTraiteur()));
    QObject::connect(ui->CombinecheckBox, SIGNAL(toggled(bool)),this, SLOT(isCombine()));
    QObject::connect(ui->ValiderpushButton,SIGNAL(clicked(bool)), this, SLOT(verifAjout()));

    QSqlQuery query;
    query.exec("SELECT groupe.GRO_nom FROM groupe WHERE groupe.GRO_typeCamp = 'Patinage artistique'");
    while(query.next())
    {
        QString nomGroupe = query.value(0).toString();
        ui->groupePAcomboBox->addItem(nomGroupe);
    }
    query.exec("SELECT groupe.GRO_nom FROM groupe WHERE groupe.GRO_typeCamp = 'Power skating'");
    while(query.next())
    {
        QString nomGroupe = query.value(0).toString();
        ui->groupeHockcomboBox->addItem(nomGroupe);
    }
    query.exec("SELECT groupe.GRO_nom FROM groupe WHERE groupe.GRO_typeCamp = 'Hockey'");
    while(query.next())
    {
        QString nomGroupe = query.value(0).toString();
        ui->groupePOWcomboBox->addItem(nomGroupe);
    }
}

ajouterPat::~ajouterPat()
{
    delete ui;
}

void ajouterPat::verifAjout()
{
    if(validerAjout())
    {
        Patineur monPatineur;
        if(monPatineur.setPatPrenom(ui->prenomlineEdit->text()))
        {
            ui->prenomErrorlabel->setVisible(false);

            if(monPatineur.setPatNom(ui->nomlineEdit->text()))
            {
                ui->nomErrorlabel->setVisible(false);

                if(monPatineur.setProvince(ui->provincelineEdit->text()))
                {
                    ui->provinceErrorlabel->setVisible(false);

                    if(monPatineur.setVille(ui->villelineEdit->text()))
                    {
                        ui->VilleErrorlabel->setVisible(false);

                        if (monPatineur.setCodePostal(ui->codePostallineEdit->text()))
                        {
                            ui->cpErrorlabel->setVisible(false);

                            if (monPatineur.setCourriel(ui->courriellineEdit->text()))
                            {
                                ui->courrielErrorLabel->setVisible(false);
                                if (monPatineur.setParentResponsable(ui->ParentlineEdit->text()))
                                {
                                    monPatineur.setAdresse(ui->adresselineEdit->text());
                                    monPatineur.setCondiMed(ui->condiMedtextEdit->toPlainText());
                                    monPatineur.setNumTel(ui->NumTeltextEdit->toPlainText());
                                    if(ui->payecheckBox->isChecked())
                                    {
                                        monPatineur.setPaiementStatus(true);
                                    }
                                    else
                                    {
                                        monPatineur.setPaiementStatus(false);
                                    }
                                    if (createDate(monPatineur))
                                    {
                                        monPatineur.patToBD();
                                        ui->dateNaissanceErrorLable->setVisible(false);
                                    }
                                    else
                                    {
                                        ui->dateNaissanceErrorLable->setVisible(true);
                                    }
                                    ui->parentResErrorlabel->setVisible(false);

                                }
                                else
                                    ui->parentResErrorlabel->setVisible(true);
                            }
                            else
                                ui->courrielErrorLabel->setVisible(true);
                        }
                        else
                            ui->cpErrorlabel->setVisible(true);
                    }
                    else
                        ui->VilleErrorlabel->setVisible(true);
                }
                else
                    ui->provinceErrorlabel->setVisible(true);
            }
            else
                ui->nomErrorlabel->setVisible(true);
        }
        else
            ui->prenomErrorlabel->setVisible(true);
    }
}

void ajouterPat::isTraiteur()
{
    if (ui->traiteurCheck->isChecked())
    {
        ui->traiteurWid->show();
        ui->traiteurTitre->show();
    }
    else
    {
        ui->traiteurWid->hide();
        ui->traiteurTitre->hide();
    }
}

void ajouterPat::isCombine()
{
    if (ui->CombinecheckBox->isChecked())
    {
        ui->Lieulabel->show();
        ui->LieulineEdit->show();
    }
    else
    {
        ui->Lieulabel->hide();
        ui->LieulineEdit->hide();
    }
}

bool ajouterPat::validerAjout()
{
    if(ui->nomlineEdit->text().isEmpty() || ui->prenomlineEdit->text().isEmpty() || ui->adresselineEdit->text().isEmpty() || ui->jourlineEdit->text().isEmpty()
       || ui->moislineEdit->text().isEmpty() || ui->anneeLineEdit->text().isEmpty() || ui->courriellineEdit->text().isEmpty()
       || ui->villelineEdit->text().isEmpty() || ui->provincelineEdit->text().isEmpty() || ui->codePostallineEdit->text().isEmpty()|| ui->ParentlineEdit->text().isEmpty() || ui->NumTeltextEdit->toPlainText().isEmpty())
    {
        statusBar()->showMessage("Erreur, l'un des champs est vide.");
        return false;
    }
    else
        return true;
}

bool ajouterPat::createDate(Patineur monPatineur)
{
    Date n;
    if(n.setAnnee(ui->anneeLineEdit->text().toInt()) && n.setMois(ui->moislineEdit->text().toInt()) && n.setJour(ui->jourlineEdit->text().toInt()))
    {
        monPatineur.setDateNaissance(n);
        return true;
    }
    else
        return false;
}
