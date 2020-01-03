#include "widget.h"
#include "ui_widget.h"
#include <QHBoxLayout>

Widget::Widget(QWidget *parent)
    : QWidget(parent)
    , ui(new Ui::Widget)
{
    ui->setupUi(this);
    /*
    //Define Layout
    QHBoxLayout *layout = new QHBoxLayout();

    //Add things to layout
    layout->addWidget(ui->button1);
    layout->addWidget(ui->button2);
    layout->addWidget(ui->buttonThree);
    layout->addWidget(ui->buttonFour);
    layout->addWidget(ui->buttonFive);

    //set layout to widget
    setLayout(layout);

    */


}

Widget::~Widget()
{
    delete ui;
}

