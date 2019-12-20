#include "widget.h"
#include "ui_widget.h"
#include <QPushButton>
#include <QMessageBox>
#include <QtDebug>



Widget::Widget(QWidget *parent)
    : QWidget(parent)
    , ui(new Ui::Widget)
{
    ui->setupUi(this);

    QPushButton *button = new QPushButton(this);
    button->setText("Click Me!");
    button->move(200, 200);

    connect(button, &QPushButton::clicked, [=](){


        //Hard way

        /*
        QMessageBox message;
        message.setMinimumSize(300, 200);
        message.setWindowTitle("Message Title");
        message.setText("Clicked!");
        message.setInformativeText("Do you want to do something?");
        message.setIcon(QMessageBox::Critical);
        message.setStandardButtons(QMessageBox::Ok | QMessageBox::Cancel);
        message.setDefaultButton(QMessageBox::Cancel);

        int ret = message.exec();
        */

        //Critical Message
        /*
        int ret = QMessageBox::critical(this, "Message Title","Something happend"
                                                              "Do you want to do something ?",
                                        QMessageBox::Ok | QMessageBox::Cancel);
        */

        /*Information message
        int ret = QMessageBox::information(this, "Message Title","Something happend. "
                                                              "Do you want to do something ?",
                                        QMessageBox::Ok | QMessageBox::Cancel);
        */

        //Question Message
        int ret = QMessageBox::question(this, "Message Title","Something happend. "
                                                              "Do you want to do something ?",
                                        QMessageBox::Ok | QMessageBox::Cancel);



        if(ret == QMessageBox::Ok){
            qDebug()<<"User clicked on OK";
        }else{
            qDebug()<<"User clicked on Cancel";
        }
    });


}

Widget::~Widget()
{
    delete ui;
}

