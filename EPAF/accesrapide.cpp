#include "accesrapide.h"
#include "ui_accesrapide.h"

accesrapide::accesrapide(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::accesrapide)
{
    ui->setupUi(this);
    ui->accesstackedWidget->setCurrentIndex(0);
    ui->accesstackedWidget->addWidget(gestGr);
    QObject::connect(ui->listeRparJpushButton, SIGNAL(clicked(bool)), this,SLOT(toListeRepasGroupeJour()));
    QObject::connect(ui->listeRepaspushButton,SIGNAL(clicked(bool)),this,SLOT(toListeRepas()));
    QObject::connect(ui->coachpushButton, SIGNAL(clicked(bool)),this, SLOT(toListeCoach()));
    QObject::connect(ui->gererGroupepushButton, SIGNAL(clicked(bool)),this, SLOT(toGestionGroupe()));
    //QObject::connect(MODIFIERBOUTON,SIGNAL(clicked(bool)),this, SLOT(toModifierCoach())); <- CHEMIN VERS MODIFIER COACH ICI
}

accesrapide::~accesrapide()
{
    delete ui;
}

void accesrapide::toListeCoach()
{
    ui->accesstackedWidget->setCurrentIndex(3);
}

void accesrapide::toListeRepasGroupeJour()
{
    ui->accesstackedWidget->setCurrentIndex(1);
}

void accesrapide::toGestionGroupe()
{
    ui->accesstackedWidget->setCurrentWidget(gestGr);
}

void accesrapide::toListeRepas()
{
    ui->accesstackedWidget->setCurrentIndex(2);
}
void accesrapide::toModifierCoach()
{
    ui->accesstackedWidget->setCurrentIndex(4);
}
