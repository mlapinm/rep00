#ifndef CW_H
#define CW_H

#include <QtGui/QWidget>
#include "ui_cw.h"
#include <QSettings>
#include <QTime>
#include <QStandardItemModel>
#include <QUdpSocket>
#include <QTimer>

class CW : public QWidget
{
	Q_OBJECT

public:
	CW(QWidget *parent = 0);
	~CW();
	QClipboard *clipboard;

	void createActions();
	void saveSettings(QSettings* settings);
	void readSettings(QSettings* settings);
	void make();
	void readFile(QString s);
	void saveFile(QString s);
	QString fileName,text;
	QTime time;
	QString readText;
	uint iTimeRead;

    QTimer timer;
QString fdt2t(QString dt);
QString f830minust(QString t);
	void str2razn(QString str1,QString* pstr2);
void str2Rezume(QString str1,QString& str2);

public slots:
	void open();
	void slSave();
	void slSet();
	void slCopy();
    void processPendingDatagrams();
    void sendDatagram();
	void slActWrite(bool b);
	void slActEcho(bool b);
	void slSiTimer();
signals:
	void sgToHead(QString str);
private:
	Ui::CWClass ui;
};

#endif // CW_H
