#include "widget.h"
#include "ui_widget.h"
#include <QTextEdit>
#include <QPushButton>
#include <QDebug>
#include <QLabel>


Widget::Widget(QWidget *parent)
    : QWidget(parent)
    , ui(new Ui::Widget)
{
    ui->setupUi(this);

    QFont labelFont("Times", 10);
    QLabel *mlabel = new QLabel("QTextEdit Signals", this);
    mlabel->setFont(labelFont);
    mlabel->move(100, 25);


    QTextEdit *textEdit = new QTextEdit(this);
    textEdit->move(70, 55);


    connect(textEdit, &QTextEdit::textChanged, [=](){
        qDebug()<<"Text Changed";
    });

     QPushButton *copyButton = new QPushButton(this);
     copyButton->setText("Copy");
     copyButton->setMinimumSize(10,20);
     copyButton->move(70, 260);

     connect(copyButton, &QPushButton::clicked, [=](){
         textEdit->copy();
     });

     QPushButton *paste = new QPushButton("Paste", this);
     paste->setMinimumSize(10, 20);
     paste->move(150, 260);

     connect(paste, &QPushButton::clicked, [=](){
         textEdit->paste();
     });

     QPushButton *cut = new QPushButton("Cut", this);
     cut->setMinimumSize(10, 20);
     cut->move(70, 290);

     connect(cut, &QPushButton::clicked, [=](){
         textEdit->cut();
     });

     QPushButton *undo = new QPushButton("Undo", this);
     undo->setMinimumSize(10, 20);
     undo->move(150, 290);

     connect(undo, &QPushButton::clicked, [=](){
         textEdit->undo();
     });

     QPushButton *redo = new QPushButton("Redo", this);
     redo->setMinimumSize(10, 20);
     redo->move(230, 260);

     connect(redo, &QPushButton::clicked, [=](){
         textEdit->redo();
     });
}

Widget::~Widget()
{
    delete ui;
}

