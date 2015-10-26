#include "glcu.h"
#include <QtCore/QBitArray>
//2
MDiagn::MDiagn()
{
	type=2;

	glCu.elm.b5=0;
	glCu.elm.b6=0;

}

MDiagn::~MDiagn()
{

}
void MDiagn::fill(uchar* pCh,int q)
{
	memcpy(&glCu.elm,pCh,q);
//-
	strValue[0]=QString("%1").arg(glCu.elm.unn.shU[0],4,10,QChar('0'));
	strValue[1]=QString("%1").arg(glCu.elm.unn.shU[1],4,10,QChar('0'));
	strValue[2]=QString("%1").arg(glCu.elm.unn.shU[2],4,10,QChar('0'));
//-
	if(type==3)
	{
		strValue[1]="";	//
		strValue[2]="";	//
		strValue[0]=QString("%1").arg(glCu.mMet.met.code,4,10,QChar('0'));
		strValue[0]+=QString(" %1").arg(glCu.mMet.met.bit11,1,10,QChar('0'));
		strValue[0]+=QString(" %1").arg(glCu.mMet.met.bit12,1,10,QChar('0'));
		strValue[0]+=QString(" %1").arg(glCu.mMet.met.bit13,1,10,QChar('0'));
		strValue[0]+=QString(" %1").arg(glCu.mMet.met.bit14,1,10,QChar('0'));
		strValue[0]+=QString(" %1").arg(glCu.mMet.met.bit15,1,10,QChar('0'));
		strValue[0]+=QString(" %1").arg(glCu.mMet.b2,1,10,QChar('0'));
		strValue[0]+=QString(" %1").arg(glCu.mMet.b3,1,10,QChar('0'));
		strValue[0]+=QString(" %1").arg(glCu.mMet.b4,1,10,QChar('0'));
		strValue[0]+=QString(" %1").arg(glCu.mMet.b5,1,10,QChar('0'));
	}

//-
	if(q==2)
	{
		strValue[1]="    ";	//4
		strValue[2]="    ";	//4
	}
	if(q==4)
	{
		strValue[2]="    ";	//4
	}
	strValueHex.clear();
	for(int i=0;i<q;i++)
		strValueHex.append(QString("%1 ").arg(glCu.elm.unn.ubU[i],2,16,QChar('0')));
	if(q==2)
	{
		for(int i=0;i<4;i++)
			strValueHex.append(QString("   "));
	}
	if(q==4)
	{
		for(int i=0;i<2;i++)
			strValueHex.append(QString("   "));
	}
	return;
}
GlCu::GlCu()
{

}

GlCu::~GlCu()
{

}
Diagn::Diagn()
{
	setDiagn();
}

Diagn::~Diagn()
{
	for(int i=0;i<100;i++)
	{
		delete(mDiagn[i]);
	}

}
void Diagn::setDiagn()
{
	for(int i=0;i<100;i++)
	{
		mDiagn[i]=new MDiagn();
		mDiagn[i]->num=i;
		if(i<25)
			mDiagn[i]->type=2;
		if(i>24&&i<29)
			mDiagn[i]->type=1;
		if(i>28&&i<79)
			mDiagn[i]->type=3;
		mDiagn[i]->strNum=QString("%1").arg(mDiagn[i]->num,2,10,QChar('0'));
	}
//-0-head
	mDiagn[0]->quant=4;mDiagn[1]->strName[0]="head";
//-1-0
	mDiagn[1]->quant=4;
	mDiagn[1]->strName[0]="DIAG_PRL_GLIDE_EXTREMES";
	mDiagn[1]->strName[1]="MIN";
	mDiagn[1]->strName[2]="MAX";
	mDiagn[1]->type=2;	//два значения
//-2-4
	mDiagn[2]->quant=4;
	mDiagn[2]->strName[0]="DIAG_PRL_GLIDE_BLANKS";
	mDiagn[2]->strName[1]="MIN";
	mDiagn[2]->strName[2]="MAX";
//	mDiagn[]->strName[3]="";
	mDiagn[2]->type=2;	//два значения
//-3-8
	mDiagn[3]->quant=4;
	mDiagn[3]->strName[0]="DIAG_PRL_COURSE_EXTREMES";
	mDiagn[3]->strName[1]="MIN";
	mDiagn[3]->strName[2]="MAX";
	mDiagn[3]->type=2;	//два значения
//-4-12
	mDiagn[4]->quant=4;
	mDiagn[4]->strName[0]="DIAG_PRL_COURSE_BLANKS";
	mDiagn[4]->strName[1]="MIN";
	mDiagn[4]->strName[2]="MAX";
	mDiagn[4]->type=2;	//два значения
//-5-16
	mDiagn[5]->quant=2;
	mDiagn[5]->strName[0]="wDIAG_PRL_GLIDE_MARK_1";
	mDiagn[5]->strName[1]="MIN";
	mDiagn[5]->strName[2]="MAX";
	mDiagn[5]->type=1;	//1 значение
//-6-18
	mDiagn[6]->quant=2;
	mDiagn[6]->strName[0]="wDIAG_PRL_GLIDE_MARK_2";
	mDiagn[6]->strName[1]="MIN";
	mDiagn[6]->strName[2]="MAX";
	mDiagn[6]->type=1;	//1 значение
//-7-20
	mDiagn[7]->quant=2;
	mDiagn[7]->strName[0]="wDIAG_PRL_GLIDE_MARK_3";
	mDiagn[7]->strName[1]="MIN";
	mDiagn[7]->strName[2]="MAX";
	mDiagn[7]->type=1;	//1 значение
//-8-22
	mDiagn[8]->quant=2;
	mDiagn[8]->strName[0]="wDIAG_PRL_GLIDE_MARK_4";
	mDiagn[8]->strName[1]="MIN";
	mDiagn[8]->strName[2]="MAX";
	mDiagn[8]->type=1;	//1 значение
//-9-24
	mDiagn[9]->quant=4;
	mDiagn[9]->strName[0]="wDIAG_PRL_GLIDE_COURSE_1";
	mDiagn[9]->strName[1]="MIN";
	mDiagn[9]->strName[2]="MAX";
	mDiagn[9]->type=1;	//1 значение
//-10-26
	mDiagn[10]->quant=2;
	mDiagn[10]->strName[0]="wDIAG_PRL_GLIDE_COURSE_2";
	mDiagn[10]->strName[1]="MIN";
	mDiagn[10]->strName[2]="MAX";
	mDiagn[10]->type=2;	//1 значение
//-11-28
	mDiagn[11]->quant=2;
	mDiagn[11]->strName[0]="wDIAG_PRL_GLIDE_COURSE_3";
	mDiagn[11]->strName[1]="MIN";
	mDiagn[11]->strName[2]="MAX";
	mDiagn[11]->type=1;	//1 значение
//-12-30
	mDiagn[12]->quant=2;
	mDiagn[12]->strName[0]="wDIAG_PRL_GLIDE_COURSE_4";
	mDiagn[12]->strName[1]="MIN";
	mDiagn[12]->strName[2]="MAX";
	mDiagn[12]->type=2;	//1 значения
//-13-32
	mDiagn[13]->quant=2;
	mDiagn[13]->strName[0]="DIAG_PRL_MARK1";
	mDiagn[13]->strName[1]="усредненное значение 7?";
	mDiagn[13]->strName[2]="количество меток 7?";
	mDiagn[13]->type=1;	//1 значения
//-14-36
	mDiagn[14]->quant=4;
	mDiagn[14]->strName[0]="DIAG_PRL_MARK2";
	mDiagn[14]->strName[1]="MIN";
	mDiagn[14]->strName[2]="MAX";
	mDiagn[14]->type=2;	//два значения
//-15-40
	mDiagn[15]->quant=4;
	mDiagn[15]->strName[0]="DIAG_PRL_MARK3";
	mDiagn[15]->strName[1]="10?";
	mDiagn[15]->strName[2]="";
	mDiagn[15]->type=2;	//два значения
//-16-44
	mDiagn[16]->quant=4;
	mDiagn[16]->strName[0]="DIAG_PRL_MARK4";
	mDiagn[16]->strName[1]="0?";
	mDiagn[16]->strName[2]="";
	mDiagn[16]->type=2;	//два значения
//-17-48
	mDiagn[17]->quant=4;
	mDiagn[17]->strName[0]="DIAG_PRL_MARK5";
	mDiagn[17]->strName[1]="-10?";
	mDiagn[17]->strName[2]="";
	mDiagn[17]->type=2;	//два значения
//-18-52
	mDiagn[18]->quant=4;
	mDiagn[18]->strName[0]="DIAG_PRL_MARK_NUMBER";
	mDiagn[18]->strName[1]="количество меток глиссады";
	mDiagn[18]->strName[2]="количество меток курса";
	mDiagn[18]->type=2;	//два значения
//-19-56
	mDiagn[19]->quant=4;
	mDiagn[19]->strName[0]="DIAG_PRL_GLIDE_OCCUPIED";
	mDiagn[19]->strName[1]="MIN";
	mDiagn[19]->strName[2]="MAX";
	mDiagn[19]->type=2;	//два значения
//-20-60
	mDiagn[20]->quant=4;
	mDiagn[20]->strName[0]="DIAG_PRL_COURSE_OCCUPIED";
	mDiagn[20]->strName[1]="количество занятых элементов в массиве усреднения минимума курса";
	mDiagn[20]->strName[2]="количество занятых элементов в массиве усреднения максимума курса";
	mDiagn[20]->type=2;	//два значения
//-21-64
	mDiagn[21]->quant=4;
	mDiagn[21]->strName[0]="DIAG_PRL_SCALE";
	mDiagn[21]->strName[1]="значение в десятках милливольт для кода 128 глиссады";
	mDiagn[21]->strName[2]="значение в десятках милливольт для кода 128 курса";
	mDiagn[21]->type=2;	//два значения
//-22-68
	mDiagn[22]->quant=4;
	mDiagn[22]->strName[0]="DIAG_PRL_STATE";
	mDiagn[22]->strName[1]="MIN";
	mDiagn[22]->strName[2]="MAX";
	mDiagn[22]->type=2;	//два значения
//-23-72
	mDiagn[23]->quant=4;
	mDiagn[23]->strName[0]="DIAG_PRL_TRIGGER";
	mDiagn[23]->strName[1]="MIN";
	mDiagn[23]->strName[2]="MAX";
	mDiagn[23]->type=2;	//два значения
//-24-76
	mDiagn[24]->quant=4;
	mDiagn[24]->strName[0]="резерв";
	mDiagn[24]->strName[1]="";
	mDiagn[24]->strName[2]="";
	mDiagn[24]->type=2;	//два значения
//-25-80
	mDiagn[25]->quant=2;
	mDiagn[25]->strName[0]="номер первого отсчета глиссады";
	mDiagn[25]->strName[1]="";
	mDiagn[25]->strName[2]="";
	mDiagn[25]->type=1;	//1 значения
//-26-82
	mDiagn[26]->quant=2;
	mDiagn[26]->strName[0]="количество отсчетов глиссады";
	mDiagn[26]->strName[1]="";
	mDiagn[26]->strName[2]="";
	mDiagn[26]->type=2;	//1 значения
//-27-84
	mDiagn[27]->quant=2;
	mDiagn[27]->strName[0]="номер первого отсчета курса";
	mDiagn[27]->strName[1]="";
	mDiagn[27]->strName[2]="";
	mDiagn[27]->type=1;	//1 значения
//-28-86
	mDiagn[28]->quant=2;
	mDiagn[28]->strName[0]="количество отсчетов курса ";
	mDiagn[28]->strName[1]="";
	mDiagn[28]->strName[2]="";
	mDiagn[28]->type=1;	//1 значения
//-	
//-29-88
	for(int i=0;i<50;i++)
	{
		mDiagn[29+i]->quant=6;
		mDiagn[29+i]->strName[0]=QString("%1").arg(i);
		mDiagn[29+i]->strName[1]="";
		mDiagn[29+i]->strName[2]="";
		mDiagn[29+i]->type=3;	//
	}
//-	
	return;
}



QStringList Diagn::toStrList()
{
	QStringList list;
	QString str,str0,str1,str2,str3,strt="1";
	double dd=0;
	int nMetG=0,nMetC=0;
//0
	str="            Развертка";	list.append(str);	//0
//1
	str="         Глиссада      Курс";	list.append(str);	//1
//2
	dd=mDiagn[24]->glCu.elm.unn.shU[0]/100.;
	str0=QString("%1").arg( dd ,6,'f',2,' ' );
	dd=mDiagn[24]->glCu.elm.unn.shU[1]/100.;
	str1=QString("%1").arg( dd ,6,'f',2,' ' );
	str=" вход:    "+str0;
	str=str.leftJustified(22,' ');
	str+=str1;	list.append(str);	
//3
	str0=QString("%1").arg(  (double)mDiagn[1]->glCu.elm.unn.shU[0]/100.,5,'f',2,' ' );
	str=" минимум: "+str0+"  ";
	str1=QString("%1").arg(  mDiagn[19]->glCu.elm.unn.shU[0],2,10,QChar(' ') );
	str+=str1+"  ";
	str0=QString("%1").arg(  (double)mDiagn[3]->glCu.elm.unn.shU[0]/100.,5,'f',2,' ' );
	str1=QString("%1").arg(  mDiagn[20]->glCu.elm.unn.shU[0],2,10,QChar(' ') );
	str+=str0+"  "+str1;
	list.append(str);
//4
	str0=QString("%1").arg(  (double)mDiagn[1]->glCu.elm.unn.shU[1]/100.0,5,'f',2,' ' );
	str=" максимум: "+str0+"  ";
	str1=QString("%1").arg(  mDiagn[19]->glCu.elm.unn.shU[1],2,10,QChar(' ') );
	str+=str1+"   ";
	str0=QString("%1").arg(  (double)mDiagn[3]->glCu.elm.unn.shU[1]/100.,5,'f',2,' ' );
	str1=QString("%1").arg(  mDiagn[20]->glCu.elm.unn.shU[1],2,10,QChar(' ') );
	str+=str0+"  "+str1;
	list.append(str);
//5
	str="            Подсвет";	list.append(str);	//0
//6
	str="         Глиссада      Курс";	list.append(str);	//1
//7
	str0=QString("%1").arg(  (double)mDiagn[2]->glCu.elm.unn.shU[0]/100.,5,'f',2,' ' );
	str1=QString("%1").arg(  (double)mDiagn[4]->glCu.elm.unn.shU[0]/100.,5,'f',2,' ' );
	str=" минимум:   "+str0;
	str=str.leftJustified(23,' ');
	str+=str1;	list.append(str);	
//8
	str0=QString("%1").arg(  (double)mDiagn[2]->glCu.elm.unn.shU[1]/100.,5,'f',2,' ' );
	str1=QString("%1").arg(  (double)mDiagn[4]->glCu.elm.unn.shU[1]/100.,5,'f',2,' ' );
	str=" максимум:   "+str0;
	str=str.leftJustified(23,' ');
	str+=str1;	list.append(str);	
//10
	str="       Состояние развертки";	list.append(str);	//0
//11
	str="         Глиссада      Курс";	list.append(str);	//1
//
	int iGot=0;//0-выкл,1-нет,2-да
	bool b11=false,b12=false,b21=false,b22=false;
	bool b31=false,b32=false,b41=false,b42=false;
	str0=" да";str1="нет";
//
	QBitArray bitAr;
	bitAr.resize(32);
	uint kk=0xff00ff00;
	kk=mDiagn[22]->glCu.elm.unn.uiU;
	int ka[32];
	for(int i=0;i<32;i++)
	{
		bitAr[i]=(kk>>i)&1;
		ka[i]=bitAr[i];
	}
	b11=bitAr[5];b12=bitAr[21];	//наличие
	b21=bitAr[4];b22=bitAr[20];	//вращение
	b31=bitAr[2];b32=bitAr[18];	//прев мин
	b41=bitAr[3];b42=bitAr[19];	//прев макс
	if(bitAr[28]==0)iGot=0;
	if(bitAr[29]==0&&bitAr[28]==1)iGot=1;
	if(bitAr[29]==1&&bitAr[28]==1)iGot=2;
//12
	str=" наличие:";
	str=str.leftJustified(15,' ');
	if(b11)str2=str0;else str2=str1;
	str+=str2;	
	str=str.leftJustified(23,' ');
	if(b12)str2=str0;else str2=str1;
	str+=str2;	
	list.append(str);
//13
	str=" вращение:";
	str=str.leftJustified(15,' ');
	if(b21)str2=str0;else str2=str1;
	str+=str2;	
	str=str.leftJustified(23,' ');
	if(b22)str2=str0;else str2=str1;
	str+=str2;	
	list.append(str);
//14
	str=" превыш.макс.:";
	str=str.leftJustified(15,' ');
	if(b31)str2=str0;else str2=str1;
	str+=str2;	
	str=str.leftJustified(23,' ');
	if(b32)str2=str0;else str2=str1;
	str+=str2;	
	list.append(str);
//15
	str=" превыш.мин.:";
	str=str.leftJustified(15,' ');
	if(b41)str2=str0;else str2=str1;
	str+=str2;	
	str=str.leftJustified(23,' ');
	if(b42)str2=str0;else str2=str1;
	str+=str2;	
	list.append(str);
//16
	str=" готовность: ";
	str=str.leftJustified(18,' ');
	if(iGot==0)
	{str2=="выкл.";}
	if(iGot==1)
	{str2=str1;}
	if(iGot==2)
	{str2=str0;}
	str+=str2;	
	list.append(str);
//17
	str="         Полученные метки";	list.append(str);	//0
//18
	str="         Глиссада      Курс";	list.append(str);	//1
//19
	str=" количество:";
	str=str.leftJustified(13,' ');
	nMetG=mDiagn[18]->glCu.elm.unn.shU[0];
	if(!(nMetG<5&&nMetG>=0))nMetG=0;
	str0=QString("%1").arg(  mDiagn[18]->glCu.elm.unn.shU[0],2,10,QChar(' ') );
	str+=str0;	
	str=str.leftJustified(23,' ');
	nMetC=mDiagn[18]->glCu.elm.unn.shU[1];
	if(!(nMetC<5&&nMetC>=0))nMetC=0;
	str0=QString("%1").arg(  mDiagn[18]->glCu.elm.unn.shU[1],2,10,QChar(' ') );
	str+=str0;	
	list.append(str);
//20
	str=" 1:";
	str=str.leftJustified(11,' ');
	dd=mDiagn[5]->glCu.elm.unn.shU[0]/100.;
	if(nMetG>0)
		str0=QString("%1").arg( dd ,6,'f',2,' ' );
	else str0.clear();
	str+=str0;	
	str=str.leftJustified(23,' ');
	dd=mDiagn[9]->glCu.elm.unn.shU[0]/100.;
	if(nMetC>0)
		str0=QString("%1").arg( dd ,6,'f',2,' ' );
	else str0.clear();
	str+=str0;	
	list.append(str);
//21
	str=" 2:";
	str=str.leftJustified(11,' ');
	dd=mDiagn[6]->glCu.elm.unn.shU[0]/100.;
	if(nMetG>1)
		str0=QString("%1").arg( dd ,6,'f',2,' ' );

	str+=str0;	
	str=str.leftJustified(23,' ');
	dd=mDiagn[10]->glCu.elm.unn.shU[0]/100.;
	if(nMetC>1)
		str0=QString("%1").arg( dd ,6,'f',2,' ' );
	else str0.clear();
	str+=str0;	
	list.append(str);
//22
	str=" 3:";
	str=str.leftJustified(11,' ');
	dd=mDiagn[7]->glCu.elm.unn.shU[0]/100.;
	if(nMetG>2)
		str0=QString("%1").arg( dd ,6,'f',2,' ' );
	else str0.clear();
	str+=str0;	
	str=str.leftJustified(23,' ');
	dd=mDiagn[11]->glCu.elm.unn.shU[0]/100.;
	if(nMetC>2)
		str0=QString("%1").arg( dd ,6,'f',2,' ' );
	else str0.clear();
	str+=str0;	
	list.append(str);
//23
	str=" 4:";
	str=str.leftJustified(11,' ');
	dd=mDiagn[8]->glCu.elm.unn.shU[0]/100.;
	if(nMetG>3)
		str0=QString("%1").arg( dd ,6,'f',2,' ' );
	else str0.clear();
	str+=str0;	
	str=str.leftJustified(23,' ');
	dd=mDiagn[12]->glCu.elm.unn.shU[0]/100.;
	if(nMetC>3)
		str0=QString("%1").arg( dd ,6,'f',2,' ' );
	else str0.clear();
	str+=str0;	
	list.append(str);
//24
	str="       Метки для коррекции";	list.append(str);	//0
//25
	str="         Глиссада      Курс";	list.append(str);	//1
//26
	str=" +7°:";
	dd=mDiagn[13]->glCu.elm.unn.shU[0]/100.;
	str0=QString("%1").arg( dd ,6,'f',2,' ' );
	str+=str0;
	str1=QString(" %1").arg(  mDiagn[13]->glCu.elm.unn.shU[1],2,10,QChar(' ') );
	str+=str1+"  +10°:";
	str=str.leftJustified(18,' ');
	dd=mDiagn[15]->glCu.elm.unn.shU[0]/100.;
	str0=QString("%1").arg( dd ,6,'f',2,' ' );
	str+=str0;
	str1=QString("  %1").arg(  mDiagn[15]->glCu.elm.unn.shU[1],2,10,QChar(' ') );
	str+=str1;
	list.append(str);
//27
	str="  0°:";
	dd=mDiagn[14]->glCu.elm.unn.shU[0]/100.;
	str0=QString("%1").arg( dd ,6,'f',2,' ' );
	str+=str0;
	str1=QString(" %1").arg(  mDiagn[14]->glCu.elm.unn.shU[1],2,10,QChar(' ') );
	str+=str1+"    0°:";
	str=str.leftJustified(18,' ');
	dd=mDiagn[16]->glCu.elm.unn.shU[0]/100.;
	str0=QString("%1").arg( dd ,6,'f',2,' ' );
	str+=str0;
	str1=QString("  %1").arg(  mDiagn[16]->glCu.elm.unn.shU[1],2,10,QChar(' ') );
	str+=str1;
	list.append(str);
//28
	str="                -10°:";
	str=str.leftJustified(18,' ');
	dd=mDiagn[17]->glCu.elm.unn.shU[0]/100.;
	str0=QString("%1").arg( dd ,6,'f',2,' ' );
	str+=str0;
	str1=QString("  %1").arg(  mDiagn[17]->glCu.elm.unn.shU[1],2,10,QChar(' ') );
	str+=str1;
	list.append(str);
//29
	str="              Запуск";	list.append(str);	//0
//30
	str0=" да";str1="нет";
	str=" Наличие:";
	str=str.leftJustified(18,' ');
	if(bitAr[31])str2=str0;else str2=str1;
	str+=str2;
	list.append(str);
//31
	str=" Сбой:";
	str=str.leftJustified(18,' ');
	if(bitAr[30])str2=str0;else str2=str1;
	str+=str2;
	list.append(str);
//32
	str=" Мин.длит.:";
	str=str.leftJustified(16,' ');
	str0=QString("%1").arg(  mDiagn[23]->glCu.elm.unn.shU[0],6,10,QChar(' ') );
	str+=str0;
	list.append(str);
//33
	str=" Макс.длит.:";
	str=str.leftJustified(16,' ');
	str0=QString("%1").arg(  mDiagn[23]->glCu.elm.unn.shU[1],6,10,QChar(' ') );
	str+=str0;
	list.append(str);
//34
	mDiagn[22]->glCu.elm.unn.shU[0];
	str=QString("%1").arg(kk,8,16,QChar('0'));
	str+=QString(" %1").arg(mDiagn[21]->glCu.elm.unn.shU[0],8,10,QChar('0'));
	str+=QString(" %1").arg(mDiagn[21]->glCu.elm.unn.shU[1],8,10,QChar('0'));
	list.append(str);

	return list;
}

QString Diagn::toTextEd()
{
	QString strOut,str;
//-
	QStringList list;
	list = toStrList();
	int sizeList=list.size();
	for(int i=0;i<sizeList;i++)
	{
		strOut+=list.at(i);
		strOut+="\n";
	}
//-
	strOut+="\n";
	for(int i=0;i<100;i++)
	{
		str.clear();
		str.append(mDiagn[i]->strNum+" ");
		str.append(mDiagn[i]->strValueHex+" ");
		str.append(mDiagn[i]->strValue[0]+" ");
		str.append(mDiagn[i]->strValue[1]+" ");
		str=str.leftJustified(30,' ');
		for(int j=0;j<3;j++)
			str.append(mDiagn[i]->strName[j]+"\t");
		str+="\n";
		strOut.append(str);
	}

	return strOut;
}
void Diagn::fillDiagnPrl(uchar* pCh)
{
	mDiagn[0]->fill(pCh,4);
//-
	mDiagn[1]->fill(pCh+4+0,4);
//-
	mDiagn[2]->fill(pCh+4+4,4);
//-
	mDiagn[3]->fill(pCh+4+8,4);
//-
	mDiagn[4]->fill(pCh+4+12,4);
//-
	mDiagn[5]->fill(pCh+4+16,4);
//-
	mDiagn[6]->fill(pCh+4+18,4);

//-
	mDiagn[7]->fill(pCh+4+20,4);
//-
	mDiagn[8]->fill(pCh+4+22,4);
//-
	mDiagn[9]->fill(pCh+4+24,4);
//-
	mDiagn[10]->fill(pCh+4+26,4);
//-
	mDiagn[11]->fill(pCh+4+28,4);
//-
	mDiagn[12]->fill(pCh+4+30,4);
//-
	mDiagn[13]->fill(pCh+4+32,4);
//-
	mDiagn[14]->fill(pCh+4+36,4);
//-
	mDiagn[15]->fill(pCh+4+40,4);
//-
	mDiagn[16]->fill(pCh+4+44,4);
//-
	mDiagn[17]->fill(pCh+4+48,4);
//-
	mDiagn[18]->fill(pCh+4+52,4);
//-
	mDiagn[19]->fill(pCh+4+56,4);
//-
	mDiagn[20]->fill(pCh+4+60,4);
//-
	mDiagn[21]->fill(pCh+4+64,4);
//-
	mDiagn[22]->fill(pCh+4+68,4);
//-
	mDiagn[23]->fill(pCh+4+72,4);
//-
	mDiagn[24]->fill(pCh+4+76,4);
//-
	mDiagn[25]->fill(pCh+4+80,4);
//-
	mDiagn[26]->fill(pCh+4+84,2);
//-
	mDiagn[27]->fill(pCh+4+86,2);
//-
	mDiagn[28]->fill(pCh+4+88,2);
//-
	mDiagn[29]->fill(pCh+4+90,2);
//-
	for(int i=0;i<50;i++)
		mDiagn[30+i]->fill(pCh+4+92+i*6,6);
//-
//	strList=toStrList();
//-
	return;
}

void Diagn::fillDiagnKo(uchar* pCh)
{
	mDiagn[0]->fill(pCh,4);
//-
	mDiagn[1]->fill(pCh+4+0,4);
//-
	mDiagn[2]->fill(pCh+4+4,4);
//-
	mDiagn[3]->fill(pCh+4+8,4);
//-
	mDiagn[4]->fill(pCh+4+12,4);
//-
	mDiagn[5]->fill(pCh+4+16,4);
//-
	mDiagn[6]->fill(pCh+4+20,4);

//-
	mDiagn[7]->fill(pCh+4+24,4);
//-
	mDiagn[8]->fill(pCh+4+28,4);
//-
	mDiagn[9]->fill(pCh+4+32,4);
//-
	mDiagn[10]->fill(pCh+4+36,4);
//-
	mDiagn[11]->fill(pCh+4+40,4);
//-
	mDiagn[12]->fill(pCh+4+44,4);
//-
	mDiagn[13]->fill(pCh+4+48,4);
//-
	mDiagn[14]->fill(pCh+4+52,4);
//-
	mDiagn[15]->fill(pCh+4+56,4);
//-
	mDiagn[16]->fill(pCh+4+60,4);
//-
	mDiagn[17]->fill(pCh+4+64,4);
//-
	mDiagn[18]->fill(pCh+4+68,4);
//-
	mDiagn[19]->fill(pCh+4+72,4);
//-
	mDiagn[20]->fill(pCh+4+76,4);
//-
	mDiagn[21]->fill(pCh+4+80,4);
//-
	mDiagn[22]->fill(pCh+4+84,4);
//-
	mDiagn[23]->fill(pCh+4+86,4);
//-
	mDiagn[24]->fill(pCh+4+88,4);
//-
	uchar uch[4];memset(uch,0,4);
	mDiagn[25]->fill(uch,4);
//-
	mDiagn[26]->fill(uch,2);
//-
	mDiagn[27]->fill(uch,2);
//-
	mDiagn[28]->fill(uch,2);
//-
	mDiagn[29]->fill(uch,2);
//-
	for(int i=0;i<50;i++)
		mDiagn[30+i]->fill(pCh+4+92+i*6,6);
//-
//	strList=toStrList();
//-
	return;
}

QString Diagn::toTxt()
{
	QString strOut;
	int sizeList;
	sizeList = strList.size();
	for(int i=0;i<sizeList;i++)
	{
		strOut+=strList.at(i);
		strOut+="\n";
	}
	return strOut;
}

