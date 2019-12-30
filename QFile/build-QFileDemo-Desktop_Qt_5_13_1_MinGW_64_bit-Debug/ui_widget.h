/********************************************************************************
** Form generated from reading UI file 'widget.ui'
**
** Created by: Qt User Interface Compiler version 5.13.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_WIDGET_H
#define UI_WIDGET_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QTextEdit>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Widget
{
public:
    QHBoxLayout *horizontalLayout_4;
    QVBoxLayout *verticalLayout;
    QTextEdit *textEdit;
    QHBoxLayout *horizontalLayout_3;
    QPushButton *readButton;
    QPushButton *writeToFile;
    QHBoxLayout *horizontalLayout;
    QPushButton *selectFile;
    QLineEdit *sourceLineEdit;
    QHBoxLayout *horizontalLayout_2;
    QPushButton *copyFile;
    QLineEdit *destinationLineEdit;

    void setupUi(QWidget *Widget)
    {
        if (Widget->objectName().isEmpty())
            Widget->setObjectName(QString::fromUtf8("Widget"));
        Widget->resize(317, 297);
        horizontalLayout_4 = new QHBoxLayout(Widget);
        horizontalLayout_4->setObjectName(QString::fromUtf8("horizontalLayout_4"));
        verticalLayout = new QVBoxLayout();
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        textEdit = new QTextEdit(Widget);
        textEdit->setObjectName(QString::fromUtf8("textEdit"));

        verticalLayout->addWidget(textEdit);

        horizontalLayout_3 = new QHBoxLayout();
        horizontalLayout_3->setObjectName(QString::fromUtf8("horizontalLayout_3"));
        readButton = new QPushButton(Widget);
        readButton->setObjectName(QString::fromUtf8("readButton"));

        horizontalLayout_3->addWidget(readButton);

        writeToFile = new QPushButton(Widget);
        writeToFile->setObjectName(QString::fromUtf8("writeToFile"));

        horizontalLayout_3->addWidget(writeToFile);


        verticalLayout->addLayout(horizontalLayout_3);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        selectFile = new QPushButton(Widget);
        selectFile->setObjectName(QString::fromUtf8("selectFile"));

        horizontalLayout->addWidget(selectFile);

        sourceLineEdit = new QLineEdit(Widget);
        sourceLineEdit->setObjectName(QString::fromUtf8("sourceLineEdit"));

        horizontalLayout->addWidget(sourceLineEdit);


        verticalLayout->addLayout(horizontalLayout);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName(QString::fromUtf8("horizontalLayout_2"));
        copyFile = new QPushButton(Widget);
        copyFile->setObjectName(QString::fromUtf8("copyFile"));

        horizontalLayout_2->addWidget(copyFile);

        destinationLineEdit = new QLineEdit(Widget);
        destinationLineEdit->setObjectName(QString::fromUtf8("destinationLineEdit"));

        horizontalLayout_2->addWidget(destinationLineEdit);


        verticalLayout->addLayout(horizontalLayout_2);


        horizontalLayout_4->addLayout(verticalLayout);


        retranslateUi(Widget);

        QMetaObject::connectSlotsByName(Widget);
    } // setupUi

    void retranslateUi(QWidget *Widget)
    {
        Widget->setWindowTitle(QCoreApplication::translate("Widget", "Widget", nullptr));
        readButton->setText(QCoreApplication::translate("Widget", "Read", nullptr));
        writeToFile->setText(QCoreApplication::translate("Widget", "Write", nullptr));
        selectFile->setText(QCoreApplication::translate("Widget", "Select File", nullptr));
        copyFile->setText(QCoreApplication::translate("Widget", "Copy File", nullptr));
    } // retranslateUi

};

namespace Ui {
    class Widget: public Ui_Widget {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_WIDGET_H
