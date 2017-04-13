#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include <QStackedWidget>
#include "connexionmainmenu.h"

namespace Ui {
class MainWindow;
}

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    explicit MainWindow(QWidget *parent = 0);
    ~MainWindow();
    connexionmainmenu *connexPage = new connexionmainmenu;
private:
    Ui::MainWindow *ui;
};

#endif // MAINWINDOW_H
