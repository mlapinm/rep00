#ifndef RASTR_H
#define RASTR_H

#include <QtGui/QWidget>
#include "widrastr.h"
#include "widrastrtext.h"
#include "glcu.h"

struct Colors
{
	QColor colorFill,colorLight,colorGrid,
		colorCode,colorMet,colorInp,colorOutp;

};

class Rastr : public QWidget
{
	Q_OBJECT

public:
	Rastr(QWidget *parent);
	Rastr(QWidget *parent,
		QWidget *widRastr0,QWidget *widRastr1
		,QWidget *wRText);
	~Rastr();
	Colors colors;
	void initColors();
	WidRastr* widRastr0,*widRastr1;
	WidRastrText* widRastrText;
	QWidget* mw;
	QPixmap* pixmap0,*pixmap1;
	QPixmap* pixmapText;
	QPainter painter0,painter1;
	QPainter painterText;
	void setPixmaps();
	void refreshPixmap();
	void refreshPrl();
	void refreshKo();
	int calculator;
	uchar dgnstc[396];
	QStringList strList,strListIn;
	const static int strSize=23;
	GlCuRr* glCuRr;
	QString strText;
	QString toTxt(QStringList sL,QStringList sLIn);
	QStringList initStrList();
	QString trimStr(QString strIn, QString strNum);
	QVector<QPoint> veP0,veP1,veP2,veP3;
public slots:
	void slRefresh();

private:
	
};

#endif // RASTR_H
