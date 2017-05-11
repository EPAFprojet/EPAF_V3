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
    //==================== LISTE DES COACHS ====================//
    void toListeCoach();
    void AfficherCoach();
    void SupprimerCoach();

    //==================== REPAS PAR GROUPE PAR JOUR ====================//
    void toListeRepasGroupeJour();
    void RechercherGroupeRepas();
    void AfficherRepasGroupe();


    //==================== GÉRER LES GROUPES ====================//
    void toGestionGroupe();

    //==================== LISTE REPAS ====================//
    void toListeRepas();
    void AfficherRepas();

    //==================== MODIFIER COACH ====================//
    void toModifierCoach();

    //==================== JOUEURS PAR GROUPE ====================//
    void toListeJoueursGroupe();
    void RechercherListeJoueur();
    void AfficherListeJoueur();




private:
    Ui::accesrapide *ui;
};

#endif // ACCESRAPIDE_H
