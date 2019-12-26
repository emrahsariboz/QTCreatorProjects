#include "widget.h"
#include "ui_widget.h"
#include "infodialog.h"
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


void Widget::on_provideInfoButton_clicked()
{
    InfoDialog *dialog = new InfoDialog(this);
    int ret = dialog->exec();

    if(ret == QDialog::Accepted){
        QString position = dialog->getPosition();
        QString favOS = dialog->getFavoriteOS();
        ui->infoLabel->setText("I am a " +position + "\nMy favorite OS is " + favOS);

        qDebug() <<"Dialog accepted";
    }
    if(ret == QDialog::Rejected)
        qDebug() <<"Dialog rejected";


}
