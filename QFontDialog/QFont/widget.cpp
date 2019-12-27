#include "widget.h"
#include "ui_widget.h"
#include <QFontDialog>
#include <QDebug>
#include <QDialog>
#include <QMessageBox>

Widget::Widget(QWidget *parent)
    : QWidget(parent)
    , ui(new Ui::Widget)
{
    ui->setupUi(this);
}

Widget::~Widget()
{
    delete ui;
}


void Widget::on_chooseFont_clicked()
{
    bool ok;
    QFont font = QFontDialog::getFont(&ok,
                                      QFont("Helvetice [Cronyx]", 10), this);

    if(ok){
        ui->label->setFont(font);
    }else{
        QMessageBox::information(this, "Info",""
                                                              "User Cancelled the QFont",
                                        QMessageBox::Ok | QMessageBox::Cancel);
    }
}
