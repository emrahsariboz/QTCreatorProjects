#include "rockwidget.h"
#include <QLabel>
#include <QPushButton>
#include <QMessageBox>


RockWidget::RockWidget(QWidget *parent) : QWidget(parent)
{
    //setWindowTitle("Rock Widget Here");
    QLabel *label = new QLabel("This is my label", this);


    //Add a styled widget and move it around

    QLabel *label1 = new QLabel(this);

    label1->setText("My colored label");

    label1->move(0 , 70);

    QFont serifFont("Times", 10, QFont::Bold);
    QPalette labelColor;

    labelColor.setColor(QPalette::Window, Qt::yellow);
    labelColor.setColor(QPalette::WindowText, Qt::blue);
    label1->setAutoFillBackground(true);
    label1->setFont(serifFont);
    label1->setPalette(labelColor);

    //Another label

    QLabel *label2 = new QLabel(this);

    label2->setAutoFillBackground(true);
    label2->setPalette(labelColor);
    label2->setText("This is label2");
    label2->move(0, 70);
    label2->setFont(serifFont);


    //Add a button to connect slot
    QFont buttonFont("Times", 12, QFont::Bold);
    QPushButton *button = new QPushButton(this);
    button->setText("CLICK ME");
    button->setFont(buttonFont);
    button->move(60, 120);

    connect(button, SIGNAL(clicked()), this, SLOT(buttonClicked()));
}

void RockWidget::buttonClicked()
{
    QMessageBox::information(this,"Message", "You clicked on button");

}

QSize RockWidget::sizeHint() const
{
    return QSize(300, 300);
}
