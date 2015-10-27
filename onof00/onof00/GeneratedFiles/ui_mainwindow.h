/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 4.8.5
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QHeaderView>
#include <QtGui/QMainWindow>
#include <QtGui/QMenu>
#include <QtGui/QMenuBar>
#include <QtGui/QStatusBar>
#include <QtGui/QToolBar>
#include <QtGui/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindowClass
{
public:
    QAction *actionOpen;
    QAction *actionSave;
    QAction *actionCopy;
    QAction *actionWrite;
    QAction *actionWrite_2;
    QAction *actionWrite_3;
    QAction *actionEcho;
    QWidget *centralWidget;
    QMenuBar *menuBar;
    QMenu *menuFile;
    QMenu *menuEdit;
    QMenu *menuProperties;
    QToolBar *mainToolBar;
    QStatusBar *statusBar;

    void setupUi(QMainWindow *MainWindowClass)
    {
        if (MainWindowClass->objectName().isEmpty())
            MainWindowClass->setObjectName(QString::fromUtf8("MainWindowClass"));
        MainWindowClass->resize(929, 449);
        actionOpen = new QAction(MainWindowClass);
        actionOpen->setObjectName(QString::fromUtf8("actionOpen"));
        actionSave = new QAction(MainWindowClass);
        actionSave->setObjectName(QString::fromUtf8("actionSave"));
        actionCopy = new QAction(MainWindowClass);
        actionCopy->setObjectName(QString::fromUtf8("actionCopy"));
        actionWrite = new QAction(MainWindowClass);
        actionWrite->setObjectName(QString::fromUtf8("actionWrite"));
        actionWrite->setCheckable(true);
        actionWrite_2 = new QAction(MainWindowClass);
        actionWrite_2->setObjectName(QString::fromUtf8("actionWrite_2"));
        actionWrite_3 = new QAction(MainWindowClass);
        actionWrite_3->setObjectName(QString::fromUtf8("actionWrite_3"));
        actionWrite_3->setCheckable(true);
        actionEcho = new QAction(MainWindowClass);
        actionEcho->setObjectName(QString::fromUtf8("actionEcho"));
        actionEcho->setCheckable(true);
        centralWidget = new QWidget(MainWindowClass);
        centralWidget->setObjectName(QString::fromUtf8("centralWidget"));
        MainWindowClass->setCentralWidget(centralWidget);
        menuBar = new QMenuBar(MainWindowClass);
        menuBar->setObjectName(QString::fromUtf8("menuBar"));
        menuBar->setGeometry(QRect(0, 0, 929, 21));
        menuFile = new QMenu(menuBar);
        menuFile->setObjectName(QString::fromUtf8("menuFile"));
        menuEdit = new QMenu(menuBar);
        menuEdit->setObjectName(QString::fromUtf8("menuEdit"));
        menuProperties = new QMenu(menuBar);
        menuProperties->setObjectName(QString::fromUtf8("menuProperties"));
        MainWindowClass->setMenuBar(menuBar);
        mainToolBar = new QToolBar(MainWindowClass);
        mainToolBar->setObjectName(QString::fromUtf8("mainToolBar"));
        MainWindowClass->addToolBar(Qt::TopToolBarArea, mainToolBar);
        statusBar = new QStatusBar(MainWindowClass);
        statusBar->setObjectName(QString::fromUtf8("statusBar"));
        MainWindowClass->setStatusBar(statusBar);

        menuBar->addAction(menuFile->menuAction());
        menuBar->addAction(menuEdit->menuAction());
        menuBar->addAction(menuProperties->menuAction());
        menuFile->addAction(actionOpen);
        menuFile->addAction(actionSave);
        menuEdit->addAction(actionCopy);
        menuProperties->addAction(actionWrite_3);
        menuProperties->addAction(actionEcho);
        mainToolBar->addAction(actionCopy);
        mainToolBar->addAction(actionWrite_3);
        mainToolBar->addAction(actionEcho);

        retranslateUi(MainWindowClass);

        QMetaObject::connectSlotsByName(MainWindowClass);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindowClass)
    {
        MainWindowClass->setWindowTitle(QApplication::translate("MainWindowClass", "MainWindow", 0, QApplication::UnicodeUTF8));
        actionOpen->setText(QApplication::translate("MainWindowClass", "Open", 0, QApplication::UnicodeUTF8));
        actionSave->setText(QApplication::translate("MainWindowClass", "Save", 0, QApplication::UnicodeUTF8));
        actionCopy->setText(QApplication::translate("MainWindowClass", "Copy", 0, QApplication::UnicodeUTF8));
        actionWrite->setText(QApplication::translate("MainWindowClass", "Write", 0, QApplication::UnicodeUTF8));
        actionWrite_2->setText(QApplication::translate("MainWindowClass", "Write", 0, QApplication::UnicodeUTF8));
        actionWrite_3->setText(QApplication::translate("MainWindowClass", "Write", 0, QApplication::UnicodeUTF8));
        actionEcho->setText(QApplication::translate("MainWindowClass", "Echo", 0, QApplication::UnicodeUTF8));
        menuFile->setTitle(QApplication::translate("MainWindowClass", "File", 0, QApplication::UnicodeUTF8));
        menuEdit->setTitle(QApplication::translate("MainWindowClass", "Edit", 0, QApplication::UnicodeUTF8));
        menuProperties->setTitle(QApplication::translate("MainWindowClass", "Properties", 0, QApplication::UnicodeUTF8));
    } // retranslateUi

};

namespace Ui {
    class MainWindowClass: public Ui_MainWindowClass {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
