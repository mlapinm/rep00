#include "olineedit.h"
#include <QtGui/QWheelEvent>

OLineEdit::OLineEdit(QWidget *parent)
	: PLineEdit(parent)
{
	minValue=1;
	maxValue=99;
}

OLineEdit::~OLineEdit()
{
}
void OLineEdit::setMaxValue(int val)
{
	maxValue=val;
	return;
}
void OLineEdit::scrollVertically(int numSteps)  //	
{
	QString str,str1;
	short a1;
	str=this->text();
	bool ok;
	a1=str.toInt(&ok);
	if(!ok)a1=minValue;
	a1+=numSteps;
	a1 = a1<=maxValue ? a1:maxValue;
	a1 = a1>=minValue ? a1:minValue;
	str = QString("%1").arg(a1);
	this->setText(str);
	return;
}
void OLineEdit::wheelEvent ( QWheelEvent * event )  // [virtual protected]	
{
	int numDegrees = event->delta() / 8;
	int numSteps = numDegrees / 15;

	if (event->orientation() == Qt::Horizontal) 
	{
//		 scrollHorizontally(numSteps);
	} 
	else 
	{
	 scrollVertically(numSteps);
	}
	event->accept();
	return;
}




