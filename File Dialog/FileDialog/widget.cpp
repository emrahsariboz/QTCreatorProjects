#include "widget.h"
#include "ui_widget.h"
#include <QFileDialog>
#include <QDebug>
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


void Widget::on_pushButton_clicked()
{
    /*
    QString dir = QFileDialog::getExistingDirectory(this,
                                      tr("Open Directory"),
                                                    "/home",
                                                    QFileDialog::ShowDirsOnly
                                                    |QFileDialog::DontResolveSymlinks);

    */


    // OpenFileName
    /*
    QString fileName = QFileDialog::getOpenFileName(this, tr("Open File"),
                                                    "/home",tr("Images (*.png *.xpm *.jpg)"));

                                                    */

    //Choose multiple files
    /*
    QStringList files = QFileDialog::getOpenFileNames(this, tr("Choose Multiple Files"),
                                                      "/home",tr("Images (*.png *.jpg);; Pdf Files (*.pdf)"));
    */

    //Save File

    QString fileName = QFileDialog::getSaveFileName(this , tr("Save File"),
                                                    "/home", tr("Images (*.png *.xpm *.jpg)"));


    qDebug()<<"Your chosed file name is: " << fileName;
}
