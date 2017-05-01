#ifndef RECU_H
#define RECU_H

#include <QMainWindow>

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

private:
    Ui::recu *ui;
};

#endif // RECU_H
