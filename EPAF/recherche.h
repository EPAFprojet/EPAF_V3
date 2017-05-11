#ifndef RECHERCHE_H
#define RECHERCHE_H

#include <QMainWindow>

namespace Ui {
class recherche;
}

class recherche : public QMainWindow
{
    Q_OBJECT

public:
    explicit recherche(QWidget *parent = 0);
    ~recherche();
public slots:
    void startSearch();
private slots:
    void on_recherchetableView_doubleClicked(const QModelIndex &index);

private:
    Ui::recherche *ui;
};

#endif // RECHERCHE_H
