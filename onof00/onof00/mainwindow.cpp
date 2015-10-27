#include "mainwindow.h"
#include <QSettings>

MainWindow::MainWindow(QWidget *parent, Qt::WFlags flags)
	: QMainWindow(parent, flags)
{
	ui.setupUi(this);
	cw = new CW(this);
	setCentralWidget(cw);
	createActions();
	readSettings();
	cw->make();
}

MainWindow::~MainWindow()
{

}
void MainWindow::slToHead(QString s)
{
	setWindowTitle(s);
}
void MainWindow::createActions()
{
	connect(cw,SIGNAL(sgToHead(QString)),SLOT(slToHead(QString)));
	connect(ui.actionOpen,SIGNAL(triggered()),cw,SLOT(open()));
	connect(ui.actionSave,SIGNAL(triggered()),cw,SLOT(slSave()));
	connect(ui.actionCopy,SIGNAL(triggered()),cw,SLOT(slCopy()));
	connect(ui.actionWrite_3,SIGNAL(toggled ( bool)),cw,SLOT(slActWrite ( bool)));
	connect(ui.actionEcho,SIGNAL(toggled ( bool)),cw,SLOT(slActEcho ( bool)));
	
}

void MainWindow::saveSettings()
{
	QString str;
	str = qApp->objectName();
	QSettings settings(str,QSettings::IniFormat);
	cw->saveSettings(&settings);
}
void MainWindow::readSettings()
{
	QString str;
	str = qApp->objectName();
	QSettings settings(str,QSettings::IniFormat);
	cw->readSettings(&settings);
}

void MainWindow::closeEvent(QCloseEvent* e)
{
	saveSettings();
}
