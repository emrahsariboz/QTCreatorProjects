#include "widget.h"
#include "ui_widget.h"
#include <QLabel>
#include <QLineEdit>
#include <QDebug>
#include <QPushButton>


Widget::Widget(QWidget *parent)
    : QWidget(parent)
    , ui(new Ui::Widget)
{
    ui->setupUi(this);




    //First Name

    QLabel *firstN = new QLabel("First Name", this);
    firstN->setMinimumSize(50, 30);
    firstN->move(10,10);

    QLineEdit *firstNameLineEdit = new QLineEdit(this);
    firstNameLineEdit->setMinimumSize(100, 30);
    firstNameLineEdit->move(100, 10);


    //Last Name

    QLabel *lastN = new QLabel("Last Name", this);
    lastN->setMinimumSize(50, 30);
    lastN->move(10,70);

    QLineEdit *lastNameLineEdit = new QLineEdit(this);
    lastNameLineEdit->setMinimumSize(100, 30);
    lastNameLineEdit->move(100, 70);


    //City

    QLabel *cityN = new QLabel("City", this);
    cityN->setMinimumSize(50, 30);
    cityN->move(10,140);

    QLineEdit *cityLineEdit = new QLineEdit(this);
    cityLineEdit->setMinimumSize(100, 30);
    cityLineEdit->move(100, 130);


    QFont buttonFont("Times", 16);
    QPushButton *button = new QPushButton("Grab the data ", this);
    button->setFont(buttonFont);
    button->setMinimumSize(50, 30);
    button->move(100, 190);

    connect(button, &QPushButton::clicked, [=](){
        QString firstName = firstN->text();
        QString lastName = lastN->text();
        QString city = cityN->text();

        qDebug() <<" First name is: " << firstName;
        qDebug() <<" Last name is: " << lastName;
        qDebug() <<" City is: " << city;
    });

    //Respond to signals frfom QLineEdits

    //CursorPositionChanged

    connect(firstNameLineEdit, &QLineEdit::cursorPositionChanged, [=](){
       qDebug()<<"Currennt cursor position is: " <<  firstNameLineEdit->cursorPosition();

    });

    //Editing Finished
    connect(firstNameLineEdit, &QLineEdit::editingFinished, [=](){
       qDebug()<<"Editing Finished ";

    });


    //Selection Changed

    connect(firstNameLineEdit, &QLineEdit::editingFinished, [=](){
       qDebug()<<"Editing Finished ";

    });

    //Selection Changed
    connect(firstNameLineEdit, &QLineEdit::selectionChanged, [=](){
       qDebug() << "Selection Changed";
    });


    //Text Changed
    connect(firstNameLineEdit, &QLineEdit::textChanged, [=](){
       qDebug() << "Text Changed to : " << firstNameLineEdit->text();
    });


    //Set Text
    lastNameLineEdit->setText("Say your last name");

    //Hint Text

    cityLineEdit->setPlaceholderText("e.g. elazig");






    //Change text in QLineEdit programmatically
    connect(firstNameLineEdit, &QLineEdit::textEdited, [=](){
       qDebug() << "Text Edited and changed to: " << firstNameLineEdit->text();
    });

}

Widget::~Widget()
{
    delete ui;
}



