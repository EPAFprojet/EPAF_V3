#include "connexionmainmenu.h"
#include "ui_connexionmainmenu.h"

connexionmainmenu::connexionmainmenu(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::connexionmainmenu)
{
    ui->setupUi(this);
    ui->MainMenustackedWidget->setCurrentIndex(0);
    ui->MainMenustackedWidget->addWidget(ajouterpat);
    ui->MainMenustackedWidget->addWidget(acces);
    ui->MainMenustackedWidget->addWidget(search);
    ui->MainMenustackedWidget->addWidget(monRecu);
    ui->MainMenustackedWidget->addWidget(coachPage);
    QObject::connect(ui->ajouterPatpushButton, SIGNAL(clicked(bool)),this, SLOT(toAjouterPat()));
    QObject::connect(ui->connexionpushButton,SIGNAL(clicked(bool)),this, SLOT(toMainMenu()));
    QObject::connect(ui->accesRapidepushButton,SIGNAL(clicked(bool)),this, SLOT(toAcces()));
    QObject::connect(ui->ajouterCoachpushButton,SIGNAL(clicked(bool)),this, SLOT(toCoach()));
    QObject::connect(ui->recherchepushButton,SIGNAL(clicked(bool)),this, SLOT(toRecherche()));
    QObject::connect(ui->creationRecuspushButton,SIGNAL(clicked(bool)),this, SLOT(toRecu()));
}
connexionmainmenu::~connexionmainmenu()
{
    delete ui;
}
void connexionmainmenu::toMainMenu()
{
    QString nomUtilisateur;
    QString password;

    QSqlQuery queryPassword;
    queryPassword.prepare("SELECT administrateur.ADM_motDePasse from administrateur");
    queryPassword.exec();
    if(queryPassword.next() == true)
        password = queryPassword.value("ADM_motDePasse").toString();

    QSqlQuery queryUtiliasteur;
    queryUtiliasteur.prepare("SELECT administrateur.ADM_nom from administrateur");
    queryUtiliasteur.exec();
    if(queryUtiliasteur.next() == true)
        nomUtilisateur = queryUtiliasteur.value("ADM_nom").toString();

    if(ui->motPasselineEdit->text() == password && ui->nomUtilisateurlineEdit->text() == nomUtilisateur)
    {
        ui->statusbar->showMessage("Connecter au système");
        ui->MainMenustackedWidget->setCurrentIndex(1);
    }
    else
    {
        ui->statusbar->showMessage("Erreur lors de la connexion au système");
    }
}

void connexionmainmenu::toAjouterPat()
{
    ui->MainMenustackedWidget->setCurrentWidget(ajouterpat);
}
void connexionmainmenu::toRecherche()
{
    ui->MainMenustackedWidget->setCurrentWidget(search);
}
void connexionmainmenu::toCoach()
{
    ui->MainMenustackedWidget->setCurrentWidget(coachPage);
}
void connexionmainmenu::toRecu()
{
    ui->MainMenustackedWidget->setCurrentWidget(monRecu);
}
void connexionmainmenu::toAcces()
{
    ui->MainMenustackedWidget->setCurrentWidget(acces);
}

