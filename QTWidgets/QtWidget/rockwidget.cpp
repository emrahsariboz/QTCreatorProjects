#include "rockwidget.h"
#include <QLabel>

RockWidget::RockWidget(QWidget *parent) : QWidget(parent)
{
    //setWindowTitle("Rock Widget Here");
    QLabel *label = new QLabel("This is my label", this);


}
