#include "widget.h"
#include <QApplication>
#include <QFile>
#include <QTextStream>

QString readTextFile(QString path){
    QFile file(path);

    if(file.open(QIODevice::ReadOnly | QIODevice::Text)){
        QTextStream in(&file);
        return in.readAll();
    }

    return "";
}

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    Widget w;
    w.show();


    QString css = readTextFile(":/Styles/style.css");

    if(css.length() > 0){
        a.setStyleSheet(css);
    }

    return a.exec();
}
