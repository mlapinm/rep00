#include "dlgfault.h"

DlgFault::DlgFault(QWidget *parent,QString str1)
	: QDialog(parent)
{
	ui.setupUi(this);
	QString str;
	if(str1==0)
	{
	str="������� ����� �������� ������ � ����.\n";
	str.clear();
	str+="��������� ������� �����.\
		\n�������� ������� �����\
		\n� ��������� ������ � ����";
	}
	else
	{
		str=str1;
	}
	ui.label->setText(str);
	ui.pushButton->setText("������");
	connect(ui.pushButton,SIGNAL(clicked()),this,SLOT(close()));
}

DlgFault::~DlgFault()
{

}
