#include "widget.h"

#include <QApplication>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    //Application Wise
    //It will look same in all OS
    //a.setStyleSheet("QPushButton{"
      //              "color:red; background-color:white;}");
    Widget w;
    w.show();
    return a.exec();
}
