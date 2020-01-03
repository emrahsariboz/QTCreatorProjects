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

    setUpUI();
    setFixedSize(400, 400);
}

Widget::~Widget()
{
    delete ui;
}

void Widget::setUpUI()
{

    QFont labelFont("Helvetica [Cronyx]", 18);
    QLabel *mlabel = new QLabel("QTextEdit Signals", this);
    mlabel->setFont(labelFont);
    mlabel->move(100, 25);


    QTextEdit *textEdit = new QTextEdit(this);
    textEdit->move(70, 55);


    connect(textEdit, &QTextEdit::textChanged, [=](){
        qDebug()<<"Text is changed!";
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
     paste->move(230, 320);

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

     //Set plain text and html to the text edit

     QPushButton *plainTextButton = new QPushButton("Plain text", this);
     plainTextButton->setMinimumSize(10, 20);
     plainTextButton->move(230, 290);

     connect(plainTextButton, &QPushButton::clicked, [=](){
         textEdit->setPlainText("This is just a plainText");
     });


     QPushButton *setHTML = new QPushButton("Html to Text", this);
     setHTML->setMinimumSize(10, 20);
     setHTML->move(70, 320);

     connect(setHTML, &QPushButton::clicked, [=](){
         textEdit->setHtml("<!DOCTYPE html><html><body><p>This text is normal.</p><p><b>ECEM BOLD.</b></p></body></html>");
     });

     //Grab text and html

     QPushButton *grabText = new QPushButton("Grab Text", this);
     grabText->setMinimumSize(10, 20);
     grabText->move(150, 260);

     connect(grabText, &QPushButton::clicked, [=](){
          qDebug() <<"The plain text inside the text edi"
                     "is : " <<textEdit->toPlainText();
     });


     QPushButton *htmlText = new QPushButton("Grab HTML", this);
     htmlText->setMinimumSize(10, 20);
     htmlText->move(150, 320);

     connect(htmlText, &QPushButton::clicked, [=](){
          qDebug() <<"The plain text inside the text edi"
                     "is : " <<textEdit->toHtml();
     });
}

