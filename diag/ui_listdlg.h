/********************************************************************************
** Form generated from reading UI file 'listdlg.ui'
**
** Created by: Qt User Interface Compiler version 4.8.5
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_LISTDLG_H
#define UI_LISTDLG_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QDialog>
#include <QtGui/QHeaderView>
#include "list.h"

QT_BEGIN_NAMESPACE

class Ui_listDlgClass
{
public:
    List *widget;

    void setupUi(QDialog *listDlgClass)
    {
        if (listDlgClass->objectName().isEmpty())
            listDlgClass->setObjectName(QString::fromUtf8("listDlgClass"));
        listDlgClass->resize(1032, 702);
        widget = new List(listDlgClass);
        widget->setObjectName(QString::fromUtf8("widget"));
        widget->setGeometry(QRect(10, 10, 971, 681));

        retranslateUi(listDlgClass);

        QMetaObject::connectSlotsByName(listDlgClass);
    } // setupUi

    void retranslateUi(QDialog *listDlgClass)
    {
        listDlgClass->setWindowTitle(QApplication::translate("listDlgClass", "listDlg", 0, QApplication::UnicodeUTF8));
    } // retranslateUi

};

namespace Ui {
    class listDlgClass: public Ui_listDlgClass {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_LISTDLG_H
