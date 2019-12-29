/********************************************************************************
** Form generated from reading UI file 'qdialoginfo.ui'
**
** Created by: Qt User Interface Compiler version 5.13.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_QDIALOGINFO_H
#define UI_QDIALOGINFO_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QTextEdit>
#include <QtWidgets/QVBoxLayout>

QT_BEGIN_NAMESPACE

class Ui_QDialogInfo
{
public:
    QVBoxLayout *verticalLayout;
    QTextEdit *textEdit;
    QPushButton *pushButton;
    QPushButton *pushButton_2;

    void setupUi(QDialog *QDialogInfo)
    {
        if (QDialogInfo->objectName().isEmpty())
            QDialogInfo->setObjectName(QString::fromUtf8("QDialogInfo"));
        QDialogInfo->resize(345, 226);
        verticalLayout = new QVBoxLayout(QDialogInfo);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        textEdit = new QTextEdit(QDialogInfo);
        textEdit->setObjectName(QString::fromUtf8("textEdit"));

        verticalLayout->addWidget(textEdit);

        pushButton = new QPushButton(QDialogInfo);
        pushButton->setObjectName(QString::fromUtf8("pushButton"));

        verticalLayout->addWidget(pushButton);

        pushButton_2 = new QPushButton(QDialogInfo);
        pushButton_2->setObjectName(QString::fromUtf8("pushButton_2"));

        verticalLayout->addWidget(pushButton_2);


        retranslateUi(QDialogInfo);

        QMetaObject::connectSlotsByName(QDialogInfo);
    } // setupUi

    void retranslateUi(QDialog *QDialogInfo)
    {
        QDialogInfo->setWindowTitle(QCoreApplication::translate("QDialogInfo", "Dialog", nullptr));
        pushButton->setText(QCoreApplication::translate("QDialogInfo", "Confirm", nullptr));
        pushButton_2->setText(QCoreApplication::translate("QDialogInfo", "PushButton", nullptr));
    } // retranslateUi

};

namespace Ui {
    class QDialogInfo: public Ui_QDialogInfo {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_QDIALOGINFO_H
