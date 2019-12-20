#include "widget.h"
#include "ui_widget.h"
#include <QPushButton>
#include <QDebug>


Widget::Widget(QWidget *parent)
    : QWidget(parent)
    , ui(new Ui::Widget)
{
    ui->setupUi(this);

    //Clicked Signal
    QFont buttonFont("Times", 10, QFont::Bold);
    QPushButton *button = new QPushButton("Button1",this);
    button->setMinimumSize(40, 20);
    button->setFont(buttonFont);
    connect(button, &QPushButton::clicked, [=](){
            qDebug()<<"Clicked!";
    });


    QPushButton *button2 = new QPushButton("Button2",this);
    button2->setMinimumSize(40, 20);
    button2->move(205, 0 );
    button2->setFont(buttonFont);
    connect(button2, &QPushButton::pressed, [=](){
            qDebug()<<"pressed!";
    });

    connect(button2, &QPushButton::released, [=](){
            qDebug()<<"released!";
    });


}

Widget::~Widget()
{
    delete ui;
}

