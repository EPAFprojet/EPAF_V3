#include "coach.h"
#include "ui_coach.h"

coach::coach(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::coach)
{
    ui->setupUi(this);
}

coach::~coach()
{
    delete ui;
}
