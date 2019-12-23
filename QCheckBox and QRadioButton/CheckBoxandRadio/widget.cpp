#include "widget.h"
#include "ui_widget.h"
#include <QButtonGroup>
#include <QDebug>

Widget::Widget(QWidget *parent)
    : QWidget(parent)
    , ui(new Ui::Widget)
{
    ui->setupUi(this);

    QButtonGroup *group = new QButtonGroup(this);
    group->addButton(ui->checkBox);
    group->addButton(ui->checkBox_2);
    group->addButton(ui->checkBox_3);

    group->setExclusive(true);
}

Widget::~Widget()
{
    delete ui;
}


void Widget::on_cppCheckBox_toggled(bool checked)
{



}

void Widget::on_checkBox_toggled(bool checked)
{
    if(checked){
        qDebug()<<"Window is checked!";
    }else{
        qDebug()<<"Window is unchecked!";
    }
}

void Widget::on_radioButtonA_toggled(bool checked)
{
    if(checked)qDebug()<<"The option A is checked";
}

void Widget::on_grabData_clicked()
{

        if(ui->checkBox->isChecked())
            qDebug()<<"Window is checked";

    }


void Widget::on_pushButton_2_clicked()
{
    //Exclusive
    if(ui->checkBox->isChecked()){
        ui->checkBox->setChecked(false);
    }else{
        ui->checkBox->setChecked(true);
    }

    //Non-Exclusive

    if(ui->javaCheckBox->isChecked())
        ui->javaCheckBox->setChecked(false);
    else
        ui->javaCheckBox->setChecked(true);
}
