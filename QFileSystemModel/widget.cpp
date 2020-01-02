#include "widget.h"
#include "ui_widget.h"
#include <QDebug>

Widget::Widget(QWidget *parent)
    : QWidget(parent)
    , ui(new Ui::Widget)
{
    ui->setupUi(this);



    //Dir Model
    dirModel = new QDirModel(this);
    ui->treeView->setModel(dirModel);
    dirModel->setSorting(QDir::DirsFirst | QDir::IgnoreCase | QDir::Name);

    QModelIndex index =  dirModel->index("D:/");

    ui->treeView->setCurrentIndex(index);
    ui->treeView->expand(index);
    ui->treeView->scrollTo(index);
    ui->treeView->resizeColumnToContents(0);
    //Files MOdel

    QString path = "D:/";
    filesModel = new QFileSystemModel(this);
    filesModel->setFilter(QDir::NoDotAndDotDot | QDir::Files);
    filesModel->setRootPath(path);
    ui->listView->setModel(filesModel);
}


Widget::~Widget()
{
    delete ui;
}


void Widget::on_treeView_collapsed(const QModelIndex &index)
{
    QString path = dirModel->fileInfo(index).absoluteFilePath();
    qDebug()<<path;
    ui->listView->setRootIndex(filesModel->setRootPath(path));


}
