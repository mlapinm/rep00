#ifndef WIDRASTR_H
#define WIDRASTR_H

#include <QtGui/QWidget>
#include "ui_widrastr.h"
#include <QtGui/QStylePainter>
class Rastr;

class WidRastr : public QWidget
{
	Q_OBJECT

public:
	WidRastr(QWidget *parent = 0);
	~WidRastr();
	Rastr* rr;

	int next;
	int number;
	QSize sizeRect;
	void setNumber(int num);
	void setSize(int x,int y);
	QPixmap *pixmap;
	QStylePainter painter;
protected:
	void paintEvent(QPaintEvent* e);

private:
	Ui::WidRastrClass ui;
};

#endif // WIDRASTR_H
