#include "qdialoginfo.h"
#include "ui_qdialoginfo.h"

QDialogInfo::QDialogInfo(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::QDialogInfo)
{
    ui->setupUi(this);
    //Set style on specific widget
    ui->pushButton->setStyleSheet("background-color:red");
}

QDialogInfo::~QDialogInfo()
{
    delete ui;
}
