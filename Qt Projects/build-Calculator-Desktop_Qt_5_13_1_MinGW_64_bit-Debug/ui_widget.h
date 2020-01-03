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
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Widget
{
public:
    QGridLayout *gridLayout;
    QPushButton *Button8;
    QPushButton *Button3;
    QPushButton *Subtraction;
    QPushButton *Addition;
    QPushButton *Button7;
    QPushButton *Button1;
    QPushButton *Button0;
    QPushButton *Button6;
    QPushButton *Division;
    QLineEdit *Display;
    QPushButton *Clear;
    QPushButton *Button9;
    QPushButton *Multiplication;
    QPushButton *Button2;
    QPushButton *Button4;
    QPushButton *Button5;
    QPushButton *Equal;

    void setupUi(QWidget *Widget)
    {
        if (Widget->objectName().isEmpty())
            Widget->setObjectName(QString::fromUtf8("Widget"));
        Widget->resize(349, 203);
        QSizePolicy sizePolicy(QSizePolicy::Preferred, QSizePolicy::Expanding);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(Widget->sizePolicy().hasHeightForWidth());
        Widget->setSizePolicy(sizePolicy);
        gridLayout = new QGridLayout(Widget);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        Button8 = new QPushButton(Widget);
        Button8->setObjectName(QString::fromUtf8("Button8"));
        QSizePolicy sizePolicy1(QSizePolicy::Preferred, QSizePolicy::Preferred);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(Button8->sizePolicy().hasHeightForWidth());
        Button8->setSizePolicy(sizePolicy1);
        Button8->setStyleSheet(QString::fromUtf8("QPushButton{\n"
"	background-color: #F0FFFF;\n"
"	border : 1px solid gray;\n"
"	padding: 5px;\n"
"}\n"
"\n"
"QPushButton:pressed{\n"
"	background-color: #A9A9A9;\n"
"	border : 1px solid gray;\n"
"	padding: 5px;\n"
"}"));

        gridLayout->addWidget(Button8, 1, 1, 1, 1);

        Button3 = new QPushButton(Widget);
        Button3->setObjectName(QString::fromUtf8("Button3"));
        sizePolicy1.setHeightForWidth(Button3->sizePolicy().hasHeightForWidth());
        Button3->setSizePolicy(sizePolicy1);
        Button3->setStyleSheet(QString::fromUtf8("QPushButton{\n"
"	background-color: #F0FFFF;\n"
"	border : 1px solid gray;\n"
"	padding: 5px;\n"
"}\n"
"\n"
"QPushButton:pressed{\n"
"	background-color: #A9A9A9;\n"
"	border : 1px solid gray;\n"
"	padding: 5px;\n"
"}"));

        gridLayout->addWidget(Button3, 3, 2, 1, 1);

        Subtraction = new QPushButton(Widget);
        Subtraction->setObjectName(QString::fromUtf8("Subtraction"));
        sizePolicy1.setHeightForWidth(Subtraction->sizePolicy().hasHeightForWidth());
        Subtraction->setSizePolicy(sizePolicy1);
        Subtraction->setStyleSheet(QString::fromUtf8("QPushButton{\n"
"	background-color: #87CEFA;\n"
"	border : 1px solid gray;\n"
"	padding: 5px;\n"
"}\n"
"\n"
"QPushButton:pressed{\n"
"	background-color: #A9A9A9;\n"
"	border : 1px solid gray;\n"
"	padding: 5px;\n"
"}"));

        gridLayout->addWidget(Subtraction, 3, 3, 1, 1);

        Addition = new QPushButton(Widget);
        Addition->setObjectName(QString::fromUtf8("Addition"));
        sizePolicy1.setHeightForWidth(Addition->sizePolicy().hasHeightForWidth());
        Addition->setSizePolicy(sizePolicy1);
        Addition->setStyleSheet(QString::fromUtf8("QPushButton{\n"
"	background-color: #87CEFA;\n"
"	border : 1px solid gray;\n"
"	padding: 5px;\n"
"}\n"
"\n"
"QPushButton:pressed{\n"
"	background-color: #A9A9A9;\n"
"	border : 1px solid gray;\n"
"	padding: 5px;\n"
"}"));

        gridLayout->addWidget(Addition, 4, 3, 1, 1);

        Button7 = new QPushButton(Widget);
        Button7->setObjectName(QString::fromUtf8("Button7"));
        sizePolicy1.setHeightForWidth(Button7->sizePolicy().hasHeightForWidth());
        Button7->setSizePolicy(sizePolicy1);
        Button7->setStyleSheet(QString::fromUtf8("QPushButton{\n"
"	background-color: #F0FFFF;\n"
"	border : 1px solid gray;\n"
"	padding: 5px;\n"
"}\n"
"\n"
"QPushButton:pressed{\n"
"	background-color: #A9A9A9;\n"
"	border : 1px solid gray;\n"
"	padding: 5px;\n"
"}"));

        gridLayout->addWidget(Button7, 1, 0, 1, 1);

        Button1 = new QPushButton(Widget);
        Button1->setObjectName(QString::fromUtf8("Button1"));
        sizePolicy1.setHeightForWidth(Button1->sizePolicy().hasHeightForWidth());
        Button1->setSizePolicy(sizePolicy1);
        Button1->setStyleSheet(QString::fromUtf8("QPushButton{\n"
"	background-color: #F0FFFF;\n"
"	border : 1px solid gray;\n"
"	padding: 5px;\n"
"}\n"
"\n"
"QPushButton:pressed{\n"
"	background-color: #A9A9A9;\n"
"	border : 1px solid gray;\n"
"	padding: 5px;\n"
"}"));

        gridLayout->addWidget(Button1, 3, 0, 1, 1);

        Button0 = new QPushButton(Widget);
        Button0->setObjectName(QString::fromUtf8("Button0"));
        sizePolicy1.setHeightForWidth(Button0->sizePolicy().hasHeightForWidth());
        Button0->setSizePolicy(sizePolicy1);
        Button0->setStyleSheet(QString::fromUtf8("QPushButton{\n"
"	background-color: #F0FFFF;\n"
"	border : 1px solid gray;\n"
"	padding: 5px;\n"
"}\n"
"\n"
"QPushButton:pressed{\n"
"	background-color: #A9A9A9;\n"
"	border : 1px solid gray;\n"
"	padding: 5px;\n"
"}"));

        gridLayout->addWidget(Button0, 4, 1, 1, 1);

        Button6 = new QPushButton(Widget);
        Button6->setObjectName(QString::fromUtf8("Button6"));
        sizePolicy1.setHeightForWidth(Button6->sizePolicy().hasHeightForWidth());
        Button6->setSizePolicy(sizePolicy1);
        Button6->setStyleSheet(QString::fromUtf8("QPushButton{\n"
"	background-color: #F0FFFF;\n"
"	border : 1px solid gray;\n"
"	padding: 5px;\n"
"}\n"
"\n"
"QPushButton:pressed{\n"
"	background-color: #A9A9A9;\n"
"	border : 1px solid gray;\n"
"	padding: 5px;\n"
"}"));

        gridLayout->addWidget(Button6, 2, 2, 1, 1);

        Division = new QPushButton(Widget);
        Division->setObjectName(QString::fromUtf8("Division"));
        sizePolicy1.setHeightForWidth(Division->sizePolicy().hasHeightForWidth());
        Division->setSizePolicy(sizePolicy1);
        Division->setStyleSheet(QString::fromUtf8("QPushButton{\n"
"	background-color: #87CEFA;\n"
"	border : 1px solid gray;\n"
"	padding: 5px;\n"
"}\n"
"\n"
"QPushButton:pressed{\n"
"	background-color: #A9A9A9;\n"
"	border : 1px solid gray;\n"
"	padding: 5px;\n"
"}"));

        gridLayout->addWidget(Division, 1, 3, 1, 1);

        Display = new QLineEdit(Widget);
        Display->setObjectName(QString::fromUtf8("Display"));
        sizePolicy.setHeightForWidth(Display->sizePolicy().hasHeightForWidth());
        Display->setSizePolicy(sizePolicy);
        QFont font;
        font.setFamily(QString::fromUtf8("Cambria Math"));
        font.setPointSize(16);
        Display->setFont(font);
        Display->setLayoutDirection(Qt::LeftToRight);
        Display->setStyleSheet(QString::fromUtf8("QLineEdit{\n"
"	background-color: gray;\n"
"	border: 1px solid gray;\n"
"	padding: 5px;\n"
"	color: #ffffff;\n"
"}"));
        Display->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        gridLayout->addWidget(Display, 0, 0, 1, 4);

        Clear = new QPushButton(Widget);
        Clear->setObjectName(QString::fromUtf8("Clear"));
        sizePolicy1.setHeightForWidth(Clear->sizePolicy().hasHeightForWidth());
        Clear->setSizePolicy(sizePolicy1);
        Clear->setStyleSheet(QString::fromUtf8("QPushButton{\n"
"	background-color: #87CEFA;\n"
"	border : 1px solid gray;\n"
"	padding: 5px;\n"
"}\n"
"\n"
"QPushButton:pressed{\n"
"	background-color: #A9A9A9;\n"
"	border : 1px solid gray;\n"
"	padding: 5px;\n"
"}"));

        gridLayout->addWidget(Clear, 4, 0, 1, 1);

        Button9 = new QPushButton(Widget);
        Button9->setObjectName(QString::fromUtf8("Button9"));
        sizePolicy1.setHeightForWidth(Button9->sizePolicy().hasHeightForWidth());
        Button9->setSizePolicy(sizePolicy1);
        Button9->setStyleSheet(QString::fromUtf8("QPushButton{\n"
"	background-color: #F0FFFF;\n"
"	border : 1px solid gray;\n"
"	padding: 5px;\n"
"}\n"
"\n"
"QPushButton:pressed{\n"
"	background-color: #A9A9A9;\n"
"	border : 1px solid gray;\n"
"	padding: 5px;\n"
"}"));

        gridLayout->addWidget(Button9, 1, 2, 1, 1);

        Multiplication = new QPushButton(Widget);
        Multiplication->setObjectName(QString::fromUtf8("Multiplication"));
        sizePolicy1.setHeightForWidth(Multiplication->sizePolicy().hasHeightForWidth());
        Multiplication->setSizePolicy(sizePolicy1);
        Multiplication->setStyleSheet(QString::fromUtf8("QPushButton{\n"
"	background-color: #87CEFA;\n"
"	border : 1px solid gray;\n"
"	padding: 5px;\n"
"}\n"
"\n"
"QPushButton:pressed{\n"
"	background-color: #A9A9A9;\n"
"	border : 1px solid gray;\n"
"	padding: 5px;\n"
"}"));

        gridLayout->addWidget(Multiplication, 2, 3, 1, 1);

        Button2 = new QPushButton(Widget);
        Button2->setObjectName(QString::fromUtf8("Button2"));
        sizePolicy1.setHeightForWidth(Button2->sizePolicy().hasHeightForWidth());
        Button2->setSizePolicy(sizePolicy1);
        Button2->setStyleSheet(QString::fromUtf8("QPushButton{\n"
"	background-color: #F0FFFF;\n"
"	border : 1px solid gray;\n"
"	padding: 5px;\n"
"}\n"
"\n"
"QPushButton:pressed{\n"
"	background-color: #A9A9A9;\n"
"	border : 1px solid gray;\n"
"	padding: 5px;\n"
"}"));

        gridLayout->addWidget(Button2, 3, 1, 1, 1);

        Button4 = new QPushButton(Widget);
        Button4->setObjectName(QString::fromUtf8("Button4"));
        sizePolicy1.setHeightForWidth(Button4->sizePolicy().hasHeightForWidth());
        Button4->setSizePolicy(sizePolicy1);
        Button4->setStyleSheet(QString::fromUtf8("QPushButton{\n"
"	background-color: #F0FFFF;\n"
"	border : 1px solid gray;\n"
"	padding: 5px;\n"
"}\n"
"\n"
"QPushButton:pressed{\n"
"	background-color: #A9A9A9;\n"
"	border : 1px solid gray;\n"
"	padding: 5px;\n"
"}"));

        gridLayout->addWidget(Button4, 2, 0, 1, 1);

        Button5 = new QPushButton(Widget);
        Button5->setObjectName(QString::fromUtf8("Button5"));
        sizePolicy1.setHeightForWidth(Button5->sizePolicy().hasHeightForWidth());
        Button5->setSizePolicy(sizePolicy1);
        Button5->setStyleSheet(QString::fromUtf8("QPushButton{\n"
"	background-color: #F0FFFF;\n"
"	border : 1px solid gray;\n"
"	padding: 5px;\n"
"}\n"
"\n"
"QPushButton:pressed{\n"
"	background-color: #A9A9A9;\n"
"	border : 1px solid gray;\n"
"	padding: 5px;\n"
"}"));

        gridLayout->addWidget(Button5, 2, 1, 1, 1);

        Equal = new QPushButton(Widget);
        Equal->setObjectName(QString::fromUtf8("Equal"));
        sizePolicy1.setHeightForWidth(Equal->sizePolicy().hasHeightForWidth());
        Equal->setSizePolicy(sizePolicy1);
        Equal->setStyleSheet(QString::fromUtf8("QPushButton{\n"
"	background-color: #87CEFA;\n"
"	border : 1px solid gray;\n"
"	padding: 5px;\n"
"}\n"
"\n"
"QPushButton:pressed{\n"
"	background-color: #A9A9A9;\n"
"	border : 1px solid gray;\n"
"	padding: 5px;\n"
"}"));

        gridLayout->addWidget(Equal, 4, 2, 1, 1);


        retranslateUi(Widget);

        QMetaObject::connectSlotsByName(Widget);
    } // setupUi

    void retranslateUi(QWidget *Widget)
    {
        Widget->setWindowTitle(QCoreApplication::translate("Widget", "Widget", nullptr));
        Button8->setText(QCoreApplication::translate("Widget", "8", nullptr));
        Button3->setText(QCoreApplication::translate("Widget", "3", nullptr));
        Subtraction->setText(QCoreApplication::translate("Widget", "-", nullptr));
        Addition->setText(QCoreApplication::translate("Widget", "+", nullptr));
        Button7->setText(QCoreApplication::translate("Widget", "7", nullptr));
        Button1->setText(QCoreApplication::translate("Widget", "1", nullptr));
        Button0->setText(QCoreApplication::translate("Widget", "0", nullptr));
        Button6->setText(QCoreApplication::translate("Widget", "6", nullptr));
        Division->setText(QCoreApplication::translate("Widget", "/", nullptr));
        Display->setText(QCoreApplication::translate("Widget", "0.0", nullptr));
        Clear->setText(QCoreApplication::translate("Widget", "AC", nullptr));
        Button9->setText(QCoreApplication::translate("Widget", "9", nullptr));
        Multiplication->setText(QCoreApplication::translate("Widget", "*", nullptr));
        Button2->setText(QCoreApplication::translate("Widget", "2", nullptr));
        Button4->setText(QCoreApplication::translate("Widget", "4", nullptr));
        Button5->setText(QCoreApplication::translate("Widget", "5", nullptr));
        Equal->setText(QCoreApplication::translate("Widget", "=", nullptr));
    } // retranslateUi

};

namespace Ui {
    class Widget: public Ui_Widget {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_WIDGET_H
