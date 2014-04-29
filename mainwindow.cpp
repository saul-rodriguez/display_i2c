#include "mainwindow.h"
#include "ui_mainwindow.h"

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);

    /*
    dispchip.open(0x70);
    dispchip.setBlinkRate(0);
    dispchip.setBrightness(15);
    dispchip.displaybuffer[0] = 0x07;
    dispchip.displaybuffer[1] = 0x07;
    dispchip.displaybuffer[2] = 0x87;

    dispchip.writeDisplay(3);
    */

    mydisp1.open(0x70);
    mydisp1.setBlinkRate(0);
    mydisp1.setBrightness(1);
    mydisp1.writeint(0);

    mydisp2.open(0x71);
    mydisp2.setBlinkRate(0);
    mydisp2.setBrightness(1);
    mydisp2.writeint(1);

    mydisp3.open(0x72);
    mydisp3.setBlinkRate(0);
    mydisp3.setBrightness(1);
    mydisp3.writeint(2);

    mydisp4.open(0x73);
    mydisp4.setBlinkRate(0);
    mydisp4.setBrightness(1);
    mydisp4.writeint(3);

}

MainWindow::~MainWindow()
{
    delete ui;
}
