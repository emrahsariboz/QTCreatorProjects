#include "widget.h"
#include "ui_widget.h"
#include <QDebug>
#include "qdialoginfo.h"
Widget::Widget(QWidget *parent)
    : QWidget(parent)
    , ui(new Ui::Widget)
{
    ui->setupUi(this);
}

Widget::~Widget()
{
    delete ui;
}


void Widget::on_pushButton_clicked()
{
    QDialogInfo *d = new QDialogInfo(this);
    //Set style sheet on a container widget
/*
    d->setStyleSheet("QPushButton{"
                     "background-color : yellow; color : blue;}");
*/
    d->exec();
}
