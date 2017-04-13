#include "recu.h"
#include "ui_recu.h"

recu::recu(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::recu)
{
    ui->setupUi(this);
}

recu::~recu()
{
    delete ui;
}
