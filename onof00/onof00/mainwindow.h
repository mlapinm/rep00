#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QtGui/QMainWindow>
#include "ui_mainwindow.h"
#include "cw.h"

class MainWindow : public QMainWindow
{
	Q_OBJECT

public:
	MainWindow(QWidget *parent = 0, Qt::WFlags flags = 0);
	~MainWindow();
	CW* cw;
	void createActions();
	void saveSettings();
	void readSettings();
public slots:
	void slToHead(QString s);
protected:
	void closeEvent(QCloseEvent* e);

private:
	Ui::MainWindowClass ui;
};

#endif // MAINWINDOW_H
