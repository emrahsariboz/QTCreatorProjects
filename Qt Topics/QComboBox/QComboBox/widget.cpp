#include "widget.h"
#include "ui_widget.h"
#include <QDebug>

Widget::Widget(QWidget *parent)
    : QWidget(parent)
    , ui(new Ui::Widget)
{
    ui->setupUi(this);

    ui->comboBox->addItem("Earth");
    ui->comboBox->addItem("Venus");
    ui->comboBox->addItem("Mars");
    ui->comboBox->addItem("Jupyter");
    ui->comboBox->addItem("Uranus");


    //Make combo box editable

    ui->comboBox->setEditable(true);




}

Widget::~Widget()
{
    delete ui;
}


void Widget::on_setValueButton_clicked()
{

    ui->comboBox->setCurrentIndex(3);

}

void Widget::on_captureValButton_clicked()
{
    qDebug()<<"The currently selected item in combo is " << ui->comboBox->currentText()
           <<" and the index is " <<ui->comboBox->currentIndex();

}

void Widget::on_getValueButton_clicked()
{
    qDebug()<<"The combo box currently has " << ui->comboBox->count();

    for(int i=0; i<ui->comboBox->count(); i++){
        qDebug()<<" Index "<<QString::number(i) << " : "<<ui->comboBox->itemText(i);
    }
}
