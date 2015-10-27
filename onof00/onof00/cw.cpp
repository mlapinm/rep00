#include "cw.h"
#include <QFile>
#include <QtGui/QFileDialog>
#include <QTextStream>
#include <QClipboard>

CW::CW(QWidget *parent)
	: QWidget(parent)
{
	ui.setupUi(this);



	createActions();
//
//
	QString str;
	str="aa0";
	ui.lineEdit->setText(str);
	int aaaa;
//

}

CW::~CW()
{

}
void CW::slActWrite(bool b)
{
}
void CW::slActEcho(bool b)
{
}
void CW::slSet()
{
	QString str;

	str=time.currentTime().toString();
	
	ui.lineEdit->setText(str);
//
	QString str1,str2;
	str1=ui.textEdit1->toPlainText();
	str2razn(str1,&str2);
	ui.textEdit2->setText(str2);
	str1=str2;
	str2Rezume(str1,str2);
	ui.teEdRezume->setText(str2);

}
void CW::createActions()
{
	connect(ui.puBuSet,SIGNAL(clicked ( )),SLOT(slSet()));
	connect(&timer, SIGNAL(timeout()), this, SLOT(sendDatagram()));
}
void CW::saveSettings(QSettings* settings)
{
	QString str;
	settings->setValue("fileName",fileName);
//	
	str = ui.teEdRem->toPlainText();
	settings->setValue("teEdRem",str);

	QDateTime dt;
	QString format;
	format = "dd.MM hh:mm";

	dt = QDateTime::currentDateTime();
	str = dt.toString(format);
//	str.insert(0,"\t");
//	str.insert(0,"\t");
//	str+= "	off";

//	ui.textEdit1->append(str);
//
	QTextCursor tc;
	tc=ui.textEdit1->textCursor();
	tc.movePosition(QTextCursor::End);
	ui.textEdit1->setTextCursor(tc);
	ui.textEdit1->textCursor().insertText(str);



	str = ui.textEdit1->toPlainText();
	settings->setValue("textEdit1",str);
}
void CW::readSettings(QSettings* settings)
{
	QString str;
	fileName=settings->value("fileName","").toString();
//	
	str=settings->value("teEdRem","").toString();
	ui.teEdRem->setText(str);


	str=settings->value("textEdit1","").toString();
	ui.textEdit1->append(str);
	QDateTime dt;
	QString format;
	format = "dd.MM hh:mm";
	dt = QDateTime::currentDateTime();
	str = dt.toString(format);
//	str+= "	on";
	str+= "\t";
	ui.textEdit1->append(str);
}
void CW::open()
{
	QString fName;
	fName = QFileDialog::getOpenFileName(this,
		"Open File", "", "Text Files (*.txt)");

	if(!fName.isEmpty())
	{
		readFile(fName);
	}

}
void CW::readFile(QString s)
{
	QFile file(s);
	if (file.open(QFile::ReadOnly)) 
	{

	}
}
void CW::slSave()
{
	QString fName;
	fName = QFileDialog::getSaveFileName(this,
		"Save File", "", "Text Files (*.txt)");

	if(!fName.isEmpty())
	{
		saveFile(fName);
	}
}
void CW::saveFile(QString s)
{
//
	QFile file(s);
	if(file.open(QFile::WriteOnly))
	{
	}
}
void CW::make()
{
	QString txt="123";
	ui.laWhatLog->setText(txt);
	slSet();
}
QString CW::fdt2t(QString sdt)
{
	QString rstr,str;
//09.06 15:23 -> 15:23
	str=sdt;
	QDateTime dt;
	QString format1,format2;
	format1 = "dd.MM hh:mm";
	format2 = "hh:mm";
	dt=QDateTime::fromString(str,format1);
	rstr=dt.toString ( format2 );
	return rstr;
}
QString CW::f830minust(QString st)
{
	QString rstr,str1,str2,str;
//вычитание из 8:30  15:23
	str2 = "08:30";
	QString format = "hh:mm";
	QTime t1,t2;
	t1=QTime::fromString ( st, format );
	t2=QTime::fromString ( str2, format );
	int ito = t1.secsTo(t2)/60;
	rstr = QString("%1").arg(ito);
//
	return rstr;
}
void CW::str2razn(QString str1, QString* pstr2)
{
	QString str01,str02,str2;
	QStringList sl1,sl2;
	sl1 = str1.split("\n", QString::SkipEmptyParts);
	int size = sl1.size();
//sl1-
//29.05 08:30	29.05 15:58	29.05 08:00 0
//01.06 07:20	01.06 17:10	70
//sl2 - 08.06 07:34	08.06 17:11
	QString strt;
	for(int i=0;i<size;i++)
	{
		QStringList l;
		strt=sl1[i];
		l=strt.split("\t");
		if(l.size()>=2)
		{
			strt = l[0];
			strt+= "\t";
			strt+= l[1];
			sl2+=strt;
		}
	}
	str2 = sl2.join("\n");
	*pstr2 = str2;
//два листа из sl2
	QStringList sll1,sll2,slt;
	QString str;
	size = sl2.size();
	for(int i=0;i<size;i++)
	{
		str = sl2[i];
		slt = str.split("	");
		if(slt.size()==2)
		{
			sll1+=slt[0];
			sll2+=slt[1];
		}
	}
//список разниц
	QStringList slr0;
	if(sll1.size()==sll2.size())
	{
		size= sll1.size();
		for(int i=0;i<size;i++)
		{
		//09.06 15:23 -> 15:23
			str=sll1[i];
			str1=fdt2t(str);
		//вычитание из 8:30  15:23
			str = f830minust(str1);
			slr0+=str;
		}
	}
//добавление к sl2 разницы slr0 в sl3;
	QStringList sl3;
	if(sl2.size()==slr0.size())
	{
		size = sl2.size();
		for(int i=0;i<size;i++)
		{
			str = sl2[i];
			str+= "\t";
			str+=slr0[i];
			sl3+=str;
		}
	}
	str2.clear();
	str2 = sl3.join("\n");
	*pstr2 = str2;

	qDebug()<<*pstr2<<str<<str;
}
void CW::str2Rezume(QString str1,QString& str2)
{
	QStringList sl1,sl2;
	QString str;
	int size=0;
//str1->sl1		16.02 07:33	16.02 17:01	57
//sl1->sl2		57
	sl1 = str1.split("\n", QString::SkipEmptyParts);
	size = sl1.size();
	for(int i=0;i<size;i++)
	{
		str = sl1[i];
		QStringList l;
		l = str.split("\t", QString::SkipEmptyParts);
		if(l.size()>=3)
		{
			sl2+=l[2];
		}
	}
//summa
	size = sl2.size();
	int isum=0,itmp;
	for(int i=0;i<size;i++)
	{
		itmp = sl2[i].toInt();
		isum+=itmp;
	}

//sl1->sl2		57
	str2.clear();
	QString strm,strhm,strdhm;
	int im=0,ihm0=0,ihm1=0,idhm0=0,idhm1=0,idhm2=0;
//
	im = isum;
	ihm0 = im/60;
	ihm1 = im - im/60*60;
	ihm1 = im%60;

	idhm0 = ihm0/8;
	idhm1 = ihm0%8;
	idhm2 = ihm1;

//
	strm=QString("%1").arg(isum);
	strm+="\tминут";
	strhm=QString("%1:%2").arg(ihm0).arg(ihm1);
	strdhm=QString("%1 дн %2:%3").arg(idhm0).arg(idhm1).arg(idhm2);
	str2+=strm;
	str2+= "\n";
	str2+=strhm;
	str2+= "\n";
	str2+=strdhm;
	str2+= "\n";
	str2+= "\n";

}
void CW::slCopy()
{

}
void  CW::slSiTimer()
{

}
void CW::processPendingDatagrams()
{
}
void CW::sendDatagram()
{
}
