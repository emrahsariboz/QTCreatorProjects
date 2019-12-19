#include "mainwindow.h"
#include "ui_mainwindow.h"
#include <QDebug>
#include <QPushButton>
#include <QMenuBar>
#include <QAction>
#include <QStatusBar>

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);


    //Declare Quit Action

    QAction *quitaction = new QAction("Quit");
    connect(quitaction, &QAction::triggered, [=] (){
       QApplication::quit();
    });


    //Add menus
    QMenu *fileMenu = menuBar()->addMenu("File");
    fileMenu->addAction(quitaction);
    menuBar()->addMenu("Edit");
    menuBar()->addMenu("Window");
    menuBar()->addMenu("Settings");
    menuBar()->addMenu("Help");

    //Add status bar message

    statusBar()->showMessage("Uploading file...", 3000);
    //To clear message
    //statusBar()->clearMessage();







}

MainWindow::~MainWindow()
{
    delete ui;
}

QSize MainWindow::sizeHint() const
{
    return QSize(400, 400);
}

