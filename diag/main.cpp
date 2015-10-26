#include <QtGui/QApplication>
#include "listdlg.h"
#include <QtCore/QTextCodec>

QString frDATE(QString str0=__DATE__)
{
	QString str1,str2,strend;
	//mm
	str0=__DATE__;
	QStringList lstr,lm;
	lstr=str0.split(" ",QString::SkipEmptyParts);
	int m,d,y;
	if(lstr.size() == 3)
	{
		QLocale locale(QLocale::English);
		for(int i=1;i<=12;i++)
		{
			str1=locale.monthName(i,QLocale::ShortFormat);
			int sz=str1.size();
			if(!str1.isEmpty()&&lstr[0].contains(str1))
			{
				m=i;
				break;
			}
		}
		d=lstr[1].toInt();
		y=lstr[2].toInt();
	}
	strend = QString("%1").arg(y,4,10,QChar('0'));
	strend+= "_";
	strend+= QString("%1").arg(m,2,10,QChar('0'));
	strend+= "_";
	strend+= QString("%1").arg(d,2,10,QChar('0'));

	return strend;
}



int main(int argc, char *argv[])
{
	QTextCodec::setCodecForCStrings(QTextCodec::codecForName("cp1251"));
	QApplication a(argc, argv);

	QFont fnt = QApplication::font () ;
	QString str =fnt.family();
	fnt.setFamily("verdana");
	QApplication::setFont (fnt) ;
	ListDlg listdlg;
	str = "Диагностика";
	str+= " ";
	str+= "64207";
	str+= " (";
	 QString str1,str2;
	 str1 = frDATE(__DATE__);
	str+= str1;
	str+= " ";
	str+= __TIME__;
	str+= ") ";
	listdlg.setWindowTitle(str);
	listdlg.show();
	return a.exec();

}
