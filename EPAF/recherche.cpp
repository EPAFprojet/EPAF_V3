#include "recherche.h"
#include "ui_recherche.h"
#include <QSqlDatabase>
#include <QSqlError>
#include <QMessageBox>
#include <QtSql>

recherche::recherche(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::recherche)
{
    ui->setupUi(this);
    QObject::connect(ui->recherchelineEdit,SIGNAL(textChanged(QString)),this,SLOT(startSearch()));
    ui->stackedWidget->setCurrentIndex(0);
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
    ui->IDEdit->setEnabled(false);
}
void recherche::startSearch()
{
    QSqlQuery query;
    if (ui->rechercheGRradioButton->isChecked())
    {

    }
    else if (ui->recherchePrenomradioButton->isChecked())
    {
        query.exec("SELECT patineur.PAT_num, patineur.PAT_nom, patineur.PAT_prenom, patineur.PAT_dateNaissance, patineur.PAT_parentRespon FROM patineur "
                   "WHERE patineur.PAT_prenom LIKE '"+ui->recherchelineEdit->text()+"%'");
    }
    else if (ui->rechercheNomradioButton->isChecked())
    {

        query.exec("SELECT patineur.PAT_num, patineur.PAT_nom, patineur.PAT_prenom, patineur.PAT_dateNaissance, patineur.PAT_parentRespon FROM patineur "
                   "WHERE patineur.PAT_nom LIKE '"+ui->recherchelineEdit->text()+"%'");
    }
    QSqlQueryModel *model = new QSqlQueryModel();
    model->setQuery(query);
    ui->recherchetableView->setModel(model);
}

recherche::~recherche()
{
    delete ui;
}

void recherche::on_recherchetableView_doubleClicked(const QModelIndex &index)
{
    QAbstractItemModel *model;
    model = ui->recherchetableView->model();
    int rowid = ui->recherchetableView->selectionModel()->currentIndex().row();
    int num = model->index(rowid,0).data().toInt();
    QSqlQuery query;
    query.prepare("SELECT * FROM patineur WHERE patineur.PAT_num = "+QString::number(num)+"");
    query.exec();
    while(query.next())
    {
        int id = query.value(0).toInt();
        ui->nomlineEdit->setText(query.value(1).toString());
        ui->prenomlineEdit->setText(query.value(2).toString());
        QString dateNaissance = query.value(3).toString();
        /*QStringList parts = dateNaissance.split("-");
        ui->jourlineEdit->setText(parts[0]);
        ui->moislineEdit->setText(parts[1]);
        ui->anneeLineEdit->setText(parts[3]);*/
        ui->IDEdit->setText(QString::number(id));
        ui->courriellineEdit->setText(query.value(4).toString());
        ui->adresselineEdit->setText(query.value(5).toString());
        ui->villelineEdit->setText(query.value(6).toString());
        ui->provincelineEdit->setText(query.value(7).toString());
        ui->codePostallineEdit->setText(query.value(8).toString());
        ui->ParentlineEdit->setText(query.value(9).toString());
        ui->NumTeltextEdit->setPlainText(query.value(10).toString());
        ui->condiMedtextEdit->setPlainText(query.value(11).toString());
        ui->stackedWidget->setCurrentIndex(1);
    }
}
