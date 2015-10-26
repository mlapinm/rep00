/********************************************************************************
** Form generated from reading UI file 'widrastr.ui'
**
** Created by: Qt User Interface Compiler version 4.8.5
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_WIDRASTR_H
#define UI_WIDRASTR_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QHeaderView>
#include <QtGui/QLabel>
#include <QtGui/QWidget>

QT_BEGIN_NAMESPACE

class Ui_WidRastrClass
{
public:
    QLabel *label;
    QLabel *label_2;

    void setupUi(QWidget *WidRastrClass)
    {
        if (WidRastrClass->objectName().isEmpty())
            WidRastrClass->setObjectName(QString::fromUtf8("WidRastrClass"));
        WidRastrClass->resize(591, 261);
        label = new QLabel(WidRastrClass);
        label->setObjectName(QString::fromUtf8("label"));
        label->setGeometry(QRect(530, 230, 46, 14));
        label_2 = new QLabel(WidRastrClass);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        label_2->setGeometry(QRect(10, 10, 46, 14));

        retranslateUi(WidRastrClass);

        QMetaObject::connectSlotsByName(WidRastrClass);
    } // setupUi

    void retranslateUi(QWidget *WidRastrClass)
    {
        WidRastrClass->setWindowTitle(QApplication::translate("WidRastrClass", "WidRastr", 0, QApplication::UnicodeUTF8));
        label->setText(QApplication::translate("WidRastrClass", "TextLabel", 0, QApplication::UnicodeUTF8));
        label_2->setText(QApplication::translate("WidRastrClass", "TextLabel", 0, QApplication::UnicodeUTF8));
    } // retranslateUi

};

namespace Ui {
    class WidRastrClass: public Ui_WidRastrClass {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_WIDRASTR_H
