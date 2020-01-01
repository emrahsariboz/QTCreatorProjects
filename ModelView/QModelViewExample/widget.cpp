#include "widget.h"
#include "ui_widget.h"

Widget::Widget(QWidget *parent)
    : QWidget(parent)
    , ui(new Ui::Widget)
{
    ui->setupUi(this);

    model = new QStringListModel(this);

    QStringList list;
    list<<"Cats"<<"Dogs"<<"Birds";

    model->setStringList(list);

    ui->listView->setModel(model);
    ui->comboBox->setModel(model);
    ui->listView->setEditTriggers(QAbstractItemView::AnyKeyPressed | QAbstractItemView::DoubleClicked);



}

Widget::~Widget()
{
    delete ui;
}


void Widget::on_pushButton_2_clicked()
{
    //Add
}

void Widget::on_pushButton_3_clicked()
{
    //Insert
}

void Widget::on_pushButton_clicked()
{
    //Delete
}
