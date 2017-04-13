#include "ajouterpat.h"
#include "ui_ajouterpat.h"

ajouterPat::ajouterPat(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::ajouterPat)
{
    ui->setupUi(this);
}

ajouterPat::~ajouterPat()
{
    delete ui;
}
