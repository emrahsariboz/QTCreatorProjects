#include "widget.h"
#include "ui_widget.h"
#include <QListWidget>

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


void Widget::on_addButton_clicked()
{
    ui->listWidget->addItem("My Item");
}

void Widget::on_deleteButton_clicked()
{
    ui->listWidget->takeItem(ui->listWidget->currentRow());
}
