#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include "ht16k33.h"
#include "display7seg.h"

namespace Ui {
class MainWindow;
}

class MainWindow : public QMainWindow
{
    Q_OBJECT
    
public:
    explicit MainWindow(QWidget *parent = 0);
    ~MainWindow();
    
private:
    Ui::MainWindow *ui;

    Ht16k33 dispchip;
    Display7seg mydisp1;
    Display7seg mydisp2;
    Display7seg mydisp3;
    Display7seg mydisp4;
};

#endif // MAINWINDOW_H
