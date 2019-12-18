#include "mainwindow.h"
#include "ui_mainwindow.h"
#include <QDebug>

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    //String notation

    /*
    connect(ui->pushButton, SIGNAL(clicked()),
            this,SLOT(changeText()));
            */

    //Second way, regular slots

    //connect(ui->pushButton, &QPushButton::clicked, &MainWindow::changeText);

    //Third way, using lambda function

    connect(ui->pushButton, &QPushButton::clicked, [=](){
        ui->label->setText("Lambda");
    });
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::changeText()
{

    qDebug()<<" User clicked on button ";
    ui->label->setText("Hello There");

}

