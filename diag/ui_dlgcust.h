/********************************************************************************
** Form generated from reading UI file 'dlgcust.ui'
**
** Created by: Qt User Interface Compiler version 4.8.5
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_DLGCUST_H
#define UI_DLGCUST_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QHeaderView>
#include <QtGui/QLabel>
#include <QtGui/QWidget>

QT_BEGIN_NAMESPACE

class Ui_DlgCustClass
{
public:
    QWidget *widCust;
    QLabel *laGetBoard;

    void setupUi(QWidget *DlgCustClass)
    {
        if (DlgCustClass->objectName().isEmpty())
            DlgCustClass->setObjectName(QString::fromUtf8("DlgCustClass"));
        DlgCustClass->resize(886, 688);
        widCust = new QWidget(DlgCustClass);
        widCust->setObjectName(QString::fromUtf8("widCust"));
        widCust->setGeometry(QRect(0, 0, 891, 691));
        laGetBoard = new QLabel(widCust);
        laGetBoard->setObjectName(QString::fromUtf8("laGetBoard"));
        laGetBoard->setGeometry(QRect(120, 270, 481, 41));
        QFont font;
        font.setPointSize(16);
        laGetBoard->setFont(font);
        laGetBoard->setAlignment(Qt::AlignCenter);

        retranslateUi(DlgCustClass);

        QMetaObject::connectSlotsByName(DlgCustClass);
    } // setupUi

    void retranslateUi(QWidget *DlgCustClass)
    {
        DlgCustClass->setWindowTitle(QApplication::translate("DlgCustClass", "DlgCust", 0, QApplication::UnicodeUTF8));
        laGetBoard->setText(QApplication::translate("DlgCustClass", "\320\222\321\213\320\261\320\265\321\200\320\270\321\202\320\265 \321\201\320\262\320\276\320\261\320\276\320\264\320\275\321\203\321\216 \320\277\320\273\320\260\321\202\321\203 \320\270\320\267 \321\201\320\277\320\270\321\201\320\272\320\260", 0, QApplication::UnicodeUTF8));
    } // retranslateUi

};

namespace Ui {
    class DlgCustClass: public Ui_DlgCustClass {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_DLGCUST_H
