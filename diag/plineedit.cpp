#include "plineedit.h"

PLineEdit::PLineEdit(QWidget *parent)
	: QLineEdit(parent)
{
	bEnter = false;
//выделение при Key::Enter		
	connect( this ,SIGNAL(returnPressed())  , 
		this ,SLOT(rPressed()) );
// Key::Space
//	connect( this ,SIGNAL(textChanged(const QString&))  , 
//		this ,SLOT(tChanged(const QString&)) );
	connect( this ,SIGNAL(textEdited(const QString&))  , 
		this ,SLOT(tChanged(const QString&)) );
}

PLineEdit::~PLineEdit()
{
}
void PLineEdit::rPressed()
{
	bEnter=true;
	selectAll();
	return;
}
void PLineEdit::tChanged(const QString& str)
{
	QString str1,s0,s1;
	if(str.contains(' '))
	{
		int index;
		index=str.indexOf(' ');
		s0 = str.mid(0,index);
		s1 = str.mid(index+1);
		str1=s0+s1;
		setText(str1);
		editingFinished () ;
	}
	bEnter=false;
	return;
}
void PLineEdit::setSText(QString str)
{
		setText(str);
		if(bEnter)
		{
			selectAll();
			bEnter= false;
		}
}
