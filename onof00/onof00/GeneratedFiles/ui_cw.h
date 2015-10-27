/********************************************************************************
** Form generated from reading UI file 'cw.ui'
**
** Created by: Qt User Interface Compiler version 4.8.5
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_CW_H
#define UI_CW_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QGridLayout>
#include <QtGui/QHBoxLayout>
#include <QtGui/QHeaderView>
#include <QtGui/QLabel>
#include <QtGui/QLineEdit>
#include <QtGui/QPushButton>
#include <QtGui/QTabWidget>
#include <QtGui/QTextEdit>
#include <QtGui/QVBoxLayout>
#include <QtGui/QWidget>

QT_BEGIN_NAMESPACE

class Ui_CWClass
{
public:
    QGridLayout *gridLayout;
    QWidget *widget;
    QGridLayout *gridLayout_2;
    QTabWidget *tabWidget;
    QWidget *tab;
    QGridLayout *gridLayout_3;
    QVBoxLayout *verticalLayout;
    QVBoxLayout *verticalLayout_2;
    QHBoxLayout *horizontalLayout_3;
    QLabel *label_2;
    QLabel *label_3;
    QHBoxLayout *horizontalLayout;
    QTextEdit *textEdit1;
    QTextEdit *textEdit2;
    QHBoxLayout *horizontalLayout_2;
    QLineEdit *lineEdit;
    QPushButton *puBuSet;
    QLabel *laWhatLog;
    QWidget *tab_4;
    QGridLayout *gridLayout_6;
    QTextEdit *teEdRezume;
    QWidget *tab_2;
    QGridLayout *gridLayout_4;
    QTextEdit *teEdHelp;
    QWidget *tab_3;
    QGridLayout *gridLayout_5;
    QTextEdit *teEdRem;

    void setupUi(QWidget *CWClass)
    {
        if (CWClass->objectName().isEmpty())
            CWClass->setObjectName(QString::fromUtf8("CWClass"));
        CWClass->resize(594, 505);
        gridLayout = new QGridLayout(CWClass);
        gridLayout->setSpacing(6);
        gridLayout->setContentsMargins(11, 11, 11, 11);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        widget = new QWidget(CWClass);
        widget->setObjectName(QString::fromUtf8("widget"));
        gridLayout_2 = new QGridLayout(widget);
        gridLayout_2->setSpacing(6);
        gridLayout_2->setContentsMargins(11, 11, 11, 11);
        gridLayout_2->setObjectName(QString::fromUtf8("gridLayout_2"));
        tabWidget = new QTabWidget(widget);
        tabWidget->setObjectName(QString::fromUtf8("tabWidget"));
        tab = new QWidget();
        tab->setObjectName(QString::fromUtf8("tab"));
        gridLayout_3 = new QGridLayout(tab);
        gridLayout_3->setSpacing(6);
        gridLayout_3->setContentsMargins(11, 11, 11, 11);
        gridLayout_3->setObjectName(QString::fromUtf8("gridLayout_3"));
        verticalLayout = new QVBoxLayout();
        verticalLayout->setSpacing(6);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));

        gridLayout_3->addLayout(verticalLayout, 2, 0, 1, 1);

        verticalLayout_2 = new QVBoxLayout();
        verticalLayout_2->setSpacing(6);
        verticalLayout_2->setObjectName(QString::fromUtf8("verticalLayout_2"));
        horizontalLayout_3 = new QHBoxLayout();
        horizontalLayout_3->setSpacing(6);
        horizontalLayout_3->setObjectName(QString::fromUtf8("horizontalLayout_3"));
        label_2 = new QLabel(tab);
        label_2->setObjectName(QString::fromUtf8("label_2"));

        horizontalLayout_3->addWidget(label_2);

        label_3 = new QLabel(tab);
        label_3->setObjectName(QString::fromUtf8("label_3"));

        horizontalLayout_3->addWidget(label_3);


        verticalLayout_2->addLayout(horizontalLayout_3);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setSpacing(6);
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        textEdit1 = new QTextEdit(tab);
        textEdit1->setObjectName(QString::fromUtf8("textEdit1"));
        QFont font;
        font.setPointSize(11);
        textEdit1->setFont(font);
        textEdit1->setTabStopWidth(100);

        horizontalLayout->addWidget(textEdit1);

        textEdit2 = new QTextEdit(tab);
        textEdit2->setObjectName(QString::fromUtf8("textEdit2"));
        QFont font1;
        font1.setPointSize(12);
        textEdit2->setFont(font1);

        horizontalLayout->addWidget(textEdit2);


        verticalLayout_2->addLayout(horizontalLayout);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setSpacing(6);
        horizontalLayout_2->setObjectName(QString::fromUtf8("horizontalLayout_2"));
        lineEdit = new QLineEdit(tab);
        lineEdit->setObjectName(QString::fromUtf8("lineEdit"));
        lineEdit->setMaximumSize(QSize(16777215, 16777215));

        horizontalLayout_2->addWidget(lineEdit);

        puBuSet = new QPushButton(tab);
        puBuSet->setObjectName(QString::fromUtf8("puBuSet"));
        puBuSet->setMaximumSize(QSize(75, 75));

        horizontalLayout_2->addWidget(puBuSet);


        verticalLayout_2->addLayout(horizontalLayout_2);


        gridLayout_3->addLayout(verticalLayout_2, 1, 0, 1, 1);

        laWhatLog = new QLabel(tab);
        laWhatLog->setObjectName(QString::fromUtf8("laWhatLog"));

        gridLayout_3->addWidget(laWhatLog, 0, 0, 1, 1);

        tabWidget->addTab(tab, QString());
        tab_4 = new QWidget();
        tab_4->setObjectName(QString::fromUtf8("tab_4"));
        gridLayout_6 = new QGridLayout(tab_4);
        gridLayout_6->setSpacing(6);
        gridLayout_6->setContentsMargins(11, 11, 11, 11);
        gridLayout_6->setObjectName(QString::fromUtf8("gridLayout_6"));
        teEdRezume = new QTextEdit(tab_4);
        teEdRezume->setObjectName(QString::fromUtf8("teEdRezume"));

        gridLayout_6->addWidget(teEdRezume, 0, 0, 1, 1);

        tabWidget->addTab(tab_4, QString());
        tab_2 = new QWidget();
        tab_2->setObjectName(QString::fromUtf8("tab_2"));
        gridLayout_4 = new QGridLayout(tab_2);
        gridLayout_4->setSpacing(6);
        gridLayout_4->setContentsMargins(11, 11, 11, 11);
        gridLayout_4->setObjectName(QString::fromUtf8("gridLayout_4"));
        teEdHelp = new QTextEdit(tab_2);
        teEdHelp->setObjectName(QString::fromUtf8("teEdHelp"));

        gridLayout_4->addWidget(teEdHelp, 0, 0, 1, 1);

        tabWidget->addTab(tab_2, QString());
        tab_3 = new QWidget();
        tab_3->setObjectName(QString::fromUtf8("tab_3"));
        gridLayout_5 = new QGridLayout(tab_3);
        gridLayout_5->setSpacing(6);
        gridLayout_5->setContentsMargins(11, 11, 11, 11);
        gridLayout_5->setObjectName(QString::fromUtf8("gridLayout_5"));
        teEdRem = new QTextEdit(tab_3);
        teEdRem->setObjectName(QString::fromUtf8("teEdRem"));

        gridLayout_5->addWidget(teEdRem, 0, 0, 1, 1);

        tabWidget->addTab(tab_3, QString());

        gridLayout_2->addWidget(tabWidget, 0, 0, 1, 1);


        gridLayout->addWidget(widget, 0, 0, 1, 1);


        retranslateUi(CWClass);

        tabWidget->setCurrentIndex(2);


        QMetaObject::connectSlotsByName(CWClass);
    } // setupUi

    void retranslateUi(QWidget *CWClass)
    {
        CWClass->setWindowTitle(QApplication::translate("CWClass", "CW", 0, QApplication::UnicodeUTF8));
        label_2->setText(QApplication::translate("CWClass", "read", 0, QApplication::UnicodeUTF8));
        label_3->setText(QApplication::translate("CWClass", "write", 0, QApplication::UnicodeUTF8));
        puBuSet->setText(QApplication::translate("CWClass", "Set", 0, QApplication::UnicodeUTF8));
        laWhatLog->setText(QApplication::translate("CWClass", ".", 0, QApplication::UnicodeUTF8));
        tabWidget->setTabText(tabWidget->indexOf(tab), QApplication::translate("CWClass", "main", 0, QApplication::UnicodeUTF8));
        tabWidget->setTabText(tabWidget->indexOf(tab_4), QApplication::translate("CWClass", "rezume", 0, QApplication::UnicodeUTF8));
        teEdHelp->setHtml(QApplication::translate("CWClass", "<!DOCTYPE HTML PUBLIC \"-//W3C//DTD HTML 4.0//EN\" \"http://www.w3.org/TR/REC-html40/strict.dtd\">\n"
"<html><head><meta name=\"qrichtext\" content=\"1\" /><style type=\"text/css\">\n"
"p, li { white-space: pre-wrap; }\n"
"</style></head><body style=\" font-family:'MS Shell Dlg 2'; font-size:7.8pt; font-weight:400; font-style:normal;\">\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-size:12pt;\">\320\265\321\201\321\202\321\214 \320\277\320\265\321\200\320\265\320\274\320\265\321\211\320\265\320\275\320\270\320\265 \320\272\321\203\321\200\321\201\320\276\321\200\320\260 \320\272 \320\272\320\276\320\275\321\206\321\203 \321\202\320\265\320\272\321\201\321\202\320\260</span></p>\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-size:12pt;\">read.save.settings \320\277\320\276 \320\270\320\274\320\265\320\275\320\270 \320"
                        "\277\321\200\320\270\320\273\320\276\320\266\320\265\320\275\320\270\321\217</span></p>\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-size:12pt;\">2</span></p></body></html>", 0, QApplication::UnicodeUTF8));
        tabWidget->setTabText(tabWidget->indexOf(tab_2), QApplication::translate("CWClass", "help", 0, QApplication::UnicodeUTF8));
        tabWidget->setTabText(tabWidget->indexOf(tab_3), QApplication::translate("CWClass", "rem", 0, QApplication::UnicodeUTF8));
    } // retranslateUi

};

namespace Ui {
    class CWClass: public Ui_CWClass {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_CW_H
