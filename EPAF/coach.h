#ifndef COACH_H
#define COACH_H

#include <QMainWindow>

namespace Ui {
class coach;
}

class coach : public QMainWindow
{
    Q_OBJECT

public:
    explicit coach(QWidget *parent = 0);
    ~coach();

private:
    Ui::coach *ui;
};

#endif // COACH_H
