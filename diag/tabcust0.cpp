#include "tabcust0.h"

TabCust0::TabCust0(QWidget *parent)
	: QWidget(parent)
{
	ui.setupUi(this);
	ui.liEdAmisNumber->setMaxValue(32);
//
	createActions();
	ui.tabWidget->setTabEnabled(0,false);		//..........
}

TabCust0::~TabCust0()
{

}

void TabCust0::setTeEd00()
{
//////
	if(div==1)
	{
		div=0;
		for(int i=0;i<128;i++)
		{
			unitSend->basicSetting[i]=bl[i]; 
		}
		for(int i=0;i<128;i++)
		{
			unitSend->selectedParameters0[i]=bl[i+128]; 
		}
		for(int i=0;i<128;i++)
		{
			unitSend->selectedParameters1[i]=bl[i+256]; 
		}
	}
	div=0;

//////
	bool bFocus;
	bFocus=ui.teEd00->hasFocus();
	ushort a0=0;
//
	QString str,strTxt;
//
	str=QString("     ");
	strTxt+=str;
	for(int i=0;i<16;i++)
	{
		str=QString("%1 ").arg(i,4,10,QChar('0'));
		strTxt+=str;
	}
	strTxt+='\n';
//0
	for(int j=0;j<8;j++)
	{
		str=QString("%1: ").arg(j*16,3,10,QChar('0'));
		strTxt+=str;
		for(int i=0;i<16;i++)
		{
			a0=unitReceive->basicSetting[j*16+i];
			str=QString("%1 ").arg(a0,4,16,QChar('0'));
			strTxt+=str;
		}
		strTxt+='\n';
	}
	strTxt+='\n';
//1
	for(int j=0;j<8;j++)
	{
		str=QString("%1: ").arg(j*16,3,10,QChar('0'));
		strTxt+=str;
		for(int i=0;i<16;i++)
		{
			a0=unitReceive->selectedParameters0[j*16+i];
			str=QString("%1 ").arg(a0,4,16,QChar('0'));
			strTxt+=str;
		}
		strTxt+='\n';
	}
	strTxt+='\n';
//2
	for(int j=0;j<8;j++)
	{
		str=QString("%1: ").arg(j*16,3,10,QChar('0'));
		strTxt+=str;
		for(int i=0;i<16;i++)
		{
			a0=unitReceive->selectedParameters1[j*16+i];
			str=QString("%1 ").arg(a0,4,16,QChar('0'));
			strTxt+=str;
		}
		strTxt+='\n';
	}
	strTxt+='\n';
//etcr
	if(!bFocus)
	{
		ui.teEd00->setText(strTxt);
	}else
	{
		QStringList list0,listOut;
		int size0=0,size1=0;
		strTxt=ui.teEd00->toPlainText();
		list0=strTxt.split(" ");
		size0=list0.size();
		QString str0;
		size1=384;
		int k=21;int index=0;
		for(int i=0;i<size1;i++)
		{
			do
			{
				str0=list0[k++];
				index = str0.indexOf(':');
			}while(index!=-1);
			listOut.append(str0);
		}
		bool ok=true;
		for(int i=0;i<size1;i++)
		{
			str0=listOut[i];
			bl[i] = str0.toInt(&ok,16);
		}
		div=0;
		for(int i=0;i<128;i++)
		{
			if(	bl[i] != unitReceive->basicSetting[i])
			{
				div++;
			}
		}
		for(int i=0;i<128;i++)
		{
			if(	bl[i+128] != unitReceive->selectedParameters0[i])
			{
				div++;
			}
		}
		for(int i=0;i<128;i++)
		{
			if(	bl[i+256] != unitReceive->selectedParameters1[i])
			{
				div++;
			}
		}
		size0=list0.size();
		
	}
	return;
}
uchar TabCust0::firstChar(ushort a1)
{
	uchar ch1;

	a1 = a1;
	a1&=0xff;
	ch1 = a1;
	return ch1;
}
uchar TabCust0::secondChar(ushort a1)
{
	uchar ch1;
	a1&=0xff00;
	a1>>=8;
	ch1 = a1;
	return ch1;
}







void TabCust0::createActions()
{
	connect(ui.liEdIp,SIGNAL(editingFinished()),this,SLOT(fLineEditIPInitial()));
	connect(ui.liEdPortBase,SIGNAL(editingFinished()),this,SLOT(fLineEditBasicPort()));
	connect(ui.liEdSclonenie,SIGNAL(editingFinished()),this,SLOT(fLineEditGradient()));
	connect(ui.grBoPoC2,SIGNAL(clicked()),this,SLOT(slPoC2()));
	connect(ui.liEdPoC2Name,SIGNAL(editingFinished()),this,SLOT(slPoC2Name()));//
	connect(ui.coBoPoC2Number,SIGNAL(currentIndexChanged(int)),this,SLOT(slCoBoPoC2Number(int)));
	connect(ui.raBuGradientMagnetic,SIGNAL(clicked()),this,SLOT(slRaBuGradient()));
	connect(ui.raBuGradientGeographic,SIGNAL(clicked()),this,SLOT(slRaBuGradient()));
	connect(ui.liEdPointStandingDistance,SIGNAL(editingFinished()),this,SLOT(slLiEdPointStandingDistance()));
	connect(ui.liEdPointStandingAzimuth,SIGNAL(editingFinished()),this,SLOT(slLiEdPointStandingAzimuth()));

	connect(ui.grBoPoAmis,SIGNAL(clicked()),this,SLOT(grBoPoAmis()));
	connect(ui.liEdPoAmisName,SIGNAL(editingFinished()),this,SLOT(slLiEdPoAmisName()));//
	connect(ui.liEdAmisNumber,SIGNAL(editingFinished()),this,SLOT(slLiEdAmisNumber()));
	connect(ui.liEdPoAmisNameEP,SIGNAL(editingFinished()),this,SLOT(slLiEdPoAmisNameEP()));//
	connect(ui.coBoPoAmisNumber,SIGNAL(currentIndexChanged(int)),this,SLOT(slCoBoPoAmisNumber(int)));
	connect(ui.coBoPoAmisNumberLed,SIGNAL(currentIndexChanged(int)),this,SLOT(slCoBoPoAmisNumberLed(int)));
	connect(ui.coBoAmisComType,SIGNAL(currentIndexChanged(int)),this,SLOT(slCoBoAmisComType(int)));
	connect(ui.coBoAmisComBoude,SIGNAL(currentIndexChanged(int)),this,SLOT(slCoBoAmisComBoude(int)));
	connect(ui.coBoAmisComParity,SIGNAL(currentIndexChanged(int)),this,SLOT(slCoBoAmisComParity(int)));
	connect(ui.raBuAmisAsyn,SIGNAL(clicked()),this,SLOT(slRaBuAmisAsynSyn()));
	connect(ui.raBuAmisSyn,SIGNAL(clicked()),this,SLOT(slRaBuAmisAsynSyn()));

	connect(ui.grBoPoTahion,SIGNAL(clicked()),this,SLOT(grBoPoTahion()));
	connect(ui.liEdPoTahionName,SIGNAL(editingFinished()),this,SLOT(slLiEdPoTahionName()));//
	connect(ui.liEdTahionNumber,SIGNAL(editingFinished()),this,SLOT(slLiEdTahionNumber()));
//	connect(ui.liEdPoTahionNameEP,SIGNAL(editingFinished()),this,SLOT(slLiEdPoTahionNameEP()));//
	connect(ui.coBoPoTahionNumber,SIGNAL(currentIndexChanged(int)),this,SLOT(slCoBoPoTahionNumber(int)));
	connect(ui.coBoPoTahionNumberLed,SIGNAL(currentIndexChanged(int)),this,SLOT(slCoBoPoTahionNumberLed(int)));
	connect(ui.coBoTahionComType,SIGNAL(currentIndexChanged(int)),this,SLOT(slCoBoTahionComType(int)));
	connect(ui.coBoTahionComBoude,SIGNAL(currentIndexChanged(int)),this,SLOT(slCoBoTahionComBoude(int)));
	connect(ui.coBoTahionComParity,SIGNAL(currentIndexChanged(int)),this,SLOT(slCoBoTahionComParity(int)));
	connect(ui.raBuTahionAsyn,SIGNAL(clicked()),this,SLOT(slRaBuTahionAsynSyn()));
	connect(ui.raBuTahionSyn,SIGNAL(clicked()),this,SLOT(slRaBuTahionAsynSyn()));


	connect(ui.grBoLiram,SIGNAL(clicked()),this,SLOT(slGrBoLiram()));
	connect(ui.liEdLiram,SIGNAL(editingFinished()),this,SLOT(slLiEdLiram()));//
	connect(ui.coBoLiramNumber,SIGNAL(currentIndexChanged(int)),this,SLOT(slCoBoLiramNumber(int)));
	connect(ui.liEdLiramPntDistance,SIGNAL(editingFinished()),this,SLOT(slLiEdLiramPntDistance()));
	connect(ui.liEdLiramPntAzimuth,SIGNAL(editingFinished()),this,SLOT(slLiEdLiramPntAzimuth()));
	connect(ui.raBuLiramGradMagn,SIGNAL(clicked()),this,SLOT(slRaBuLiramGrad()));
	connect(ui.raBuLiramGradGeograph,SIGNAL(clicked()),this,SLOT(slRaBuLiramGrad()));
	connect(ui.raBuLiramAsyn,SIGNAL(clicked()),this,SLOT(slRaBuLiramAsynSyn()));
	connect(ui.raBuLiramSyn,SIGNAL(clicked()),this,SLOT(slRaBuLiramAsynSyn()));

	connect(ui.coBoPoLiramNumber,SIGNAL(currentIndexChanged(int)),this,SLOT(slCoBoPoLiramNumber(int)));
	connect(ui.coBoPoLiramNumberLed,SIGNAL(currentIndexChanged(int)),this,SLOT(slCoBoPoLiramNumberLed(int)));
	connect(ui.coBoLiramComType,SIGNAL(currentIndexChanged(int)),this,SLOT(slCoBoLiramComType(int)));
	connect(ui.coBoLiramComBoude,SIGNAL(currentIndexChanged(int)),this,SLOT(slCoBoLiramComBoude(int)));
	connect(ui.coBoLiramComParity,SIGNAL(currentIndexChanged(int)),this,SLOT(slCoBoLiramComParity(int)));
	createActionsKors();
	createActionsMVRL();

	return;
}
void TabCust0::setEnabledThe(bool b)
{
	ui.frObsch->setEnabled(b);
	ui.grBoPoC2->setEnabled(b);
	ui.grBoLiram->setEnabled(b);
	ui.grBoKors1->setEnabled(b);
	ui.grBoKors2->setEnabled(b);
	ui.grBoKors3->setEnabled(b);
	ui.grBoArp95->setEnabled(b);
	ui.grBoPoAmis->setEnabled(b);
	ui.grBoPoTahion->setEnabled(b);
}
void TabCust0::fLineEditIPInitial()
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
void TabCust0::fLineEditBasicPort()
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
void TabCust0::fLineEditGradient()
{
	int iAddr = 7;
	PLineEdit* lineEdit = ui.liEdSclonenie;
	fLiEdAzimuth(	lineEdit,
		&unitReceive->basicSetting[iAddr],
		&unitSend->basicSetting[iAddr]	);

}

void TabCust0::fLineEditPortBoard()
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
void TabCust0::slPoC2()
{
	int iAddr=128-128;
	bool b;
	b=ui.grBoPoC2->isChecked();
	wrd.f(
		unitReceive->selectedParameters0[iAddr]
		)->bit15=b;
	unitReceive->selectedParameters0[iAddr]=wrd.f();
	unitSend->selectedParameters0[iAddr]=wrd.f();
	return;
}
void TabCust0::slPoC2Name()
{
	int iAddr =130;
	PLineEdit* lineEdit = ui.liEdPoC2Name;
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
		unitReceive->selectedParameters0[iAddr-128+i]=ua[i];
		unitSend->selectedParameters0[iAddr-128+i]=ua[i];
	}
}
void TabCust0::slCoBoPoC2Number(int index)
{
	if(ui.coBoPoC2Number->hasFocus()&&index<4)
	{
		int iAddr =129 -128;
		wrd.f(unitReceive->selectedParameters0[iAddr]);
		wrdWr.f(index);
		wrd.s.bit0=wrdWr.s.bit0;
		wrd.s.bit1=wrdWr.s.bit1;
		unitReceive->selectedParameters0[iAddr]=wrd.f();
		unitSend->selectedParameters0[iAddr]=wrd.f();
	}
	return;
}

void TabCust0::slRaBuGradient()
{
	int iAddr =129 -128;
	wrd.f(unitReceive->selectedParameters0[iAddr]);
	wrd.s.bit15=ui.raBuGradientMagnetic->isChecked();
	unitReceive->selectedParameters0[iAddr]=wrd.f();
	unitSend->selectedParameters0[iAddr]=wrd.f();
	return;
}
void TabCust0::slLiEdPointStandingDistance()
{
//138
	int iAddr = 138-128;
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
void TabCust0::slLiEdPointStandingAzimuth()
{
//139

	int iAddr =139 -128;
	PLineEdit* lineEdit = ui.liEdPointStandingAzimuth ;

	fLiEdAzimuth(	lineEdit,
		&unitReceive->selectedParameters0[iAddr],
		&unitSend->selectedParameters0[iAddr]	);
	return;
}

void TabCust0::grBoPoAmis()
{
	int iAddr=104;
	bool b;
	b=ui.grBoPoAmis->isChecked();
	wrd.f(
		unitReceive->basicSetting[iAddr]
		)->bit15=b;
		unitReceive->basicSetting[iAddr]=wrd.f();
		unitSend->basicSetting[iAddr]=wrd.f();
	return;
}
void TabCust0::slRaBuAmisAsynSyn()
{
	int iAddr =104;
	wrd.f(unitReceive->basicSetting[iAddr]);
	int numPort=wrd.s.bit2<<2|wrd.s.bit1<<1|wrd.s.bit0;
//если порт четный syn не выбирается
	if((numPort&1)==0)	//четный
	{
		if(ui.raBuAmisAsyn->isChecked())
		{
			wrd.s.bit14=0;
		}
	}else
	{
		wrd.s.bit14=ui.raBuAmisSyn->isChecked();
	}
	unitReceive->basicSetting[iAddr]=wrd.f();
	unitSend->basicSetting[iAddr]=wrd.f();
	return;
}
void TabCust0::slLiEdPoAmisName()
{
	int iAddr =106;
	PLineEdit* lineEdit = ui.liEdPoAmisName;
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
		unitReceive->basicSetting[iAddr+i]=ua[i];
		unitSend->basicSetting[iAddr+i]=ua[i];
	}
}
void TabCust0::slLiEdAmisNumber()
{
//105
	int iAddr = 105;
	OLineEdit* lineEdit = ui.liEdAmisNumber;
	int b1=0;
	wrd.f(unitReceive->basicSetting[iAddr]);
	QString str1,str2;
	str1=lineEdit->text();
	b1=str1.toInt()-1;
	b1 &= 0x1f;
	wrdWr.f(b1);

	wrd.s.bit0=wrdWr.s.bit0;
	wrd.s.bit1=wrdWr.s.bit1;
	wrd.s.bit2=wrdWr.s.bit2;
	wrd.s.bit3=wrdWr.s.bit3;
	wrd.s.bit4=wrdWr.s.bit4;
	lineEdit->setText(QString("%1").arg(b1+1));
	unitReceive->basicSetting[iAddr]=wrd.f();
	unitSend->basicSetting[iAddr]=wrd.f();
	return;
}
void TabCust0::slLiEdPoAmisNameEP()
{
	int iAddr =114;
	PLineEdit* lineEdit = ui.liEdPoAmisNameEP;
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
		unitReceive->basicSetting[iAddr+i]=ua[i];
		unitSend->basicSetting[iAddr+i]=ua[i];
	}
}
void TabCust0::slCoBoPoAmisNumber(int index)
{
	if(ui.coBoPoAmisNumber->hasFocus()&&index<11)
	{
		int iAddr =104;
		ushort b0=0;
		wrd.f(unitReceive->basicSetting[iAddr]);
		wrdWr.f(index);
		wrd.s.bit0=wrdWr.s.bit0;
		wrd.s.bit1=wrdWr.s.bit1;
		wrd.s.bit2=wrdWr.s.bit2;
		wrd.s.bit3=wrdWr.s.bit3;
		b0=wrd.f();
		unitReceive->basicSetting[iAddr]=wrd.f();
		unitSend->basicSetting[iAddr]=wrd.f();
//
		if(index==0&&ui.grBoPoAmis->isEnabled())
		{
			ui.frBoPoAmisCom->setEnabled(true);
		}else
		{
			ui.frBoPoAmisCom->setEnabled(false);
		}
	}
	return;
}

void TabCust0::slCoBoPoAmisNumberLed(int index)
{
	if(ui.coBoPoAmisNumberLed->hasFocus()&&index<11)
	{
		int iAddr =104;
		ushort b0=0;
		wrd.f(unitReceive->basicSetting[iAddr]);
		wrdWr.f(index);
		wrd.s.bit4=wrdWr.s.bit0;
		wrd.s.bit5=wrdWr.s.bit1;
		wrd.s.bit6=wrdWr.s.bit2;
		wrd.s.bit7=wrdWr.s.bit3;
		b0=wrd.f();
		unitReceive->basicSetting[iAddr]=wrd.f();
		unitSend->basicSetting[iAddr]=wrd.f();
	}
	return;
}

void TabCust0::slCoBoAmisComType(int index)
{
	if(ui.coBoAmisComType->hasFocus()&&index<2)
	{
		int iAddr =104;
		ushort b0=0;
		wrd.f(unitReceive->basicSetting[iAddr]);
		wrdWr.f(index);
		wrd.s.bit11=wrdWr.s.bit0;
		b0=wrd.f();
		unitReceive->basicSetting[iAddr]=wrd.f();
		unitSend->basicSetting[iAddr]=wrd.f();
	}
	return;
}
void TabCust0::slCoBoAmisComBoude(int index)
{
	if(ui.coBoAmisComBoude->hasFocus()&&index<8)
	{
		int iAddr =104;
		ushort b0=0;
		wrd.f(unitReceive->basicSetting[iAddr]);
		wrdWr.f(index);
		wrd.s.bit8=wrdWr.s.bit0;
		wrd.s.bit9=wrdWr.s.bit1;
		wrd.s.bit10=wrdWr.s.bit2;
		b0=wrd.f();
		unitReceive->basicSetting[iAddr]=wrd.f();
		unitSend->basicSetting[iAddr]=wrd.f();
	}
	return;
}
void TabCust0::slCoBoAmisComParity(int index)
{
	if(ui.coBoAmisComParity->hasFocus())
	{
		int iAddr = 104;
		wrd.f(unitReceive->basicSetting[iAddr]);
		if(index==0)
			wrd.s.bit12=0;
		if(index==1)
		{
			wrd.s.bit12=1;
			wrd.s.bit13=0;
		}
		if(index==2)
		{
			wrd.s.bit12=1;
			wrd.s.bit13=1;
		}
	unitReceive->basicSetting[iAddr]=wrd.f();
	unitSend->basicSetting[iAddr]=wrd.f();
	}
	return;
}
/////////////////////////////////////////////////////////////////////
void TabCust0::grBoPoTahion()
{
	int iAddr=368-256;
	bool b;
	b=ui.grBoPoTahion->isChecked();
	wrd.f(
		unitReceive->selectedParameters1[iAddr]
		)->bit15=b;
		unitReceive->selectedParameters1[iAddr]=wrd.f();
		unitSend->selectedParameters1[iAddr]=wrd.f();
	return;
}
void TabCust0::slRaBuTahionAsynSyn()
{
	int iAddr =368-256;
	wrd.f(unitReceive->selectedParameters1[iAddr]);
	int numPort=wrd.s.bit2<<2|wrd.s.bit1<<1|wrd.s.bit0;
//если порт четный syn не выбирается
	if((numPort&1)==0)	//четный
	{
		if(ui.raBuTahionAsyn->isChecked())
		{
			wrd.s.bit14=0;
		}
	}else
	{
		wrd.s.bit14=ui.raBuTahionSyn->isChecked();
	}
	unitReceive->selectedParameters1[iAddr]=wrd.f();
	unitSend->selectedParameters1[iAddr]=wrd.f();
	return;
}
void TabCust0::slLiEdPoTahionName()
{
	int iAddr =370-256;
	PLineEdit* lineEdit = ui.liEdPoTahionName;
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
		unitReceive->selectedParameters1[iAddr+i]=ua[i];
		unitSend->selectedParameters1[iAddr+i]=ua[i];
	}
}
void TabCust0::slLiEdTahionNumber()
{
//105
	int iAddr = 369-256;
	OLineEdit* lineEdit = ui.liEdTahionNumber;
	int b1=0;
	wrd.f(unitReceive->selectedParameters1[iAddr]);
	QString str1,str2;
	str1=lineEdit->text();
	b1=str1.toInt()-1;
	b1 &= 0x1f;
	wrdWr.f(b1);
	wrd.s.bit0=wrdWr.s.bit0;
	wrd.s.bit1=wrdWr.s.bit1;
	wrd.s.bit2=wrdWr.s.bit2;
	wrd.s.bit3=wrdWr.s.bit3;
	wrd.s.bit4=wrdWr.s.bit4;
	lineEdit->setText(QString("%1").arg(b1+1));
	unitReceive->selectedParameters1[iAddr]=wrd.f();
	unitSend->selectedParameters1[iAddr]=wrd.f();
	return;
}
void TabCust0::slCoBoPoTahionNumber(int index)
{
	if(ui.coBoPoTahionNumber->hasFocus()&&index<11)
	{
		int iAddr =368-256;
		ushort b0=0;
		wrd.f(unitReceive->selectedParameters1[iAddr]);
		wrdWr.f(index);
		wrd.s.bit0=wrdWr.s.bit0;
		wrd.s.bit1=wrdWr.s.bit1;
		wrd.s.bit2=wrdWr.s.bit2;
		wrd.s.bit3=wrdWr.s.bit3;
		b0=wrd.f();
		unitReceive->selectedParameters1[iAddr]=wrd.f();
		unitSend->selectedParameters1[iAddr]=wrd.f();
//
		if(index==0&&ui.grBoPoTahion->isEnabled())
		{
			ui.frBoPoTahionCom->setEnabled(true);
		}else
		{
			ui.frBoPoTahionCom->setEnabled(false);
		}
	}
	return;
}

void TabCust0::slCoBoPoTahionNumberLed(int index)
{
	if(ui.coBoPoTahionNumberLed->hasFocus()&&index<11)
	{
		int iAddr =368-256;
		ushort b0=0;
		wrd.f(unitReceive->selectedParameters1[iAddr]);
		wrdWr.f(index);
		wrd.s.bit4=wrdWr.s.bit0;
		wrd.s.bit5=wrdWr.s.bit1;
		wrd.s.bit6=wrdWr.s.bit2;
		wrd.s.bit7=wrdWr.s.bit3;
		b0=wrd.f();
		unitReceive->selectedParameters1[iAddr]=wrd.f();
		unitSend->selectedParameters1[iAddr]=wrd.f();
	}
	return;
}

void TabCust0::slCoBoTahionComType(int index)
{
	if(ui.coBoTahionComType->hasFocus()&&index<2)
	{
		int iAddr =368-256;
		ushort b0=0;
		wrd.f(unitReceive->selectedParameters1[iAddr]);
		wrdWr.f(index);
		wrd.s.bit11=wrdWr.s.bit0;
		b0=wrd.f();
		unitReceive->selectedParameters1[iAddr]=wrd.f();
		unitSend->selectedParameters1[iAddr]=wrd.f();
	}
	return;
}
void TabCust0::slCoBoTahionComBoude(int index)
{
	if(ui.coBoTahionComBoude->hasFocus()&&index<8)
	{
		int iAddr =368-256;
		ushort b0=0;
		wrd.f(unitReceive->selectedParameters1[iAddr]);
		wrdWr.f(index);
		wrd.s.bit8=wrdWr.s.bit0;
		wrd.s.bit9=wrdWr.s.bit1;
		wrd.s.bit10=wrdWr.s.bit2;
		b0=wrd.f();
		unitReceive->selectedParameters1[iAddr]=wrd.f();
		unitSend->selectedParameters1[iAddr]=wrd.f();
	}
	return;
}
void TabCust0::slCoBoTahionComParity(int index)
{
	if(ui.coBoTahionComParity->hasFocus())
	{
		int iAddr = 368-256;
		wrd.f(unitReceive->selectedParameters1[iAddr]);
		if(index==0)
			wrd.s.bit12=0;
		if(index==1)
		{
			wrd.s.bit12=1;
			wrd.s.bit13=0;
		}
		if(index==2)
		{
			wrd.s.bit12=1;
			wrd.s.bit13=1;
		}
	unitReceive->selectedParameters1[iAddr]=wrd.f();
	unitSend->selectedParameters1[iAddr]=wrd.f();
	}
	return;
}
/////////////////////////////////////////////////////////////////////
///--//
void TabCust0::slGrBoLiram()
{
	int iAddr=144 -128;
	bool b;
	b=ui.grBoLiram->isChecked();
	wrd.f(
		unitReceive->selectedParameters0[iAddr]
		)->bit15=b;
		unitReceive->selectedParameters0[iAddr]=wrd.f();
		unitSend->selectedParameters0[iAddr]=wrd.f();
	return;
}
void TabCust0::slLiEdLiram()
{
	int iAddr =146 -128;
	PLineEdit* lineEdit = ui.liEdLiram;
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
void TabCust0::slCoBoLiramNumber(int index)
{
//145
	if(ui.coBoLiramNumber->hasFocus()&&index<4)
	{
		int iAddr =145 -128;
		wrd.f(unitReceive->selectedParameters0[iAddr]);
		wrdWr.f(index);
		wrd.s.bit0=wrdWr.s.bit0;
		wrd.s.bit1=wrdWr.s.bit1;
		unitReceive->selectedParameters0[iAddr]=wrd.f();
		unitSend->selectedParameters0[iAddr]=wrd.f();
	}
	return;
}
void TabCust0::slLiEdLiramPntDistance()
{
//154
	int iAddr = 154-128;
	PLineEdit* lineEdit = ui.liEdLiramPntDistance;
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
void TabCust0::slLiEdLiramPntAzimuth()
{
//155
	int iAddr =155 -128;
	PLineEdit* lineEdit = ui.liEdLiramPntAzimuth ;
	fLiEdAzimuth(	lineEdit,
		&unitReceive->selectedParameters0[iAddr],
		&unitSend->selectedParameters0[iAddr]	);
	return;
}
void TabCust0::slRaBuLiramGrad()
{
	int iAddr =145 -128;
	wrd.f(unitReceive->selectedParameters0[iAddr]);
	wrd.s.bit15=ui.raBuLiramGradMagn->isChecked();
	unitReceive->selectedParameters0[iAddr]=wrd.f();
	unitSend->selectedParameters0[iAddr]=wrd.f();
	return;
}
void TabCust0::slCoBoPoLiramNumber(int index)
{
	if(ui.coBoPoLiramNumber->hasFocus()&&index<11)
	{
		int iAddr =144 -128;
		ushort b0=0;
		wrd.f(unitReceive->selectedParameters0[iAddr]);
		wrdWr.f(index);
		wrd.s.bit0=wrdWr.s.bit0;
		wrd.s.bit1=wrdWr.s.bit1;
		wrd.s.bit2=wrdWr.s.bit2;
		wrd.s.bit3=wrdWr.s.bit3;
		b0=wrd.f();
//
		if(index==0&&ui.grBoLiram->isEnabled())
		{
			ui.frBoPoLiramCom->setEnabled(true);
		}else
		{
			ui.frBoPoLiramCom->setEnabled(false);
		}
		if((index&1)==0)	//четный
		{
			if(wrd.s.bit14)
			{
				wrd.s.bit14=0;	//скидывается бит синхр/асинхр
			}
		}
		unitReceive->selectedParameters0[iAddr]=wrd.f();
		unitSend->selectedParameters0[iAddr]=wrd.f();
	}
	return;
}
void TabCust0::slCoBoLiramComBoude(int index)
{
	if(ui.coBoLiramComBoude->hasFocus()&&index<8)
	{
		int iAddr =144 -128;
		ushort b0=0;
		wrd.f(unitReceive->selectedParameters0[iAddr]);
		wrdWr.f(index);
		wrd.s.bit8=wrdWr.s.bit0;
		wrd.s.bit9=wrdWr.s.bit1;
		wrd.s.bit10=wrdWr.s.bit2;
		b0=wrd.f();
		unitReceive->selectedParameters0[iAddr]=wrd.f();
		unitSend->selectedParameters0[iAddr]=wrd.f();
	}
	return;
}
void TabCust0::slCoBoLiramComParity(int index)
{
	if(ui.coBoLiramComParity->hasFocus())
	{
		int iAddr = 144 -128;
		wrd.f(unitReceive->selectedParameters0[iAddr]);
		if(index==0)
			wrd.s.bit12=0;
		if(index==1)
		{
			wrd.s.bit12=1;
			wrd.s.bit13=0;
		}
		if(index==2)
		{
			wrd.s.bit12=1;
			wrd.s.bit13=1;
		}
	unitReceive->selectedParameters0[iAddr]=wrd.f();
	unitSend->selectedParameters0[iAddr]=wrd.f();
	}
	return;
}
void TabCust0::slCoBoLiramComType(int index)
{
	if(ui.coBoLiramComType->hasFocus()&&index<2)
	{
		int iAddr =144 -128;
		ushort b0=0;
		wrd.f(unitReceive->selectedParameters0[iAddr]);
		wrdWr.f(index);
		wrd.s.bit11=wrdWr.s.bit0;
		b0=wrd.f();
		unitReceive->selectedParameters0[iAddr]=wrd.f();
		unitSend->selectedParameters0[iAddr]=wrd.f();
	}
	return;
}
void TabCust0::slCoBoPoLiramNumberLed(int index)
{
	if(ui.coBoPoLiramNumberLed->hasFocus()&&index<11)
	{
		int iAddr =144 -128;
		ushort b0=0;
		wrd.f(unitReceive->selectedParameters0[iAddr]);
		wrdWr.f(index);
		wrd.s.bit4=wrdWr.s.bit0;
		wrd.s.bit5=wrdWr.s.bit1;
		wrd.s.bit6=wrdWr.s.bit2;
		wrd.s.bit7=wrdWr.s.bit3;
		b0=wrd.f();
		unitReceive->selectedParameters0[iAddr]=wrd.f();
		unitSend->selectedParameters0[iAddr]=wrd.f();
	}
	return;
}
void TabCust0::slRaBuLiramAsynSyn()
{
	int iAddr =144 -128;
	wrd.f(unitReceive->selectedParameters0[iAddr]);
	int numPort=wrd.s.bit2<<2|wrd.s.bit1<<1|wrd.s.bit0;
///*
//если порт четный syn не выбирается
	if((numPort&1)==0)	//четный
	{
		if(ui.raBuLiramAsyn->isChecked())
		{
			wrd.s.bit14=0;
		}
	}else
	{
		wrd.s.bit14=ui.raBuLiramSyn->isChecked();
	}
//*/
//	wrd.s.bit14=ui.raBuLiramSyn->isChecked();
	unitReceive->selectedParameters0[iAddr]=wrd.f();
	unitSend->selectedParameters0[iAddr]=wrd.f();
	return;
}

////////////////////////////////////
////////////////////////////////////
void TabCust0::updateDialogSet()
{
//Amis
	int iAddr =104;
	wrd.f(unitReceive->basicSetting[iAddr]);
	int numPort=wrd.s.bit2<<2|wrd.s.bit1<<1|wrd.s.bit0;
//если порт четный syn не выбирается
	if((numPort&1)==0)	//четный
	{
		wrd.s.bit14=0;
	}
	unitReceive->basicSetting[iAddr]=wrd.f();
	unitSend->basicSetting[iAddr]=wrd.f();
//Liram
	iAddr =144 -128;
	wrd.f(unitReceive->selectedParameters0[iAddr]);
	numPort=wrd.s.bit2<<2|wrd.s.bit1<<1|wrd.s.bit0;
//если порт четный syn не выбирается
	if((numPort&1)==0)	//четный
	{
		wrd.s.bit14=0;
	}
	unitReceive->selectedParameters0[iAddr]=wrd.f();
	unitSend->selectedParameters0[iAddr]=wrd.f();
//Kors1
	iAddr =160 -128;
	wrd.f(unitReceive->selectedParameters0[iAddr]);
	numPort=wrd.s.bit2<<2|wrd.s.bit1<<1|wrd.s.bit0;
//если порт четный syn не выбирается
	if((numPort&1)==0)	//четный
	{
		wrd.s.bit14=0;
	}
	unitReceive->selectedParameters0[iAddr]=wrd.f();
	unitSend->selectedParameters0[iAddr]=wrd.f();
//
//Kors2
	iAddr =176 -128;
	wrd.f(unitReceive->selectedParameters0[iAddr]);
	numPort=wrd.s.bit2<<2|wrd.s.bit1<<1|wrd.s.bit0;
//если порт четный syn не выбирается
	if((numPort&1)==0)	//четный
	{
		wrd.s.bit14=0;
	}
	unitReceive->selectedParameters0[iAddr]=wrd.f();
	unitSend->selectedParameters0[iAddr]=wrd.f();
//
//Kors3
	iAddr =192 -128;
	wrd.f(unitReceive->selectedParameters0[iAddr]);
	numPort=wrd.s.bit2<<2|wrd.s.bit1<<1|wrd.s.bit0;
//если порт четный syn не выбирается
	if((numPort&1)==0)	//четный
	{
		wrd.s.bit14=0;
	}
	unitReceive->selectedParameters0[iAddr]=wrd.f();
	unitSend->selectedParameters0[iAddr]=wrd.f();
//
//MVRL1
	iAddr =208 -128;
	wrd.f(unitReceive->selectedParameters0[iAddr]);
	numPort=wrd.s.bit2<<2|wrd.s.bit1<<1|wrd.s.bit0;
//если порт четный syn не выбирается
	if((numPort&1)==0)	//четный
	{
		wrd.s.bit14=0;
	}
	unitReceive->selectedParameters0[iAddr]=wrd.f();
	unitSend->selectedParameters0[iAddr]=wrd.f();
//
//MVRL2
	iAddr =224 -128;
	wrd.f(unitReceive->selectedParameters0[iAddr]);
	numPort=wrd.s.bit2<<2|wrd.s.bit1<<1|wrd.s.bit0;
//если порт четный syn не выбирается
	if((numPort&1)==0)	//четный
	{
		wrd.s.bit14=0;
	}
	unitReceive->selectedParameters0[iAddr]=wrd.f();
	unitSend->selectedParameters0[iAddr]=wrd.f();
//
//St2Th
	iAddr =240 -128;
	wrd.f(unitReceive->selectedParameters0[iAddr]);
	numPort=wrd.s.bit2<<2|wrd.s.bit1<<1|wrd.s.bit0;
//если порт четный syn не выбирается
	if((numPort&1)==0)	//четный
	{
		wrd.s.bit14=0;
	}
	unitReceive->selectedParameters0[iAddr]=wrd.f();
	unitSend->selectedParameters0[iAddr]=wrd.f();
//
//Arp95
	iAddr =288 -256;
	wrd.f(unitReceive->selectedParameters1[iAddr]);
	numPort=wrd.s.bit2<<2|wrd.s.bit1<<1|wrd.s.bit0;
//если порт четный syn не выбирается
	if((numPort&1)==0)	//четный
	{
		wrd.s.bit14=0;
	}
	unitReceive->selectedParameters1[iAddr]=wrd.f();
	unitSend->selectedParameters1[iAddr]=wrd.f();
}
void TabCust0::updateDialog()
{
	setTeEd00();
//
	int iAddr0=0;
	ushort a0,a1,a2,a3;
	QString str,strWhole,str0,str1,str2;
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
//C2::::::::::::::
//128	параметры порта
//		бит 15:	1 — порт разрешен
	iAddr0=128-128;
	
	ui.grBoPoC2->setChecked(
	wrd.f(unitReceive->selectedParameters0[iAddr0])->bit15);
//130…137  название источника
	iAddr0=130;
	for (int i=0;i<16;i++)
	{
		k0=i;
		if(i/2*2==i)
		{
			ch = firstChar(unitReceive->selectedParameters0[i/2+iAddr0-128]);
			if(ch == 0x00) break;
			nameSource[i]=ch;
		}
		else
		{
			ch  = secondChar(unitReceive->selectedParameters0[i/2+iAddr0-128]);
			if(ch == 0x0)break;
			nameSource[i] = ch;
		}
	}
	str2 = QString::fromAscii(nameSource,k0);
	if(!ui.liEdPoC2Name->hasFocus())
		ui.liEdPoC2Name->setText(str2);
//129	параметры устройства(C2)
	iAddr0 =129-128;
//биты 1,0:	номер устройства
	wrd.f(unitReceive->selectedParameters0[iAddr0]);
	a1 = wrd.s.bit1*2+wrd.s.bit0;
	ui.coBoPoC2Number->setCurrentIndex(a1);
//бит 15:	склонение (0 — географическое (истинное), 1 — магнитное)
	if(wrd.s.bit15)
		ui.raBuGradientMagnetic->setChecked(true);
	else
		ui.raBuGradientGeographic->setChecked(true);
//138	дальность точки стояния, метры
	iAddr0 =138 -128;
	a1 = unitReceive->selectedParameters0[iAddr0];
	str = QString("%1").arg(a1);
	if(!ui.liEdPointStandingDistance->hasFocus())
		ui.liEdPointStandingDistance->setText(str);
//139 азимут точки стояния, минуты (градусы ? 60)
	iAddr0=139 -128;
	a0 = unitReceive->selectedParameters0[iAddr0];
	a1 = a0/60;
	a2 = a0 - (a1*60);
	str = QString("%1").arg(a1);
	str.append(QString("°%1'").arg(a2,2,10,QLatin1Char( '0' )));
	if(!ui.liEdPointStandingAzimuth->hasFocus())
		ui.liEdPointStandingAzimuth->setText(str);
//Amis::::::::::::::АМИС-РФ
//104	параметры порта
//		бит 15:	1 — порт разрешен
	iAddr0=104;
	ui.grBoPoAmis->setChecked(
		wrd.f(unitReceive->basicSetting[iAddr0])->bit15);
//106…113  название источника
	iAddr0=106;
	for (int i=0;i<16;i++)
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
	if(!ui.liEdPoAmisName->hasFocus())
		ui.liEdPoAmisName->setText(str2);
//105	параметры устройства(Amis)
	iAddr0 =105;
//биты 4..0:	номер устройства
	wrd.f(unitReceive->basicSetting[iAddr0]);
	a1 = 
		wrd.s.bit4*16+wrd.s.bit3*8
		+wrd.s.bit2*4+wrd.s.bit1*2
		+wrd.s.bit0;
	str2 = QString("%1").arg(a1+1);
	if(!ui.liEdAmisNumber->hasFocus())
		ui.liEdAmisNumber->setText(str2);
//114…121  название источника
	iAddr0=114;
	for (int i=0;i<16;i++)
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
	if(!ui.liEdPoAmisNameEP->hasFocus())
		ui.liEdPoAmisNameEP->setText(str2);
//104	параметры порта(Amis)
	iAddr0 =104;
//биты 1,0:	номер устройства
	wrd.f(unitReceive->basicSetting[iAddr0]);
	a1 =	wrd.s.bit3*8+wrd.s.bit2*4
		+	wrd.s.bit1*2+wrd.s.bit0;
	ui.coBoPoAmisNumber->setCurrentIndex(a1);
//
	if(a1==0&&ui.frBoPoAmisCom->isEnabled()==false
		&&ui.grBoPoAmis->isChecked())
	{
		ui.frBoPoAmisCom->setEnabled(true);
	}
	if(a1!=0&&ui.frBoPoAmisCom->isEnabled()==true)
	{
		ui.frBoPoAmisCom->setEnabled(false);
	}
//биты 7..4:	номер светодиода
	a1 =	wrd.s.bit7*8+wrd.s.bit6*4
		+	wrd.s.bit5*2+wrd.s.bit4;
	ui.coBoPoAmisNumberLed->setCurrentIndex(a1);
//bit 11:	0-RS-232,1-RS485
	ui.coBoAmisComType->setCurrentIndex(wrd.s.bit11);
//bits 10...8	-	скорость
	a1 =wrd.s.bit10*4+wrd.s.bit9*2+wrd.s.bit8;
	ui.coBoAmisComBoude->setCurrentIndex(a1);
//бит 12: 0 — бит четности отсутствует, 1 — бит четности присутствует
//бит 13: 0 — четность, 1 — нечетность 
	if(wrd.s.bit12==0)
	{
		ui.coBoAmisComParity->setCurrentIndex(0);
	}else
	{
		if(wrd.s.bit13==0)
			ui.coBoAmisComParity->setCurrentIndex(1);
		else
			ui.coBoAmisComParity->setCurrentIndex(2);
	}
//бит 14:	для порта 8: 0 - порты 8,9,10 - независимые порты, 1 - порты
//8,9,10 образуют стык С2
//для нечетных портов: 0- асинхронный, 1-синхронный
//для остальных портов не используется
	if(wrd.s.bit14==0)
	{
		ui.raBuAmisAsyn->setChecked(true);
	}else
	{
		ui.raBuAmisSyn->setChecked(true);
	}
////--//
//145	параметры устройства(Liram)
	iAddr0 =145-128;
//биты 1,0:	номер устройства
	wrd.f(unitReceive->selectedParameters0[iAddr0]);
	a1 = wrd.s.bit1*2 +wrd.s.bit0;
	ui.coBoLiramNumber->setCurrentIndex(a1);
//бит 15:	склонение (0 — географическое (истинное), 1 — магнитное)
	if(wrd.s.bit15)
		ui.raBuLiramGradMagn->setChecked(true);
	else
		ui.raBuLiramGradGeograph->setChecked(true);

//146…153  название источника
	iAddr0=146 -128;
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
	if(!ui.liEdLiram->hasFocus())
		ui.liEdLiram->setText(str2);

//144	параметры порта(Liram)
	iAddr0 =144-128;
	wrd.f(unitReceive->selectedParameters0[iAddr0]);
//		бит 15:	1 — порт разрешен
	ui.grBoLiram->setChecked(wrd.s.bit15);
//биты 1,0:	номер устройства
	a1 =	wrd.s.bit3*8+wrd.s.bit2*4
		+	wrd.s.bit1*2+wrd.s.bit0;
	ui.coBoPoLiramNumber->setCurrentIndex(a1);
//
	if(a1==0&&ui.frBoPoLiramCom->isEnabled()==false
		&&ui.grBoLiram->isChecked())
	{
		ui.frBoPoLiramCom->setEnabled(true);
	}
	if(a1!=0&&ui.frBoPoLiramCom->isEnabled()==true)
	{
		ui.frBoPoLiramCom->setEnabled(false);
	}
//биты 7..4:	номер светодиода
	a1 =	wrd.s.bit7*8+wrd.s.bit6*4
		+	wrd.s.bit5*2+wrd.s.bit4;
	ui.coBoPoLiramNumberLed->setCurrentIndex(a1);
//bit 11:	0-RS-232,1-RS485
	ui.coBoLiramComType->setCurrentIndex(wrd.s.bit11);
//bits 10...8	-	скорость
	a1 =wrd.s.bit10*4+wrd.s.bit9*2+wrd.s.bit8;
	ui.coBoLiramComBoude->setCurrentIndex(a1);
//бит 12: 0 — бит четности отсутствует, 1 — бит четности присутствует
//бит 13: 0 — четность, 1 — нечетность 
	if(wrd.s.bit12==0)
	{
		ui.coBoLiramComParity->setCurrentIndex(0);
	}else
	{
		if(wrd.s.bit13==0)
			ui.coBoLiramComParity->setCurrentIndex(1);
		else
			ui.coBoLiramComParity->setCurrentIndex(2);
	}
//бит 14:	для порта 8: 0 - порты 8,9,10 - независимые порты, 1 - порты
//8,9,10 образуют стык С2
//для нечетных портов: 0- асинхронный, 1-синхронный
//для остальных портов не используется
/*
	if(unitReceive->selectedParameters0[128-128]&0x8000)	//c2
	{
		ui.groupBoxLiram->setEnabled(false);
	}else
	{
		ui.groupBoxLiram->setEnabled(true);
	}
*/
	if(wrd.s.bit14==0)
	{
		ui.raBuLiramAsyn->setChecked(true);
	}else
	{
		ui.raBuLiramSyn->setChecked(true);
	}
//154	дальность точки стояния, метры
	iAddr0 =154 -128;
	a1 = unitReceive->selectedParameters0[iAddr0];
	str = QString("%1").arg(a1);
	if(!ui.liEdLiramPntDistance->hasFocus())
		ui.liEdLiramPntDistance->setText(str);
//155 азимут точки стояния, минуты (градусы ? 60)
	iAddr0=155 -128;
	a0 = unitReceive->selectedParameters0[iAddr0];
	a1 = a0/60;
	a2 = a0 - (a1*60);
	str = QString("%1").arg(a1);
	str.append(QString("°%1'").arg(a2,2,10,QLatin1Char( '0' )));
	if(!ui.liEdLiramPntAzimuth->hasFocus())
		ui.liEdLiramPntAzimuth->setText(str);
//
////////////////////////////////////////////////////////////////////////////////////
//Tahion::::::::::::::Тахион
//368	параметры порта
//		бит 15:	1 — порт разрешен
	iAddr0=368-256;
	ui.grBoPoTahion->setChecked(
		wrd.f(unitReceive->selectedParameters1[iAddr0])->bit15);
//370…377  название источника
	iAddr0=370-256;
	for (int i=0;i<16;i++)
	{
		k0=i;
		if(i/2*2==i)
		{
			ch = firstChar(unitReceive->selectedParameters1[i/2+iAddr0]);
			if(ch == 0x00) break;
			nameSource[i]=ch;
		}
		else
		{
			ch  = secondChar(unitReceive->selectedParameters1[i/2+iAddr0]);
			if(ch == 0x0)break;
			nameSource[i] = ch;
		}
	}
	str2 = QString::fromAscii(nameSource,k0);
	if(!ui.liEdPoTahionName->hasFocus())
		ui.liEdPoTahionName->setText(str2);
//369	параметры устройства(Tahion)
	iAddr0 =369-256;
//биты 4..0:	номер устройства
	wrd.f(unitReceive->selectedParameters1[iAddr0]);
	a1 = 
		wrd.s.bit4*16+wrd.s.bit3*8
		+wrd.s.bit2*4+wrd.s.bit1*2
		+wrd.s.bit0;
	str2 = QString("%1").arg(a1+1);
	if(!ui.liEdTahionNumber->hasFocus())
		ui.liEdTahionNumber->setText(str2);
/*
//114…121  название источника
	iAddr0=114-256;
	for (int i=0;i<16;i++)
	{
		k0=i;
		if(i/2*2==i)
		{
			ch = firstChar(unitReceive->selectedParameters1[i/2+iAddr0]);
			if(ch == 0x00) break;
			nameSource[i]=ch;
		}
		else
		{
			ch  = secondChar(unitReceive->selectedParameters1[i/2+iAddr0]);
			if(ch == 0x0)break;
			nameSource[i] = ch;
		}
	}
	str2 = QString::fromAscii(nameSource,k0);
	if(!ui.liEdPoTahionNameEP->hasFocus())
		ui.liEdPoTahionNameEP->setText(str2);
*/
//368	параметры порта(Tahion)
	iAddr0 =368-256;
//биты 1,0:	номер устройства
	wrd.f(unitReceive->selectedParameters1[iAddr0]);
	a1 =	wrd.s.bit3*8+wrd.s.bit2*4
		+	wrd.s.bit1*2+wrd.s.bit0;
	ui.coBoPoTahionNumber->setCurrentIndex(a1);
//
	if(a1==0&&ui.frBoPoTahionCom->isEnabled()==false
		&&ui.grBoPoTahion->isChecked())
	{
		ui.frBoPoTahionCom->setEnabled(true);
	}
	if(a1!=0&&ui.frBoPoTahionCom->isEnabled()==true)
	{
		ui.frBoPoTahionCom->setEnabled(false);
	}
//биты 7..4:	номер светодиода
	a1 =	wrd.s.bit7*8+wrd.s.bit6*4
		+	wrd.s.bit5*2+wrd.s.bit4;
	ui.coBoPoTahionNumberLed->setCurrentIndex(a1);
//bit 11:	0-RS-232,1-RS485
	ui.coBoTahionComType->setCurrentIndex(wrd.s.bit11);
//bits 10...8	-	скорость
	a1 =wrd.s.bit10*4+wrd.s.bit9*2+wrd.s.bit8;
	ui.coBoTahionComBoude->setCurrentIndex(a1);
//бит 12: 0 — бит четности отсутствует, 1 — бит четности присутствует
//бит 13: 0 — четность, 1 — нечетность 
	if(wrd.s.bit12==0)
	{
		ui.coBoTahionComParity->setCurrentIndex(0);
	}else
	{
		if(wrd.s.bit13==0)
			ui.coBoTahionComParity->setCurrentIndex(1);
		else
			ui.coBoTahionComParity->setCurrentIndex(2);
	}
//бит 14:	для порта 8: 0 - порты 8,9,10 - независимые порты, 1 - порты
//8,9,10 образуют стык С2
//для нечетных портов: 0- асинхронный, 1-синхронный
//для остальных портов не используется
	if(wrd.s.bit14==0)
	{
		ui.raBuTahionAsyn->setChecked(true);
	}else
	{
		ui.raBuTahionSyn->setChecked(true);
	}
////--//
////////////////////////////////////////////////////////////////////////////////////

	updateDialogKors();
	updateDialogMVRL();
	updateDialogSet();
	return;
}


