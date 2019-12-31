#include "mainwindow.h"
#include "ui_mainwindow.h"
#include <QDebug>

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);

    //connect(ui->horizontalSlider, SIGNAL(valueChanged(int)), ui->progressBar, SLOT(setValue(int)));


    connect(ui->horizontalSlider, &QSlider::valueChanged, [=](){
        ui->progressBar->setValue(ui->horizontalSlider->value());
    });

}

MainWindow::~MainWindow()
{
    delete ui;
}


