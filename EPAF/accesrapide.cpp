#include "accesrapide.h"
#include "ui_accesrapide.h"
#include <QSqlDatabase>
#include <QSqlError>
#include <QMessageBox>
#include <QtSql>

accesrapide::accesrapide(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::accesrapide)
{
    ui->setupUi(this);
    ui->accesstackedWidget->setCurrentIndex(0);
    ui->accesstackedWidget->addWidget(gestGr);
    QObject::connect(ui->listeRparJpushButton,         SIGNAL(clicked(bool)), this, SLOT(toListeRepasGroupeJour()));
    QObject::connect(ui->listeRepaspushButton,         SIGNAL(clicked(bool)), this, SLOT(toListeRepas()));
    QObject::connect(ui->coachpushButton,              SIGNAL(clicked(bool)), this, SLOT(toListeCoach()));
    QObject::connect(ui->gererGroupepushButton,        SIGNAL(clicked(bool)), this, SLOT(toGestionGroupe()));
    QObject::connect(ui->ListeJoueursGroupepushButton, SIGNAL(clicked(bool)), this, SLOT(toListeJoueursGroupe()));
    //QObject::connect(MODIFIERBOUTON,SIGNAL(clicked(bool)),this, SLOT(toModifierCoach())); <- CHEMIN VERS MODIFIER COACH ICI

    //LISTE COACHS
    QObject::connect(ui->AfficherCoachpushButton,       SIGNAL(clicked(bool)), this, SLOT(AfficherCoach()));
    QObject::connect(ui->SupprimerCoachpushButton,      SIGNAL(clicked(bool)), this, SLOT(SupprimerCoach()));

    //LISTE REPAS
    QObject::connect(ui->AfficherRepaspushButton,       SIGNAL(clicked(bool)), this, SLOT(AfficherRepas()));

    //LISTE REPAS GROUPE JOUR
    QObject::connect(ui->listeRparJpushButton,          SIGNAL(clicked(bool)), this, SLOT(RechercherGroupeRepas()));
    QObject::connect(ui->AfficherListeRepaspushButton,  SIGNAL(clicked(bool)), this, SLOT(AfficherRepasGroupe()));

    //JOUEURS PAR GROUPES
    QObject::connect(ui->AfficherListepushButton,      SIGNAL(clicked(bool)), this, SLOT(AfficherListeJoueur()));
    QObject::connect(ui->PAradioButton,                SIGNAL(clicked(bool)), this, SLOT(RechercherListeJoueur()));
    QObject::connect(ui->PSradioButton,                SIGNAL(clicked(bool)), this, SLOT(RechercherListeJoueur()));
    QObject::connect(ui->HradioButton,                 SIGNAL(clicked(bool)), this, SLOT(RechercherListeJoueur()));



}

accesrapide::~accesrapide()
{
    delete ui;
}
//======================================== LISTE COACHS ========================================//
void accesrapide::toListeCoach()
{
    ui->accesstackedWidget->setCurrentIndex(3);
}

void accesrapide::AfficherCoach()
{
    QSqlQuery query;
    query.exec("SELECT coach.COA_numero as 'Numéro', coach.COA_prenom as 'Prénom', coach.COA_nom as 'Nom', coach.COA_repas as 'Repas', coach.COA_commentaire as 'Commentaire' FROM coach");

    QSqlQueryModel *model = new QSqlQueryModel();
    model->setQuery(query);
    ui->CoachtableView->setModel(model);

    ui->CoachtableView->setColumnWidth(0, 55);
    ui->CoachtableView->setColumnWidth(1, 130);
    ui->CoachtableView->setColumnWidth(2, 130);
    ui->CoachtableView->setColumnWidth(3, 40);
    ui->CoachtableView->setColumnWidth(4, 185);

    ui->CoachtableView->verticalHeader()->hide();
}

void accesrapide::SupprimerCoach()
{
    QString numeroTemp = ui->supprimerCoachlineEdit->text();

    QSqlQuery queryRecherche;
    queryRecherche.exec("SELECT coach.COA_numero FROM coach WHERE coach.COA_numero = '" + numeroTemp +"'");

    QSqlQuery querySupprimer;
    querySupprimer.prepare("DELETE FROM coach WHERE coach.COA_numero = '" + numeroTemp +"'");

    QSqlQuery queryRepas;
    queryRepas.prepare("DELETE FROM repas WHERE repas.REP_numeroCoachJoueurHockey = '" + numeroTemp + "'");


    if(!queryRecherche.first())
    {
        QMessageBox::critical(this, "Coach invalide", "Le coach n'existe pas");
        ui->supprimerCoachlineEdit->setFocus();
    }
    else
    {
        QMessageBox::StandardButton ouiNon;
        ouiNon = QMessageBox::question(this, "Confirmation de la suppression de coach", "Voulez-vous vraiment supprimer ce coach définitivement ?");

        if(ouiNon == QMessageBox::Yes)
        {
            querySupprimer.exec();
            queryRepas.exec();
            ui->supprimerCoachlineEdit->clear();

            //MISE A JOUR TABLEVIEW COACH
            QSqlQuery query;
            query.exec("SELECT coach.COA_numero as 'Numéro', coach.COA_prenom as 'Prénom', coach.COA_nom as 'Nom', coach.COA_repas as 'Repas', coach.COA_commentaire as 'Commentaire' FROM coach");

            QSqlQueryModel *model = new QSqlQueryModel();
            model->setQuery(query);
            ui->CoachtableView->setModel(model);

            ui->CoachtableView->setColumnWidth(0, 55);
            ui->CoachtableView->setColumnWidth(1, 130);
            ui->CoachtableView->setColumnWidth(2, 130);
            ui->CoachtableView->setColumnWidth(3, 40);
            ui->CoachtableView->setColumnWidth(4, 185);

            ui->CoachtableView->verticalHeader()->hide();
        }

        else if(ouiNon == QMessageBox::No)
        {
            ui->supprimerCoachlineEdit->setFocus();
        }
    }
}

//======================================== REPAS PAR JOUR ========================================//
void accesrapide::toListeRepasGroupeJour()
{
    ui->accesstackedWidget->setCurrentIndex(1);
}

void accesrapide::AfficherRepas()
{
    QString Lundi1;
    QString Lundi2;
    QString Mardi1;
    QString Mardi2;
    QString Mercredi1;
    QString Mercredi2;
    QString Jeudi1;
    QString Jeudi2;

    //Lasagne
    QSqlQuery queryLundi1;
    queryLundi1.exec("SELECT COUNT(*) FROM repas WHERE repas.REP_lundi = 'Lasagne'");

    //Sous-Marin
    QSqlQuery queryLundi2;
    queryLundi2.exec("SELECT COUNT(*) FROM repas WHERE repas.REP_lundi = 'Sous-Marin'");

    //Pâté au poulet avec salade
    QSqlQuery queryMardi1;
    queryMardi1.exec("SELECT COUNT(*) FROM repas WHERE repas.REP_mardi = 'Pâte au poulet avec salade'");

    //Pâté Chinois
    QSqlQuery queryMardi2;
    queryMardi2.exec("SELECT COUNT(*) FROM repas WHERE repas.REP_mardi = 'Pâté Chinois'");

    //Poulet BBQ avec riz
    QSqlQuery queryMercredi1;
    queryMercredi1.exec("SELECT COUNT(*) FROM repas WHERE repas.REP_mercredi = 'Poulet BBQ avec riz'");

    //Pâté à la viande avec salade
    QSqlQuery queryMercredi2;
    queryMercredi2.exec("SELECT COUNT(*) FROM repas WHERE repas.REP_mercredi = 'Pâté à la viande avec salade'");

    //Sous-Marin
    QSqlQuery queryJeudi1;
    queryJeudi1.exec("SELECT COUNT(*) FROM repas WHERE repas.REP_jeudi = 'Sous-Marin'");

    //Spaghetti
    QSqlQuery queryJeudi2;
    queryJeudi2.exec("SELECT COUNT(*) FROM repas WHERE repas.REP_jeudi = 'Spaghetti'");


    while(queryLundi1.next())
    {
         Lundi1 = queryLundi1.value(0).toString();
    }
    ui->Lundi1lineEdit->setText(Lundi1);

    while(queryLundi2.next())
    {
         Lundi2 = queryLundi2.value(0).toString();
    }
    ui->Lundi2lineEdit->setText(Lundi2);

    while(queryMardi1.next())
    {
         Mardi1 = queryMardi1.value(0).toString();
    }
    ui->Mardi1lineEdit->setText(Mardi1);

    while(queryMardi2.next())
    {
         Mardi2 = queryMardi2.value(0).toString();
    }
    ui->Mardi2lineEdit->setText(Mardi2);

    while(queryMercredi1.next())
    {
         Mercredi1 = queryMercredi1.value(0).toString();
    }
    ui->Mercredi1lineEdit->setText(Mercredi1);

    while(queryMercredi2.next())
    {
         Mercredi2 = queryMercredi2.value(0).toString();
    }
    ui->Mercredi2lineEdit->setText(Mercredi2);

    while(queryJeudi1.next())
    {
         Jeudi1 = queryJeudi1.value(0).toString();
    }
    ui->Jeudi1lineEdit->setText(Jeudi1);

    while(queryJeudi2.next())
    {
         Jeudi2 = queryJeudi2.value(0).toString();
    }
    ui->Jeudi2lineEdit->setText(Jeudi2);
}
//======================================== GESTION GROUPE ========================================//
void accesrapide::toGestionGroupe()
{
    ui->accesstackedWidget->setCurrentWidget(gestGr);
}

//======================================== REPAS PAR GROUPE PAR JOUR ========================================//
void accesrapide::toListeRepas()
{
    ui->accesstackedWidget->setCurrentIndex(2);
}

void accesrapide::RechercherGroupeRepas()
{
    QString nomGroupe;
    ui->RepasListeGroupecomboBox->clear();
    QSqlQuery query;
    query.exec("SELECT groupe.GRO_nom FROM groupe WHERE groupe.GRO_typeCamp = 'Hockey '");
    while(query.next())
    {
        nomGroupe = query.value(0).toString();
        ui->RepasListeGroupecomboBox->addItem(nomGroupe);
    }
}

void accesrapide::AfficherRepasGroupe()
{
    QString nomGroupe = ui->RepasListeGroupecomboBox->currentText();
    QSqlQuery query;
    query.exec("SELECT patineur.PAT_prenom as 'Prénom', patineur.PAT_nom as 'Nom', repas.REP_lundi as 'Lundi', repas.REP_mardi as 'Mardi', repas.REP_mercredi as 'Mercredi', repas.REP_jeudi as 'Jeudi' "
               "FROM patineur, repas, hockey "
               "WHERE ((repas.REP_numeroCoachJoueurHockey = patineur.PAT_num) AND (hockey.HOC_PAT_num = patineur.PAT_num)) "
               "AND hockey.HOC_groupe = '" + nomGroupe +"'");

    QSqlQueryModel *model = new QSqlQueryModel();
    model->setQuery(query);
    ui->RepasParGroupetableView->setModel(model);

    ui->RepasParGroupetableView->setColumnWidth(0, 100);
    ui->RepasParGroupetableView->setColumnWidth(1, 80);
    ui->RepasParGroupetableView->setColumnWidth(2, 130);
    ui->RepasParGroupetableView->setColumnWidth(3, 150);
    ui->RepasParGroupetableView->setColumnWidth(4, 160);
    ui->RepasParGroupetableView->setColumnWidth(5, 130);

    ui->RepasParGroupetableView->verticalHeader()->hide();
}

void accesrapide::toModifierCoach()
{
    ui->accesstackedWidget->setCurrentIndex(4);
}

//======================================== JOUEURS PAR GROUPES ========================================//
void accesrapide::toListeJoueursGroupe()
{
    ui->accesstackedWidget->setCurrentIndex(5);

}

void accesrapide::RechercherListeJoueur()
{
    QString nomGroupe;
    if(ui->PAradioButton->isChecked())
    {
        ui->ListeGroupecomboBox->clear();
        QSqlQuery query;
        query.exec("SELECT groupe.GRO_nom FROM groupe WHERE groupe.GRO_typeCamp = 'Patinage artistique'");
        while(query.next())
        {
            nomGroupe = query.value(0).toString();
            ui->ListeGroupecomboBox->addItem(nomGroupe);
        }
    }
    else if(ui->PSradioButton->isChecked())
    {
        ui->ListeGroupecomboBox->clear();
        QSqlQuery query;
        query.exec("SELECT groupe.GRO_nom FROM groupe WHERE groupe.GRO_typeCamp = 'Power skating'");
        while(query.next())
        {
            nomGroupe = query.value(0).toString();
            ui->ListeGroupecomboBox->addItem(nomGroupe);
        }
    }
    else if(ui->HradioButton->isChecked())
    {
        ui->ListeGroupecomboBox->clear();
        QSqlQuery query;
        query.exec("SELECT groupe.GRO_nom FROM groupe WHERE groupe.GRO_typeCamp = 'Hockey '");
        while(query.next())
        {
            nomGroupe = query.value(0).toString();
            ui->ListeGroupecomboBox->addItem(nomGroupe);
        }
    }
}
//======================================== AFFICHER LISTE JOUEURS ========================================//
void accesrapide::AfficherListeJoueur()
{
    if(ui->PAradioButton->isChecked())
    {
        QString nomGroupe = ui->ListeGroupecomboBox->currentText();
        QSqlQuery query;
        query.exec("SELECT patineur.PAT_num as 'Numéro', patineur.PAT_prenom as 'Prénom', patineur.PAT_nom as 'Nom' FROM patineur, patartistique  WHERE PAT_num = patartistique.FIG_PAT_num AND patartistique.FIG_groupe = '" + nomGroupe +"'");

        QSqlQueryModel *model = new QSqlQueryModel();
        model->setQuery(query);
        ui->JoueurParGroupetableView->setModel(model);

        ui->JoueurParGroupetableView->setColumnWidth(0, 100);
        ui->JoueurParGroupetableView->setColumnWidth(1, 200);
        ui->JoueurParGroupetableView->setColumnWidth(2, 150);
    }
    else if(ui->PSradioButton->isChecked())
    {
       QString nomGroupe = ui->ListeGroupecomboBox->currentText();
       QSqlQuery query;
       query.exec("SELECT patineur.PAT_num as 'Numéro', patineur.PAT_prenom as 'Prénom', patineur.PAT_nom as 'Nom' FROM patineur, powerskating  WHERE PAT_num = powerskating.POW_PAT_num AND powerskating.POW_GRO_nom = '" + nomGroupe +"'");

       QSqlQueryModel *model = new QSqlQueryModel();
       model->setQuery(query);
       ui->JoueurParGroupetableView->setModel(model);

       ui->JoueurParGroupetableView->setColumnWidth(0, 100);
       ui->JoueurParGroupetableView->setColumnWidth(1, 200);
       ui->JoueurParGroupetableView->setColumnWidth(2, 150);
    }
    else if(ui->HradioButton->isChecked())
    {
        QString nomGroupe = ui->ListeGroupecomboBox->currentText();
        QSqlQuery query;
        query.exec("SELECT patineur.PAT_num as 'Numéro', patineur.PAT_prenom as 'Prénom', patineur.PAT_nom as 'Nom' FROM patineur, hockey  WHERE PAT_num = hockey.HOC_PAT_num AND hockey.HOC_groupe = '" + nomGroupe +"'");

        QSqlQueryModel *model = new QSqlQueryModel();
        model->setQuery(query);
        ui->JoueurParGroupetableView->setModel(model);

        ui->JoueurParGroupetableView->setColumnWidth(0, 100);
        ui->JoueurParGroupetableView->setColumnWidth(1, 200);
        ui->JoueurParGroupetableView->setColumnWidth(2, 150);
    }
}


































