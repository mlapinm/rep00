#include "tabps5.h"

TabPs5::TabPs5(QWidget *parent)
	: QWidget(parent)
{
	ui.setupUi(this);


//
	createActions();
	ui.tabWidget->setTabEnabled(0,false);		//..........

}

TabPs5::~TabPs5()
{

}
void TabPs5::createActions()
{
	connect(ui.liEdIp,SIGNAL(editingFinished()),this,SLOT(fLineEditIPInitial()));
	connect(ui.liEdPortBase,SIGNAL(editingFinished()),this,SLOT(fLineEditBasicPort()));
	connect(ui.liEdSclonenie,SIGNAL(editingFinished()),this,SLOT(fLineEditGradient()));
	connect(ui.liEdFuNameBoard,SIGNAL(editingFinished()),this,SLOT(slLiEdFuNameBoard()));//
	connect(ui.liEdCourseLanding,SIGNAL(editingFinished()),this,SLOT(slLiEdCourseLanding()));//
	connect(ui.liEdMaxTimeBlock,SIGNAL(editingFinished()),this,SLOT(slLiEdMaxTimeBlock()));//
	connect(ui.chBoComplectAuto,SIGNAL(clicked()),this,SLOT(slChBoComplectAuto()));

	connect(ui.liEdNameRls,SIGNAL(editingFinished()),this,SLOT(slLiEdNameRls()));//
	connect(ui.liEdPointStandingDistance,SIGNAL(editingFinished()),this,SLOT(slLiEdPointStandingDistance()));//
	connect(ui.liEdPointStandingAzimuth,SIGNAL(editingFinished()),this,SLOT(slLiEdPointStandingAzimuth()));//
	connect(ui.raBuGradMagn,SIGNAL(clicked()),this,SLOT(slRaBuGrad()));
	connect(ui.raBuGradGeograph,SIGNAL(clicked()),this,SLOT(slRaBuGrad()));

	connect(ui.liEdTorNulN1,SIGNAL(editingFinished()),this,SLOT(slLiEdTorNulN1()));//
	connect(ui.liEdTorNulN2,SIGNAL(editingFinished()),this,SLOT(slLiEdTorNulN2()));//
	connect(ui.liEdPnt1,SIGNAL(editingFinished()),this,SLOT(slLiEdPnt1()));//
	connect(ui.liEdPnt2,SIGNAL(editingFinished()),this,SLOT(slLiEdPnt2()));//
	connect(ui.liEdHiVpp1,SIGNAL(editingFinished()),this,SLOT(slLiEdHiVpp1()));//
	connect(ui.liEdHiVpp2,SIGNAL(editingFinished()),this,SLOT(slLiEdHiVpp2()));//
	connect(ui.liEdAxVpp,SIGNAL(editingFinished()),this,SLOT(slLiEdAxVpp()));//
	connect(ui.liEdGlAmpl,SIGNAL(editingFinished()),this,SLOT(slLiEdGlAmpl()));//
	connect(ui.liEdCourseAmpl,SIGNAL(editingFinished()),this,SLOT(slLiEdCourseAmpl()));//
}
void TabPs5::setEnabledThe(bool b)
{
	ui.frPar->setEnabled(b);
	ui.frObsch->setEnabled(b);
}
uchar TabPs5::firstChar(ushort a1)
{
	uchar ch1;

	a1 = a1;
	a1&=0xff;
	ch1 = a1;
	return ch1;
}
uchar TabPs5::secondChar(ushort a1)
{
	uchar ch1;
	a1&=0xff00;
	a1>>=8;
	ch1 = a1;
	return ch1;
}

void TabPs5::fLiEdAzimuth(void* l, ushort* pReceiveSePar, ushort* pSendSelPar)
{

	PLineEdit* lineEdit =(PLineEdit*)l;
	int b1,b2,b3,index,index1;bool ok1,ok2;
	int a0,a1,a2;QString str;
	QString str1,str2,str3;
	str1=lineEdit->text();
	index=str1.indexOf("°",0);
	if(index==-1)
	{
		str2=str1;
		str3="00";
	}else
	{
		str2 = str1.left(index);
		str3 = str1.mid(index+1,str1.size()-index);
	}
	b2 = str2.toInt(&ok1);
	index1 = str3.indexOf("'");
	if(index1>0)
	{
		str3.remove(index1,1);
	}
	b3 = str3.toInt(&ok2);
	b1 =b2*60 +b3;
////
	a0=b1;
	a1 = a0/60;
	a2 = a0 - (a1*60);
	str = QString("%1").arg(a1);
	str.append(QString("°%1'").arg(a2,2,10,QLatin1Char( '0' )));
//
	if(ok1&&ok2)
	{
		lineEdit->setText(str);
//
		*pReceiveSePar=b1;
		*pSendSelPar=b1;
	}
	return;
}


void TabPs5::fLineEditIPInitial()
{
	int iAddr = 0;
	QString str0,str1,str2,str3,str4;
	str0=ui.liEdIp->text();
	int b1,b2,b3,b4;
	int ind[4],len[4];int j=0;int k=0;
	while ((j = str0.indexOf(".", j)) != -1) 
	{
		ind[k++]=j;
		++j;
	} 
	len[0]=ind[0];
	len[1]=ind[1]-ind[0]-1;
	len[2]=ind[2]-ind[1]-1;
	len[3]=str0.length()-ind[2]-1;
	str1=str0.left(len[0]);
	str2=str0.mid(ind[0]+1,len[1]);
	str3=str0.mid(ind[1]+1,len[2]);
	str4=str0.mid(ind[2]+1,len[3]);
	bool ok;
	b1=str1.toInt(&ok);
	if(!ok || b1>256 || b1<0) b1=256;
	b2=str2.toInt(&ok);
	if(!ok || b2>256 || b2<0) b2=256;
	b3=str3.toInt(&ok);
	if(!ok || b3>256 || b3<0) b3=256;
	b4=str4.toInt(&ok);
	if(!ok || b4>256 || b4<0) b4=256;


	str0=str0.right(ind[0]+1);
	str1=QString("%1.").arg(b1);
	str1.append(QString("%1.").arg(b2));
	str1.append(QString("%1.").arg(b3));
	str1.append(QString("%1").arg(b4));
	ui.liEdIp->setText(str1);
	b2<<=8;
	b1|=b2;		//high
	b4<<=8;
	b3|=b4;		//low
	unitReceive->basicSetting[iAddr]=b1;
	unitSend->basicSetting[iAddr]=b1;
	unitReceive->basicSetting[iAddr+1]=b3;
	unitSend->basicSetting[iAddr+1]=b3;
}
void TabPs5::fLineEditBasicPort()
{
	int iAddr = 2;
	bool ok;QChar char0 = '0';
	QString str0,str1,str2;
	str0=ui.liEdPortBase->text();
	int b1,b2,b3,b4;
	b1=str0.indexOf("x", 0);
	b2=str0.indexOf("/", 0);
	str1=str0.mid(b1+1,b2-b1-1);
	b1=str1.toInt(&ok,16);

	b3=str0.indexOf("/", 0);
	b4=str0.size();
	str1=str0.mid(b3+1,b4-b3-1);
	b2=str1.toInt();
	b3=unitReceive->basicSetting[iAddr];
	if(b3!=b1)
	{
	}
	if(b3!=b2)
	{
		b1=b2;
	}

	str2 = QString("0x%1/").arg(b1,4,16,char0);
	str2.append(QString("%1").arg(b1));
	ui.liEdPortBase->setText(str2);
	unitReceive->basicSetting[iAddr]=b1;
	unitSend->basicSetting[iAddr]=b1;
//	if(isSetPressEnter())
//		ui.liEdPortBase->selectAll();

}
void TabPs5::fLineEditGradient()
{
	int iAddr = 7;
	PLineEdit* lineEdit = ui.liEdSclonenie;
	fLiEdAzimuth(	lineEdit,
		&unitReceive->basicSetting[iAddr],
		&unitSend->basicSetting[iAddr]	);

}

void TabPs5::fLineEditPortBoard()
{
	int iAddr = 3;
	bool ok;QChar char0='0';
	QString str0,str1,str2;
	str0=ui.liEdPortBoard->text();
	int b1,b2,b3,b4;
	b1=str0.indexOf("x", 0);
	b2=str0.indexOf("/", 0);
	str1=str0.mid(b1+1,b2-b1-1);
	b1=str1.toInt(&ok,16);

	b3=str0.indexOf("/", 0);
	b4=str0.size();
	str1=str0.mid(b3+1,b4-b3-1);
	b2=str1.toInt();
	b3=unitReceive->basicSetting[iAddr];
	if(b3!=b1)
	{
	}
	if(b3!=b2)
	{
		b1=b2;
	}

	str2 = QString("0x%1/").arg(b1,4,16,char0);
	str2.append(QString("%1").arg(b1));
	ui.liEdPortBoard->setText(str2);

	unitReceive->basicSetting[iAddr]=b1;
	unitSend->basicSetting[iAddr]=b1;
}
void TabPs5::slLiEdFuNameBoard()
{
	int iAddr =12;
	PLineEdit* lineEdit = ui.liEdFuNameBoard;
	QString str1,str2;
	ushort b1;
	QChar char1,char2;
	str1=lineEdit->text();
	b1=str1.size();
	QByteArray ba1,ba2;
	ba2.resize(1);
	ba2[0]=0x00;
	ba1.resize(b1);
	ba1 = str1.toAscii();
	str1 = str1.trimmed();

	lineEdit->setText(str1);

	b1=str1.size();

	QByteArray ba = str1.toAscii();

	b1 = b1 > 5 ? 6 : b1;	
	ushort ua[8];
	memset(ua, 0, sizeof(ua));
	memcpy(ua, str1.toAscii().constData(), b1);

	///*
	for(int i=0;i<4;i++)
	{
		unitReceive->basicSetting[iAddr+i]=ua[i];
		unitSend->basicSetting[iAddr+i]=ua[i];
	}
	return;
}
void TabPs5::slLiEdCourseLanding()
{
//32
	int iAddr =32;
	PLineEdit* lineEdit=ui.liEdCourseLanding;
	QString str1,str2;
	ushort b1=0;
	str1=lineEdit->text();
	bool ok=true;
	b1=str1.toInt(&ok);
	b1 &= 0xffff;
	if(ok&&b1>0)
	{
		lineEdit->setText(QString("%1").arg(b1));
		unitReceive->basicSetting[iAddr]=b1;
		unitSend->basicSetting[iAddr]=b1;
	}
	return;
}
void TabPs5::slChBoComplectAuto()
{
//34	0 - ручной выбор комплекта, 1 - автоматический
	int iAddr =34;
	int a0=0;
	a0 = ui.chBoComplectAuto->isChecked();
	unitReceive->basicSetting[iAddr]=a0;
	unitSend->basicSetting[iAddr]=a0;
}
void TabPs5::slLiEdMaxTimeBlock()
{
//64
	int iAddr =64;
	PLineEdit* lineEdit=ui.liEdMaxTimeBlock;
	QString str1,str2;
	ushort b1=0;
	str1=lineEdit->text();
	bool ok=true;
	b1=str1.toInt(&ok);
	b1 &= 0xffff;
	if(ok&&b1>0)
	{
		lineEdit->setText(QString("%1").arg(b1));
		unitReceive->basicSetting[iAddr]=b1;
		unitSend->basicSetting[iAddr]=b1;
	}
	return;
}
void TabPs5::slLiEdNameRls()
{
	int iAddr =128 -128;
	PLineEdit* lineEdit = ui.liEdNameRls;
	QString str1,str2;
	ushort b1;
	QChar char1,char2;
	str1=lineEdit->text();
	b1=str1.size();
	QByteArray ba1,ba2;
	ba2.resize(1);
	ba2[0]=0x00;
	ba1.resize(b1);
	ba1 = str1.toAscii();
	str1 = str1.trimmed();

	lineEdit->setText(str1);

	b1=str1.size();

	QByteArray ba = str1.toAscii();

	b1 = b1 > 15 ? 16 : b1;	
	ushort ua[8];
	memset(ua, 0, sizeof(ua));
	memcpy(ua, str1.toAscii().constData(), b1);

	///*
	for(int i=0;i<8;i++)
	{
		unitReceive->selectedParameters0[iAddr+i]=ua[i];
		unitSend->selectedParameters0[iAddr+i]=ua[i];
	}
	return;
}
void TabPs5::slLiEdPointStandingDistance()
{
//136
	int iAddr =136 -128;
	PLineEdit* lineEdit = ui.liEdPointStandingDistance;
	int b1;
	QString str1,str2;
	str1=lineEdit->text();
	b1=str1.toInt();
	b1 &= 0xffff;
	lineEdit->setText(QString("%1").arg(b1));
	unitReceive->selectedParameters0[iAddr]=b1;
	unitSend->selectedParameters0[iAddr]=b1;
	return;
}
void TabPs5::slLiEdPointStandingAzimuth()
{
//137
	int iAddr =137 -128;
	PLineEdit* lineEdit = ui.liEdPointStandingAzimuth ;
	fLiEdAzimuth(	lineEdit,
		&unitReceive->selectedParameters0[iAddr],
		&unitSend->selectedParameters0[iAddr]	);
	return;
}
void TabPs5::slRaBuGrad()
{
	int iAddr =10;
	wrd.f(unitReceive->basicSetting[iAddr]);
	wrd.s.bit15=ui.raBuGradMagn->isChecked();
	unitReceive->basicSetting[iAddr]=wrd.f();
	unitSend->basicSetting[iAddr]=wrd.f();
	return;
}
void TabPs5::slLiEdTorNulN1()
{
	int iAddr = 36;
	PLineEdit* lineEdit = ui.liEdTorNulN1;
	int b1;
	QString str1,str2;
	str1=lineEdit->text();
	b1=str1.toInt();
	lineEdit->setText(QString("%1").arg((short)(b1)));
	unitReceive->selectedParameters0[iAddr]=(short)(b1);
	unitSend->selectedParameters0[iAddr]=(short)(b1);
}
void TabPs5::slLiEdHiVpp1()
{
	int iAddr = 35;
	PLineEdit* lineEdit = ui.liEdHiVpp1;
	int b1;
	QString str1,str2;
	str1=lineEdit->text();
	b1=str1.toInt();
	lineEdit->setText(QString("%1").arg((short)(b1)));
	unitReceive->selectedParameters0[iAddr]=(short)(b1);
	unitSend->selectedParameters0[iAddr]=(short)(b1);
}
void TabPs5::slLiEdAxVpp()
{
	int iAddr = 33;
	PLineEdit* lineEdit = ui.liEdAxVpp;
	int b1;
	QString str1,str2;
	str1=lineEdit->text();
	b1=str1.toInt();
	lineEdit->setText(QString("%1").arg((short)(b1)));
	unitReceive->selectedParameters0[iAddr]=(short)(b1);
	unitSend->selectedParameters0[iAddr]=(short)(b1);
}
void TabPs5::slLiEdPnt1()
{
	int iAddr = 37;
	PLineEdit* lineEdit = ui.liEdPnt1;
	int b1;
	QString str1,str2;
	str1=lineEdit->text();
	b1=str1.toInt();
	lineEdit->setText(QString("%1").arg((short)(b1)));
	unitReceive->selectedParameters0[iAddr]=(short)(b1);
	unitSend->selectedParameters0[iAddr]=(short)(b1);
}
void TabPs5::slLiEdTorNulN2()
{
	int iAddr = 41;
	PLineEdit* lineEdit = ui.liEdTorNulN2;
	int b1;
	QString str1,str2;
	str1=lineEdit->text();
	b1=str1.toInt();
	lineEdit->setText(QString("%1").arg((short)(b1)));
	unitReceive->selectedParameters0[iAddr]=(short)(b1);
	unitSend->selectedParameters0[iAddr]=(short)(b1);
}
void TabPs5::slLiEdHiVpp2()
{
	int iAddr = 40;
	PLineEdit* lineEdit = ui.liEdHiVpp2;
	int b1;
	QString str1,str2;
	str1=lineEdit->text();
	b1=str1.toInt();
	lineEdit->setText(QString("%1").arg((short)(b1)));
	unitReceive->selectedParameters0[iAddr]=(short)(b1);
	unitSend->selectedParameters0[iAddr]=(short)(b1);
}
void TabPs5::slLiEdPnt2()
{
	int iAddr = 42;
	PLineEdit* lineEdit = ui.liEdPnt2;
	int b1;
	QString str1,str2;
	str1=lineEdit->text();
	b1=str1.toInt();
	lineEdit->setText(QString("%1").arg((short)(b1)));
	unitReceive->selectedParameters0[iAddr]=(short)(b1);
	unitSend->selectedParameters0[iAddr]=(short)(b1);
}
void TabPs5::slLiEdGlAmpl()
{
	int iAddr = 172 -128;
	PLineEdit* lineEdit = ui.liEdGlAmpl;
	QString str1,str2;
	short b1, b2, b0;
	b0 = unitReceive->selectedParameters0[iAddr];
	str1=lineEdit->text();
	b1=str1.toShort();
	b2 = (b0&0xff00) | (b1&0xff);
	unitReceive->selectedParameters0[iAddr]=(short)(b2);
	unitSend->selectedParameters0[iAddr]=(short)(b2);
}
void TabPs5::slLiEdCourseAmpl()
{
	int iAddr = 172 -128;
	PLineEdit* lineEdit = ui.liEdCourseAmpl;
	QString str1,str2;
	short b1, b2, b0;
	b0 = unitReceive->selectedParameters0[iAddr];
	str1=lineEdit->text();
	b1=str1.toShort();
	b2 = (b0&0xff) | (b1<<8);
	unitReceive->selectedParameters0[iAddr]=(short)(b2);
	unitSend->selectedParameters0[iAddr]=(short)(b2);
}


void TabPs5::updateDialog()
{
//	setTeEd00();
        int iAddr0=0;
	ushort a0,a1,a2,a3;
        QString str,strWhole,str2;
        char ch;int k0;
	char nameSource[16];

//
//

//IP
	a0=unitReceive->basicSetting[0];
	a2=unitReceive->basicSetting[1];
	a1=a0;
	a3=a2;
	a0&=0xff;
	a1&=0xff00;
	a1>>=8;
	a2&=0xff;
	a3&=0xff00;
	a3>>=8;
	str = QString("%1").arg(a0); 
	strWhole.append(str);
	str = QString(".%1").arg(a1); 
	strWhole.append(str);
	str = QString(".%1").arg(a2); 
	strWhole.append(str);
	str = QString(".%1").arg(a3); 
	strWhole.append(str);
	if(!ui.liEdIp->hasFocus())
		ui.liEdIp->setText(strWhole);
	QChar char0='0';
	str = QString("0x%1").arg(unitReceive->basicSetting[2],4,16,char0);
	strWhole = str;
	str = QString("/%1").arg(unitReceive->basicSetting[2]);
	strWhole.append(str);
	if(!ui.liEdPortBase->hasFocus())
		ui.liEdPortBase->setText(strWhole);
	str = QString("0x%1").arg(unitReceive->basicSetting[3],4,16,char0);
	strWhole = str;
	str = QString("/%1").arg(unitReceive->basicSetting[3]);
	strWhole.append(str);
	if(!ui.liEdPortBoard->hasFocus())
		ui.liEdPortBoard->setText(strWhole);
//склонение
	a0 = unitReceive->basicSetting[7];
	a1 = a0/60;
	a2 = a0 - (a1*60);
	str = QString("%1").arg(a1);
	str.append(QString("°%1'").arg(a2,2,10,QLatin1Char( '0' )));
	if(!ui.liEdSclonenie->hasFocus())
		ui.liEdSclonenie->setText(str);
//бит 15:	склонение (0 — географическое (истинное), 1 — магнитное)
	iAddr0 =10;
	wrd.f(unitReceive->basicSetting[iAddr0]);
	if(wrd.s.bit15)
		ui.raBuGradMagn->setChecked(true);
	else
		ui.raBuGradGeograph->setChecked(true);
//12…14  функциональное название платы
	iAddr0=12;
	for (int i=0;i<6;i++)
	{
		k0=i;
		if(i/2*2==i)
		{
			ch = firstChar(unitReceive->basicSetting[i/2+iAddr0]);
			if(ch == 0x00) break;
			nameSource[i]=ch;
		}
		else
		{
			ch  = secondChar(unitReceive->basicSetting[i/2+iAddr0]);
			if(ch == 0x0)break;
			nameSource[i] = ch;
		}
	}
	str2 = QString::fromAscii(nameSource,k0);
	if(!ui.liEdFuNameBoard->hasFocus())
		ui.liEdFuNameBoard->setText(str2);
//32		курс посадки 1 в градусах
	iAddr0 =32;
	a1 = unitReceive->basicSetting[iAddr0];
	str = QString("%1").arg(a1);
	if(!ui.liEdCourseLanding->hasFocus())
		ui.liEdCourseLanding->setText(str);
//34	0 - ручной выбор комплекта, 1 - автоматический
	iAddr0 =34;
	a1 = unitReceive->basicSetting[iAddr0];
	ui.chBoComplectAuto->setChecked(a1);
//64	максимальная длительность одного блока с несколькими лучами, мс
	iAddr0 =64;
	a1 = unitReceive->basicSetting[iAddr0];
	str = QString("%1").arg(a1);
	if(!ui.liEdMaxTimeBlock->hasFocus())
		ui.liEdMaxTimeBlock->setText(str);
//128  название источника
	iAddr0=128 -128;
	for (int i=0;i<16;i++)
	{
		k0=i;
		if(i/2*2==i)
		{
			ch = firstChar(unitReceive->selectedParameters0[i/2+iAddr0]);
			if(ch == 0x00) break;
			nameSource[i]=ch;
		}
		else
		{
			ch  = secondChar(unitReceive->selectedParameters0[i/2+iAddr0]);
			if(ch == 0x0)break;
			nameSource[i] = ch;
		}
	}
	str2 = QString::fromAscii(nameSource,k0);
	if(!ui.liEdNameRls->hasFocus())
		ui.liEdNameRls->setText(str2);
//136	дальность точки стояния, метры
	iAddr0 =136 -128;
	a1 = unitReceive->selectedParameters0[iAddr0];
	str = QString("%1").arg(a1);
	if(!ui.liEdPointStandingDistance->hasFocus())
		ui.liEdPointStandingDistance->setText(str);
//137 азимут точки стояния, минуты (градусы ? 60)
	iAddr0=137 -128;
	a0 = unitReceive->selectedParameters0[iAddr0];
	a1 = a0/60;
	a2 = a0 - (a1*60);
	str = QString("%1").arg(a1);
	str.append(QString("°%1'").arg(a2,2,10,QLatin1Char( '0' )));
	if(!ui.liEdPointStandingAzimuth->hasFocus())
		ui.liEdPointStandingAzimuth->setText(str);
//36	164	292	удаление торца ВПП от антенны (нулевой километр), м 
	iAddr0=164 -128;
	str = QString("%1").arg((short)(unitReceive->selectedParameters0[iAddr0]));
	str2 = QString("%1").arg((short)(unitReceive->selectedParameters0[iAddr0]));
	if(!ui.liEdTorNulN1->hasFocus())
		ui.liEdTorNulN1->setText(str);
//35	163	291	высота антенны, пересчитанная к торцу ВП36	164	292
	iAddr0=163 -128;
	str = QString("%1").arg((short)(unitReceive->selectedParameters0[iAddr0]));
	str2 = QString("%1").arg((short)(unitReceive->selectedParameters0[iAddr0]));
	if(!ui.liEdHiVpp1->hasFocus())
		ui.liEdHiVpp1->setText(str);
//33	161	289	удаление антенны от продольной оси ВПП (число знаковое), м
	iAddr0=161 -128;
	str = QString("%1").arg((short)(unitReceive->selectedParameters0[iAddr0]));
	str2 = QString("%1").arg((short)(unitReceive->selectedParameters0[iAddr0]));
	if(!ui.liEdAxVpp->hasFocus())
		ui.liEdAxVpp->setText(str);
//37	165	293	удаление точки посадки от антенны, м (напр.1)
	iAddr0=165 -128;
	str = QString("%1").arg((short)(unitReceive->selectedParameters0[iAddr0]));
	str2 = QString("%1").arg((short)(unitReceive->selectedParameters0[iAddr0]));
	if(!ui.liEdPnt1->hasFocus())
		ui.liEdPnt1->setText(str);
//41	169	292	удаление торца ВПП от антенны (нулевой километр), м 
	iAddr0=169 -128;
	str = QString("%1").arg((short)(unitReceive->selectedParameters0[iAddr0]));
	str2 = QString("%1").arg((short)(unitReceive->selectedParameters0[iAddr0]));
	if(!ui.liEdTorNulN2->hasFocus())
		ui.liEdTorNulN2->setText(str);
//40	168	291	высота антенны, пересчитанная к торцу ВП36	164	292
	iAddr0=168 -128;
	str = QString("%1").arg((short)(unitReceive->selectedParameters0[iAddr0]));
	str2 = QString("%1").arg((short)(unitReceive->selectedParameters0[iAddr0]));
	if(!ui.liEdHiVpp2->hasFocus())
		ui.liEdHiVpp2->setText(str);
//42	170	293	удаление точки посадки от антенны, м (напр.1)
	iAddr0=170 -128;
	str = QString("%1").arg((short)(unitReceive->selectedParameters0[iAddr0]));
	str2 = QString("%1").arg((short)(unitReceive->selectedParameters0[iAddr0]));
	if(!ui.liEdPnt2->hasFocus())
		ui.liEdPnt2->setText(str);
//44	172	300	младший байт: размах глиссады в градусах от 0є до указанного значения
//	cтарший байт: размах курса в градусах
	iAddr0=172 -128;
	a1=unitReceive->selectedParameters0[iAddr0];
	a2=a1;
	a1&=0xff;	//G
	a2&=0xff00;
	a2>>=8;		//C
	str=QString("%1").arg((short)(a1));
	str2=QString("%1").arg((short)(a2));
	if(!ui.liEdGlAmpl->hasFocus())
		ui.liEdGlAmpl->setText(str);
	if(!ui.liEdCourseAmpl->hasFocus())
		ui.liEdCourseAmpl->setText(str2);
//

}
