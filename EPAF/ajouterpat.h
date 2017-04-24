#ifndef AJOUTERPAT_H
#define AJOUTERPAT_H

#include <QMainWindow>
#include "patineur.h"
namespace Ui {
class ajouterPat;
}

class ajouterPat : public QMainWindow
{
    Q_OBJECT

public:
    explicit ajouterPat(QWidget *parent = 0);
    ~ajouterPat();
public slots:
    void isTraiteur();
    void isCombine();
    void verifAjout();
    bool validerAjout();
    bool createDate(Patineur monPatineur);
private:
    Ui::ajouterPat *ui;
};

#endif // AJOUTERPAT_H
