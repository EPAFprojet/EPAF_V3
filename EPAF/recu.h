#ifndef RECU_H
#define RECU_H

#include <QMainWindow>
#include "date.h"

namespace Ui {
class recu;
}

class recu : public QMainWindow
{
    Q_OBJECT

public:
    explicit recu(QWidget *parent = 0);
    ~recu();

public slots:
    void displayGroupe();
    void displaySaison();
    void displayNom();
    void imprimerRecu();
    void visualiser();
    QString nomPourLeFichier();

private slots:
    void on_tableView_clicked(const QModelIndex &index);

private:
    Ui::recu *ui;
    int numPatineur = 0;
    QString nomPatineur;
    QString prenomPatineur;
    QString CapString;
};

#endif // RECU_H
