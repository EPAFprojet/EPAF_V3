#ifndef COACH_H
#define COACH_H

#include <QMainWindow>

namespace Ui {
class Coach;
}

class Coach : public QMainWindow
{
    Q_OBJECT

public:
    explicit Coach(QWidget *parent = 0);
    ~Coach();

public slots:
    void test();
    void valider();

private:
    Ui::Coach *ui;
};

#endif // COACH_H
