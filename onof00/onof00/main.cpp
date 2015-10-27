#include "mainwindow.h"
#include <QtGui/QApplication>
#include <QtCore/QTextCodec>


int main(int argc, char *argv[])
{
	QTextCodec::setCodecForCStrings(QTextCodec::codecForName("cp1251"));
	QApplication a(argc, argv);
	QString str;

	str = a.objectName();
	qDebug()<<str;
	MainWindow w;
	w.show();
	return a.exec();
}
