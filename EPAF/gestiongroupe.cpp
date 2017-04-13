#include "gestiongroupe.h"
#include "ui_gestiongroupe.h"

gestiongroupe::gestiongroupe(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::gestiongroupe)
{
    ui->setupUi(this);

}

gestiongroupe::~gestiongroupe()
{
    delete ui;
}
