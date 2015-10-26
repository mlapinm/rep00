#include "widrastrtext.h"

WidRastrText::WidRastrText(QWidget *parent)
	: QWidget(parent)
{
	label.setText("sfsf");
	sizeRect = parent->size()-QSize(2,2);
	this->resize(sizeRect);
}

WidRastrText::~WidRastrText()
{

}
void WidRastrText::setNumber(int num)
{
	number=num;
	return;
}

void WidRastrText::setSize(int x,int y)
{
	this->resize(x,y);
	if(x&&y)
	sizeRect=QSize(x,y)-QSize(1,1);
	return;
}
void WidRastrText::paintEvent(QPaintEvent* )
{
	signRefresh();
	painter.begin(this);
	painter.drawPixmap(1,1,*pixmap);
	painter.end();
	update();

}

