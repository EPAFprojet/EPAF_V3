#ifndef GESTIONGROUPE_H
#define GESTIONGROUPE_H

#include <QMainWindow>

namespace Ui {
class gestiongroupe;
}

class gestiongroupe : public QMainWindow
{
    Q_OBJECT

public:
    explicit gestiongroupe(QWidget *parent = 0);
    ~gestiongroupe();

public slots:
    void AjouterGroupe();
    void validerAjouterGroupe();

    void ModifierGroupe();
    void validerModifierGroupe();
    void RechercherGroupePourMod();

    void SupprimerGroupe();


    void RechercherGroupe();



private:
    Ui::gestiongroupe *ui;
};

#endif // GESTIONGROUPE_H
