#include "mainwindow.h"
#include "ui_mainwindow.h"
#include <QApplication>
#include <QDebug>
#include <QMessageBox>
#include <QTimer>

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
}

MainWindow::~MainWindow()
{
    delete ui;
}


void MainWindow::on_actionQuit_triggered()
{
    qDebug()<<"Quitting";
    statusBar()->showMessage("Quiting in 5 seconds");
    QTimer::singleShot(5000, this, SLOT(quitApp()));
}

void MainWindow::on_actionCopy_triggered()
{
    ui->textEdit->copy();
}

void MainWindow::on_actionPaste_triggered()
{
    ui->textEdit->paste();
}

void MainWindow::on_actionRedu_triggered()
{
    ui->textEdit->redo();
}

void MainWindow::on_actionUndo_triggered()
{
    ui->textEdit->undo();
}

void MainWindow::on_actionAbout_triggered()
{
    QMessageBox::about(this, "Message", "This is demo app to show"
                                        " how to use menus, toolbart and actions"
                                        "in QT");
}

void MainWindow::on_actionAbout_QT_triggered()
{
    QApplication::aboutQt();
}

void MainWindow::on_actionCuy_triggered()
{
    ui->textEdit->cut();
}

void MainWindow::quitApp()
{
    QApplication::quit();
}
