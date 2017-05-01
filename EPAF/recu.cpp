#include "recu.h"
#include "ui_recu.h"
#include <QtSql>
#include <QSqlDatabase>
#include <QSqlError>
#include <QMessageBox>

recu::recu(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::recu)
{
    ui->setupUi(this);

    QObject::connect(ui->groupeRadioButton, SIGNAL(toggled(bool)), this, SLOT(displayGroupe()));
    QObject::connect(ui->saisonRadioButton, SIGNAL(toggled(bool)), this, SLOT(displaySaison()));
    QObject::connect(ui->nomRadioButton, SIGNAL(toggled(bool)), this, SLOT(displayNom()));
    QObject::connect(ui->imprimerButton, SIGNAL(clicked(bool)), this, SLOT(imprimerRecu()));
}

void recu::displayGroupe()
{
    QString groupe = ui->rechercheEdit->text();
    QSqlQuery query;

    query.prepare("SELECT groupe.GRO_nom, groupe.GRO_description, groupe.GRO_prix FROM"
                  " groupe WHERE groupe.GRO_nom LIKE '%" + groupe + "%'");
    bool ok = query.exec();

    if(!ok)
    {
        QMessageBox::critical(this, "Query error", query.lastError().text());
    }

    if(ok)
    {
        QSqlQueryModel *model = new QSqlQueryModel();
        model -> setQuery(query);

        ui -> tableView -> setModel(model);
    }
}

void recu::displaySaison()
{
    QString saison = ui->rechercheEdit->text();
}

void recu::displayNom()
{
    QString nom = ui->rechercheEdit->text();
    QSqlQuery query;

        query.prepare("SELECT patineur.PAT_NOM, patineur.PAT_prenom, patineur.PAT_dateNaissance FROM"
                      " patineur WHERE patineur.PAT_nom LIKE '%" + nom + "%'");


        bool ok = query.exec();

        if(!ok)
        {
            QMessageBox::critical(this, "Query error", query.lastError().text());
        }

        if(ok)
        {
            QSqlQueryModel *model = new QSqlQueryModel();
            model -> setQuery(query);

            ui -> tableView -> setModel(model);
        }
}

void recu::imprimerRecu()
{

}

recu::~recu()
{
    delete ui;
}
