#include "widget.h"
#include "ui_widget.h"
#include <QColorDialog>
#include <QDebug>

Widget::Widget(QWidget *parent)
    : QWidget(parent)
    , ui(new Ui::Widget)
{
    ui->setupUi(this);
    ui->pushButton_1->setAutoFillBackground(true);
}

Widget::~Widget()
{
    delete ui;
}


void Widget::on_pushButton_1_clicked()
{
    QPalette palette = ui->pushButton_1->palette();

    QColor color = palette.color(QPalette::WindowText);

    QColor chosenColor = QColorDialog::getColor(color, this, "Choose Color!");

    if(chosenColor.isValid()){
        palette.setColor(QPalette::WindowText, chosenColor);
        ui->pushButton_1->setPalette(palette);
        qDebug()<<"VALID";
    }else{
        qDebug()<<"Invalid";
    }




}
