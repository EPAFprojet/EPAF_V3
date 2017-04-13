#ifndef ACCESRAPIDE_H
#define ACCESRAPIDE_H

#include <QMainWindow>
#include "gestiongroupe.h"
namespace Ui {
class accesrapide;
}

class accesrapide : public QMainWindow
{
    Q_OBJECT

public:
    explicit accesrapide(QWidget *parent = 0);
    ~accesrapide();
    gestiongroupe *gestGr = new gestiongroupe;

public slots :
    void toListeCoach();
    void toListeRepasGroupeJour();
    void toGestionGroupe();
    void toListeRepas();
    void toModifierCoach();

private:
    Ui::accesrapide *ui;
};

#endif // ACCESRAPIDE_H
