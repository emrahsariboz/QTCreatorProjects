#include "widget.h"
#include "ui_widget.h"
#include <QFileDialog>
#include  <QMessageBox>

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


void Widget::on_chooseDirButton_clicked()
{
     QString fileDir = QFileDialog::getExistingDirectory(this, "Choose Folder");

     if(fileDir.isEmpty())
         return;

    ui->lineEditDir->setText(fileDir);
}

void Widget::on_createDirButton_clicked()
{
    //Create dir if doesnt exist

    QString dirPath = ui->lineEditDir->text();

    if(dirPath.isEmpty())
        return;

    QDir dir(dirPath);

    if(!dir.exists()){
        if(dir.mkdir(dirPath))
            QMessageBox::information(this, "Message", "New directory is created!");
    }else
        QMessageBox::information(this, "Message", "Directory already exists!");


}

void Widget::on_isValidDirButton_clicked()
{


}

void Widget::on_dirorFilebutton_clicked()
{


}

void Widget::on_folderContentButton_clicked()
{


}
