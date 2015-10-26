/********************************************************************************
** Form generated from reading UI file 'tabpcm.ui'
**
** Created by: Qt User Interface Compiler version 4.8.5
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_TABPCM_H
#define UI_TABPCM_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QGroupBox>
#include <QtGui/QHeaderView>
#include <QtGui/QLabel>
#include <QtGui/QRadioButton>
#include <QtGui/QTabWidget>
#include <QtGui/QWidget>
#include "olineedit.h"
#include "plineedit.h"

QT_BEGIN_NAMESPACE

class Ui_TabPcm
{
public:
    QTabWidget *tabWidget_2;
    QWidget *tab_39;
    QLabel *label_56;
    QGroupBox *groupBox_364;
    PLineEdit *liEdNameBoard;
    QGroupBox *groupBox_369;
    OLineEdit *liEdPortBoard;
    QGroupBox *groupBox_370;
    OLineEdit *liEdSclonenie;
    QGroupBox *groupBox_371;
    OLineEdit *liEdIp;
    QGroupBox *groupBox_372;
    OLineEdit *liEdPortBase;
    QGroupBox *groupBox_365;
    QRadioButton *raBuPcmFoot;
    QRadioButton *raBuPcmMetr;

    void setupUi(QWidget *TabPcm)
    {
        if (TabPcm->objectName().isEmpty())
            TabPcm->setObjectName(QString::fromUtf8("TabPcm"));
        TabPcm->resize(893, 700);
        tabWidget_2 = new QTabWidget(TabPcm);
        tabWidget_2->setObjectName(QString::fromUtf8("tabWidget_2"));
        tabWidget_2->setGeometry(QRect(0, 0, 811, 691));
        tab_39 = new QWidget();
        tab_39->setObjectName(QString::fromUtf8("tab_39"));
        label_56 = new QLabel(tab_39);
        label_56->setObjectName(QString::fromUtf8("label_56"));
        label_56->setGeometry(QRect(50, 60, 211, 16));
        groupBox_364 = new QGroupBox(tab_39);
        groupBox_364->setObjectName(QString::fromUtf8("groupBox_364"));
        groupBox_364->setGeometry(QRect(40, 80, 201, 61));
        liEdNameBoard = new PLineEdit(groupBox_364);
        liEdNameBoard->setObjectName(QString::fromUtf8("liEdNameBoard"));
        liEdNameBoard->setGeometry(QRect(20, 20, 161, 20));
        groupBox_369 = new QGroupBox(tab_39);
        groupBox_369->setObjectName(QString::fromUtf8("groupBox_369"));
        groupBox_369->setGeometry(QRect(40, 320, 201, 61));
        liEdPortBoard = new OLineEdit(groupBox_369);
        liEdPortBoard->setObjectName(QString::fromUtf8("liEdPortBoard"));
        liEdPortBoard->setGeometry(QRect(20, 20, 161, 20));
        groupBox_370 = new QGroupBox(tab_39);
        groupBox_370->setObjectName(QString::fromUtf8("groupBox_370"));
        groupBox_370->setGeometry(QRect(280, 180, 121, 61));
        liEdSclonenie = new OLineEdit(groupBox_370);
        liEdSclonenie->setObjectName(QString::fromUtf8("liEdSclonenie"));
        liEdSclonenie->setGeometry(QRect(20, 20, 81, 20));
        groupBox_371 = new QGroupBox(tab_39);
        groupBox_371->setObjectName(QString::fromUtf8("groupBox_371"));
        groupBox_371->setGeometry(QRect(40, 180, 201, 61));
        liEdIp = new OLineEdit(groupBox_371);
        liEdIp->setObjectName(QString::fromUtf8("liEdIp"));
        liEdIp->setGeometry(QRect(20, 20, 161, 20));
        groupBox_372 = new QGroupBox(tab_39);
        groupBox_372->setObjectName(QString::fromUtf8("groupBox_372"));
        groupBox_372->setGeometry(QRect(40, 250, 201, 61));
        liEdPortBase = new OLineEdit(groupBox_372);
        liEdPortBase->setObjectName(QString::fromUtf8("liEdPortBase"));
        liEdPortBase->setGeometry(QRect(20, 20, 161, 20));
        groupBox_365 = new QGroupBox(tab_39);
        groupBox_365->setObjectName(QString::fromUtf8("groupBox_365"));
        groupBox_365->setGeometry(QRect(280, 80, 201, 81));
        raBuPcmFoot = new QRadioButton(groupBox_365);
        raBuPcmFoot->setObjectName(QString::fromUtf8("raBuPcmFoot"));
        raBuPcmFoot->setGeometry(QRect(20, 50, 101, 18));
        raBuPcmMetr = new QRadioButton(groupBox_365);
        raBuPcmMetr->setObjectName(QString::fromUtf8("raBuPcmMetr"));
        raBuPcmMetr->setGeometry(QRect(20, 20, 101, 18));
        tabWidget_2->addTab(tab_39, QString());

        retranslateUi(TabPcm);

        tabWidget_2->setCurrentIndex(0);


        QMetaObject::connectSlotsByName(TabPcm);
    } // setupUi

    void retranslateUi(QWidget *TabPcm)
    {
        TabPcm->setWindowTitle(QApplication::translate("TabPcm", "TabPcm", 0, QApplication::UnicodeUTF8));
        label_56->setText(QApplication::translate("TabPcm", "\320\237\320\273\320\260\321\202\320\260 \320\237\320\241\320\237", 0, QApplication::UnicodeUTF8));
        groupBox_364->setTitle(QApplication::translate("TabPcm", "\321\204\321\203\320\275\320\272\321\206\320\270\320\276\320\275\320\260\320\273\321\214\320\275\320\276\320\265 \320\275\320\260\320\267\320\262\320\260\320\275\320\270\320\265 \320\277\320\273\320\260\321\202\321\213", 0, QApplication::UnicodeUTF8));
        groupBox_369->setTitle(QApplication::translate("TabPcm", "\320\277\320\276\321\200\321\202 \320\277\320\273\320\260\321\202\321\213", 0, QApplication::UnicodeUTF8));
        groupBox_370->setTitle(QApplication::translate("TabPcm", "\321\201\320\272\320\273\320\276\320\275\320\265\320\275\320\270\320\265", 0, QApplication::UnicodeUTF8));
        groupBox_371->setTitle(QApplication::translate("TabPcm", "\320\260\320\264\321\200\320\265\321\201 IP", 0, QApplication::UnicodeUTF8));
        groupBox_372->setTitle(QApplication::translate("TabPcm", "\320\261\320\260\320\267\320\276\320\262\321\213\320\271 \320\277\320\276\321\200\321\202", 0, QApplication::UnicodeUTF8));
        groupBox_365->setTitle(QApplication::translate("TabPcm", "\320\222\321\205\320\276\320\264\320\275\320\260\321\217 \320\274\320\265\321\202\320\265\320\276 \320\270\320\275\321\204\320\276\321\200\320\274\320\260\321\206\320\270\321\217", 0, QApplication::UnicodeUTF8));
        raBuPcmFoot->setText(QApplication::translate("TabPcm", "\320\262 \321\204\321\203\321\202\320\260\321\205", 0, QApplication::UnicodeUTF8));
        raBuPcmMetr->setText(QApplication::translate("TabPcm", "\320\262 \320\274\320\265\321\202\321\200\320\260\321\205", 0, QApplication::UnicodeUTF8));
        tabWidget_2->setTabText(tabWidget_2->indexOf(tab_39), QApplication::translate("TabPcm", "\320\236\320\261\321\211\320\270\320\265", 0, QApplication::UnicodeUTF8));
    } // retranslateUi

};

namespace Ui {
    class TabPcm: public Ui_TabPcm {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_TABPCM_H
