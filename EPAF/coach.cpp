#include "coach.h"
#include "ui_Coach.h"
#include <QSqlDatabase>
#include <QSqlError>
#include <QtSql>
#include <QMessageBox>
#include <vector>
#include <QString>

Coach::Coach(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::Coach)
{ 
    ui->setupUi(this);
    QVector<QString> nomRepas;
    QSqlQuery query;

    for(int i = 1; i <= 8; i++)
    {
        query.prepare("SELECT LIS_description FROM `listerepas` WHERE `LIS_num` = " + QString::number(i));
        query.exec();

        if(query.next() == true)
            nomRepas.push_back(query.value("LIS_description").toString());
    }
    ui->radioButtonCoachLundiChoix1->setText(nomRepas[0]);
    ui->radioButtonCoachLundiChoix2->setText(nomRepas[1]);
    ui->radioButtonCoachMardiChoix1->setText(nomRepas[2]);
    ui->radioButtonCoachMardiChoix2->setText(nomRepas[3]);
    ui->radioButtonCoachMercrediChoix1->setText(nomRepas[4]);
    ui->radioButtonCoachMercrediChoix2->setText(nomRepas[5]);
    ui->radioButtonCoachJeudiChoix1->setText(nomRepas[6]);
    ui->radioButtonCoachJeudiChoix2->setText(nomRepas[7]);

    QObject::connect(ui->lineEditCoachPrenom,            SIGNAL(textChanged(QString)), this, SLOT(test()));
    QObject::connect(ui->lineEditCoachNom,               SIGNAL(textChanged(QString)), this, SLOT(test()));
    QObject::connect(ui->checkBoxCoachNonRepas,          SIGNAL(toggled(bool)), this, SLOT(test()));
    QObject::connect(ui->radioButtonCoachLundiChoix1,    SIGNAL(toggled(bool)), this, SLOT(test()));
    QObject::connect(ui->radioButtonCoachLundiChoix2,    SIGNAL(toggled(bool)), this, SLOT(test()));
    QObject::connect(ui->radioButtonCoachMardiChoix1,    SIGNAL(toggled(bool)), this, SLOT(test()));
    QObject::connect(ui->radioButtonCoachMardiChoix2,    SIGNAL(toggled(bool)), this, SLOT(test()));
    QObject::connect(ui->radioButtonCoachMercrediChoix1, SIGNAL(toggled(bool)), this, SLOT(test()));
    QObject::connect(ui->radioButtonCoachMercrediChoix2, SIGNAL(toggled(bool)), this, SLOT(test()));
    QObject::connect(ui->radioButtonCoachJeudiChoix1,    SIGNAL(toggled(bool)), this, SLOT(test()));
    QObject::connect(ui->radioButtonCoachJeudiChoix2,    SIGNAL(toggled(bool)), this, SLOT(test()));
    QObject::connect(ui->pushButtonCoachValider,         SIGNAL(clicked(bool)), this, SLOT(valider()));
}

Coach::~Coach()
{
    delete ui;
}

void Coach::test()
{
    bool result = false;
    bool repas = true;

    if(!ui->lineEditCoachPrenom->text().isEmpty() && !ui->lineEditCoachNom->text().isEmpty())
    {
        if(ui->checkBoxCoachNonRepas->isChecked())
            result = true;

        if((ui->radioButtonCoachLundiChoix1->isChecked() || ui->radioButtonCoachLundiChoix2->isChecked()) && (ui->radioButtonCoachMardiChoix1->isChecked() || ui->radioButtonCoachMardiChoix2->isChecked()) && (ui->radioButtonCoachMercrediChoix1->isChecked() || ui->radioButtonCoachMercrediChoix2->isChecked()) && (ui->radioButtonCoachJeudiChoix1->isChecked() || ui->radioButtonCoachJeudiChoix2->isChecked()))
            result = true;
    }

    if(ui->checkBoxCoachNonRepas->isChecked())
        repas = false;

    for(int i = 0; i < ui->lineEditCoachPrenom->text().size(); i++)
        if((ui->lineEditCoachPrenom->text()[i] < "a" || ui->lineEditCoachPrenom->text()[i] > "z") && (ui->lineEditCoachPrenom->text()[i] < "A" || ui->lineEditCoachPrenom->text()[i] > "Z") && ui->lineEditCoachPrenom->text()[i] != "-")
            result = false;
    for(int i = 0; i < ui->lineEditCoachNom->text().size(); i++)
        if((ui->lineEditCoachNom->text()[i] < "a" || ui->lineEditCoachNom->text()[i] > "z") && (ui->lineEditCoachNom->text()[i] < "A" || ui->lineEditCoachNom->text()[i] > "Z") && ui->lineEditCoachNom->text()[i] != "-")
            result = false;

    if(ui->lineEditCoachNom->text().size() > 30 || ui->lineEditCoachPrenom->text().size() > 30)
        result = false;

    ui->pushButtonCoachValider->        setEnabled(result);
    ui->pushButtonCoachValider->        setEnabled(result);

    ui->labelCoachLundi->               setEnabled(repas);
    ui->labelCoachMardi->               setEnabled(repas);
    ui->labelCoachMercredi->            setEnabled(repas);
    ui->labelCoachJeudi->               setEnabled(repas);
    ui->radioButtonCoachLundiChoix1->   setEnabled(repas);
    ui->radioButtonCoachLundiChoix2->   setEnabled(repas);
    ui->radioButtonCoachMardiChoix1->   setEnabled(repas);
    ui->radioButtonCoachMardiChoix2->   setEnabled(repas);
    ui->radioButtonCoachMercrediChoix1->setEnabled(repas);
    ui->radioButtonCoachMercrediChoix2->setEnabled(repas);
    ui->radioButtonCoachJeudiChoix1->   setEnabled(repas);
    ui->radioButtonCoachJeudiChoix2->   setEnabled(repas);
}

void Coach::valider()
{
    QSqlQuery query;
    QSqlQuery queryRepas;
    QSqlQuery queryCoach;
    QString repas = "1";
    QVector<QString> Repas;
    int numTemp;

    if(ui->checkBoxCoachNonRepas->isChecked())
        repas = "0";
    else
    {
        if(ui->radioButtonCoachLundiChoix1->isChecked())
            Repas.push_back(ui->radioButtonCoachLundiChoix1->text());

        if(ui->radioButtonCoachLundiChoix2->isChecked())
            Repas.push_back(ui->radioButtonCoachLundiChoix2->text());

        if(ui->radioButtonCoachMardiChoix1->isChecked())
            Repas.push_back(ui->radioButtonCoachMardiChoix1->text());

        if(ui->radioButtonCoachMardiChoix2->isChecked())
            Repas.push_back(ui->radioButtonCoachMardiChoix2->text());

        if(ui->radioButtonCoachMercrediChoix1->isChecked())
            Repas.push_back(ui->radioButtonCoachMercrediChoix1->text());

        if(ui->radioButtonCoachMercrediChoix2->isChecked())
            Repas.push_back(ui->radioButtonCoachMercrediChoix2->text());

        if(ui->radioButtonCoachJeudiChoix1->isChecked())
            Repas.push_back(ui->radioButtonCoachJeudiChoix1->text());

        if(ui->radioButtonCoachJeudiChoix2->isChecked())
            Repas.push_back(ui->radioButtonCoachJeudiChoix2->text());
    }

    query.prepare("INSERT INTO `coach` (`COA_numero`, `COA_nom`, `COA_prenom`, `COA_repas`, `COA_commentaire`) VALUES (NULL, '" + ui->lineEditCoachNom->text() + "', '" + ui->lineEditCoachPrenom->text() + "', '" + repas + "', '" + ui->plainTextEditCoachCommentaire->toPlainText() + "');");
    bool verif = query.exec();

    if(!verif)
        QMessageBox::critical(this, "Erreur Critique", "Requete Ajout entraineur à un problème!");

   if(!ui->checkBoxCoachNonRepas->isChecked())
   {
       queryCoach.prepare("SELECT MAX(COA_numero) FROM `coach`");
       queryCoach.exec();

       while(queryCoach.next())
           numTemp = queryCoach.value(0).toInt();

       qDebug()<<numTemp;

       queryRepas.prepare("INSERT INTO `repas` (`REP_numeroCoachJoueurHockey`, `REP_lundi`, `REP_mardi`, `REP_mercredi`, `REP_jeudi`) VALUES ('" + QString::number(numTemp) + "', '" + Repas[0] + "', '" + Repas[1] + "', '" + Repas[2] + "', '" + Repas[3] + "');");
       bool verifRepas = queryRepas.exec();

       if(!verifRepas)
           QMessageBox::critical(this, "Erreur Critique", "Requete Ajout Repas à un problème!");
   }

        ui->lineEditCoachNom->setText("");
        ui->lineEditCoachPrenom->setText("");
        ui->plainTextEditCoachCommentaire->setPlainText("");
        ui->checkBoxCoachNonRepas->setChecked(false);
        ui->radioButtonCoachLundiChoix1->setAutoExclusive(false);
        ui->radioButtonCoachLundiChoix1->setChecked(false);
        ui->radioButtonCoachLundiChoix1->setAutoExclusive(true);
        ui->radioButtonCoachLundiChoix2->setAutoExclusive(false);
        ui->radioButtonCoachLundiChoix2->setChecked(false);
        ui->radioButtonCoachLundiChoix2->setAutoExclusive(true);
        ui->radioButtonCoachMardiChoix1->setAutoExclusive(false);
        ui->radioButtonCoachMardiChoix1->setChecked(false);
        ui->radioButtonCoachMardiChoix1->setAutoExclusive(true);
        ui->radioButtonCoachMardiChoix2->setAutoExclusive(false);
        ui->radioButtonCoachMardiChoix2->setChecked(false);
        ui->radioButtonCoachMardiChoix2->setAutoExclusive(true);
        ui->radioButtonCoachMercrediChoix1->setAutoExclusive(false);
        ui->radioButtonCoachMercrediChoix1->setChecked(false);
        ui->radioButtonCoachMercrediChoix1->setAutoExclusive(true);
        ui->radioButtonCoachMercrediChoix2->setAutoExclusive(false);
        ui->radioButtonCoachMercrediChoix2->setChecked(false);
        ui->radioButtonCoachMercrediChoix2->setAutoExclusive(true);
        ui->radioButtonCoachJeudiChoix1->setAutoExclusive(false);
        ui->radioButtonCoachJeudiChoix1->setChecked(false);
        ui->radioButtonCoachJeudiChoix1->setAutoExclusive(true);
        ui->radioButtonCoachJeudiChoix2->setAutoExclusive(false);
        ui->radioButtonCoachJeudiChoix2->setChecked(false);
        ui->radioButtonCoachJeudiChoix2->setAutoExclusive(true);
        qApp->processEvents();
}
