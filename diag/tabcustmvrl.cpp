//ћ¬–Ћ1	ћ¬–Ћ2	Star2000
#include "tabcust0.h"

void TabCust0::createActionsMVRL()
{
	connect(ui.grBoMVRL1,SIGNAL(clicked()),this,SLOT(slGrBoMVRL1()));
	connect(ui.liEdMVRL1,SIGNAL(editingFinished()),this,SLOT(slLiEdMVRL1()));//
	connect(ui.coBoMVRL1Number,SIGNAL(currentIndexChanged(int)),this,SLOT(slCoBoMVRL1Number(int)));
	connect(ui.liEdMVRL1PntDistance,SIGNAL(editingFinished()),this,SLOT(slLiEdMVRL1PntDistance()));
	connect(ui.liEdMVRL1PntAzimuth,SIGNAL(editingFinished()),this,SLOT(slLiEdMVRL1PntAzimuth()));
	connect(ui.raBuMVRL1GradMagn,SIGNAL(clicked()),this,SLOT(slRaBuMVRL1Grad()));
	connect(ui.raBuMVRL1GradGeograph,SIGNAL(clicked()),this,SLOT(slRaBuMVRL1Grad()));
	connect(ui.raBuMVRL1Asyn,SIGNAL(clicked()),this,SLOT(slRaBuMVRL1AsynSyn()));
	connect(ui.raBuMVRL1Syn,SIGNAL(clicked()),this,SLOT(slRaBuMVRL1AsynSyn()));

	connect(ui.coBoPoMVRL1Number,SIGNAL(currentIndexChanged(int)),this,SLOT(slCoBoPoMVRL1Number(int)));
	connect(ui.coBoPoMVRL1NumberLed,SIGNAL(currentIndexChanged(int)),this,SLOT(slCoBoPoMVRL1NumberLed(int)));
	connect(ui.coBoMVRL1ComType,SIGNAL(currentIndexChanged(int)),this,SLOT(slCoBoMVRL1ComType(int)));
	connect(ui.coBoMVRL1ComBoude,SIGNAL(currentIndexChanged(int)),this,SLOT(slCoBoMVRL1ComBoude(int)));
	connect(ui.coBoMVRL1ComParity,SIGNAL(currentIndexChanged(int)),this,SLOT(slCoBoMVRL1ComParity(int)));

	connect(ui.grBoMVRL2,SIGNAL(clicked()),this,SLOT(slGrBoMVRL2()));
	connect(ui.liEdMVRL2,SIGNAL(editingFinished()),this,SLOT(slLiEdMVRL2()));//
	connect(ui.coBoMVRL2Number,SIGNAL(currentIndexChanged(int)),this,SLOT(slCoBoMVRL2Number(int)));
	connect(ui.liEdMVRL2PntDistance,SIGNAL(editingFinished()),this,SLOT(slLiEdMVRL2PntDistance()));
	connect(ui.liEdMVRL2PntAzimuth,SIGNAL(editingFinished()),this,SLOT(slLiEdMVRL2PntAzimuth()));
	connect(ui.raBuMVRL2GradMagn,SIGNAL(clicked()),this,SLOT(slRaBuMVRL2Grad()));
	connect(ui.raBuMVRL2GradGeograph,SIGNAL(clicked()),this,SLOT(slRaBuMVRL2Grad()));
	connect(ui.raBuMVRL2Asyn,SIGNAL(clicked()),this,SLOT(slRaBuMVRL2AsynSyn()));
	connect(ui.raBuMVRL2Syn,SIGNAL(clicked()),this,SLOT(slRaBuMVRL2AsynSyn()));

	connect(ui.coBoPoMVRL2Number,SIGNAL(currentIndexChanged(int)),this,SLOT(slCoBoPoMVRL2Number(int)));
	connect(ui.coBoPoMVRL2NumberLed,SIGNAL(currentIndexChanged(int)),this,SLOT(slCoBoPoMVRL2NumberLed(int)));
	connect(ui.coBoMVRL2ComType,SIGNAL(currentIndexChanged(int)),this,SLOT(slCoBoMVRL2ComType(int)));
	connect(ui.coBoMVRL2ComBoude,SIGNAL(currentIndexChanged(int)),this,SLOT(slCoBoMVRL2ComBoude(int)));
	connect(ui.coBoMVRL2ComParity,SIGNAL(currentIndexChanged(int)),this,SLOT(slCoBoMVRL2ComParity(int)));


	connect(ui.grBoSt2Th,SIGNAL(clicked()),this,SLOT(slGrBoSt2Th()));
	connect(ui.liEdSt2Th,SIGNAL(editingFinished()),this,SLOT(slLiEdSt2Th()));//
	connect(ui.coBoSt2ThNumber,SIGNAL(currentIndexChanged(int)),this,SLOT(slCoBoSt2ThNumber(int)));
	connect(ui.liEdSt2ThPntDistance,SIGNAL(editingFinished()),this,SLOT(slLiEdSt2ThPntDistance()));
	connect(ui.liEdSt2ThPntAzimuth,SIGNAL(editingFinished()),this,SLOT(slLiEdSt2ThPntAzimuth()));
	connect(ui.raBuSt2ThGradMagn,SIGNAL(clicked()),this,SLOT(slRaBuSt2ThGrad()));
	connect(ui.raBuSt2ThGradGeograph,SIGNAL(clicked()),this,SLOT(slRaBuSt2ThGrad()));
	connect(ui.raBuSt2ThAsyn,SIGNAL(clicked()),this,SLOT(slRaBuSt2ThAsynSyn()));
	connect(ui.raBuSt2ThSyn,SIGNAL(clicked()),this,SLOT(slRaBuSt2ThAsynSyn()));

	connect(ui.coBoPoSt2ThNumber,SIGNAL(currentIndexChanged(int)),this,SLOT(slCoBoPoSt2ThNumber(int)));
	connect(ui.coBoPoSt2ThNumberLed,SIGNAL(currentIndexChanged(int)),this,SLOT(slCoBoPoSt2ThNumberLed(int)));
	connect(ui.coBoSt2ThComType,SIGNAL(currentIndexChanged(int)),this,SLOT(slCoBoSt2ThComType(int)));
	connect(ui.coBoSt2ThComBoude,SIGNAL(currentIndexChanged(int)),this,SLOT(slCoBoSt2ThComBoude(int)));
	connect(ui.coBoSt2ThComParity,SIGNAL(currentIndexChanged(int)),this,SLOT(slCoBoSt2ThComParity(int)));

	
	return;
}
///--//
void TabCust0::slGrBoMVRL1()
{
	int iAddr=208 -128;
	bool b;
	b=ui.grBoMVRL1->isChecked();
	wrd.f(
		unitReceive->selectedParameters0[iAddr]
		)->bit15=b;
		unitReceive->selectedParameters0[iAddr]=wrd.f();
		unitSend->selectedParameters0[iAddr]=wrd.f();
	return;
}
void TabCust0::slLiEdMVRL1()
{
	int iAddr =210 -128;
	PLineEdit* lineEdit = ui.liEdMVRL1;
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
void TabCust0::slCoBoMVRL1Number(int index)
{
//209
	if(ui.coBoMVRL1Number->hasFocus()&&index<4)
	{
		int iAddr =209 -128;
		wrd.f(unitReceive->selectedParameters0[iAddr]);
		wrdWr.f(index);
		wrd.s.bit0=wrdWr.s.bit0;
		wrd.s.bit1=wrdWr.s.bit1;
		unitReceive->selectedParameters0[iAddr]=wrd.f();
		unitSend->selectedParameters0[iAddr]=wrd.f();
	}
	return;
}
void TabCust0::slLiEdMVRL1PntDistance()
{
//218
	int iAddr =218 -128;
	PLineEdit* lineEdit = ui.liEdMVRL1PntDistance;
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
void TabCust0::slLiEdMVRL1PntAzimuth()
{
//219
	int iAddr =219 -128;
	PLineEdit* lineEdit = ui.liEdMVRL1PntAzimuth ;
	fLiEdAzimuth(	lineEdit,
		&unitReceive->selectedParameters0[iAddr],
		&unitSend->selectedParameters0[iAddr]	);
	return;
}
void TabCust0::slRaBuMVRL1Grad()
{
	int iAddr =209 -128;
	wrd.f(unitReceive->selectedParameters0[iAddr]);
	wrd.s.bit15=ui.raBuMVRL1GradMagn->isChecked();
	unitReceive->selectedParameters0[iAddr]=wrd.f();
	unitSend->selectedParameters0[iAddr]=wrd.f();
	return;
}
void TabCust0::slCoBoPoMVRL1Number(int index)
{
	if(ui.coBoPoMVRL1Number->hasFocus()&&index<11)
	{
		int iAddr =208 -128;
		ushort b0=0;
		wrd.f(unitReceive->selectedParameters0[iAddr]);
		wrdWr.f(index);
		wrd.s.bit0=wrdWr.s.bit0;
		wrd.s.bit1=wrdWr.s.bit1;
		wrd.s.bit2=wrdWr.s.bit2;
		wrd.s.bit3=wrdWr.s.bit3;
		b0=wrd.f();
		unitReceive->selectedParameters0[iAddr]=wrd.f();
		unitSend->selectedParameters0[iAddr]=wrd.f();
//
		if(index==0&&ui.grBoMVRL1->isChecked())
		{
			ui.frBoPoMVRL1Com->setEnabled(true );
		}else
		{
			ui.frBoPoMVRL1Com->setEnabled(false);
		}
	}
	return;
}
void TabCust0::slCoBoMVRL1ComBoude(int index)
{
	if(ui.coBoMVRL1ComBoude->hasFocus()&&index<8)
	{
		int iAddr =208 -128;
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
void TabCust0::slCoBoMVRL1ComParity(int index)
{
	if(ui.coBoMVRL1ComParity->hasFocus())
	{
		int iAddr = 208 -128;
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
void TabCust0::slCoBoMVRL1ComType(int index)
{
	if(ui.coBoMVRL1ComType->hasFocus()&&index<2)
	{
		int iAddr =208 -128;
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
void TabCust0::slCoBoPoMVRL1NumberLed(int index)
{
	if(ui.coBoPoMVRL1NumberLed->hasFocus()&&index<11)
	{
		int iAddr =208 -128;
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
void TabCust0::slRaBuMVRL1AsynSyn()
{
	int iAddr =208 -128;
	wrd.f(unitReceive->selectedParameters0[iAddr]);
	int numPort=wrd.s.bit2<<2|wrd.s.bit1<<1|wrd.s.bit0;
//если порт четный syn не выбираетс€
	if((numPort&1)==0)	//четный
	{
		if(ui.raBuMVRL1Asyn->isChecked())
		{
			wrd.s.bit14=0;
		}
	}else
	{
		wrd.s.bit14=ui.raBuMVRL1Syn->isChecked();
	}
	unitReceive->selectedParameters0[iAddr]=wrd.f();
	unitSend->selectedParameters0[iAddr]=wrd.f();
	return;
}
///--//
void TabCust0::slGrBoMVRL2()
{
	int iAddr=224 -128;
	bool b;
	b=ui.grBoMVRL2->isChecked();
	wrd.f(
		unitReceive->selectedParameters0[iAddr]
		)->bit15=b;
		unitReceive->selectedParameters0[iAddr]=wrd.f();
		unitSend->selectedParameters0[iAddr]=wrd.f();
	return;
}
void TabCust0::slLiEdMVRL2()
{
	int iAddr =226 -128;
	PLineEdit* lineEdit = ui.liEdMVRL2;
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
void TabCust0::slCoBoMVRL2Number(int index)
{
//225
	if(ui.coBoMVRL2Number->hasFocus()&&index<4)
	{
		int iAddr =225 -128;
		wrd.f(unitReceive->selectedParameters0[iAddr]);
		wrdWr.f(index);
		wrd.s.bit0=wrdWr.s.bit0;
		wrd.s.bit1=wrdWr.s.bit1;
		unitReceive->selectedParameters0[iAddr]=wrd.f();
		unitSend->selectedParameters0[iAddr]=wrd.f();
	}
	return;
}
void TabCust0::slLiEdMVRL2PntDistance()
{
//234
	int iAddr =234 -128;
	PLineEdit* lineEdit = ui.liEdMVRL2PntDistance;
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
void TabCust0::slLiEdMVRL2PntAzimuth()
{
//235
	int iAddr =235 -128;
	PLineEdit* lineEdit = ui.liEdMVRL2PntAzimuth ;
	fLiEdAzimuth(	lineEdit,
		&unitReceive->selectedParameters0[iAddr],
		&unitSend->selectedParameters0[iAddr]	);
	return;
}
void TabCust0::slRaBuMVRL2Grad()
{
	int iAddr =225 -128;
	wrd.f(unitReceive->selectedParameters0[iAddr]);
	wrd.s.bit15=ui.raBuMVRL2GradMagn->isChecked();
	unitReceive->selectedParameters0[iAddr]=wrd.f();
	unitSend->selectedParameters0[iAddr]=wrd.f();
	return;
}
void TabCust0::slCoBoPoMVRL2Number(int index)
{
	if(ui.coBoPoMVRL2Number->hasFocus()&&index<11)
	{
		int iAddr =224 -128;
		ushort b0=0;
		wrd.f(unitReceive->selectedParameters0[iAddr]);
		wrdWr.f(index);
		wrd.s.bit0=wrdWr.s.bit0;
		wrd.s.bit1=wrdWr.s.bit1;
		wrd.s.bit2=wrdWr.s.bit2;
		wrd.s.bit3=wrdWr.s.bit3;
		b0=wrd.f();
		unitReceive->selectedParameters0[iAddr]=wrd.f();
		unitSend->selectedParameters0[iAddr]=wrd.f();
//
		if(index==0&&ui.grBoMVRL2->isChecked())
		{
			ui.frBoPoMVRL2Com->setEnabled(true );
		}else
		{
			ui.frBoPoMVRL2Com->setEnabled(false);
		}
	}
	return;
}
void TabCust0::slCoBoMVRL2ComBoude(int index)
{
	if(ui.coBoMVRL2ComBoude->hasFocus()&&index<8)
	{
		int iAddr =224 -128;
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
void TabCust0::slCoBoMVRL2ComParity(int index)
{
	if(ui.coBoMVRL2ComParity->hasFocus())
	{
		int iAddr =224 -128;
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
void TabCust0::slCoBoMVRL2ComType(int index)
{
	if(ui.coBoMVRL2ComType->hasFocus()&&index<2)
	{
		int iAddr =224 -128;
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
void TabCust0::slCoBoPoMVRL2NumberLed(int index)
{
	if(ui.coBoPoMVRL2NumberLed->hasFocus()&&index<11)
	{
		int iAddr =224 -128;
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





void TabCust0::slRaBuMVRL2AsynSyn()
{
	int iAddr =224 -128;
	wrd.f(unitReceive->selectedParameters0[iAddr]);
	int numPort=wrd.s.bit2<<2|wrd.s.bit1<<1|wrd.s.bit0;
//если порт четный syn не выбираетс€
	if((numPort&1)==0)	//четный
	{
		if(ui.raBuMVRL2Asyn->isChecked())
		{
			wrd.s.bit14=0;
		}
	}else
	{
		wrd.s.bit14=ui.raBuMVRL2Syn->isChecked();
	}
	unitReceive->selectedParameters0[iAddr]=wrd.f();
	unitSend->selectedParameters0[iAddr]=wrd.f();
	return;
}
///--//
void TabCust0::slGrBoSt2Th()
{
	int iAddr=240 -128;
	bool b;
	b=ui.grBoSt2Th->isChecked();
	wrd.f(
		unitReceive->selectedParameters0[iAddr]
		)->bit15=b;
		unitReceive->selectedParameters0[iAddr]=wrd.f();
		unitSend->selectedParameters0[iAddr]=wrd.f();
	return;
}
void TabCust0::slLiEdSt2Th()
{
	int iAddr =242 -128;
	PLineEdit* lineEdit = ui.liEdSt2Th;
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
void TabCust0::slCoBoSt2ThNumber(int index)
{
//241
	if(ui.coBoSt2ThNumber->hasFocus()&&index<4)
	{
		int iAddr =241 -128;
		wrd.f(unitReceive->selectedParameters0[iAddr]);
		wrdWr.f(index);
		wrd.s.bit0=wrdWr.s.bit0;
		wrd.s.bit1=wrdWr.s.bit1;
		unitReceive->selectedParameters0[iAddr]=wrd.f();
		unitSend->selectedParameters0[iAddr]=wrd.f();
	}
	return;
}
void TabCust0::slLiEdSt2ThPntDistance()
{
//250
	int iAddr =250 -128;
	PLineEdit* lineEdit = ui.liEdSt2ThPntDistance;
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
void TabCust0::slLiEdSt2ThPntAzimuth()
{
//251
	int iAddr =251 -128;
	PLineEdit* lineEdit = ui.liEdSt2ThPntAzimuth ;
	fLiEdAzimuth(	lineEdit,
		&unitReceive->selectedParameters0[iAddr],
		&unitSend->selectedParameters0[iAddr]	);
	return;
}
void TabCust0::slRaBuSt2ThGrad()
{
	int iAddr =241 -128;
	wrd.f(unitReceive->selectedParameters0[iAddr]);
	wrd.s.bit15=ui.raBuSt2ThGradMagn->isChecked();
	unitReceive->selectedParameters0[iAddr]=wrd.f();
	unitSend->selectedParameters0[iAddr]=wrd.f();
	return;
}
void TabCust0::slCoBoPoSt2ThNumber(int index)
{
	if(ui.coBoPoSt2ThNumber->hasFocus()&&index<11)
	{
		int iAddr =240 -128;
		ushort b0=0;
		wrd.f(unitReceive->selectedParameters0[iAddr]);
		wrdWr.f(index);
		wrd.s.bit0=wrdWr.s.bit0;
		wrd.s.bit1=wrdWr.s.bit1;
		wrd.s.bit2=wrdWr.s.bit2;
		wrd.s.bit3=wrdWr.s.bit3;
		b0=wrd.f();
		unitReceive->selectedParameters0[iAddr]=wrd.f();
		unitSend->selectedParameters0[iAddr]=wrd.f();
//
		if(index==0&&ui.grBoSt2Th->isChecked())
		{
			ui.frBoPoSt2ThCom->setEnabled(true );
		}else
		{
			ui.frBoPoSt2ThCom->setEnabled(false);
		}
	}
	return;
}
void TabCust0::slCoBoSt2ThComBoude(int index)
{
	if(ui.coBoSt2ThComBoude->hasFocus()&&index<8)
	{
		int iAddr =240 -128;
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
void TabCust0::slCoBoSt2ThComParity(int index)
{
	if(ui.coBoSt2ThComParity->hasFocus())
	{
		int iAddr = 240 -128;
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
void TabCust0::slCoBoSt2ThComType(int index)
{
	if(ui.coBoSt2ThComType->hasFocus()&&index<2)
	{
		int iAddr =240 -128;
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
void TabCust0::slCoBoPoSt2ThNumberLed(int index)
{
	if(ui.coBoPoSt2ThNumberLed->hasFocus()&&index<11)
	{
		int iAddr =240 -128;
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
void TabCust0::slRaBuSt2ThAsynSyn()
{
	int iAddr =240 -128;
	wrd.f(unitReceive->selectedParameters0[iAddr]);
	int numPort=wrd.s.bit2<<2|wrd.s.bit1<<1|wrd.s.bit0;
//если порт четный syn не выбираетс€
	if((numPort&1)==0)	//четный
	{
		if(ui.raBuSt2ThAsyn->isChecked())
		{
			wrd.s.bit14=0;
		}
	}else
	{
		wrd.s.bit14=ui.raBuSt2ThSyn->isChecked();
	}
	unitReceive->selectedParameters0[iAddr]=wrd.f();
	unitSend->selectedParameters0[iAddr]=wrd.f();
	return;
}
///--//
void TabCust0::updateDialogMVRL()
{
	int iAddr0=0;
	ushort a0,a1,a2;
//	double d2;
	QString str,strWhole,str0,str1,str2;
	char ch;int k0;
	char nameSource[16];

////--//
//209	параметры устройства(MVRL1)
	iAddr0 =209 -128;
//биты 1,0:	номер устройства
	wrd.f(unitReceive->selectedParameters0[iAddr0]);
	a1 = wrd.s.bit1*2 +wrd.s.bit0;
	ui.coBoMVRL1Number->setCurrentIndex(a1);
//бит 15:	склонение (0 Ч географическое (истинное), 1 Ч магнитное)
	if(wrd.s.bit15)
		ui.raBuMVRL1GradMagn->setChecked(true);
	else
		ui.raBuMVRL1GradGeograph->setChecked(true);

//210Е217  название источника
	iAddr0=210 -128;
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
	if(!ui.liEdMVRL1->hasFocus())
		ui.liEdMVRL1->setText(str2);

//208	параметры порта(MVRL1)
	iAddr0 =208 -128;
	wrd.f(unitReceive->selectedParameters0[iAddr0]);
//		бит 15:	1 Ч порт разрешен
	ui.grBoMVRL1->setChecked(wrd.s.bit15);
//биты 1,0:	номер устройства
	a1 =	wrd.s.bit3*8+wrd.s.bit2*4
		+	wrd.s.bit1*2+wrd.s.bit0;
	ui.coBoPoMVRL1Number->setCurrentIndex(a1);
//
	if(a1==0&&ui.frBoPoMVRL1Com->isEnabled()==false
		&&ui.grBoMVRL1->isChecked())
	{
		ui.frBoPoMVRL1Com->setEnabled(true);
	}
	if(a1!=0&&ui.frBoPoMVRL1Com->isEnabled()==true)
	{
		ui.frBoPoMVRL1Com->setEnabled(false);
	}
//биты 7..4:	номер светодиода
	a1 =	wrd.s.bit7*8+wrd.s.bit6*4
		+	wrd.s.bit5*2+wrd.s.bit4;
	ui.coBoPoMVRL1NumberLed->setCurrentIndex(a1);
//bit 11:	0-RS-232,1-RS485
	ui.coBoMVRL1ComType->setCurrentIndex(wrd.s.bit11);
//bits 10...8	-	скорость
	a1 =wrd.s.bit10*4+wrd.s.bit9*2+wrd.s.bit8;
	ui.coBoMVRL1ComBoude->setCurrentIndex(a1);
//бит 12: 0 Ч бит четности отсутствует, 1 Ч бит четности присутствует
//бит 13: 0 Ч четность, 1 Ч нечетность 
	if(wrd.s.bit12==0)
	{
		ui.coBoMVRL1ComParity->setCurrentIndex(0);
	}else
	{
		if(wrd.s.bit13==0)
			ui.coBoMVRL1ComParity->setCurrentIndex(1);
		else
			ui.coBoMVRL1ComParity->setCurrentIndex(2);
	}
//бит 14: 0 Ч асинхронный, 1 Ч синхронный 
	if(wrd.s.bit14==0)
	{
		ui.raBuMVRL1Asyn->setChecked(true);
	}else
	{
		ui.raBuMVRL1Syn->setChecked(true);
	}
//218	дальность точки сто€ни€, метры
	iAddr0 =218 -128;
	a1 = unitReceive->selectedParameters0[iAddr0];
	str = QString("%1").arg(a1);
	if(!ui.liEdMVRL1PntDistance->hasFocus())
		ui.liEdMVRL1PntDistance->setText(str);
//219 азимут точки сто€ни€, минуты (градусы ? 60)
	iAddr0=219 -128;
	a0 = unitReceive->selectedParameters0[iAddr0];
	a1 = a0/60;
	a2 = a0 - (a1*60);
	str = QString("%1").arg(a1);
	str.append(QString("∞%1'").arg(a2,2,10,QLatin1Char( '0' )));
	if(!ui.liEdMVRL1PntAzimuth->hasFocus())
		ui.liEdMVRL1PntAzimuth->setText(str);


////--//
//225	параметры устройства(MVRL2)
	iAddr0 =225 -128;
//биты 1,0:	номер устройства
	wrd.f(unitReceive->selectedParameters0[iAddr0]);
	a1 = wrd.s.bit1*2 +wrd.s.bit0;
	ui.coBoMVRL2Number->setCurrentIndex(a1);
//бит 15:	склонение (0 Ч географическое (истинное), 1 Ч магнитное)
	if(wrd.s.bit15)
		ui.raBuMVRL2GradMagn->setChecked(true);
	else
		ui.raBuMVRL2GradGeograph->setChecked(true);

//226Е233  название источника
	iAddr0=226 -128;
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
	if(!ui.liEdMVRL2->hasFocus())
		ui.liEdMVRL2->setText(str2);

//224	параметры порта(MVRL2)
	iAddr0 =224 -128;
	wrd.f(unitReceive->selectedParameters0[iAddr0]);
//		бит 15:	1 Ч порт разрешен
	ui.grBoMVRL2->setChecked(wrd.s.bit15);
//биты 1,0:	номер устройства
	a1 =	wrd.s.bit3*8+wrd.s.bit2*4
		+	wrd.s.bit1*2+wrd.s.bit0;
	ui.coBoPoMVRL2Number->setCurrentIndex(a1);
//
	if(a1==0&&ui.frBoPoMVRL2Com->isEnabled()==false
		&&ui.grBoMVRL2->isChecked())
	{
		ui.frBoPoMVRL2Com->setEnabled(true);
	}
	if(a1!=0&&ui.frBoPoMVRL2Com->isEnabled()==true)
	{
		ui.frBoPoMVRL2Com->setEnabled(false);
	}
//биты 7..4:	номер светодиода
	a1 =	wrd.s.bit7*8+wrd.s.bit6*4
		+	wrd.s.bit5*2+wrd.s.bit4;
	ui.coBoPoMVRL2NumberLed->setCurrentIndex(a1);
//bit 11:	0-RS-232,1-RS485
	ui.coBoMVRL2ComType->setCurrentIndex(wrd.s.bit11);
//bits 10...8	-	скорость
	a1 =wrd.s.bit10*4+wrd.s.bit9*2+wrd.s.bit8;
	ui.coBoMVRL2ComBoude->setCurrentIndex(a1);
//бит 12: 0 Ч бит четности отсутствует, 1 Ч бит четности присутствует
//бит 13: 0 Ч четность, 1 Ч нечетность 
	if(wrd.s.bit12==0)
	{
		ui.coBoMVRL2ComParity->setCurrentIndex(0);
	}else
	{
		if(wrd.s.bit13==0)
			ui.coBoMVRL2ComParity->setCurrentIndex(1);
		else
			ui.coBoMVRL2ComParity->setCurrentIndex(2);
	}
//бит 14: 0 Ч асинхронный, 1 Ч синхронный 
	if(wrd.s.bit14==0)
	{
		ui.raBuMVRL2Asyn->setChecked(true);
	}else
	{
		ui.raBuMVRL2Syn->setChecked(true);
	}
//234	дальность точки сто€ни€, метры
	iAddr0 =234 -128;
	a1 = unitReceive->selectedParameters0[iAddr0];
	str = QString("%1").arg(a1);
	if(!ui.liEdMVRL2PntDistance->hasFocus())
		ui.liEdMVRL2PntDistance->setText(str);
//235 азимут точки сто€ни€, минуты (градусы ? 60)
	iAddr0=235 -128;
	a0 = unitReceive->selectedParameters0[iAddr0];
	a1 = a0/60;
	a2 = a0 - (a1*60);
	str = QString("%1").arg(a1);
	str.append(QString("∞%1'").arg(a2,2,10,QLatin1Char( '0' )));
	if(!ui.liEdMVRL2PntAzimuth->hasFocus())
		ui.liEdMVRL2PntAzimuth->setText(str);


////--//
//241	параметры устройства(St2Th)
	iAddr0 =241-128;
//биты 1,0:	номер устройства
	wrd.f(unitReceive->selectedParameters0[iAddr0]);
	a1 = wrd.s.bit1*2 +wrd.s.bit0;
	ui.coBoSt2ThNumber->setCurrentIndex(a1);
//бит 15:	склонение (0 Ч географическое (истинное), 1 Ч магнитное)
	if(wrd.s.bit15)
		ui.raBuSt2ThGradMagn->setChecked(true);
	else
		ui.raBuSt2ThGradGeograph->setChecked(true);

//242Е249  название источника
	iAddr0=242 -128;
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
	if(!ui.liEdSt2Th->hasFocus())
		ui.liEdSt2Th->setText(str2);

//240	параметры порта(St2Th)
	iAddr0 =240 -128;
	wrd.f(unitReceive->selectedParameters0[iAddr0]);
//		бит 15:	1 Ч порт разрешен
	ui.grBoSt2Th->setChecked(wrd.s.bit15);
//биты 1,0:	номер устройства
	a1 =	wrd.s.bit3*8+wrd.s.bit2*4
		+	wrd.s.bit1*2+wrd.s.bit0;
	ui.coBoPoSt2ThNumber->setCurrentIndex(a1);
//
	if(a1==0&&ui.frBoPoSt2ThCom->isEnabled()==false
		&&ui.grBoSt2Th->isChecked())
	{
		ui.frBoPoSt2ThCom->setEnabled(true);
	}
	if(a1!=0&&ui.frBoPoSt2ThCom->isEnabled()==true)
	{
		ui.frBoPoSt2ThCom->setEnabled(false);
	}
//биты 7..4:	номер светодиода
	a1 =	wrd.s.bit7*8+wrd.s.bit6*4
		+	wrd.s.bit5*2+wrd.s.bit4;
	ui.coBoPoSt2ThNumberLed->setCurrentIndex(a1);
//bit 11:	0-RS-232,1-RS485
	ui.coBoSt2ThComType->setCurrentIndex(wrd.s.bit11);
//bits 10...8	-	скорость
	a1 =wrd.s.bit10*4+wrd.s.bit9*2+wrd.s.bit8;
	ui.coBoSt2ThComBoude->setCurrentIndex(a1);
//бит 12: 0 Ч бит четности отсутствует, 1 Ч бит четности присутствует
//бит 13: 0 Ч четность, 1 Ч нечетность 
	if(wrd.s.bit12==0)
	{
		ui.coBoSt2ThComParity->setCurrentIndex(0);
	}else
	{
		if(wrd.s.bit13==0)
			ui.coBoSt2ThComParity->setCurrentIndex(1);
		else
			ui.coBoSt2ThComParity->setCurrentIndex(2);
	}
//бит 14: 0 Ч асинхронный, 1 Ч синхронный 
	if(wrd.s.bit14==0)
	{
		ui.raBuSt2ThAsyn->setChecked(true);
	}else
	{
		ui.raBuSt2ThSyn->setChecked(true);
	}
//250	дальность точки сто€ни€, метры
	iAddr0 =250 -128;
	a1 = unitReceive->selectedParameters0[iAddr0];
	str = QString("%1").arg(a1);
	if(!ui.liEdSt2ThPntDistance->hasFocus())
		ui.liEdSt2ThPntDistance->setText(str);
//251 азимут точки сто€ни€, минуты (градусы ? 60)
	iAddr0=251 -128;
	a0 = unitReceive->selectedParameters0[iAddr0];
	a1 = a0/60;
	a2 = a0 - (a1*60);
	str = QString("%1").arg(a1);
	str.append(QString("∞%1'").arg(a2,2,10,QLatin1Char( '0' )));
	if(!ui.liEdSt2ThPntAzimuth->hasFocus())
		ui.liEdSt2ThPntAzimuth->setText(str);
//
////--//
	return;
}
