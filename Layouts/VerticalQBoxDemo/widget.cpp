#include "widget.h"
#include "ui_widget.h"
#include <QVBoxLayout>


Widget::Widget(QWidget *parent)
    : QWidget(parent)
    , ui(new Ui::Widget)
{
    ui->setupUi(this);


    /*
    QVBoxLayout *layout = new QVBoxLayout();

    layout->addWidget(ui->pushButton);
    layout->addWidget(ui->pushButton_2);
    layout->addWidget(ui->pushButton_3);
    layout->addWidget(ui->pushButton_4);

    setLayout(layout);

    */


}

Widget::~Widget()
{
    delete ui;
}

