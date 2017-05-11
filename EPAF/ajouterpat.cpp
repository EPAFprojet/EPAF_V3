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
    ui->POWerreur->hide();
    ui->paErreur->hide();
    ui->HockErreur->hide();

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
    ui->hLieulineEdit->hide();
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
    query.exec("SELECT groupe.GRO_nom FROM groupe WHERE groupe.GRO_typeCamp = 'Hockey'");
    while(query.next())
    {
        QString nomGroupe = query.value(0).toString();
        ui->groupeHockcomboBox->addItem(nomGroupe);
    }
    query.exec("SELECT groupe.GRO_nom FROM groupe WHERE groupe.GRO_typeCamp = 'Power skating'");
    while(query.next())
    {
        QString nomGroupe = query.value(0).toString();
        ui->groupePOWcomboBox->addItem(nomGroupe);
    }
    query.exec("SELECT MAX(patineur.PAT_num) FROM patineur");
    while(query.next())
    {
        numPat = query.value(0).toInt();
    }
    numPat += 1;
    qDebug() << numPat;

    query.exec("SELECT listerepas.LIS_description FROM listerepas WHERE listerepas.LIS_choix = 'Lundi'");
    while(query.next())
    {
        ui->traitluncomboBox->addItem(query.value(0).toString());
    }
    query.exec("SELECT listerepas.LIS_description FROM listerepas WHERE listerepas.LIS_choix = 'Mardi'");
    while(query.next())
    {
        ui->traitMarcomboBox->addItem(query.value(0).toString());
    }
    query.exec("SELECT listerepas.LIS_description FROM listerepas WHERE listerepas.LIS_choix = 'Mercredi'");
    while(query.next())
    {
        ui->traitMercomboBox->addItem(query.value(0).toString());
    }
    query.exec("SELECT listerepas.LIS_description FROM listerepas WHERE listerepas.LIS_choix = 'Jeudi'");
    while(query.next())
    {
        ui->traitJeucomboBox->addItem(query.value(0).toString());
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
                                    monPatineur = createDate(monPatineur);
                                    if (monPatineur.getverifAnnee() != 2400)
                                    {
                                        if(ajouterHockey())
                                        {
                                            ui->HockErreur->hide();
                                            if(ajouterPatArt())
                                            {
                                                ui->paErreur->hide();
                                                if(ajouterPow())
                                                {
                                                    ui->POWerreur->hide();
                                                    monPatineur.setID(numPat);
                                                    monPatineur.patToBD();
                                                    // faire numPat++ quand on quitte la page.
                                                    ui->dateNaissanceErrorLable->setVisible(false);
                                                }
                                                else
                                                {
                                                    ui->POWerreur->show();
                                                }
                                            }
                                            else
                                            {
                                                ui->paErreur->show();
                                            }
                                        }
                                        else
                                        {
                                            ui->HockErreur->show();
                                        }
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

bool ajouterPat::ajouterHockey()
{
    if (ui->hCatcombo->currentText().isEmpty() && ui->hequipelineEdit->text().isEmpty() && ui->hposicomboBox->currentText().isEmpty())
    {
        return true;
    }
    else
    {
        if(!ui->hCatcombo->currentText().isEmpty() && !ui->hequipelineEdit->text().isEmpty() && !ui->hposicomboBox->currentText().isEmpty()
                && (ui->droitierradioButton->isChecked() || ui->gaucheradioButton->isChecked()))
        {
            Hockey joueurDeHockey;
            joueurDeHockey.setEquipe(ui->hequipelineEdit->text());
            joueurDeHockey.setCategorie(ui->hCatcombo->currentText());
            joueurDeHockey.setPosition(ui->hposicomboBox->currentText());
            joueurDeHockey.setHockGroupe(ui->groupeHockcomboBox->currentText());
            joueurDeHockey.setIDpat(numPat);
            joueurDeHockey.setTraiteur(0);
            joueurDeHockey.setCombine(0);
            joueurDeHockey.setLieuCombine("-");
            int paye;
            if (ui->payecheckBox->isChecked())
            {
                paye = 1;
            }
            else if (!ui->payecheckBox->isChecked())
            {
                paye = 0;
            }

            if(ui->gaucheradioButton->isChecked())
            {
                joueurDeHockey.setLateralite("Gaucher");
            }
            else if (ui->droitierradioButton->isChecked())
            {
                joueurDeHockey.setLateralite("Droitier");
            }

            if(!ui->traiteurCheck->isChecked() && !ui->CombinecheckBox->isChecked())
            {
                joueurDeHockey.hocToBD();
                QSqlQuery query;
                query.exec("INSERT INTO `achat` (`ACH_NUM_pat`, `ACH_GRO_nom`, `ACH_date`, `ACH_payer`) "
                           "VALUES ('"+QString::number(numPat)+"', '"+ui->groupeHockcomboBox->currentText()+"', '"+Date::getCurrentYear()+"-"+Date::getCurrentMonth()+"-"+Date::getCurrentDay()+"', '"+paye+"')");
                return true;
            }

            if (ui->traiteurCheck->isChecked() && !ui->traitluncomboBox->currentText().isEmpty() && !ui->traitMarcomboBox->currentText().isEmpty() && !ui->traitMercomboBox->currentText().isEmpty() && !ui->traitJeucomboBox->currentText().isEmpty())
            {
                joueurDeHockey.setTraiteur(1);
                if (!ui->CombinecheckBox->isChecked())
                {
                    joueurDeHockey.hocToBD();
                    QSqlQuery query;
                    query.exec("INSERT INTO `achat` (`ACH_NUM_pat`, `ACH_GRO_nom`, `ACH_date`, `ACH_payer`) "
                               "VALUES ('"+QString::number(numPat)+"', '"+ui->groupeHockcomboBox->currentText()+"', '"+Date::getCurrentYear()+"-"+Date::getCurrentMonth()+"-"+Date::getCurrentDay()+"', '"+paye+"')");
                    query.exec("INSERT INTO repas (REP_numeroCoachJoueurHockey, REP_lundi, REP_mardi, REP_mercredi, REP_jeudi) "
                               "VALUES ('"+QString::number(numPat)+"','"+ui->traitluncomboBox->currentText()+"', '"+ui->traitMarcomboBox->currentText()+"', '"+ui->traitMercomboBox->currentText()+"', '"+ui->traitJeucomboBox->currentText()+")");
                    return true;
                }
            }
            else if(ui->traiteurCheck->isChecked() && ui->traitluncomboBox->currentText().isEmpty() || ui->traitMarcomboBox->currentText().isEmpty() || ui->traitMercomboBox->currentText().isEmpty() || ui->traitJeucomboBox->currentText().isEmpty())
            {
                return false;
            }

            if (ui->CombinecheckBox->isChecked() && !ui->Lieulabel->text().isEmpty())
            {
                joueurDeHockey.setIDpat(numPat);
                joueurDeHockey.setCombine(1);
                joueurDeHockey.setLieuCombine(ui->Lieulabel->text());
                joueurDeHockey.hocToBD();
                QSqlQuery query;
                query.exec("INSERT INTO `achat` (`ACH_NUM_pat`, `ACH_GRO_nom`, `ACH_date`, `ACH_payer`) "
                           "VALUES ('"+QString::number(numPat)+"', '"+ui->groupeHockcomboBox->currentText()+"', '"+Date::getCurrentYear()+"-"+Date::getCurrentMonth()+"-"+Date::getCurrentDay()+"', '"+paye+"')");
                return true;
            }
        }
    }
    return false;
}

bool ajouterPat::ajouterPatArt()
{
    int paye;
    if (ui->payecheckBox->isChecked())
    {
        paye = 1;
    }
    else if (!ui->payecheckBox->isChecked())
    {
        paye = 0;
    }

    if (ui->clublineEdit->text().isEmpty() && ui->nivDanseCbox->currentText().isEmpty() && ui->nivHabcomboBox->currentText().isEmpty() && ui->nivStyleCbox->currentText().isEmpty()&& ui->numPatCAlineEdit->text().isEmpty())
    {
        return true;
    }
    else
    {
        if (!ui->clublineEdit->text().isEmpty() && !ui->nivDanseCbox->currentText().isEmpty() && !ui->nivHabcomboBox->currentText().isEmpty() && !ui->nivStyleCbox->currentText().isEmpty() && !ui->numPatCAlineEdit->text().isEmpty())
        {
            PatinageArtistique patA;
            patA.setPatID(numPat);
            patA.setNoClub(ui->clublineEdit->text().toInt());
            patA.setNumPa(ui->numPatCAlineEdit->text().toInt());
            patA.setPAGroupe(ui->groupePAcomboBox->currentText());
            patA.setNivDanse(ui->nivDanseCbox->currentText());
            patA.setNivStyle(ui->nivStyleCbox->currentText());
            patA.setNivHab(ui->nivHabcomboBox->currentText());
            patA.PAtoBD();
            QSqlQuery query;
            query.exec("INSERT INTO `achat` (`ACH_NUM_pat`, `ACH_GRO_nom`, `ACH_date`, `ACH_payer`) "
                       "VALUES ('"+QString::number(numPat)+"', '"+ui->groupePAcomboBox->currentText()+"', '"+Date::getCurrentYear()+"-"+Date::getCurrentMonth()+"-"+Date::getCurrentDay()+"', '"+paye+"')");
            return true;
        }
    }
    return false;
}

bool ajouterPat::ajouterPow()
{
    int paye;
    if (ui->payecheckBox->isChecked())
    {
        paye = 1;
    }
    else if (!ui->payecheckBox->isChecked())
    {
        paye = 0;
    }

    if (ui->powNivComboBox->currentText().isEmpty() && ui->groupePOWcomboBox->currentText().isEmpty())
    {
        return true;
    }
    else if (ui->powNivComboBox->currentText().isEmpty() || ui->groupePOWcomboBox->currentText().isEmpty())
    {
        return false;
    }
    else if (!ui->powNivComboBox->currentText().isEmpty() && !ui->groupePOWcomboBox->currentText().isEmpty())
    {
        PowerSkating pow;
        pow.setPatID(numPat);
        pow.setNiveau(ui->powNivComboBox->currentText());
        pow.setPowGroupe(ui->groupePOWcomboBox->currentText());
        pow.powToBD();
        QSqlQuery query;
        query.exec("INSERT INTO `achat` (`ACH_NUM_pat`, `ACH_GRO_nom`, `ACH_date`, `ACH_payer`) "
                   "VALUES ('"+QString::number(numPat)+"', '"+ui->groupePOWcomboBox->currentText()+"', '"+Date::getCurrentYear()+"-"+Date::getCurrentMonth()+"-"+Date::getCurrentDay()+"', '"+paye+"')");
    }
    return false;
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
        ui->hLieulineEdit->show();
    }
    else
    {
        ui->Lieulabel->hide();
        ui->hLieulineEdit->hide();
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

Patineur ajouterPat::createDate(Patineur monPatineur)
{
    Date n;
    if(n.setAnnee(ui->anneeLineEdit->text().toInt()) && n.setMois(ui->moislineEdit->text().toInt()) && n.setJour(ui->jourlineEdit->text().toInt()))
    {
        monPatineur.setDateNaissance(n);
    }
    else
    {
        n.setAnnee(2300);
        monPatineur.setDateNaissance(n);
    }
    return monPatineur;
}
