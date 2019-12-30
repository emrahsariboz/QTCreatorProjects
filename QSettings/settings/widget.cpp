#include "widget.h"
#include "ui_widget.h"
#include <QColorDialog>
#include <QDebug>
#include <QSettings>

Widget::Widget(QWidget *parent)
    : QWidget(parent)
    , ui(new Ui::Widget)
{
    ui->setupUi(this);
    ui->pushButton_1->setAutoFillBackground(true);

    for(int i=0; i<9; i++){
        colorList.append(Qt::black);
    }
}

Widget::~Widget()
{
    delete ui;
}


void Widget::on_pushButton_1_clicked()
{
   QColor chosenColor = QColorDialog::getColor(colorList[0], this, "Choose Color!");

   if(chosenColor.isValid()){
       colorList[0] = chosenColor;
       QString css = QString("background-color: %1").arg(chosenColor.name());
       ui->pushButton_1->setStyleSheet(css);
   }




}

void Widget::on_pushButton_2_clicked()
{
    QColor chosenColor = QColorDialog::getColor(colorList[1], this, "Choose Color!");

    if(chosenColor.isValid()){
        colorList[1] = chosenColor;
        QString css = QString("background-color: %1").arg(chosenColor.name());
        ui->pushButton_2->setStyleSheet(css);
    }


}

void Widget::on_pushButton_3_clicked()
{
    QColor chosenColor = QColorDialog::getColor(colorList[2], this, "Choose Color!");

    if(chosenColor.isValid()){
        colorList[2] = chosenColor;
        QString css = QString("background-color: %1").arg(chosenColor.name());
        ui->pushButton_3->setStyleSheet(css);
    }

}

void Widget::on_pushButton_4_clicked()
{
    QColor chosenColor = QColorDialog::getColor(colorList[3], this, "Choose Color!");

    if(chosenColor.isValid()){
        colorList[3] = chosenColor;
        QString css = QString("background-color: %1").arg(chosenColor.name());
        ui->pushButton_4->setStyleSheet(css);
    }

}

void Widget::on_pushButton_5_clicked()
{
    QColor chosenColor = QColorDialog::getColor(colorList[4], this, "Choose Color!");

    if(chosenColor.isValid()){
        colorList[4] = chosenColor;
        QString css = QString("background-color: %1").arg(chosenColor.name());
        ui->pushButton_5->setStyleSheet(css);
    }

}

void Widget::on_pushButton_6_clicked()
{
    QColor chosenColor = QColorDialog::getColor(colorList[5], this, "Choose Color!");

    if(chosenColor.isValid()){
        colorList[5] = chosenColor;
        QString css = QString("background-color: %1").arg(chosenColor.name());
        ui->pushButton_6->setStyleSheet(css);
    }

}

void Widget::on_pushButton_7_clicked()
{
    QColor chosenColor = QColorDialog::getColor(colorList[6], this, "Choose Color!");

    if(chosenColor.isValid()){
        colorList[6] = chosenColor;
        QString css = QString("background-color: %1").arg(chosenColor.name());
        ui->pushButton_7->setStyleSheet(css);
    }

}

void Widget::on_pushButton_8_clicked()
{
    QColor chosenColor = QColorDialog::getColor(colorList[7], this, "Choose Color!");

    if(chosenColor.isValid()){
        colorList[7] = chosenColor;
        QString css = QString("background-color: %1").arg(chosenColor.name());
        ui->pushButton_8->setStyleSheet(css);
    }

}

void Widget::on_pushButton_9_clicked()
{
    QColor chosenColor = QColorDialog::getColor(colorList[8], this, "Choose Color!");

    if(chosenColor.isValid()){
        colorList[8] = chosenColor;
        QString css = QString("background-color: %1").arg(chosenColor.name());
        ui->pushButton_9->setStyleSheet(css);
    }

}

void Widget::on_saveButton_clicked()
{
    saveColor("pushButton_1", colorList[0]);
    saveColor("pushButton_2", colorList[1]);
    saveColor("pushButton_3", colorList[2]);
    saveColor("pushButton_4", colorList[3]);
    saveColor("pushButton_5", colorList[4]);
    saveColor("pushButton_6", colorList[5]);
    saveColor("pushButton_7", colorList[6]);
    saveColor("pushButton_8", colorList[7]);
    saveColor("pushButton_9", colorList[8]);
}

void Widget::on_loadButton_clicked()
{
    setLoadedColor("pushButton_1", 0, ui->pushButton_1 );
    setLoadedColor("pushButton_2", 1, ui->pushButton_2 );
    setLoadedColor("pushButton_3", 2, ui->pushButton_3 );
    setLoadedColor("pushButton_4", 3, ui->pushButton_4 );
    setLoadedColor("pushButton_5", 4, ui->pushButton_5 );
    setLoadedColor("pushButton_6", 5, ui->pushButton_6 );
    setLoadedColor("pushButton_7", 6, ui->pushButton_7 );
    setLoadedColor("pushButton_8", 7, ui->pushButton_8 );
    setLoadedColor("pushButton_9", 8, ui->pushButton_9 );

}

void Widget::saveColor(QString key, QColor color)
{
    int red = color.red();
    int green = color.green();
    int blue = color.blue();

    QSettings settings("Blikoon", "SettingsDemo");
    settings.beginGroup("ButtonColor");
    settings.setValue(key + "r",red);
    settings.setValue(key + "b",blue);
    settings.setValue(key + "g",green);

    settings.endGroup();
}

QColor Widget::loadColor(QString key)
{
    int red;
    int green;
    int blue;

    QSettings settings("Blikoon","SettingsDemo");
    settings.beginGroup("ButtonColor");

    red = settings.value(key+"r",QVariant(0)).toInt();
    green = settings.value(key+"g",QVariant(0)).toInt();
    blue = settings.value(key+"b",QVariant(0)).toInt();
    settings.endGroup();

    return QColor(red, green, blue);
}

void Widget::setLoadedColor(QString key, int index, QPushButton *button)
{
    QColor color = loadColor(key);
    colorList[index] = color;
    QString css = QString("background-color : %1").arg(color.name());
    button->setStyleSheet(css);
}
