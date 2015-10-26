#ifndef OLINEEDIT_H
#define OLINEEDIT_H

#include "plineedit.h"

class OLineEdit : public PLineEdit
{
	Q_OBJECT

public:
	OLineEdit(QWidget *parent);
	~OLineEdit();
	void setMaxValue(int val);
private:
	int minValue,maxValue;
	void scrollVertically(int numSteps);
	void wheelEvent ( QWheelEvent * event );  // [virtual protected]	
};

#endif // OLINEEDIT_H
