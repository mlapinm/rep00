/********************************************************************************
** Form generated from reading UI file 'dlgfault.ui'
**
** Created by: Qt User Interface Compiler version 4.8.5
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_DLGFAULT_H
#define UI_DLGFAULT_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QDialog>
#include <QtGui/QHeaderView>
#include <QtGui/QLabel>
#include <QtGui/QPushButton>

QT_BEGIN_NAMESPACE

class Ui_DlgFaultClass
{
public:
    QPushButton *pushButton;
    QLabel *label;

    void setupUi(QDialog *DlgFaultClass)
    {
        if (DlgFaultClass->objectName().isEmpty())
            DlgFaultClass->setObjectName(QString::fromUtf8("DlgFaultClass"));
        DlgFaultClass->setWindowModality(Qt::WindowModal);
        DlgFaultClass->resize(400, 300);
        pushButton = new QPushButton(DlgFaultClass);
        pushButton->setObjectName(QString::fromUtf8("pushButton"));
        pushButton->setGeometry(QRect(170, 220, 75, 23));
        label = new QLabel(DlgFaultClass);
        label->setObjectName(QString::fromUtf8("label"));
        label->setGeometry(QRect(90, 60, 221, 131));

        retranslateUi(DlgFaultClass);

        QMetaObject::connectSlotsByName(DlgFaultClass);
    } // setupUi

    void retranslateUi(QDialog *DlgFaultClass)
    {
        DlgFaultClass->setWindowTitle(QApplication::translate("DlgFaultClass", "DlgFault", 0, QApplication::UnicodeUTF8));
        pushButton->setText(QApplication::translate("DlgFaultClass", "PushButton", 0, QApplication::UnicodeUTF8));
        label->setText(QApplication::translate("DlgFaultClass", "TextLabel", 0, QApplication::UnicodeUTF8));
    } // retranslateUi

};

namespace Ui {
    class DlgFaultClass: public Ui_DlgFaultClass {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_DLGFAULT_H
