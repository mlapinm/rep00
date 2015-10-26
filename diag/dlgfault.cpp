#include "dlgfault.h"

DlgFault::DlgFault(QWidget *parent,QString str1)
	: QDialog(parent)
{
	ui.setupUi(this);
	QString str;
	if(str1==0)
	{
	str="Истекло время ожидания записи в РПЗУ.\n";
	str.clear();
	str+="Выключите питание платы.\
		\nВключите питание платы\
		\nи проверьте запись в РПЗУ";
	}
	else
	{
		str=str1;
	}
	ui.label->setText(str);
	ui.pushButton->setText("Отмена");
	connect(ui.pushButton,SIGNAL(clicked()),this,SLOT(close()));
}

DlgFault::~DlgFault()
{

}
