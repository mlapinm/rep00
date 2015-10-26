#include "widrastr.h"
#include <QtGui/QStylePainter>

WidRastr::WidRastr(QWidget *parent)
	: QWidget(parent)
{
	number = 0;
}

WidRastr::~WidRastr()
{

}
void WidRastr::setNumber(int num)
{
	number=num;
	return;
}
void WidRastr::setSize(int x,int y)
{
	this->resize(x,y);
	if(x&&y)
	sizeRect=QSize(x,y)-QSize(1,1);
	return;
}
void WidRastr::paintEvent(QPaintEvent* )
{
	painter.begin(this);
	painter.setPen(QPen(Qt::blue, 1, Qt::SolidLine));

	painter.drawPixmap(0,0,*pixmap);
//	painter.drawLine(next,0,1024,1);				//cursor
//	painter.drawLine(0,0,sizeRect.width(),sizeRect.height());	//diagonal
	if(number==0)
	{
//		painter.drawLine(0,0,0,10);
	}
	else
	{
//		painter.drawLine(0,0,0,10);
//		painter.drawLine(2,0,2,10);
	}
	painter.end();
	update();
}

