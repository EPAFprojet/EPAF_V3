#ifndef CONNEXIONMAINMENU_H
#define CONNEXIONMAINMENU_H

#include <QMainWindow>
#include "ajouterpat.h"
#include "accesrapide.h"
#include "recherche.h"
#include "recu.h"
#include "coach.h"
#include <QStackedWidget>
namespace Ui {
class connexionmainmenu;
}

class connexionmainmenu : public QMainWindow
{
    Q_OBJECT

public:
    explicit connexionmainmenu(QWidget *parent = 0);
    ~connexionmainmenu();
    ajouterPat *ajouterpat = new ajouterPat;
    accesrapide *acces = new accesrapide;
    recherche *search = new recherche;
    recu *monRecu = new recu;
    coach *coachPage = new coach;
    QStackedWidget *connexionstackedWidget = new QStackedWidget;
public slots:
    void toMainMenu();
    void toAjouterPat();
    void toAcces();
    void toRecherche();
    void toCoach();
    void toRecu();

private:
    Ui::connexionmainmenu *ui;
};

#endif // CONNEXIONMAINMENU_H
