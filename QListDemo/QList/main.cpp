#include <QCoreApplication>
#include <QDebug>
#include <QList>
using namespace std;

int main(int argc, char *argv[])
{
    QCoreApplication a(argc, argv);

    qDebug()<<"Hello World!";

    //Declare QList

    QList<QString> stringList;

    stringList<<"I am "<<"Lobing "<<"QT";


    stringList.append("a ");
    stringList.append("lot ");

    //Get the data from the lisst

    qDebug()<<stringList[0];

    for(auto i:stringList)
        qDebug()<<i;

    qDebug()<<"The number of element in list"<<stringList.count();

    //Loop through the elements

    for(int i=0; i<stringList.count(); i++)
        qDebug()<<"The element at index "<<QString::number(i) << "is" <<
                  stringList.at(i);



    return a.exec();
}
