#include "infodialog.h"
#include "ui_infodialog.h"
#include <QtDebug>
#include <QDialog>
#include <QAbstractButton>

InfoDialog::InfoDialog(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::InfoDialog)
{
    ui->setupUi(this);
}

InfoDialog::~InfoDialog()
{
    delete ui;
}


void InfoDialog::on_buttonBox_clicked(QAbstractButton *button)
{
    QDialogButtonBox::StandardButton stdButton  = ui->buttonBox->standardButton(button);

    if(stdButton == QDialogButtonBox::Ok){
        qDebug()<<"OK button clicked";
        accept();
    }

    if(stdButton == QDialogButtonBox::No){
        qDebug()<<"No button clicked";
    }

    if(stdButton == QDialogButtonBox::Cancel){
        qDebug()<<"Cancel button clicked";
        reject();
    }
}
