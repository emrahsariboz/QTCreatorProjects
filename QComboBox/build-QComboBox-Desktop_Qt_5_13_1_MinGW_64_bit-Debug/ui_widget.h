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
#include <QtWidgets/QComboBox>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Widget
{
public:
    QHBoxLayout *horizontalLayout;
    QComboBox *comboBox;
    QVBoxLayout *verticalLayout;
    QPushButton *captureValButton;
    QPushButton *setValueButton;
    QPushButton *getValueButton;

    void setupUi(QWidget *Widget)
    {
        if (Widget->objectName().isEmpty())
            Widget->setObjectName(QString::fromUtf8("Widget"));
        Widget->resize(367, 162);
        horizontalLayout = new QHBoxLayout(Widget);
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        comboBox = new QComboBox(Widget);
        comboBox->setObjectName(QString::fromUtf8("comboBox"));

        horizontalLayout->addWidget(comboBox);

        verticalLayout = new QVBoxLayout();
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        captureValButton = new QPushButton(Widget);
        captureValButton->setObjectName(QString::fromUtf8("captureValButton"));

        verticalLayout->addWidget(captureValButton);

        setValueButton = new QPushButton(Widget);
        setValueButton->setObjectName(QString::fromUtf8("setValueButton"));

        verticalLayout->addWidget(setValueButton);

        getValueButton = new QPushButton(Widget);
        getValueButton->setObjectName(QString::fromUtf8("getValueButton"));

        verticalLayout->addWidget(getValueButton);


        horizontalLayout->addLayout(verticalLayout);


        retranslateUi(Widget);

        QMetaObject::connectSlotsByName(Widget);
    } // setupUi

    void retranslateUi(QWidget *Widget)
    {
        Widget->setWindowTitle(QCoreApplication::translate("Widget", "Widget", nullptr));
        captureValButton->setText(QCoreApplication::translate("Widget", "Capture Value", nullptr));
        setValueButton->setText(QCoreApplication::translate("Widget", "Set Value", nullptr));
        getValueButton->setText(QCoreApplication::translate("Widget", "Get Values", nullptr));
    } // retranslateUi

};

namespace Ui {
    class Widget: public Ui_Widget {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_WIDGET_H
