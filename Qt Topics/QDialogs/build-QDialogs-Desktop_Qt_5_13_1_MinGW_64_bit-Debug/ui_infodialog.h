/********************************************************************************
** Form generated from reading UI file 'infodialog.ui'
**
** Created by: Qt User Interface Compiler version 5.13.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_INFODIALOG_H
#define UI_INFODIALOG_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QRadioButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_InfoDialog
{
public:
    QLabel *label;
    QGroupBox *groupBox;
    QVBoxLayout *verticalLayout;
    QRadioButton *windowsRadio;
    QRadioButton *linuxRadio;
    QRadioButton *macRadio;
    QWidget *widget;
    QHBoxLayout *horizontalLayout;
    QLabel *label_2;
    QLineEdit *positionLineEdit;
    QWidget *widget1;
    QHBoxLayout *horizontalLayout_2;
    QSpacerItem *horizontalSpacer;
    QPushButton *okButton;
    QPushButton *Cancel;

    void setupUi(QDialog *InfoDialog)
    {
        if (InfoDialog->objectName().isEmpty())
            InfoDialog->setObjectName(QString::fromUtf8("InfoDialog"));
        InfoDialog->resize(449, 337);
        label = new QLabel(InfoDialog);
        label->setObjectName(QString::fromUtf8("label"));
        label->setGeometry(QRect(50, 40, 91, 16));
        groupBox = new QGroupBox(InfoDialog);
        groupBox->setObjectName(QString::fromUtf8("groupBox"));
        groupBox->setGeometry(QRect(50, 110, 93, 113));
        verticalLayout = new QVBoxLayout(groupBox);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        windowsRadio = new QRadioButton(groupBox);
        windowsRadio->setObjectName(QString::fromUtf8("windowsRadio"));

        verticalLayout->addWidget(windowsRadio);

        linuxRadio = new QRadioButton(groupBox);
        linuxRadio->setObjectName(QString::fromUtf8("linuxRadio"));

        verticalLayout->addWidget(linuxRadio);

        macRadio = new QRadioButton(groupBox);
        macRadio->setObjectName(QString::fromUtf8("macRadio"));

        verticalLayout->addWidget(macRadio);

        widget = new QWidget(InfoDialog);
        widget->setObjectName(QString::fromUtf8("widget"));
        widget->setGeometry(QRect(50, 80, 137, 24));
        horizontalLayout = new QHBoxLayout(widget);
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        horizontalLayout->setContentsMargins(0, 0, 0, 0);
        label_2 = new QLabel(widget);
        label_2->setObjectName(QString::fromUtf8("label_2"));

        horizontalLayout->addWidget(label_2);

        positionLineEdit = new QLineEdit(widget);
        positionLineEdit->setObjectName(QString::fromUtf8("positionLineEdit"));

        horizontalLayout->addWidget(positionLineEdit);

        widget1 = new QWidget(InfoDialog);
        widget1->setObjectName(QString::fromUtf8("widget1"));
        widget1->setGeometry(QRect(60, 250, 331, 24));
        horizontalLayout_2 = new QHBoxLayout(widget1);
        horizontalLayout_2->setObjectName(QString::fromUtf8("horizontalLayout_2"));
        horizontalLayout_2->setContentsMargins(0, 0, 0, 0);
        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_2->addItem(horizontalSpacer);

        okButton = new QPushButton(widget1);
        okButton->setObjectName(QString::fromUtf8("okButton"));

        horizontalLayout_2->addWidget(okButton);

        Cancel = new QPushButton(widget1);
        Cancel->setObjectName(QString::fromUtf8("Cancel"));

        horizontalLayout_2->addWidget(Cancel);


        retranslateUi(InfoDialog);

        QMetaObject::connectSlotsByName(InfoDialog);
    } // setupUi

    void retranslateUi(QDialog *InfoDialog)
    {
        InfoDialog->setWindowTitle(QCoreApplication::translate("InfoDialog", "Dialog", nullptr));
        label->setText(QCoreApplication::translate("InfoDialog", "Your Information", nullptr));
        groupBox->setTitle(QCoreApplication::translate("InfoDialog", "Favorite OS", nullptr));
        windowsRadio->setText(QCoreApplication::translate("InfoDialog", "Windows", nullptr));
        linuxRadio->setText(QCoreApplication::translate("InfoDialog", "Linux", nullptr));
        macRadio->setText(QCoreApplication::translate("InfoDialog", "Mac", nullptr));
        label_2->setText(QCoreApplication::translate("InfoDialog", "Position", nullptr));
        okButton->setText(QCoreApplication::translate("InfoDialog", "OK", nullptr));
        Cancel->setText(QCoreApplication::translate("InfoDialog", "Cancel", nullptr));
    } // retranslateUi

};

namespace Ui {
    class InfoDialog: public Ui_InfoDialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_INFODIALOG_H
