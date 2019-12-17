#include "mainwindow.h"
#include "ui_mainwindow.h"
#include <QtDebug>
#include <QMessageBox>
#include <time.h>
#include <stdlib.h>


MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    srand(time(nullptr));

    //Generate random number

    secretNumber = rand() % 10 + 1;

    ui->startOverButton->setDisabled(false);


    ui->messageLabel->setText("Welcome to game!");


}

MainWindow::~MainWindow()
{
    delete ui;
}


void MainWindow::on_pushButton_clicked()
{
    QMessageBox::information(this, "Message", "You clicked!", QMessageBox::Ok);

}

void MainWindow::on_guessButton_clicked()
{
    guessNumber = ui -> spinBox ->value();

    qDebug() << "The guess number " << QString::number(guessNumber);


    if(guessNumber == secretNumber){
        ui->messageLabel->setText("Congrats! Number was : " + QString::number(secretNumber));
        //Disable the button

        ui->guessButton->setDisabled(true);
        ui->startOverButton->setDisabled(false);
    }else{
        if(secretNumber < guessNumber){
            ui->messageLabel->setText("Number is lower than that");

        }

        if(secretNumber > guessNumber){
            ui->messageLabel->setText("Number is higher than that");

        }

    }

}


void MainWindow::on_startOverButton_clicked()
{

    ui->messageLabel->setText("Starting over the game");
    ui->guessButton->setDisabled(false);
    ui->startOverButton->setDisabled(true);

    //put the spinbox back to one

    ui->spinBox->setValue(1);


    //Regenarate the random num

    secretNumber = rand() % 10 + 1;




}
