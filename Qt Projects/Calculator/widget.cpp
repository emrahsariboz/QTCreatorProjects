#include "widget.h"
#include "ui_widget.h"


double calcValue = 0.0;


bool divTrigger = false;
bool multTrigger = false;
bool addTrigger = false;
bool subTrigger = false;



Widget::Widget(QWidget *parent)
    : QWidget(parent)
    , ui(new Ui::Widget)
{
    ui->setupUi(this);

    ui->Display->setText(QString::number(calcValue));
    //Reference to all push buttons

    QPushButton *numButton[10];

    for(int i=0; i<10; i++){
        QString butName = "Button" + QString::number(i);
        numButton[i] = Widget::findChild<QPushButton *>(butName);
        connect(numButton[i], SIGNAL(released()), this,
                SLOT(NumPressed));
    }


}



Widget::~Widget()
{
    delete ui;
}

void Widget::NumPressed()
{

}

