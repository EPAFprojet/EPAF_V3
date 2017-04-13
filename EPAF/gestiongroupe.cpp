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

    QObject::connect(ui->ajouterGroupeButton,   SIGNAL(clicked(bool)),            this, SLOT(AjouterGroupe()));
    QObject::connect(ui->ajouterGroupeButton,   SIGNAL(clicked(bool)),            this, SLOT(validerAjouterGroupe()));
    QObject::connect(ui->groupeNomEdit,         SIGNAL(textChanged(QString)),     this, SLOT(validerAjouterGroupe()));
    QObject::connect(ui->groupeDescritpionEdit, SIGNAL(textChanged(QString)),     this, SLOT(validerAjouterGroupe()));
    QObject::connect(ui->groupePrixSpinBox,     SIGNAL(valueChanged(QString)),    this, SLOT(validerAjouterGroupe()));
    QObject::connect(ui->groupeTypeCampEdit,    SIGNAL(currentIndexChanged(int)), this, SLOT(validerAjouterGroupe()));

}

void gestiongroupe::AjouterGroupe()
{
    QSqlQuery query;
    query.prepare ("INSERT INTO `groupe` (`GRO_nom`, `GRO_description`, `GRO_typeCamp`, `GRO_prix`) VALUES ('"+ ui->groupeNomEdit->text() +"', '"+ ui->groupeDescritpionEdit->text() +"', '"+ ui->groupeTypeCampEdit->currentText() +"', '"+ ui->groupePrixSpinBox->text() +"')");

    bool verifPrix = false;
    if(ui->groupePrixSpinBox->value() == 0.00)
    {
        QMessageBox::StandardButton ouiNon;
        ouiNon = QMessageBox::question(this, "Le prix du groupe est de 0$", "Le prix du groupe est de 0$, voulez-vous quand même procéder à la création du groupe?");

        if(ouiNon == QMessageBox::Yes)
        {
            verifPrix = true;
        }

        else if(ouiNon == QMessageBox::No)
        {
            ui->groupePrixSpinBox->setFocus();
        }
    }
    else if ((verifPrix == true) ||(ui->groupePrixSpinBox->value() != 0.00))
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




gestiongroupe::~gestiongroupe()
{
    delete ui;
}
