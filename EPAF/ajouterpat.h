#ifndef AJOUTERPAT_H
#define AJOUTERPAT_H

#include <QMainWindow>

namespace Ui {
class ajouterPat;
}

class ajouterPat : public QMainWindow
{
    Q_OBJECT

public:
    explicit ajouterPat(QWidget *parent = 0);
    ~ajouterPat();

private:
    Ui::ajouterPat *ui;
};

#endif // AJOUTERPAT_H
