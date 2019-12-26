#include "infodialog.h"
#include "ui_infodialog.h"
#include <QDialog>
#include <QDebug>
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

void InfoDialog::on_okButton_clicked()
{
    //Collect Information
    QString userPostition = ui->positionLineEdit->text();
    if(!userPostition.isEmpty())
        position = userPostition;

    if(ui->windowsRadio->isChecked())
        favoriteOS = "Windows";
    if(ui->linuxRadio->isChecked())
        favoriteOS = "Linux";
    if(ui->macRadio->isChecked())
        favoriteOS = "MAC";

    //Close diaglog

    accept();



}

void InfoDialog::on_Cancel_clicked()
{
    reject();

}
