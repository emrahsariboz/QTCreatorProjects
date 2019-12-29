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
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Widget
{
public:
    QVBoxLayout *verticalLayout;
    QPushButton *pushButton;
    QLabel *uiTextLabl;
    QLabel *codeTextLaberl;

    void setupUi(QWidget *Widget)
    {
        if (Widget->objectName().isEmpty())
            Widget->setObjectName(QString::fromUtf8("Widget"));
        Widget->resize(438, 189);
        verticalLayout = new QVBoxLayout(Widget);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        pushButton = new QPushButton(Widget);
        pushButton->setObjectName(QString::fromUtf8("pushButton"));

        verticalLayout->addWidget(pushButton);

        uiTextLabl = new QLabel(Widget);
        uiTextLabl->setObjectName(QString::fromUtf8("uiTextLabl"));
        QFont font;
        font.setPointSize(14);
        font.setBold(true);
        font.setWeight(75);
        uiTextLabl->setFont(font);
        uiTextLabl->setStyleSheet(QString::fromUtf8("background-color: rgb(170, 255, 127);\n"
"color: rgb(94, 234, 255);"));

        verticalLayout->addWidget(uiTextLabl);

        codeTextLaberl = new QLabel(Widget);
        codeTextLaberl->setObjectName(QString::fromUtf8("codeTextLaberl"));
        QFont font1;
        font1.setPointSize(16);
        font1.setBold(true);
        font1.setWeight(75);
        codeTextLaberl->setFont(font1);

        verticalLayout->addWidget(codeTextLaberl);


        retranslateUi(Widget);

        QMetaObject::connectSlotsByName(Widget);
    } // setupUi

    void retranslateUi(QWidget *Widget)
    {
        Widget->setWindowTitle(QCoreApplication::translate("Widget", "Widget", nullptr));
        pushButton->setText(QCoreApplication::translate("Widget", "Click Me", nullptr));
        uiTextLabl->setText(QCoreApplication::translate("Widget", "UIText ", nullptr));
        codeTextLaberl->setText(QCoreApplication::translate("Widget", "Code Text", nullptr));
    } // retranslateUi

};

namespace Ui {
    class Widget: public Ui_Widget {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_WIDGET_H
