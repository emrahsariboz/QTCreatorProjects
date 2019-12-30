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
#include <QtWidgets/QListWidget>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Widget
{
public:
    QHBoxLayout *horizontalLayout;
    QVBoxLayout *verticalLayout_2;
    QLineEdit *lineEditDir;
    QListWidget *listWidget;
    QVBoxLayout *verticalLayout;
    QPushButton *chooseDirButton;
    QPushButton *createDirButton;
    QPushButton *isValidDirButton;
    QPushButton *dirorFilebutton;
    QPushButton *folderContentButton;
    QSpacerItem *verticalSpacer;

    void setupUi(QWidget *Widget)
    {
        if (Widget->objectName().isEmpty())
            Widget->setObjectName(QString::fromUtf8("Widget"));
        Widget->resize(445, 314);
        horizontalLayout = new QHBoxLayout(Widget);
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        verticalLayout_2 = new QVBoxLayout();
        verticalLayout_2->setObjectName(QString::fromUtf8("verticalLayout_2"));
        lineEditDir = new QLineEdit(Widget);
        lineEditDir->setObjectName(QString::fromUtf8("lineEditDir"));

        verticalLayout_2->addWidget(lineEditDir);

        listWidget = new QListWidget(Widget);
        listWidget->setObjectName(QString::fromUtf8("listWidget"));

        verticalLayout_2->addWidget(listWidget);


        horizontalLayout->addLayout(verticalLayout_2);

        verticalLayout = new QVBoxLayout();
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        chooseDirButton = new QPushButton(Widget);
        chooseDirButton->setObjectName(QString::fromUtf8("chooseDirButton"));

        verticalLayout->addWidget(chooseDirButton);

        createDirButton = new QPushButton(Widget);
        createDirButton->setObjectName(QString::fromUtf8("createDirButton"));

        verticalLayout->addWidget(createDirButton);

        isValidDirButton = new QPushButton(Widget);
        isValidDirButton->setObjectName(QString::fromUtf8("isValidDirButton"));

        verticalLayout->addWidget(isValidDirButton);

        dirorFilebutton = new QPushButton(Widget);
        dirorFilebutton->setObjectName(QString::fromUtf8("dirorFilebutton"));

        verticalLayout->addWidget(dirorFilebutton);

        folderContentButton = new QPushButton(Widget);
        folderContentButton->setObjectName(QString::fromUtf8("folderContentButton"));

        verticalLayout->addWidget(folderContentButton);

        verticalSpacer = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout->addItem(verticalSpacer);


        horizontalLayout->addLayout(verticalLayout);


        retranslateUi(Widget);

        QMetaObject::connectSlotsByName(Widget);
    } // setupUi

    void retranslateUi(QWidget *Widget)
    {
        Widget->setWindowTitle(QCoreApplication::translate("Widget", "Widget", nullptr));
        chooseDirButton->setText(QCoreApplication::translate("Widget", "Choose Directory", nullptr));
        createDirButton->setText(QCoreApplication::translate("Widget", "Create Directory", nullptr));
        isValidDirButton->setText(QCoreApplication::translate("Widget", "Dir Exist?", nullptr));
        dirorFilebutton->setText(QCoreApplication::translate("Widget", "Dir or File", nullptr));
        folderContentButton->setText(QCoreApplication::translate("Widget", "Folder Content", nullptr));
    } // retranslateUi

};

namespace Ui {
    class Widget: public Ui_Widget {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_WIDGET_H
