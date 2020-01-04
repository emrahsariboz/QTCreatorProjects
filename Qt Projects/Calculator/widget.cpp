#include "widget.h"
#include "ui_widget.h"
#include <QDebug>


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

    QPushButton *numButtons[10];

    for(int i=0; i<10; i++){
        QString butName = "Button" + QString::number(i);
        //Search for children widgets of parent widget(find Child) who has a name of butName
        numButtons[i] = Widget::findChild<QPushButton *>(butName);
        connect(numButtons[i], SIGNAL(released()), this,
                SLOT(NumPressed()));
    }


    connect(ui->Addition, SIGNAL(released()), this,
            SLOT(MathButtonPressed()));

    connect(ui->Division, SIGNAL(released()), this,
            SLOT(MathButtonPressed()));

    connect(ui->Subtraction, SIGNAL(released()), this,
            SLOT(MathButtonPressed()));

    connect(ui->Multiplication, SIGNAL(released()), this,
            SLOT(MathButtonPressed()));

    connect(ui->Equal, SIGNAL(released()), this,
            SLOT(EqualButtonPressed()));

    connect(ui->Clear, SIGNAL(released()), this,
            SLOT(clearButtonPressed()));
}

Widget::~Widget()
{
    delete ui;
}

void Widget::NumPressed()
{
    QPushButton *button = (QPushButton *)sender();
    QString butVal = button->text();
    QString dispValue = ui->Display->text();

    if((dispValue.toDouble() == 0) || (dispValue.toDouble() == 0.0)){
            ui->Display->setText(butVal);
    }else{
        QString newVal = dispValue + butVal;
        double dblNewVal = newVal.toDouble();
        ui->Display->setText(QString::number(dblNewVal, 'g', 16));
    }
}

void Widget::MathButtonPressed()
{
    divTrigger = false;
    multTrigger = false;
    addTrigger = false;
    subTrigger = false;

    QString displayValue = ui->Display->text();
    calcValue = displayValue.toDouble();
    QPushButton *button = (QPushButton *) sender();
    QString butVal = button->text();
      if(QString::compare(butVal, "/", Qt::CaseInsensitive) == 0){
         divTrigger = true;
     } else if(QString::compare(butVal, "*", Qt::CaseInsensitive) == 0){
         multTrigger = true;
     } else if(QString::compare(butVal, "+", Qt::CaseInsensitive) == 0){
         addTrigger = true;
     } else{
        subTrigger = true;
    }

      ui->Display->setText(" ");


}

void Widget::EqualButtonPressed(){
    double solution = 0.0;

    QString dispVal = ui->Display->text();
    double dblDisplayVal = dispVal.toDouble();

    if(addTrigger || subTrigger || multTrigger || divTrigger){
        if(addTrigger){
            solution = calcValue + dblDisplayVal;
        }else if(subTrigger){
            solution = calcValue - dblDisplayVal;
        }else if(multTrigger){
            solution = calcValue * dblDisplayVal;
        }else{
            solution = calcValue / dblDisplayVal;
        }
    }

    ui->Display->setText(QString::number(solution));
    qDebug()<<"CLICKED!";

}

void Widget::clearButtonPressed()
{
    ui->Display->setText(QString::number(calcValue));
}


