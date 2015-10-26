/********************************************************************************
** Form generated from reading UI file 'tabps5.ui'
**
** Created by: Qt User Interface Compiler version 4.8.5
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_TABPS5_H
#define UI_TABPS5_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QCheckBox>
#include <QtGui/QFrame>
#include <QtGui/QGroupBox>
#include <QtGui/QHeaderView>
#include <QtGui/QLabel>
#include <QtGui/QPushButton>
#include <QtGui/QRadioButton>
#include <QtGui/QTabWidget>
#include <QtGui/QTextEdit>
#include <QtGui/QWidget>
#include "olineedit.h"
#include "plineedit.h"

QT_BEGIN_NAMESPACE

class Ui_TabPs5Class
{
public:
    QTabWidget *tabWidget;
    QWidget *tab;
    QTextEdit *teEd00;
    QPushButton *pushButton;
    QWidget *tab_2;
    QFrame *frPar;
    QLabel *label_149;
    QLabel *label_151;
    QLabel *label_152;
    PLineEdit *liEdCourseAmpl;
    QLabel *label_150;
    QLabel *label_145;
    PLineEdit *liEdHiVpp2;
    PLineEdit *liEdGlAmpl;
    PLineEdit *liEdPnt1;
    PLineEdit *liEdHiVpp1;
    QLabel *label_147;
    PLineEdit *liEdTorNulN2;
    PLineEdit *liEdPnt2;
    PLineEdit *liEdAxVpp;
    QLabel *label_146;
    QLabel *label_148;
    PLineEdit *liEdTorNulN1;
    QGroupBox *groupBox_202;
    PLineEdit *liEdNameRls;
    QGroupBox *groupBox_199;
    PLineEdit *liEdPointStandingDistance;
    PLineEdit *liEdPointStandingAzimuth;
    QLabel *label_161;
    QLabel *label_162;
    QGroupBox *groupBox_231;
    QRadioButton *raBuGradMagn;
    QRadioButton *raBuGradGeograph;
    QWidget *tab_9;
    QFrame *frObsch;
    QLabel *laBoard;
    QGroupBox *groupBox_64;
    OLineEdit *liEdIp;
    QGroupBox *groupBox_65;
    OLineEdit *liEdPortBase;
    QGroupBox *groupBox_4;
    PLineEdit *liEdFuNameBoard;
    QGroupBox *groupBox_80;
    QLabel *label_26;
    PLineEdit *liEdMaxTimeBlock;
    QGroupBox *groupBox_66;
    OLineEdit *liEdPortBoard;
    QGroupBox *groupBox_99;
    OLineEdit *liEdSclonenie;
    QGroupBox *groupBox_107;
    PLineEdit *liEdCourseLanding;
    QGroupBox *groupBox;
    QCheckBox *chBoComplectAuto;

    void setupUi(QWidget *TabPs5Class)
    {
        if (TabPs5Class->objectName().isEmpty())
            TabPs5Class->setObjectName(QString::fromUtf8("TabPs5Class"));
        TabPs5Class->resize(893, 695);
        tabWidget = new QTabWidget(TabPs5Class);
        tabWidget->setObjectName(QString::fromUtf8("tabWidget"));
        tabWidget->setGeometry(QRect(0, 10, 901, 701));
        tab = new QWidget();
        tab->setObjectName(QString::fromUtf8("tab"));
        teEd00 = new QTextEdit(tab);
        teEd00->setObjectName(QString::fromUtf8("teEd00"));
        teEd00->setGeometry(QRect(10, 10, 721, 631));
        QFont font;
        font.setFamily(QString::fromUtf8("Courier New"));
        teEd00->setFont(font);
        pushButton = new QPushButton(tab);
        pushButton->setObjectName(QString::fromUtf8("pushButton"));
        pushButton->setGeometry(QRect(740, 10, 75, 23));
        tabWidget->addTab(tab, QString());
        tab_2 = new QWidget();
        tab_2->setObjectName(QString::fromUtf8("tab_2"));
        frPar = new QFrame(tab_2);
        frPar->setObjectName(QString::fromUtf8("frPar"));
        frPar->setGeometry(QRect(0, 0, 871, 641));
        frPar->setFrameShape(QFrame::StyledPanel);
        frPar->setFrameShadow(QFrame::Raised);
        label_149 = new QLabel(frPar);
        label_149->setObjectName(QString::fromUtf8("label_149"));
        label_149->setGeometry(QRect(380, 150, 81, 16));
        label_151 = new QLabel(frPar);
        label_151->setObjectName(QString::fromUtf8("label_151"));
        label_151->setGeometry(QRect(110, 300, 261, 16));
        label_152 = new QLabel(frPar);
        label_152->setObjectName(QString::fromUtf8("label_152"));
        label_152->setGeometry(QRect(110, 330, 261, 16));
        liEdCourseAmpl = new PLineEdit(frPar);
        liEdCourseAmpl->setObjectName(QString::fromUtf8("liEdCourseAmpl"));
        liEdCourseAmpl->setGeometry(QRect(430, 330, 71, 20));
        label_150 = new QLabel(frPar);
        label_150->setObjectName(QString::fromUtf8("label_150"));
        label_150->setGeometry(QRect(480, 150, 81, 16));
        label_145 = new QLabel(frPar);
        label_145->setObjectName(QString::fromUtf8("label_145"));
        label_145->setGeometry(QRect(110, 180, 261, 16));
        liEdHiVpp2 = new PLineEdit(frPar);
        liEdHiVpp2->setObjectName(QString::fromUtf8("liEdHiVpp2"));
        liEdHiVpp2->setGeometry(QRect(480, 240, 71, 20));
        liEdGlAmpl = new PLineEdit(frPar);
        liEdGlAmpl->setObjectName(QString::fromUtf8("liEdGlAmpl"));
        liEdGlAmpl->setGeometry(QRect(430, 300, 71, 20));
        liEdPnt1 = new PLineEdit(frPar);
        liEdPnt1->setObjectName(QString::fromUtf8("liEdPnt1"));
        liEdPnt1->setGeometry(QRect(380, 210, 71, 20));
        liEdHiVpp1 = new PLineEdit(frPar);
        liEdHiVpp1->setObjectName(QString::fromUtf8("liEdHiVpp1"));
        liEdHiVpp1->setGeometry(QRect(380, 240, 71, 20));
        label_147 = new QLabel(frPar);
        label_147->setObjectName(QString::fromUtf8("label_147"));
        label_147->setGeometry(QRect(110, 240, 261, 16));
        liEdTorNulN2 = new PLineEdit(frPar);
        liEdTorNulN2->setObjectName(QString::fromUtf8("liEdTorNulN2"));
        liEdTorNulN2->setGeometry(QRect(480, 180, 71, 20));
        liEdPnt2 = new PLineEdit(frPar);
        liEdPnt2->setObjectName(QString::fromUtf8("liEdPnt2"));
        liEdPnt2->setGeometry(QRect(480, 210, 71, 20));
        liEdAxVpp = new PLineEdit(frPar);
        liEdAxVpp->setObjectName(QString::fromUtf8("liEdAxVpp"));
        liEdAxVpp->setGeometry(QRect(430, 270, 71, 20));
        label_146 = new QLabel(frPar);
        label_146->setObjectName(QString::fromUtf8("label_146"));
        label_146->setGeometry(QRect(110, 210, 261, 16));
        label_148 = new QLabel(frPar);
        label_148->setObjectName(QString::fromUtf8("label_148"));
        label_148->setGeometry(QRect(110, 270, 261, 16));
        liEdTorNulN1 = new PLineEdit(frPar);
        liEdTorNulN1->setObjectName(QString::fromUtf8("liEdTorNulN1"));
        liEdTorNulN1->setGeometry(QRect(380, 180, 71, 20));
        groupBox_202 = new QGroupBox(frPar);
        groupBox_202->setObjectName(QString::fromUtf8("groupBox_202"));
        groupBox_202->setGeometry(QRect(40, 30, 201, 51));
        liEdNameRls = new PLineEdit(groupBox_202);
        liEdNameRls->setObjectName(QString::fromUtf8("liEdNameRls"));
        liEdNameRls->setGeometry(QRect(10, 20, 181, 20));
        groupBox_199 = new QGroupBox(frPar);
        groupBox_199->setObjectName(QString::fromUtf8("groupBox_199"));
        groupBox_199->setGeometry(QRect(280, 30, 201, 81));
        liEdPointStandingDistance = new PLineEdit(groupBox_199);
        liEdPointStandingDistance->setObjectName(QString::fromUtf8("liEdPointStandingDistance"));
        liEdPointStandingDistance->setGeometry(QRect(90, 20, 91, 20));
        liEdPointStandingAzimuth = new PLineEdit(groupBox_199);
        liEdPointStandingAzimuth->setObjectName(QString::fromUtf8("liEdPointStandingAzimuth"));
        liEdPointStandingAzimuth->setGeometry(QRect(90, 50, 91, 20));
        label_161 = new QLabel(groupBox_199);
        label_161->setObjectName(QString::fromUtf8("label_161"));
        label_161->setGeometry(QRect(10, 20, 58, 16));
        label_162 = new QLabel(groupBox_199);
        label_162->setObjectName(QString::fromUtf8("label_162"));
        label_162->setGeometry(QRect(10, 50, 51, 16));
        groupBox_231 = new QGroupBox(frPar);
        groupBox_231->setObjectName(QString::fromUtf8("groupBox_231"));
        groupBox_231->setGeometry(QRect(490, 30, 201, 81));
        raBuGradMagn = new QRadioButton(groupBox_231);
        raBuGradMagn->setObjectName(QString::fromUtf8("raBuGradMagn"));
        raBuGradMagn->setGeometry(QRect(10, 20, 141, 18));
        QFont font1;
        font1.setFamily(QString::fromUtf8("Arial"));
        raBuGradMagn->setFont(font1);
        raBuGradGeograph = new QRadioButton(groupBox_231);
        raBuGradGeograph->setObjectName(QString::fromUtf8("raBuGradGeograph"));
        raBuGradGeograph->setGeometry(QRect(10, 40, 141, 18));
        tabWidget->addTab(tab_2, QString());
        tab_9 = new QWidget();
        tab_9->setObjectName(QString::fromUtf8("tab_9"));
        frObsch = new QFrame(tab_9);
        frObsch->setObjectName(QString::fromUtf8("frObsch"));
        frObsch->setGeometry(QRect(0, 0, 881, 651));
        frObsch->setFrameShape(QFrame::StyledPanel);
        frObsch->setFrameShadow(QFrame::Raised);
        laBoard = new QLabel(frObsch);
        laBoard->setObjectName(QString::fromUtf8("laBoard"));
        laBoard->setGeometry(QRect(50, 50, 211, 16));
        groupBox_64 = new QGroupBox(frObsch);
        groupBox_64->setObjectName(QString::fromUtf8("groupBox_64"));
        groupBox_64->setGeometry(QRect(50, 180, 201, 61));
        liEdIp = new OLineEdit(groupBox_64);
        liEdIp->setObjectName(QString::fromUtf8("liEdIp"));
        liEdIp->setGeometry(QRect(20, 20, 161, 20));
        groupBox_65 = new QGroupBox(frObsch);
        groupBox_65->setObjectName(QString::fromUtf8("groupBox_65"));
        groupBox_65->setGeometry(QRect(50, 250, 201, 61));
        liEdPortBase = new OLineEdit(groupBox_65);
        liEdPortBase->setObjectName(QString::fromUtf8("liEdPortBase"));
        liEdPortBase->setGeometry(QRect(20, 20, 161, 20));
        groupBox_4 = new QGroupBox(frObsch);
        groupBox_4->setObjectName(QString::fromUtf8("groupBox_4"));
        groupBox_4->setGeometry(QRect(50, 80, 201, 61));
        liEdFuNameBoard = new PLineEdit(groupBox_4);
        liEdFuNameBoard->setObjectName(QString::fromUtf8("liEdFuNameBoard"));
        liEdFuNameBoard->setGeometry(QRect(20, 20, 161, 20));
        groupBox_80 = new QGroupBox(frObsch);
        groupBox_80->setObjectName(QString::fromUtf8("groupBox_80"));
        groupBox_80->setGeometry(QRect(290, 180, 231, 61));
        label_26 = new QLabel(groupBox_80);
        label_26->setObjectName(QString::fromUtf8("label_26"));
        label_26->setGeometry(QRect(140, 20, 31, 21));
        liEdMaxTimeBlock = new PLineEdit(groupBox_80);
        liEdMaxTimeBlock->setObjectName(QString::fromUtf8("liEdMaxTimeBlock"));
        liEdMaxTimeBlock->setGeometry(QRect(20, 20, 101, 20));
        groupBox_66 = new QGroupBox(frObsch);
        groupBox_66->setObjectName(QString::fromUtf8("groupBox_66"));
        groupBox_66->setGeometry(QRect(50, 320, 201, 61));
        liEdPortBoard = new OLineEdit(groupBox_66);
        liEdPortBoard->setObjectName(QString::fromUtf8("liEdPortBoard"));
        liEdPortBoard->setGeometry(QRect(20, 20, 161, 20));
        groupBox_99 = new QGroupBox(frObsch);
        groupBox_99->setObjectName(QString::fromUtf8("groupBox_99"));
        groupBox_99->setGeometry(QRect(290, 80, 121, 61));
        liEdSclonenie = new OLineEdit(groupBox_99);
        liEdSclonenie->setObjectName(QString::fromUtf8("liEdSclonenie"));
        liEdSclonenie->setGeometry(QRect(20, 20, 81, 20));
        groupBox_107 = new QGroupBox(frObsch);
        groupBox_107->setObjectName(QString::fromUtf8("groupBox_107"));
        groupBox_107->setGeometry(QRect(440, 80, 131, 61));
        liEdCourseLanding = new PLineEdit(groupBox_107);
        liEdCourseLanding->setObjectName(QString::fromUtf8("liEdCourseLanding"));
        liEdCourseLanding->setGeometry(QRect(10, 20, 101, 20));
        groupBox = new QGroupBox(frObsch);
        groupBox->setObjectName(QString::fromUtf8("groupBox"));
        groupBox->setGeometry(QRect(290, 250, 231, 61));
        chBoComplectAuto = new QCheckBox(groupBox);
        chBoComplectAuto->setObjectName(QString::fromUtf8("chBoComplectAuto"));
        chBoComplectAuto->setGeometry(QRect(20, 20, 70, 17));
        tabWidget->addTab(tab_9, QString());

        retranslateUi(TabPs5Class);

        tabWidget->setCurrentIndex(1);


        QMetaObject::connectSlotsByName(TabPs5Class);
    } // setupUi

    void retranslateUi(QWidget *TabPs5Class)
    {
        TabPs5Class->setWindowTitle(QApplication::translate("TabPs5Class", "TabPs5", 0, QApplication::UnicodeUTF8));
        pushButton->setText(QApplication::translate("TabPs5Class", "ok", 0, QApplication::UnicodeUTF8));
        tabWidget->setTabText(tabWidget->indexOf(tab), QString());
        label_149->setText(QApplication::translate("TabPs5Class", "\320\275\320\260\320\277\321\200\320\260\320\262\320\273\320\265\320\275\320\270\320\265 1", 0, QApplication::UnicodeUTF8));
        label_151->setText(QApplication::translate("TabPs5Class", "\321\200\320\260\320\267\320\274\320\260\321\205 \320\263\320\273\320\270\321\201\321\201\320\260\320\264\321\213 \320\262 \320\263\321\200\320\260\320\264\321\203\321\201\320\260\321\205", 0, QApplication::UnicodeUTF8));
        label_152->setText(QApplication::translate("TabPs5Class", "\321\200\320\260\320\267\320\274\320\260\321\205 \320\272\321\203\321\200\321\201\320\260 \320\262 \320\263\321\200\320\260\320\264\321\203\321\201\320\260\321\205", 0, QApplication::UnicodeUTF8));
        label_150->setText(QApplication::translate("TabPs5Class", "\320\275\320\260\320\277\321\200\320\260\320\262\320\273\320\265\320\275\320\270\320\265 2", 0, QApplication::UnicodeUTF8));
        label_145->setText(QApplication::translate("TabPs5Class", "\321\202\320\276\321\200\320\265\321\206 \320\222\320\237\320\237 (\320\275\321\203\320\273\320\265\320\262\320\276\320\271 \320\272\320\270\320\273\320\276\320\274\320\265\321\202\321\200), \320\274\320\265\321\202\321\200\321\213", 0, QApplication::UnicodeUTF8));
        label_147->setText(QApplication::translate("TabPs5Class", "\320\262\321\213\321\201\320\276\321\202\320\260 \320\260\320\275\321\202\320\265\320\275\320\275\321\213 \320\276\321\202\320\275\320\276\321\201\320\270\321\202\320\265\320\273\321\214\320\275\320\276 \321\202\320\276\321\200\321\206\320\260 \320\222\320\237\320\237, \320\274\320\265\321\202\321\200\321\213", 0, QApplication::UnicodeUTF8));
        label_146->setText(QApplication::translate("TabPs5Class", "\321\202\320\276\321\207\320\272\320\260 \320\277\320\276\321\201\320\260\320\264\320\272\320\270, \320\274\320\265\321\202\321\200\321\213", 0, QApplication::UnicodeUTF8));
        label_148->setText(QApplication::translate("TabPs5Class", "\321\203\320\264\320\260\320\273\320\265\320\275\320\270\320\265 \320\276\321\202 \320\277\321\200\320\276\320\264\320\276\320\273\321\214\320\275\320\276\320\271 \320\276\321\201\320\270 \320\222\320\237\320\237, \320\274\320\265\321\202\321\200\321\213", 0, QApplication::UnicodeUTF8));
        groupBox_202->setTitle(QApplication::translate("TabPs5Class", "\320\275\320\260\320\267\320\262\320\260\320\275\320\270\320\265 \320\240\320\233\320\241", 0, QApplication::UnicodeUTF8));
        groupBox_199->setTitle(QApplication::translate("TabPs5Class", "\321\202\320\276\321\207\320\272\320\260 \321\201\321\202\320\276\321\217\320\275\320\270\321\217", 0, QApplication::UnicodeUTF8));
        label_161->setText(QApplication::translate("TabPs5Class", "\320\264\320\260\320\273\321\214\320\275\320\276\321\201\321\202\321\214:", 0, QApplication::UnicodeUTF8));
        label_162->setText(QApplication::translate("TabPs5Class", "\320\260\320\267\320\270\320\274\321\203\321\202:", 0, QApplication::UnicodeUTF8));
        groupBox_231->setTitle(QApplication::translate("TabPs5Class", "\321\201\320\272\320\273\320\276\320\275\320\265\320\275\320\270\320\265", 0, QApplication::UnicodeUTF8));
        raBuGradMagn->setText(QApplication::translate("TabPs5Class", "\320\274\320\260\320\263\320\275\320\270\321\202\320\275\320\276\320\265", 0, QApplication::UnicodeUTF8));
        raBuGradGeograph->setText(QApplication::translate("TabPs5Class", "\320\263\320\265\320\276\320\263\321\200\320\260\321\204\320\270\321\207.", 0, QApplication::UnicodeUTF8));
        tabWidget->setTabText(tabWidget->indexOf(tab_2), QApplication::translate("TabPs5Class", "\320\237\320\260\321\200\320\260\320\274\320\265\321\202\321\200\321\213 \320\240\320\233\320\241", 0, QApplication::UnicodeUTF8));
        laBoard->setText(QApplication::translate("TabPs5Class", "\320\237\320\273\320\260\321\202\320\260 \320\237\320\2415", 0, QApplication::UnicodeUTF8));
        groupBox_64->setTitle(QApplication::translate("TabPs5Class", "\320\260\320\264\321\200\320\265\321\201 IP", 0, QApplication::UnicodeUTF8));
        groupBox_65->setTitle(QApplication::translate("TabPs5Class", "\320\261\320\260\320\267\320\276\320\262\321\213\320\271 \320\277\320\276\321\200\321\202", 0, QApplication::UnicodeUTF8));
        groupBox_4->setTitle(QApplication::translate("TabPs5Class", "\321\204\321\203\320\275\320\272\321\206\320\270\320\276\320\275\320\260\320\273\321\214\320\275\320\276\320\265 \320\275\320\260\320\267\320\262\320\260\320\275\320\270\320\265 \320\277\320\273\320\260\321\202\321\213", 0, QApplication::UnicodeUTF8));
        groupBox_80->setTitle(QApplication::translate("TabPs5Class", "\320\274\320\260\320\272\321\201. \320\264\320\273\320\270\321\202. \320\261\320\273\320\276\320\272\320\260", 0, QApplication::UnicodeUTF8));
        label_26->setText(QApplication::translate("TabPs5Class", "\320\274\321\201", 0, QApplication::UnicodeUTF8));
        groupBox_66->setTitle(QApplication::translate("TabPs5Class", "\320\277\320\276\321\200\321\202 \320\277\320\273\320\260\321\202\321\213", 0, QApplication::UnicodeUTF8));
        groupBox_99->setTitle(QApplication::translate("TabPs5Class", "\321\201\320\272\320\273\320\276\320\275\320\265\320\275\320\270\320\265", 0, QApplication::UnicodeUTF8));
        groupBox_107->setTitle(QApplication::translate("TabPs5Class", "\320\272\321\203\321\200\321\201 \320\277\320\276\321\201\320\260\320\264\320\272\320\270, (\302\260)  ", 0, QApplication::UnicodeUTF8));
        groupBox->setTitle(QApplication::translate("TabPs5Class", "\320\232\320\276\320\274\320\277\320\273\320\265\320\272\321\202", 0, QApplication::UnicodeUTF8));
        chBoComplectAuto->setText(QApplication::translate("TabPs5Class", "\320\260\320\262\321\202\320\276", 0, QApplication::UnicodeUTF8));
        tabWidget->setTabText(tabWidget->indexOf(tab_9), QApplication::translate("TabPs5Class", "\320\236\320\261\321\211\320\270\320\265", 0, QApplication::UnicodeUTF8));
    } // retranslateUi

};

namespace Ui {
    class TabPs5Class: public Ui_TabPs5Class {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_TABPS5_H
