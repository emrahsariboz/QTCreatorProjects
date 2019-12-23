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
#include <QtWidgets/QCheckBox>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QRadioButton>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Widget
{
public:
    QVBoxLayout *verticalLayout_4;
    QHBoxLayout *horizontalLayout_3;
    QGroupBox *groupBox_2;
    QHBoxLayout *horizontalLayout_2;
    QVBoxLayout *verticalLayout_2;
    QCheckBox *cppCheckBox;
    QCheckBox *javaCheckBox;
    QCheckBox *pythonCheckBox;
    QGroupBox *groupBox;
    QHBoxLayout *horizontalLayout;
    QVBoxLayout *verticalLayout;
    QCheckBox *checkBox;
    QCheckBox *checkBox_2;
    QCheckBox *checkBox_3;
    QGroupBox *groupBox_3;
    QWidget *widget;
    QVBoxLayout *verticalLayout_3;
    QRadioButton *radioButtonA;
    QRadioButton *radioButtonB;
    QRadioButton *radioButtonC;
    QRadioButton *radioButtonD;
    QPushButton *grabData;
    QPushButton *pushButton_2;

    void setupUi(QWidget *Widget)
    {
        if (Widget->objectName().isEmpty())
            Widget->setObjectName(QString::fromUtf8("Widget"));
        Widget->resize(363, 408);
        verticalLayout_4 = new QVBoxLayout(Widget);
        verticalLayout_4->setObjectName(QString::fromUtf8("verticalLayout_4"));
        horizontalLayout_3 = new QHBoxLayout();
        horizontalLayout_3->setObjectName(QString::fromUtf8("horizontalLayout_3"));
        groupBox_2 = new QGroupBox(Widget);
        groupBox_2->setObjectName(QString::fromUtf8("groupBox_2"));
        horizontalLayout_2 = new QHBoxLayout(groupBox_2);
        horizontalLayout_2->setObjectName(QString::fromUtf8("horizontalLayout_2"));
        verticalLayout_2 = new QVBoxLayout();
        verticalLayout_2->setObjectName(QString::fromUtf8("verticalLayout_2"));
        cppCheckBox = new QCheckBox(groupBox_2);
        cppCheckBox->setObjectName(QString::fromUtf8("cppCheckBox"));

        verticalLayout_2->addWidget(cppCheckBox);

        javaCheckBox = new QCheckBox(groupBox_2);
        javaCheckBox->setObjectName(QString::fromUtf8("javaCheckBox"));

        verticalLayout_2->addWidget(javaCheckBox);

        pythonCheckBox = new QCheckBox(groupBox_2);
        pythonCheckBox->setObjectName(QString::fromUtf8("pythonCheckBox"));

        verticalLayout_2->addWidget(pythonCheckBox);


        horizontalLayout_2->addLayout(verticalLayout_2);


        horizontalLayout_3->addWidget(groupBox_2);

        groupBox = new QGroupBox(Widget);
        groupBox->setObjectName(QString::fromUtf8("groupBox"));
        horizontalLayout = new QHBoxLayout(groupBox);
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        verticalLayout = new QVBoxLayout();
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        checkBox = new QCheckBox(groupBox);
        checkBox->setObjectName(QString::fromUtf8("checkBox"));

        verticalLayout->addWidget(checkBox);

        checkBox_2 = new QCheckBox(groupBox);
        checkBox_2->setObjectName(QString::fromUtf8("checkBox_2"));

        verticalLayout->addWidget(checkBox_2);

        checkBox_3 = new QCheckBox(groupBox);
        checkBox_3->setObjectName(QString::fromUtf8("checkBox_3"));

        verticalLayout->addWidget(checkBox_3);


        horizontalLayout->addLayout(verticalLayout);


        horizontalLayout_3->addWidget(groupBox);


        verticalLayout_4->addLayout(horizontalLayout_3);

        groupBox_3 = new QGroupBox(Widget);
        groupBox_3->setObjectName(QString::fromUtf8("groupBox_3"));
        widget = new QWidget(groupBox_3);
        widget->setObjectName(QString::fromUtf8("widget"));
        widget->setGeometry(QRect(80, 40, 87, 100));
        verticalLayout_3 = new QVBoxLayout(widget);
        verticalLayout_3->setObjectName(QString::fromUtf8("verticalLayout_3"));
        verticalLayout_3->setContentsMargins(0, 0, 0, 0);
        radioButtonA = new QRadioButton(widget);
        radioButtonA->setObjectName(QString::fromUtf8("radioButtonA"));

        verticalLayout_3->addWidget(radioButtonA);

        radioButtonB = new QRadioButton(widget);
        radioButtonB->setObjectName(QString::fromUtf8("radioButtonB"));

        verticalLayout_3->addWidget(radioButtonB);

        radioButtonC = new QRadioButton(widget);
        radioButtonC->setObjectName(QString::fromUtf8("radioButtonC"));

        verticalLayout_3->addWidget(radioButtonC);

        radioButtonD = new QRadioButton(widget);
        radioButtonD->setObjectName(QString::fromUtf8("radioButtonD"));

        verticalLayout_3->addWidget(radioButtonD);


        verticalLayout_4->addWidget(groupBox_3);

        grabData = new QPushButton(Widget);
        grabData->setObjectName(QString::fromUtf8("grabData"));

        verticalLayout_4->addWidget(grabData);

        pushButton_2 = new QPushButton(Widget);
        pushButton_2->setObjectName(QString::fromUtf8("pushButton_2"));

        verticalLayout_4->addWidget(pushButton_2);


        retranslateUi(Widget);

        QMetaObject::connectSlotsByName(Widget);
    } // setupUi

    void retranslateUi(QWidget *Widget)
    {
        Widget->setWindowTitle(QCoreApplication::translate("Widget", "Widget", nullptr));
        groupBox_2->setTitle(QCoreApplication::translate("Widget", "Choose Language (Non exclusive)", nullptr));
        cppCheckBox->setText(QCoreApplication::translate("Widget", "C++", nullptr));
        javaCheckBox->setText(QCoreApplication::translate("Widget", "Java", nullptr));
        pythonCheckBox->setText(QCoreApplication::translate("Widget", "Python", nullptr));
        groupBox->setTitle(QCoreApplication::translate("Widget", "Chose OS(Exclusive)", nullptr));
        checkBox->setText(QCoreApplication::translate("Widget", "Windows", nullptr));
        checkBox_2->setText(QCoreApplication::translate("Widget", "Linux", nullptr));
        checkBox_3->setText(QCoreApplication::translate("Widget", "Mac", nullptr));
        groupBox_3->setTitle(QCoreApplication::translate("Widget", "Choose Answer", nullptr));
        radioButtonA->setText(QCoreApplication::translate("Widget", "A", nullptr));
        radioButtonB->setText(QCoreApplication::translate("Widget", "B", nullptr));
        radioButtonC->setText(QCoreApplication::translate("Widget", "C", nullptr));
        radioButtonD->setText(QCoreApplication::translate("Widget", "D", nullptr));
        grabData->setText(QCoreApplication::translate("Widget", "Grab Data", nullptr));
        pushButton_2->setText(QCoreApplication::translate("Widget", "Set State", nullptr));
    } // retranslateUi

};

namespace Ui {
    class Widget: public Ui_Widget {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_WIDGET_H
