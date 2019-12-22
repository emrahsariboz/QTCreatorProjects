#include "widget.h"
#include "ui_widget.h"
#include <QGridLayout>

Widget::Widget(QWidget *parent)
    : QWidget(parent)
    , ui(new Ui::Widget)
{
    ui->setupUi(this);


    QGridLayout *layout = new QGridLayout();

    //First Row
    //Spanning to cover more space (1 row, 2 column).
    layout->addWidget(ui->pushButton1,0,0,1,2);
    layout->addWidget(ui->pushButton_3,0,2);

    //Second Row
    layout->addWidget(ui->pushButton_4,1,0);
    layout->addWidget(ui->pushButton_5,1,1);
    layout->addWidget(ui->pushButton_6,1,2);

    //Third Row
    layout->addWidget(ui->pushButton_7,2,0);
    layout->addWidget(ui->pushButton_8,2,1);
    layout->addWidget(ui->pushButton_9,2,2);


    setLayout(layout);

}

Widget::~Widget()
{
    delete ui;
}

