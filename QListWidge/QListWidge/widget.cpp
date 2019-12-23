#include "widget.h"
#include "ui_widget.h"
#include <QListWidget>
#include <QDebug>

Widget::Widget(QWidget *parent)
    : QWidget(parent)
    , ui(new Ui::Widget)
{
    ui->setupUi(this);
    ui->listWidget->setSelectionMode(QAbstractItemView::MultiSelection);

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

void Widget::on_selectedItemsButton_clicked()
{
    //Get the list of selected items
    QList<QListWidgetItem *> list = ui->listWidget->selectedItems();
    for(int i=0; i<list.count(); i++){
        qDebug()<<"Selected item : " <<list.at(i)->text() << " , "
                                        "row id " << ui->listWidget->row(list.at(i));
    }
}
