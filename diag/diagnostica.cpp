#include "diagnostica.h"
#include "rastr.h"
#include <QtGui/QTextEdit>
#include <QtGui/QKeyEvent>
#include <QtCore/QBitArray>

QTextEdit* tEd;

Diagnostica::Diagnostica(QObject *parent)
	: QObject(parent)
{

	isVisibleCh1BoLight=true;
	calculator=0;
	next=0;
	initVeMDiag();
	initGlCuRr();
	glCuRr.nMet=0;
	glCuRr.glCuSync=0;
	kMet=0;
	glCuRr.bCur=false;glCuRr.bLight=true;
	glCuRr.bInp=true;glCuRr.bOutp=true;glCuRr.bMet=true;
	glCuRr.bGrid=true;glCuRr.bCode=true;
	tEd=NULL;
//*
//???????????????????????????????????????????
//	tEd= new QTextEdit();	tEd->setFontFamily("Courier");
	if(tEd!=NULL)	tEd->resize(QSize(800,800));//	tEd->show();
//???????????????????????????????????????????
//*/
}
void Diagnostica::fromNumBoardDialog(int num)
{
	numBoard=num;
	bChange=true;
//
	for(int i=0;i<100;i++)
	{
		glCuRr.diagn.mDiagn[i]->glCu.elm.unn.iU=0xffffffff;
	}
	culcChange=0;
toRastr();
	return;
}
Diagnostica::~Diagnostica()
{

}
QString Diagnostica::toTextEd()
{
	QString str,strOut;
	str="12345678";


	return strOut;
}

void Diagnostica::keyPressEvent ( QKeyEvent * event )
{
	if(event->key()==Qt::Key_0)
	{
//		tEd->setText("456");
	}
}
void Diagnostica::initRastr(Rastr* r)
{
	rastr=r;
	return;
}
void Diagnostica::initGlCuRr()
{
//	rastr->glCuRr=&glCuRr;
	glCuRr.bGl=false;
	glCuRr.bCu=false;
	glCuRr.yScaleGlide=2000;
	glCuRr.yScaleCourse=2000;
	glCuRr.sizeVe=512;
	QPoint point(0,0);
	glCuRr.veCoAnGlide.resize(glCuRr.sizeVe);
	glCuRr.veCoAnCourse.resize(glCuRr.sizeVe);
	for(int i=0;i<glCuRr.sizeVe;i++)
	{
		glCuRr.veCoAnGlide.replace(i,point);
		glCuRr.veCoAnCourse.replace(i,point);
	}
//	rastr->glCuRr=glCuRr;
	return;
}
QStringList Diagnostica::toStrListKo()
{
	if(bChange==true)
	{
		for(int i=0;i<100;i++)
		{
			glCuRr.diagn.mDiagn[i]->glCu.elm.unn.iU=0;
		}
		if(culcChange--==0||culcChange<0)
			bChange=false;
	}
	QStringList list;
	QString str,str0,str1,str2,str3,strt="1";
//0
	str="    Развертывающее напряжение";	list.append(str);	//0
//1
	str="         Вертикаль  Горизонталь";	list.append(str);	//1
//2
	double dd=glCuRr.diagn.mDiagn[20]->glCu.elm.unn.shU[0]/100.;
	str0=QString("%1").arg( dd ,6,'f',2,' ' );
	dd=glCuRr.diagn.mDiagn[20]->glCu.elm.unn.shU[1]/100.;
	str1=QString("%1").arg( dd ,6,'f',2,' ' );
	str=" вход:    "+str0;
	str=str.leftJustified(22,' ');
	str+=str1;	list.append(str);	
//3
	str0=QString("%1").arg(  (double)glCuRr.diagn.mDiagn[1]->glCu.elm.unn.shU[0]/100.,5,'f',2,' ' );
	str=" минимум: "+str0+"  ";
	str1=QString("%1").arg(  glCuRr.diagn.mDiagn[15]->glCu.elm.unn.shU[0],2,10,QChar(' ') );
	str+=str1+"  ";
	str0=QString("%1").arg(  (double)glCuRr.diagn.mDiagn[3]->glCu.elm.unn.shU[0]/100.,5,'f',2,' ' );
	str1=QString("%1").arg(  glCuRr.diagn.mDiagn[16]->glCu.elm.unn.shU[0],2,10,QChar(' ') );
	str+=str0+"  "+str1;
	list.append(str);
//4
	str0=QString("%1").arg(  (double)glCuRr.diagn.mDiagn[1]->glCu.elm.unn.shU[1]/100.0,5,'f',2,' ' );
	str=" максимум: "+str0+"  ";
	str1=QString("%1").arg(  glCuRr.diagn.mDiagn[15]->glCu.elm.unn.shU[1],2,10,QChar(' ') );
	str+=str1+"   ";
	str0=QString("%1").arg(  (double)glCuRr.diagn.mDiagn[3]->glCu.elm.unn.shU[1]/100.,5,'f',2,' ' );
	str1=QString("%1").arg(  glCuRr.diagn.mDiagn[16]->glCu.elm.unn.shU[1],2,10,QChar(' ') );
	str+=str0+"  "+str1;
	list.append(str);
//5				    
	str="              Разветка";	list.append(str);	//0
//6
	GlCu glCu;
	glCu=glCuRr.diagn.mDiagn[18]->glCu;
	QString strCond=QString("%1").arg(glCu.elm.unn.uiU,32,2,QChar('0'));
	str=" Наличие:";
	str=str.leftJustified(16,' ');
	if(strCond.at(31-14)=='1')	str+="есть";
	else str+="нет";
	list.append(str);	//
//7
	str=" Вращение:";
	str=str.leftJustified(16,' ');
	if(strCond.at(31-17)=='0')str+="нет";
	else
	{
		if(strCond.at(31-18)=='1') str+="есть";
		if(strCond.at(31-18)=='0') str+="обратно";
	}
	list.append(str);	//1
//8
//8
	str=" Метки:";
	str=str.leftJustified(16,' ');
	if(strCond.mid(31-20,1).toInt())str+="все метки";
	else
	{
		if(strCond.mid(31-21,1).toInt())str+="с пропуском";
		if(!strCond.mid(31-21,1).toInt())
			if(glCuRr.nMetMax>0)str+="не достаточно";
			else str+="нет";
	}
	list.append(str);	//1
//9
	str="              Коррекция";	list.append(str);	//0
//10
	str=" По амплитуде:";
	str=str.leftJustified(16,' ');
	if(strCond.mid(31-16,1).toInt())str+="есть";
	else str+="нет";
	list.append(str);	//1
//11
	str=" По меткам:";
	str=str.leftJustified(16,' ');
	if(strCond.mid(31-23,1).toInt())str+="есть";
	else str+="нет";
	list.append(str);	//1
//12
//12
	str="              Запуск";	list.append(str);	//0
//13
	str0=" да";str1="нет";
	str=" Наличие:";
	str=str.leftJustified(18,' ');
	str+=(strCond.mid(31-31,1).toInt()==1)?"да":"нет";
	list.append(str);
//14
	str=" Сбой:";
	str=str.leftJustified(18,' ');
	str+=(strCond.mid(31-30,1).toInt()==1)?"да":"нет";
	list.append(str);
//15
	str=" Мин.длит.:";
	str=str.leftJustified(16,' ');
	str0=QString("%1").arg(  glCuRr.diagn.mDiagn[19]->glCu.elm.unn.shU[0],6,10,QChar(' ') );
	str+=str0;
	list.append(str);
//16
	str=" Макс.длит.:";
	str=str.leftJustified(16,' ');
	str0=QString("%1").arg(  glCuRr.diagn.mDiagn[19]->glCu.elm.unn.shU[1],6,10,QChar(' ') );
	str+=str0;
//	str=strCond;
	list.append(str);


////////////////////
	str=QString("%1 ").arg(glCuRr.nextMax,3,10,QChar('0'));
	str+=QString("%1 ").arg(glCuRr.nMet,3,10,QChar('0'));
	str+=QString("%1 ").arg(glCuRr.nMetMax,3,10,QChar('0'));
	str+=QString("%1 ").arg(glCuRr.rMet[0],3,10,QChar('0'));
	str+=QString("%1 ").arg(glCuRr.rMet[1],3,10,QChar('0'));
//	list.append(str);
//17
//-
	str.clear();
	glCu=glCuRr.diagn.mDiagn[30]->glCu;
	for(int i=0;i<6;i++)
	{
		str+=QString("%1 ").arg(glCu.bts[i],2,16,QChar('0'));
	}
	str+=QString("%1 ").arg(glCu.elm.unn.iU&0xfff,4,10,QChar('0'));
	
//	list.append(str);
//-
	if(strCond.at(31-15)=='1')glCuRr.bCodeView=true;
	else glCuRr.bCodeView=false;

	return list;
}
QStringList Diagnostica::toStrListPrl()
{
	if(bChange==true)
	{
		for(int i=0;i<100;i++)
		{
			glCuRr.diagn.mDiagn[i]->glCu.elm.unn.iU=0;
		}
		if(culcChange--==0||culcChange<0)
			bChange=false;
	}
	QStringList list;
	QString str,str0,str1,str2,str3,strt="1";
	double dd=0;
	int nMetG=0,nMetC=0;
//0
	str="            Развертка";	list.append(str);	//0
//1
	str="         Глиссада      Курс";	list.append(str);	//1
//2
	dd=glCuRr.diagn.mDiagn[24]->glCu.elm.unn.shU[0]/100.;
	str0=QString("%1").arg( dd ,6,'f',2,' ' );
	dd=glCuRr.diagn.mDiagn[24]->glCu.elm.unn.shU[1]/100.;
	str1=QString("%1").arg( dd ,6,'f',2,' ' );
	str=" вход:    "+str0;
	str=str.leftJustified(22,' ');
	str+=str1;	list.append(str);	
//3
	str0=QString("%1").arg(  (double)glCuRr.diagn.mDiagn[1]->glCu.elm.unn.shU[0]/100.,5,'f',2,' ' );
	str=" минимум: "+str0+"  ";
	str1=QString("%1").arg(  glCuRr.diagn.mDiagn[19]->glCu.elm.unn.shU[0],2,10,QChar(' ') );
	str+=str1+"  ";
	str0=QString("%1").arg(  (double)glCuRr.diagn.mDiagn[3]->glCu.elm.unn.shU[0]/100.,5,'f',2,' ' );
	str1=QString("%1").arg(  glCuRr.diagn.mDiagn[20]->glCu.elm.unn.shU[0],2,10,QChar(' ') );
	str+=str0+"  "+str1;
	list.append(str);
//4
	str0=QString("%1").arg(  (double)glCuRr.diagn.mDiagn[1]->glCu.elm.unn.shU[1]/100.0,5,'f',2,' ' );
	str=" максимум: "+str0+"  ";
	str1=QString("%1").arg(  glCuRr.diagn.mDiagn[19]->glCu.elm.unn.shU[1],2,10,QChar(' ') );
	str+=str1+"   ";
	str0=QString("%1").arg(  (double)glCuRr.diagn.mDiagn[3]->glCu.elm.unn.shU[1]/100.,5,'f',2,' ' );
	str1=QString("%1").arg(  glCuRr.diagn.mDiagn[20]->glCu.elm.unn.shU[1],2,10,QChar(' ') );
	str+=str0+"  "+str1;
	list.append(str);
//5
	str="            Подсвет";	list.append(str);	//0
//6
	str="         Глиссада      Курс";	list.append(str);	//1
//7
	str0=QString("%1").arg(  (double)glCuRr.diagn.mDiagn[2]->glCu.elm.unn.shU[0]/100.,5,'f',2,' ' );
	str1=QString("%1").arg(  (double)glCuRr.diagn.mDiagn[4]->glCu.elm.unn.shU[0]/100.,5,'f',2,' ' );
	str=" минимум:   "+str0;
	str=str.leftJustified(23,' ');
	str+=str1;	list.append(str);	
//8
	str0=QString("%1").arg(  (double)glCuRr.diagn.mDiagn[2]->glCu.elm.unn.shU[1]/100.,5,'f',2,' ' );
	str1=QString("%1").arg(  (double)glCuRr.diagn.mDiagn[4]->glCu.elm.unn.shU[1]/100.,5,'f',2,' ' );
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
	kk=glCuRr.diagn.mDiagn[22]->glCu.elm.unn.uiU;
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
	nMetG=glCuRr.diagn.mDiagn[18]->glCu.elm.unn.shU[0];
	if(!(nMetG<5&&nMetG>=0))nMetG=0;
	str0=QString("%1").arg(  glCuRr.diagn.mDiagn[18]->glCu.elm.unn.shU[0],2,10,QChar(' ') );
	str+=str0;	
	str=str.leftJustified(23,' ');
	nMetC=glCuRr.diagn.mDiagn[18]->glCu.elm.unn.shU[1];
	if(!(nMetC<5&&nMetC>=0))nMetC=0;
	str0=QString("%1").arg(  glCuRr.diagn.mDiagn[18]->glCu.elm.unn.shU[1],2,10,QChar(' ') );
	str+=str0;	
	list.append(str);
//20
	str=" 1:";
	str=str.leftJustified(11,' ');
	dd=glCuRr.diagn.mDiagn[5]->glCu.elm.unn.shU[0]/100.;
	if(nMetG>0)
		str0=QString("%1").arg( dd ,6,'f',2,' ' );
	else str0.clear();
	str+=str0;	
	str=str.leftJustified(23,' ');
	dd=glCuRr.diagn.mDiagn[9]->glCu.elm.unn.shU[0]/100.;
	if(nMetC>0)
		str0=QString("%1").arg( dd ,6,'f',2,' ' );
	else str0.clear();
	str+=str0;	
	list.append(str);
//21
	str=" 2:";
	str=str.leftJustified(11,' ');
	dd=glCuRr.diagn.mDiagn[6]->glCu.elm.unn.shU[0]/100.;
	if(nMetG>1)
		str0=QString("%1").arg( dd ,6,'f',2,' ' );

	str+=str0;	
	str=str.leftJustified(23,' ');
	dd=glCuRr.diagn.mDiagn[10]->glCu.elm.unn.shU[0]/100.;
	if(nMetC>1)
		str0=QString("%1").arg( dd ,6,'f',2,' ' );
	else str0.clear();
	str+=str0;	
	list.append(str);
//22
	str=" 3:";
	str=str.leftJustified(11,' ');
	dd=glCuRr.diagn.mDiagn[7]->glCu.elm.unn.shU[0]/100.;
	if(nMetG>2)
		str0=QString("%1").arg( dd ,6,'f',2,' ' );
	else str0.clear();
	str+=str0;	
	str=str.leftJustified(23,' ');
	dd=glCuRr.diagn.mDiagn[11]->glCu.elm.unn.shU[0]/100.;
	if(nMetC>2)
		str0=QString("%1").arg( dd ,6,'f',2,' ' );
	else str0.clear();
	str+=str0;	
	list.append(str);
//23
	str=" 4:";
	str=str.leftJustified(11,' ');
	dd=glCuRr.diagn.mDiagn[8]->glCu.elm.unn.shU[0]/100.;
	if(nMetG>3)
		str0=QString("%1").arg( dd ,6,'f',2,' ' );
	else str0.clear();
	str+=str0;	
	str=str.leftJustified(23,' ');
	dd=glCuRr.diagn.mDiagn[12]->glCu.elm.unn.shU[0]/100.;
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
	dd=glCuRr.diagn.mDiagn[13]->glCu.elm.unn.shU[0]/100.;
	str0=QString("%1").arg( dd ,6,'f',2,' ' );
	str+=str0;
	str1=QString(" %1").arg(  glCuRr.diagn.mDiagn[13]->glCu.elm.unn.shU[1],2,10,QChar(' ') );
	str+=str1+"  +10°:";
	str=str.leftJustified(18,' ');
	dd=glCuRr.diagn.mDiagn[15]->glCu.elm.unn.shU[0]/100.;
	str0=QString("%1").arg( dd ,6,'f',2,' ' );
	str+=str0;
	str1=QString("  %1").arg(  glCuRr.diagn.mDiagn[15]->glCu.elm.unn.shU[1],2,10,QChar(' ') );
	str+=str1;
	list.append(str);
//27
	str="  0°:";
	dd=glCuRr.diagn.mDiagn[14]->glCu.elm.unn.shU[0]/100.;
	str0=QString("%1").arg( dd ,6,'f',2,' ' );
	str+=str0;
	str1=QString(" %1").arg(  glCuRr.diagn.mDiagn[14]->glCu.elm.unn.shU[1],2,10,QChar(' ') );
	str+=str1+"    0°:";
	str=str.leftJustified(18,' ');
	dd=glCuRr.diagn.mDiagn[16]->glCu.elm.unn.shU[0]/100.;
	str0=QString("%1").arg( dd ,6,'f',2,' ' );
	str+=str0;
	str1=QString("  %1").arg(  glCuRr.diagn.mDiagn[16]->glCu.elm.unn.shU[1],2,10,QChar(' ') );
	str+=str1;
	list.append(str);
//28
	str="                -10°:";
	str=str.leftJustified(18,' ');
	dd=glCuRr.diagn.mDiagn[17]->glCu.elm.unn.shU[0]/100.;
	str0=QString("%1").arg( dd ,6,'f',2,' ' );
	str+=str0;
	str1=QString("  %1").arg(  glCuRr.diagn.mDiagn[17]->glCu.elm.unn.shU[1],2,10,QChar(' ') );
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
	str0=QString("%1").arg(  glCuRr.diagn.mDiagn[23]->glCu.elm.unn.shU[0],6,10,QChar(' ') );
	str+=str0;
	list.append(str);
//33
	str=" Макс.длит.:";
	str=str.leftJustified(16,' ');
	str0=QString("%1").arg(  glCuRr.diagn.mDiagn[23]->glCu.elm.unn.shU[1],6,10,QChar(' ') );
	str+=str0;
	list.append(str);
//34
	glCuRr.diagn.mDiagn[22]->glCu.elm.unn.shU[0];
	str=QString("%1").arg(kk,8,16,QChar('0'));
	str+=QString(" %1").arg(glCuRr.diagn.mDiagn[21]->glCu.elm.unn.shU[0],8,10,QChar('0'));
	str+=QString(" %1").arg(glCuRr.diagn.mDiagn[21]->glCu.elm.unn.shU[1],8,10,QChar('0'));
//	list.append(str);

	return list;
}
//Функция toVeCoAngle() делает из QVector<GlCu> veGlCu оба точечных вектора QVector<QPoint> veCoAnGlide,veCoAnCourse.
void Diagnostica::toVeCoAnglePrl()
{
	int iSize=0;
	iSize= glCuRr.veGlCu.size();
	int iCodeGl=0, iCodeCo=0;
	QPoint point,point0(0,0);int iY=0;
	for(int i=0;i<glCuRr.sizeVe;i++)
	{
		if(glCuRr.veGlCu.at(i).mMet.met.bit10==0)
		{
			iCodeGl=glCuRr.veGlCu.at(i).mMet.met.code;
			point.setX(i);
			iY=256-iCodeGl/2;
			point.setY(256-iCodeGl/2);
			glCuRr.veCoAnGlide.replace(i,point);
			glCuRr.veCoAnCourse.replace(i,point0);
		}
		if(glCuRr.veGlCu.at(i).mMet.met.bit10==1)
		{
			iCodeCo=glCuRr.veGlCu.at(i).mMet.met.code;	
			point.setX(i);
			iY=256-iCodeCo/2;
			point.setY(256-iCodeCo/2);
			glCuRr.veCoAnCourse.replace(i,point);
			glCuRr.veCoAnGlide.replace(i,point0);
		}
	}
	return;
}
void Diagnostica::toVeCoAngleKo()
{
	int iSize=0;
	iSize= glCuRr.veGlCu.size();
	int iCodeGl=0;
	QPoint point,point0(0,0);int iY=0;
	GlCu glCu;
	for(int i=0;i<glCuRr.sizeVe;i++)
	{
//		if(glCuRr.veGlCu.at(i).mMet.met.bit10==0)
//		{
		glCu=glCuRr.veGlCu.at(i);
		iCodeGl=glCu.elm.unn.iU&0xfff;
//			iCodeGl=glCuRr.veGlCu.at(i).mMet.met.code
//				+glCuRr.veGlCu.at(i).mMet.met.bit10<<10;
//				+glCuRr.veGlCu.at(i).mMet.met.bit11<<11;
			iCodeGl>>=4;

			point.setX(i);
			iY=256-iCodeGl;
			point.setY(256-iCodeGl);
			glCuRr.veCoAnGlide.replace(i,point);
			glCuRr.veCoAnCourse.replace(i,point0);
//		}
/*
		if(glCuRr.veGlCu.at(i).mMet.met.bit10==1)
		{
			iCodeCo=glCuRr.veGlCu.at(i).mMet.met.code;	
			point.setX(i);
			iY=256-iCodeCo/2;
			point.setY(256-iCodeCo/2);
			glCuRr.veCoAnCourse.replace(i,point);
			glCuRr.veCoAnGlide.replace(i,point0);
		}
*/
	}
	return;
}
void Diagnostica::slGlSync(bool checked)
{
	if(checked)	glCuRr.glCuSync=0;
	else glCuRr.glCuSync=1;
	return;
}
void Diagnostica::slCuSync(bool checked)
{
	if(checked)	glCuRr.glCuSync=1;
	else glCuRr.glCuSync=0;
	return;
}
void Diagnostica::slChBoCur(bool checked)
{	if(checked)glCuRr.bCur=true;	else glCuRr.bCur=false;	}
void Diagnostica::slChBoLight(bool checked)
{	if(checked)glCuRr.bLight=true;	else glCuRr.bLight=false;	}
void Diagnostica::slChBoInp(bool checked)
{	if(checked)glCuRr.bInp=true;	else glCuRr.bInp=false;	}
void Diagnostica::slChBoOutp(bool checked)
{	if(checked)glCuRr.bOutp=true;	else glCuRr.bOutp=false;	}
void Diagnostica::slChBoMet(bool checked)
{	if(checked)glCuRr.bMet=true;	else glCuRr.bMet=false;	}
void Diagnostica::slChBoGrid(bool checked)
{	if(checked)glCuRr.bGrid=true;	else glCuRr.bGrid=false;	}
void Diagnostica::slChBoCode(bool checked)
{	if(checked)glCuRr.bCode=true;	else glCuRr.bCode=false;	}
QString Diagnostica::toTxt(QStringList sL,QStringList sLIn)
{
	QString str;
	int sizeL,sizeLIn,sizeMax=70,size;
	sizeL=sL.size();sizeLIn=sLIn.size();
	size=sizeL;
	if(sizeL>sizeMax)size=sizeMax;
	if(sizeLIn>sizeMax)size=sizeMax;
	if(sizeLIn>sizeL)size=sizeL;
	if(sizeL>sizeLIn)size=sizeLIn;
	for(int i=0;i<size;i++)
	{
		str.append(sL.at(i));
		str.append(" ");
		str.append(sLIn.at(i));
		str.append("\n");
	}
	str=str.trimmed();

	return str;
}

QStringList Diagnostica::toStringList()
{
	QStringList list;
	for(int i=0;i<60;i++)
	{
		list.append(QString("%1").arg(i));
	}
	QString str;
	
	int numStr=0;
//-0
	numStr=0;
	str=QString("%1 ").arg(dgnstc[4],2,16,QChar('0'));
	str+=QString("%1 ").arg(dgnstc[5],2,16,QChar('0'));
	u.bU[0]=dgnstc[4+0];u.bU[1]=dgnstc[4+1];
	str=QString("%1 ").arg(u.shU[0],4,10,QChar('0'));
	list.replace(numStr,str);
//-0
	numStr=1;
	u.bU[0]=dgnstc[4+2];u.bU[1]=dgnstc[4+3];
	str=QString("%1 ").arg(u.shU[0],4,10,QChar('0'));
	list.replace(numStr,str);
//-4
	numStr=2;
	u.bU[0]=dgnstc[4+4];u.bU[1]=dgnstc[4+5];
	str=QString("%1 ").arg(u.shU[0],4,10,QChar('0'));
	list.replace(numStr,str);
//-4
	numStr=3;
	u.bU[0]=dgnstc[4+6];u.bU[1]=dgnstc[4+7];
	str=QString("%1 ").arg(u.shU[0],4,10,QChar('0'));
	list.replace(numStr,str);

//-8
	numStr=4;
	u.bU[0]=dgnstc[4+8];u.bU[1]=dgnstc[4+9];
	str=QString("%1 ").arg(u.shU[0],4,10,QChar('0'));
	list.replace(numStr,str);
//-8
	numStr=5;
	u.bU[0]=dgnstc[4+10];u.bU[1]=dgnstc[4+11];
	str=QString("%1 ").arg(u.shU[0],4,10,QChar('0'));
	list.replace(numStr,str);

//-12
	numStr=6;
	u.bU[0]=dgnstc[4+12];u.bU[1]=dgnstc[4+13];
	str=QString("%1 ").arg(u.shU[0],4,10,QChar('0'));
	list.replace(numStr,str);
//-12
	numStr=7;
	u.bU[0]=dgnstc[4+14];u.bU[1]=dgnstc[4+15];
	str=QString("%1 ").arg(u.shU[0],4,10,QChar('0'));
	list.replace(numStr,str);
//-16
	numStr=8;
	u.bU[0]=dgnstc[4+16];u.bU[1]=dgnstc[4+17];
	str=QString("%1 ").arg(u.shU[0],4,10,QChar('0'));
	list.replace(numStr,str);
//-18
	numStr=9;
	u.bU[0]=dgnstc[4+18];u.bU[1]=dgnstc[4+19];
	str=QString("%1 ").arg(u.shU[0],4,10,QChar('0'));
	list.replace(numStr,str);
//-20
	numStr=10;
	u.bU[0]=dgnstc[4+20];u.bU[1]=dgnstc[4+21];
	str=QString("%1 ").arg(u.shU[0],4,10,QChar('0'));
	list.replace(numStr,str);
//-22
	numStr=11;
	u.bU[0]=dgnstc[4+22];u.bU[1]=dgnstc[4+23];
	str=QString("%1 ").arg(u.shU[0],4,10,QChar('0'));
	list.replace(numStr,str);
//-24
	numStr=12;
	u.bU[0]=dgnstc[4+24];u.bU[1]=dgnstc[4+25];
	str=QString("%1 ").arg(u.shU[0],4,10,QChar('0'));
	list.replace(numStr,str);
//-26
	numStr=13;
	u.bU[0]=dgnstc[4+26];u.bU[1]=dgnstc[4+27];
	str=QString("%1 ").arg(u.shU[0],4,10,QChar('0'));
	list.replace(numStr,str);
//-28
	numStr=14;
	u.bU[0]=dgnstc[4+28];u.bU[1]=dgnstc[4+29];
	str=QString("%1 ").arg(u.shU[0],4,10,QChar('0'));
	list.replace(numStr,str);
//-30
	numStr=15;
	u.bU[0]=dgnstc[4+30];u.bU[1]=dgnstc[4+31];
	str=QString("%1 ").arg(u.shU[0],4,10,QChar('0'));
	list.replace(numStr,str);
//-32
	numStr=16;
	u.bU[0]=dgnstc[4+32];u.bU[1]=dgnstc[4+33];
	str=QString("%1 ").arg(u.shU[0],4,10,QChar('0'));
	list.replace(numStr,str);
//-32
	numStr=17;
	u.bU[0]=dgnstc[4+34];u.bU[1]=dgnstc[4+35];
	str=QString("%1 ").arg(u.shU[0],4,10,QChar('0'));
	list.replace(numStr,str);
//-36
	numStr=18;
	u.bU[0]=dgnstc[4+36];u.bU[1]=dgnstc[4+37];
	u.bU[2]=dgnstc[4+38];u.bU[3]=dgnstc[4+39];
	str=QString("%1 ").arg(u.shU[0],3,10,QChar('0'));
	str+=QString("%1 ").arg(u.shU[1],3,10,QChar('0'));
	for(int i=0;i<4;i++)
		str.append(QString("%1").arg(u.ubU[i],2,16,QChar('0')));
	list.replace(numStr,str);

//-40
	numStr=19;
	u.bU[0]=dgnstc[4+40];u.bU[1]=dgnstc[4+41];
	u.bU[2]=dgnstc[4+42];u.bU[3]=dgnstc[4+43];
	str=QString("%1 ").arg(u.shU[0],3,10,QChar('0'));
	str+=QString("%1 ").arg(u.shU[1],3,10,QChar('0'));
	list.replace(numStr,str);
//-44
	numStr=20;
	u.bU[0]=dgnstc[4+44];u.bU[1]=dgnstc[4+45];
	u.bU[2]=dgnstc[4+46];u.bU[3]=dgnstc[4+47];
	str=QString("%1 ").arg(u.shU[0],3,10,QChar('0'));
	str+=QString("%1 ").arg(u.shU[1],3,10,QChar('0'));
	for(int i=0;i<4;i++)
		str.append(QString(" %1").arg(u.ubU[i],2,16,QChar('0')));


	list.replace(numStr,str);
//-48
	numStr=21;
	u.bU[0]=dgnstc[4+48];u.bU[1]=dgnstc[4+49];
	u.bU[2]=dgnstc[4+50];u.bU[3]=dgnstc[4+51];
	str=QString("%1 ").arg(u.shU[0],3,10,QChar('0'));
	str+=QString("%1 ").arg(u.shU[1],3,10,QChar('0'));
	list.replace(numStr,str);
//-52
	numStr=22;
	u.bU[0]=dgnstc[4+52];u.bU[1]=dgnstc[4+53];
	str=QString("%1 ").arg(u.shU[0],4,10,QChar('0'));
	list.replace(numStr,str);
//-52
	numStr=23;
	u.bU[0]=dgnstc[4+54];u.bU[1]=dgnstc[4+55];
	str=QString("%1 ").arg(u.shU[0],4,10,QChar('0'));
	list.replace(numStr,str);
//-56
	numStr=24;
	u.bU[0]=dgnstc[4+56];u.bU[1]=dgnstc[4+57];
	str=QString("%1 ").arg(u.shU[0],4,10,QChar('0'));
	list.replace(numStr,str);
//-56
	numStr=25;
	u.bU[0]=dgnstc[4+58];u.bU[1]=dgnstc[4+59];
	str=QString("%1 ").arg(u.shU[0],4,10,QChar('0'));
	list.replace(numStr,str);
//-60
	numStr=26;
	u.bU[0]=dgnstc[4+60];u.bU[1]=dgnstc[4+61];
	str=QString("%1 ").arg(u.shU[0],4,10,QChar('0'));
	list.replace(numStr,str);
//-60
	numStr=27;
	u.bU[0]=dgnstc[4+62];u.bU[1]=dgnstc[4+63];
	str=QString("%1 ").arg(u.shU[0],4,10,QChar('0'));
	list.replace(numStr,str);
//-64
	numStr=28;
	u.bU[0]=dgnstc[4+64];u.bU[1]=dgnstc[4+65];
	str=QString("%1 ").arg(u.shU[0],4,10,QChar('0'));
	list.replace(numStr,str);
//-64
	numStr=29;
	u.bU[0]=dgnstc[4+66];u.bU[1]=dgnstc[4+67];
	str=QString("%1 ").arg(u.shU[0],4,10,QChar('0'));
	list.replace(numStr,str);
//-68
	numStr=30;
	u.bU[0]=dgnstc[4+68];u.bU[1]=dgnstc[4+69];
	u.bU[2]=dgnstc[4+70];u.bU[3]=dgnstc[4+71];
	str=QString("%1 ").arg(u.iU,4,10,QChar('0'));
	list.replace(numStr,str);

//-72
	numStr=31;
	u.bU[0]=dgnstc[4+72];u.bU[1]=dgnstc[4+73];
	str=QString("%1 ").arg(u.shU[0],4,10,QChar('0'));
	list.replace(numStr,str);
//-72
	numStr=32;
	u.bU[0]=dgnstc[4+74];u.bU[1]=dgnstc[4+75];
	str=QString("%1 ").arg(u.shU[0],4,10,QChar('0'));
	list.replace(numStr,str);
//-76
	numStr=33;
	u.bU[0]=dgnstc[4+76];u.bU[1]=dgnstc[4+77];
	u.bU[2]=dgnstc[4+78];u.bU[3]=dgnstc[4+79];
	str=QString("%1 ").arg(u.iU,4,10,QChar('0'));
	list.replace(numStr,str);

//-80
	numStr=34;
	u.bU[0]=dgnstc[4+80];u.bU[1]=dgnstc[4+81];
	str=QString("%1 ").arg(u.shU[0],4,10,QChar('0'));
	list.replace(numStr,str);
//-82
	numStr=35;
	u.bU[0]=dgnstc[4+82];u.bU[1]=dgnstc[4+83];
	str=QString("%1 ").arg(u.shU[0],4,10,QChar('0'));
	list.replace(numStr,str);
//-84
	numStr=36;
	u.bU[0]=dgnstc[4+84];u.bU[1]=dgnstc[4+85];
	str=QString("%1 ").arg(u.shU[0],4,10,QChar('0'));
	list.replace(numStr,str);
//-86
	numStr=37;
	u.bU[0]=dgnstc[4+86];u.bU[1]=dgnstc[4+87];
	str=QString("%1 ").arg(u.shU[0],4,10,QChar('0'));
	list.replace(numStr,str);
//-88
	numStr=38;
	u.bU[0]=dgnstc[4+88];u.bU[1]=dgnstc[4+89];
	str=QString("%1 ").arg(u.shU[0],4,10,QChar('0'));
	str+=QString("%1 ").arg(veGlCu50.at(0).mMet.met.code,4,10,QChar('0'));
	str+=QString("%1 ").arg(veGlCu50.at(0).mMet.met.bit11,1,10,QChar('0'));
	str+=QString("%1 ").arg(veGlCu50.at(0).mMet.met.bit12,1,10,QChar('0'));
	str+=QString("%1 ").arg(veGlCu50.at(0).mMet.met.bit13,1,10,QChar('0'));
	str+=QString("%1 ").arg(veGlCu50.at(0).mMet.met.bit14,1,10,QChar('0'));
	str+=QString("%1 ").arg(veGlCu50.at(0).mMet.met.bit15,1,10,QChar('0'));
	list.replace(numStr,str);
//-
	numStr=39;
	str=QString("%1 ").arg(dgnstc[4+90],2,16,QChar('0'));
	str=QString("%1 ").arg(dgnstc[4+92],2,16,QChar('0'));
	list.replace(numStr,str);
//-
	numStr=40;
	str=QString("%1 ").arg(glCuRr.next,16,2,QChar('0'));
	list.replace(numStr,str);
//-

	return list;
}
void Diagnostica::fillVeGlCuPrl()
{
//-88
	GlCu glCu;
//-
	int nDiv=4;
	if(glCuRr.typeRls==16)
	{
		nDiv=4;	//прл

		if(!isVisibleCh1BoLight)
		{
			isVisibleCh1BoLight=true;
			signSetVisibleChBoLight(true);
		}
	}
	else
	{
		if(glCuRr.typeRls==1)nDiv=12;	//ко
		else nDiv=12;
	}
	if(next>1023)
	{
		next=0;
	}
	for(int i=0;i<50;i++)
	{
		memcpy(&glCu.bts,&dgnstc[4+92+i*6],6);
//-
		glCuRr.culc++;
		veGlCu50.replace(i,glCu);
		if(glCuRr.glCuSync==0)
		{
			if( glCu.mMet.met.bit14 == 1 )
			{
				glCuRr.nextMax=next;
				next=0;
				glCuRr.nMetMax=glCuRr.nMet;
				kMet=0;
				glCuRr.nMet=0;
				glCuRr.strText1=QString("%1").arg((short)glCu.mMet.met.code,4,16,QChar('0'));
				glCuRr.res=glCuRr.culc;
				glCuRr.res12=glCuRr.culc12;
				glCuRr.culc=0;
				glCuRr.culc12=0;
			}
		}else
		{
			if( glCu.mMet.met.bit13 == 1 )
			{
				glCuRr.nextMax=next;
				next=0;
				kMet=0;
				glCuRr.nMetMax=glCuRr.nMet;
				glCuRr.nMet=0;
				glCuRr.res=glCuRr.culc;
				glCuRr.res12=glCuRr.culc12;
				glCuRr.culc=0;
				glCuRr.culc12=0;
			}
		}
//-
		if( glCu.mMet.met.bit12 == 1 )
		{
			if(glCuRr.bGl==false)
			{
				glCuRr.bGl=true;
				glCuRr.x0Gl=next;
			}
		}
		if(glCuRr.bGl==true)
		{
			if( glCu.mMet.met.bit12 == 0 )
			{
				glCuRr.bGl=false;
				glCuRr.x1Gl=next;
			}
		}
//-
		if( glCu.mMet.met.bit11 == 1 )
		{
			if(glCuRr.bCu==false)
			{
				glCuRr.bCu=true;
				glCuRr.x0Cu=next;
			}
		}
		if(glCuRr.bCu==true)
		{
			if( glCu.mMet.met.bit11 == 0 )
			{
				glCuRr.bCu=false;
				glCuRr.x1Cu=next;
			}
		}
//-
		if( glCu.mMet.met.bit15 == 1 )
		{
			glCuRr.met=next;
			if(kMet<glCuRr.maxMet-1)
			{
				glCuRr.rMet[kMet++]=next;
				glCuRr.nMet=kMet;
			}
		}
//-
		
//-
		if(glCuRr.culc%nDiv==0&&next<512)
		{
			glCuRr.culc12++;
			if(next<512-glCuRr.nextMax)
				glCuRr.veGlCu.replace(next+glCuRr.nextMax,glCu);
			glCuRr.veGlCu.replace(next++,glCu);

			glCuRr.next=next;
		}
	}
//-
	glCuRr.yScaleGlide=glCuRr.diagn.mDiagn[21]->glCu.elm.unn.uShU[0];
	glCuRr.yScaleCourse=glCuRr.diagn.mDiagn[21]->glCu.elm.unn.uShU[1];
//-
	return ;
}
void Diagnostica::fillVeGlCuKo()
{
//-88
	GlCu glCu;
//-
	int nDiv=4;
	if(glCuRr.typeRls==16)nDiv=4;	//прл
	else
	{
		if(glCuRr.typeRls==1)
		{
			nDiv=12;	//ко
			if(isVisibleCh1BoLight)
			{
				isVisibleCh1BoLight=false;
				signSetVisibleChBoLight(false);
			}
		}
		else nDiv=12;
	}
	if(next>1023)
	{
		next=0;
	}
	memcpy(&glCu.bts,&dgnstc[4+92+0*6],6);
	glCuRr.codeAngle=glCu.elm.unn.iU&0xfff;

	for(int i=0;i<50;i++)
	{
		memcpy(&glCu.bts,&dgnstc[4+92+i*6],6);
//-
		glCuRr.culc++;
		veGlCu50.replace(i,glCu);
		if(glCuRr.glCuSync==0)
		{
			if( glCu.mMet.met.bit14 == 1 )
			{
				glCuRr.nextMax=next;
				next=0;
				glCuRr.nMetMax=glCuRr.nMet;
				kMet=0;
				glCuRr.nMet=0;
				glCuRr.strText1=QString("%1").arg((short)glCu.mMet.met.code,4,16,QChar('0'));
				glCuRr.res=glCuRr.culc;
				glCuRr.res12=glCuRr.culc12;
				glCuRr.culc=0;
				glCuRr.culc12=0;
			}
		}else
		{
			if( glCu.mMet.met.bit13 == 1 )
			{
				glCuRr.nextMax=next;
				next=0;
				kMet=0;
				glCuRr.nMetMax=glCuRr.nMet;
				glCuRr.nMet=0;
				glCuRr.res=glCuRr.culc;
				glCuRr.res12=glCuRr.culc12;
				glCuRr.culc=0;
				glCuRr.culc12=0;
			}
		}
//-
		if( glCu.mMet.met.bit12 == 1 )
		{
			if(glCuRr.bGl==false)
			{
				glCuRr.bGl=true;
				glCuRr.x0Gl=next;
			}
		}
		if(glCuRr.bGl==true)
		{
			if( glCu.mMet.met.bit12 == 0 )
			{
				glCuRr.bGl=false;
				glCuRr.x1Gl=next;
			}
		}
//-
		if( glCu.mMet.met.bit11 == 1 )
		{
			if(glCuRr.bCu==false)
			{
				glCuRr.bCu=true;
				glCuRr.x0Cu=next;
			}
		}
		if(glCuRr.bCu==true)
		{
			if( glCu.mMet.met.bit11 == 0 )
			{
				glCuRr.bCu=false;
				glCuRr.x1Cu=next;
			}
		}
//-
		if( glCu.mMet.met.bit15 == 1 )
		{
			glCuRr.met=next;
			if(kMet<glCuRr.maxMet-1)
			{
				glCuRr.rMet[kMet++]=next;
				glCuRr.nMet=kMet;
			}
		}
//-
		
//-
		if(glCuRr.culc%nDiv==0&&next<512)
		{
			glCuRr.culc12++;
			if(next<512-glCuRr.nextMax)
				glCuRr.veGlCu.replace(next+glCuRr.nextMax,glCu);
			glCuRr.veGlCu.replace(next++,glCu);

			glCuRr.next=next;
		}
	}
//-
	glCuRr.yScaleGlide=glCuRr.diagn.mDiagn[17]->glCu.elm.unn.uShU[0];
	glCuRr.yScaleCourse=glCuRr.diagn.mDiagn[17]->glCu.elm.unn.uShU[1];
//-
	return ;
}
QString Diagnostica::toTxtVeGlCu50()
{
	QString str;
	for(int i=0;i<50;i++)
	{
		str+=QString("%1").arg(veGlCu50.at(i).bts[0],2,16,QChar('0'));
		str+=QString("%1").arg(veGlCu50.at(i).bts[1],2,16,QChar('0'));
		str+=QString("%1").arg(veGlCu50.at(i).bts[2],2,16,QChar('0'));
		str+=QString("%1").arg(veGlCu50.at(i).bts[3],2,16,QChar('0'));
		str+=QString("%1").arg(veGlCu50.at(i).bts[4],2,16,QChar('0'));
		str+=QString("%1 ").arg(veGlCu50.at(i).bts[5],2,16,QChar('0'));
		str+=QString("%1 ").arg(veGlCu50.at(i).mMet.met.code,4,10,QChar('0'));
		str+=QString("%1 ").arg(veGlCu50.at(i).bts[2],3,10,QChar('0'));
		str+=QString("%1 ").arg(veGlCu50.at(i).bts[3],3,10,QChar('0'));
		str+=QString("%1 ").arg(veGlCu50.at(i).bts[4],3,10,QChar('0'));
		str+=QString("%1 ").arg(veGlCu50.at(i).bts[5],3,10,QChar('0'));
		str+=QString("%1 ").arg(veGlCu50.at(i).mMet.met.bit11,1,16,QChar('0'));
		str+=QString("%1 ").arg(veGlCu50.at(i).mMet.met.bit12,1,16,QChar('0'));
		str+=QString("%1 ").arg(veGlCu50.at(i).mMet.met.bit13,1,16,QChar('0'));
		str+=QString("%1 ").arg(veGlCu50.at(i).mMet.met.bit14,1,16,QChar('0'));
		str+=QString("%1 ").arg(veGlCu50.at(i).mMet.met.bit15,1,16,QChar('0'));
		str+="\n";
	}
	return str;
}

QString Diagnostica::toTxtEd()
{
	QString str;
	for(int i=0;i<1024;i++)
	{
	}
	return str;
}

QString Diagnostica::toTxtVeGlCu()
{
	QString str;
	for(int i=0;i<512;i++)
	{
		str+=QString("%1 ").arg(i);
//		str+=QString("%1").arg(glCuRr.veGlCu.at(i).bts[0],2,16,QChar('0'));
//		str+=QString("%1").arg(glCuRr.veGlCu.at(i).bts[1],2,16,QChar('0'));
//		str+=QString("%1").arg(glCuRr.veGlCu.at(i).bts[2],2,16,QChar('0'));
//		str+=QString("%1").arg(glCuRr.veGlCu.at(i).bts[3],2,16,QChar('0'));
//		str+=QString("%1").arg(glCuRr.veGlCu.at(i).bts[4],2,16,QChar('0'));
//		str+=QString("%1 ").arg(glCuRr.veGlCu.at(i).bts[5],2,16,QChar('0'));
		str+=QString("%1 ").arg(glCuRr.veGlCu.at(i).mMet.met.bit10,1,2,QChar('0'));
		str+=QString("%1 ").arg(glCuRr.veGlCu.at(i).mMet.met.code,4,10,QChar('0'));
		str+=QString("%1 ").arg(128-glCuRr.veGlCu.at(i).bts[2],3,10,QChar('0'));
		str+=QString("%1 ").arg(128-glCuRr.veGlCu.at(i).bts[3],3,10,QChar('0'));
		str+=QString("%1 ").arg(128-glCuRr.veGlCu.at(i).bts[4],3,10,QChar('0'));
		str+=QString("%1 ").arg(128-glCuRr.veGlCu.at(i).bts[5],3,10,QChar('0'));
		str+=QString("%1 ").arg(glCuRr.veGlCu.at(i).mMet.met.bit11,1,16,QChar('0'));
		str+=QString("%1 ").arg(glCuRr.veGlCu.at(i).mMet.met.bit12,1,16,QChar('0'));
		str+=QString("%1 ").arg(glCuRr.veGlCu.at(i).mMet.met.bit13,1,16,QChar('0'));
		str+=QString("%1 ").arg(glCuRr.veGlCu.at(i).mMet.met.bit14,1,16,QChar('0'));
		str+=QString("%1 ").arg(glCuRr.veGlCu.at(i).mMet.met.bit15,1,16,QChar('0'));
		str+="\n";
	}
	return str;
}



void Diagnostica::initVeMDiag()
{
//	veMDiag;
//-
	GlCu glCu;
	for(int i=0;i<50;i++)
	{
		veGlCu50.append(glCu);
	}
	for(int i=0;i<1024;i++)
	{
		glCuRr.veGlCu.append(glCu);
	}
	glCuRr.typeRls=1;glCuRr.culc=0;glCuRr.res=0;glCuRr.culc12=0;
	glCuRr.res12=0;glCuRr.val=0;glCuRr.va11=0;glCuRr.va12=0;
	glCuRr.va21=0;glCuRr.va22=0;
	glCuRr.nextMax=0;
	glCuRr.nMetMax=0;
	glCuRr.bCodeView=false;
	glCuRr.codeAngle=0;

	return ;
}
void Diagnostica::toRastr()
{
	for(int i=0;i<396;i++)
	{
		rastr->dgnstc[i]=dgnstc[i];
	}
//	strList=toStringList();
	glCuRr.typeRls=dgnstc[1];
//glCuRr.veGlCu<glCu> - 
//-
//	glCuRr.diagn.strList =glCuRr.diagn.toStrList();
	if(glCuRr.typeRls==1)
	{
		fillVeGlCuKo();		//заполняет отображаемые курс глиссаду
		toVeCoAngleKo();
		glCuRr.diagn.fillDiagnKo(dgnstc);	//заполняет mDiagn[]
		glCuRr.diagn.strList =toStrListKo();
	}
	else
	{
		fillVeGlCuPrl();		//заполняет отображаемые курс глиссаду
		toVeCoAnglePrl();
		glCuRr.diagn.fillDiagnPrl(dgnstc);	//заполняет mDiagn[]
		glCuRr.diagn.strList =toStrListPrl();
	}
//для rast->painterText + 50 отсчетов(не используются)
//-
//	rastr->strListIn=strList;
//	glCuRr.strText = toTxt(rastr->strList,strList);
	glCuRr.strText = glCuRr.diagn.toTxt();
//-
	QPoint p(0,0);int y=0;
	for(int i=0;i<512;i++)
	{
		p.setX(i);
		y=128-(char)glCuRr.veGlCu.at(i).bts[2];
		p.setY(128-(char)glCuRr.veGlCu.at(i).bts[2]);
		rastr->veP0.replace(i,p);
		p.setX(i);
		y=128-(char)glCuRr.veGlCu.at(i).bts[3];
		p.setY(128-(char)glCuRr.veGlCu.at(i).bts[3]);
		rastr->veP1.replace(i,p);
		y=128-(char)glCuRr.veGlCu.at(i).bts[4];
		p.setY(128-(char)glCuRr.veGlCu.at(i).bts[4]);
		rastr->veP2.replace(i,p);
		y=128-(char)glCuRr.veGlCu.at(i).bts[5];
		p.setY(128-(char)glCuRr.veGlCu.at(i).bts[5]);
		rastr->veP3.replace(i,p);
	}
//-
//	rastr->glCuRr=glCuRr;
//	rastr->glCuRr.strText.append(glCuRr.strText1);//??????????????
	rastr->widRastr0->next=glCuRr.next;
	rastr->widRastr1->next=glCuRr.next;
//-
//	rastr->refreshPixmap();
	return;
}



