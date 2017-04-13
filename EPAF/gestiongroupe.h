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

private:
    Ui::gestiongroupe *ui;
};

#endif // GESTIONGROUPE_H
