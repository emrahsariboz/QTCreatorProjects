#include "widget.h"
#include "ui_widget.h"
#include <QNetworkReply>
#include <QDebug>

Widget::Widget(QWidget *parent)
    : QWidget(parent)
    , ui(new Ui::Widget)
{
    ui->setupUi(this);

    netManager = new QNetworkAccessManager(this);
    netReply = nullptr;
    mDataBuffer = new QByteArray();

    //Network Request

    QNetworkRequest request;
    request.setUrl(QUrl("https://www.quora.com/Why-is-the-OSI-Reference-Model-important"));

    netReply = netManager->get(request);
    connect(netReply, &QIODevice::readyRead, this, &Widget::dataReadyToRead);
    connect(netReply, &QNetworkReply::finished, this, &Widget::dataReadFinished);



}

Widget::~Widget()
{
    delete ui;
}

void Widget::dataReadyToRead()
{
    qDebug()<<"Some data available";

    mDataBuffer->append(netReply->readAll());



}

void Widget::dataReadFinished()
{
    if(netReply->error()){
        qDebug()<<"Something went wrong!";
        qDebug()<<"Error: " << netReply->errorString();
        qDebug() << QSslSocket::sslLibraryBuildVersionString();
    }else{
        ui->textEdit->setPlainText(QString(*mDataBuffer));
    }
}

