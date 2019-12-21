#include "widget.h"
#include "ui_widget.h"

Widget::Widget(QWidget *parent)
    : QWidget(parent)
    , ui(new Ui::Widget)
{
    ui->setupUi(this);


    QPixmap day100("://images/day100.png");
    ui->imageLabel->setPixmap(day100.scaled(200, 200));
}

Widget::~Widget()
{
    delete ui;
}

