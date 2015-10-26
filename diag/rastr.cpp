#include "rastr.h"
#include "math.h"


Rastr::Rastr(QWidget *parent)
	: QWidget(parent)
{
}

Rastr::Rastr(QWidget *parent,QWidget *wR0,QWidget *wR1,QWidget *wRText)
	: QWidget(parent)
{
	initColors();
	calculator=0;
	mw=parent;
	QPoint p(0,0);
	for(int i=0;i<1024;i++)
	{
		veP0.append(p);
		veP1.append(p);
		veP2.append(p);
		veP3.append(p);
	}
	widRastr0=(WidRastr*)wR0;
	widRastr1=(WidRastr*)wR1;
	widRastrText=(WidRastrText*)wRText;
	widRastr0->setNumber(0);
	widRastr1->setNumber(1);
	widRastrText->setNumber(2);
//
//	painterText.setBrush(QBrush(QColor(Qt::blue)));
	connect(widRastrText,SIGNAL(signRefresh()),this,SLOT(slRefresh()));
//-
	QString str;
	strList=initStrList();
	for(int i=0;i<60;i++)
	{
		strListIn.append(QString("%1").arg(i));
	}
}
Rastr::~Rastr()
{

}
void Rastr::initColors()
{
	int res;
	res = 0;
	if(res==0)
	{
		colors.colorFill=Qt::black;
		colors.colorLight=QColor(0,0,255,80);
		colors.colorGrid=Qt::gray;
		colors.colorCode=Qt::green;
		colors.colorMet=QColor(255,0,0,255);
		colors.colorInp=Qt::blue;
		colors.colorOutp=Qt::yellow;
	}
	if(res==1)
	{
		colors.colorFill=Qt::white;
		colors.colorLight=QColor(0,0,255,80);
		colors.colorGrid=Qt::gray;
		colors.colorCode=Qt::black;
		colors.colorMet=QColor(255,0,0,255);
		colors.colorInp=Qt::black;
		colors.colorOutp=Qt::black;
	}
	return;
}
void Rastr::setPixmaps()
{
	int x0,y0,x1,y1,x2,y2;
	x0 = widRastr0->sizeRect.width();
	y0 = widRastr0->sizeRect.height();
	x1 = widRastr1->sizeRect.width();
	y1 = widRastr1->sizeRect.height();
	x2 = widRastrText->sizeRect.width();
	y2 = widRastrText->sizeRect.height();
	x0=512;y0=255;
	x1=512;y1=255;
	pixmap0=new QPixmap(x0,y0);
	pixmap1=new QPixmap(x1,y1);
	pixmap0->fill(Qt::black);
	pixmap1->fill(Qt::black);
	pixmapText=new QPixmap(x2,y2);
	
	widRastr0->pixmap=pixmap0;
	widRastr1->pixmap=pixmap1;
	widRastrText->pixmap=pixmapText;

	return;
}

void Rastr::slRefresh()
{
	refreshPixmap();
	return;
}
QString Rastr::trimStr(QString strIn, QString strNum)
{
	QString str,str0;
	str=strNum;
	str0 = strIn;
	if(str0.left(1)=="w")
		str0=str0.mid(1,str0.size()-1);
	if(str0.left(9)=="DIAG_PRL_")
		str0=str0.mid(9,str0.size()-9);
	str.append(str0);
	str=str.leftJustified(strSize,' ');
	str.append(' ');

	return str;
}

QStringList Rastr::initStrList()
{
	QStringList list;
	QString str,str0;
	for(int i=0;i<60;i++)
	{
		str=QString("%1").arg(i);
		str=str.leftJustified(3,' ');
		list.append(str);
	}
	int numStr=0;
//-
	numStr=0;
	str=trimStr("DIAG_PRL_GLIDE_EXTREMES",list.at(numStr));
	str=str.trimmed() + "_min";str=str.leftJustified(strSize);str+=' ';
	list.replace(numStr,str);
//-
	numStr=1;
	str=trimStr("DIAG_PRL_GLIDE_EXTREMES",list.at(numStr));
	str=str.trimmed() + "_max";str=str.leftJustified(strSize);str+=' ';
	list.replace(numStr,str);
//-
	numStr=2;
	str=trimStr("DIAG_PRL_GLIDE_BLANKS",list.at(numStr));
	str=str.trimmed() + "_min";str=str.leftJustified(strSize);str+=' ';
	list.replace(numStr,str);
//-
	numStr=3;
	str=trimStr("DIAG_PRL_GLIDE_BLANKS",list.at(numStr));
	str=str.trimmed() + "_max";str=str.leftJustified(strSize);str+=' ';
	list.replace(numStr,str);
//-
	numStr=4;
	str=trimStr("DIAG_PRL_COURSE_EXTREMES",list.at(numStr));
	str=str.trimmed() + "_min";str=str.leftJustified(strSize);str+=' ';
	list.replace(numStr,str);
//-
	numStr=5;
	str=trimStr("DIAG_PRL_COURSE_EXTREMES",list.at(numStr));
	str=str.trimmed() + "_max";str=str.leftJustified(strSize);str+=' ';
	list.replace(numStr,str);
//-
	numStr=6;
	str=trimStr("DIAG_PRL_COURSE_BLANKS",list.at(numStr));
	str=str.trimmed() + "_min";str=str.leftJustified(strSize);str+=' ';
	list.replace(numStr,str);
//-
	numStr=7;
	str=trimStr("DIAG_PRL_COURSE_BLANKS",list.at(numStr));
	str=str.trimmed() + "_max";str=str.leftJustified(strSize);str+=' ';
	list.replace(numStr,str);
//-16
	numStr=8;
	str=trimStr("wDIAG_PRL_GLIDE_MARK_1",list.at(numStr));
	list.replace(numStr,str);
//-18
	numStr=9;
	str=trimStr("wDIAG_PRL_GLIDE_MARK_2",list.at(numStr));
	list.replace(numStr,str);
//-20
	numStr=10;
	str=trimStr("wDIAG_PRL_GLIDE_MARK_3",list.at(numStr));
	list.replace(numStr,str);
//-22
	numStr=11;
	str=trimStr("wDIAG_PRL_GLIDE_MARK_4",list.at(numStr));
	list.replace(numStr,str);
//-24
	numStr=12;
	str=trimStr("wDIAG_PRL_GLIDE_COURSE_1",list.at(numStr));
	list.replace(numStr,str);
//-26
	numStr=13;
	str=trimStr("wDIAG_PRL_GLIDE_COURSE_2",list.at(numStr));
	list.replace(numStr,str);
//-28
	numStr=14;
	str=trimStr("wDIAG_PRL_GLIDE_COURSE_3",list.at(numStr));
	list.replace(numStr,str);
//-30
	numStr=15;
	str=trimStr("wDIAG_PRL_GLIDE_COURSE_4",list.at(numStr));
	list.replace(numStr,str);
//-32
	numStr=16;
	str=trimStr("DIAG_PRL_MARK1",list.at(numStr));
	str=str.trimmed() + "_znach";str=str.leftJustified(strSize);str+=' ';
	list.replace(numStr,str);

//-32
	numStr=17;
	str=trimStr("DIAG_PRL_MARK1",list.at(numStr));
	str=str.trimmed() + "_nmet";str=str.leftJustified(strSize);str+=' ';
	list.replace(numStr,str);
//-36
	numStr=18;
	str=trimStr("DIAG_PRL_MARK2",list.at(numStr));
	list.replace(numStr,str);
//-40
	numStr=19;
	str=trimStr("DIAG_PRL_MARK3",list.at(numStr));
	list.replace(numStr,str);
//-44
	numStr=20;
	str=trimStr("DIAG_PRL_MARK4",list.at(numStr));
	list.replace(numStr,str);
//-48
	numStr=21;
	str=trimStr("DIAG_PRL_MARK5",list.at(numStr));
	list.replace(numStr,str);
//-52
	numStr=22;
	str=trimStr("DIAG_PRL_MARK_NUMBER",list.at(numStr));
	str=str.trimmed() + "_glide";str=str.leftJustified(strSize);str+=' ';
	list.replace(numStr,str);

//-52
	numStr=23;
	str=trimStr("DIAG_PRL_MARK_NUMBER",list.at(numStr));
	str=str.trimmed() + "_course";str=str.leftJustified(strSize);str+=' ';
	list.replace(numStr,str);
//-56
	numStr=24;
	str=trimStr("DIAG_PRL_GLIDE_OCCUPIED",list.at(numStr));
	str=str.trimmed() + "_min";str=str.leftJustified(strSize);str+=' ';
	list.replace(numStr,str);
//-56
	numStr=25;
	str=trimStr("DIAG_PRL_GLIDE_OCCUPIED",list.at(numStr));
	str=str.trimmed() + "_max";str=str.leftJustified(strSize);str+=' ';
	list.replace(numStr,str);
//-60
	numStr=26;
	str=trimStr("DIAG_PRL_COURSE_OCCUPIED",list.at(numStr));
	str=str.trimmed() + "_min";str=str.leftJustified(strSize);str+=' ';
	list.replace(numStr,str);
//-60
	numStr=27;
	str=trimStr("DIAG_PRL_COURSE_OCCUPIED",list.at(numStr));
	str=str.trimmed() + "_max";str=str.leftJustified(strSize);str+=' ';
	list.replace(numStr,str);

//-64
	numStr=28;
	str=trimStr("DIAG_PRL_SCALE",list.at(numStr));
	str=str.trimmed() + "_glide";str=str.leftJustified(strSize);str+=' ';
	list.replace(numStr,str);
//-64
	numStr=29;
	str=trimStr("DIAG_PRL_SCALE",list.at(numStr));
	str=str.trimmed() + "_course";str=str.leftJustified(strSize);str+=' ';
	list.replace(numStr,str);

//-68
	numStr=30;
	str=trimStr("DIAG_PRL_STATE",list.at(numStr));
	list.replace(numStr,str);

//-72
	numStr=31;
	str=trimStr("DIAG_PRL_TRIGGER",list.at(numStr));
	str=str.trimmed() + "_min";str=str.leftJustified(strSize);str+=' ';
	list.replace(numStr,str);
//-72
	numStr=32;
	str=trimStr("DIAG_PRL_TRIGGER",list.at(numStr));
	str=str.trimmed() + "_max";str=str.leftJustified(strSize);str+=' ';
	list.replace(numStr,str);
//-76
	numStr=33;
	str=trimStr("reserve",list.at(numStr));
	list.replace(numStr,str);

//-
	return list;
}

QString Rastr::toTxt(QStringList sL,QStringList sLIn)
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
void Rastr::refreshPrl()
{
//-
///////////////////str
	QString str="dsff";
	calculator++;
	str=QString("%1").arg(calculator);

///////////////////str
	painter0.begin(pixmap0);
	pixmap0->fill(colors.colorFill);						//colorFill
	QBrush brush=painter0.brush();
	QColor colorB,colorP;
	colorB=brush.color();
	QPen pen = painter0.pen();
	colorP = pen.color();
	colorP.setAlpha(10);
	painter0.setPen(colorP);
	painter0.setPen(QColor(Qt::white));
	int valueB,valueP;
	valueB	= colorB.alpha();
	valueP	= colorP.alpha();

//-подсвет
	if(glCuRr->bLight)
	{														//colorLight
		painter0.fillRect(QRect(glCuRr->x0Gl,0,glCuRr->x1Gl-glCuRr->x0Gl,256),QBrush(colors.colorLight));
	}
//-координаты
	if(glCuRr->bGrid)
	{
		painter0.setPen(colors.colorGrid);						//colorGrid
//-
		int y5=0,y10=0,y15=0,y20=0;
		int y25=0,y30=0,y35=0,y40=0;
		int y45=0,y50=0,y55=0,y60=0;
//-
		int ySc;
		ySc=glCuRr->yScaleGlide!=0?glCuRr->yScaleGlide:1;
		y5=128-128*100*5/ySc;
		y10=128-128*100*10/ySc;
		y15=128-128*100*15/ySc;
		y20=128-128*100*20/ySc;
		y25=128-128*100*25/ySc;
		y30=128-128*100*30/ySc;
		y35=128-128*100*35/ySc;
		y40=128-128*100*40/ySc;
		y45=128-128*100*45/ySc;
		y50=128-128*100*50/ySc;
		y55=128-128*100*55/ySc;
		y60=128-128*100*60/ySc;
		painter0.drawLine(0, y5 ,3, y5 );
		painter0.drawLine(0, y10 ,5, y10 );
		painter0.drawLine(0, y15 ,3, y15 );
		painter0.drawLine(0, y20 ,5, y20 );
		painter0.drawLine(0, y25 ,3, y25 );
		painter0.drawLine(0, y30 ,5, y30 );
		painter0.drawLine(0, y35 ,3, y35 );
		painter0.drawLine(0, y40 ,5, y40 );
		painter0.drawLine(0, y45 ,3, y45 );
		painter0.drawLine(0, y50 ,5, y50 );
		painter0.drawLine(0, y55 ,3, y55 );
		painter0.drawLine(0, y60 ,5, y60 );
		painter0.drawText(5+5,y10+5,"10");
		painter0.drawText(5+5,y20+5,"20");
		painter0.drawText(5+5,y30+5,"30");
		painter0.drawText(5+5,y40+5,"40");
		painter0.drawText(5+5,y50+5,"50");
		painter0.drawText(5+5,y60+5,"60");
//-
		ySc=glCuRr->yScaleGlide!=0?glCuRr->yScaleGlide:1;
		y5=128+128*100*5/ySc;
		y10=128+128*100*10/ySc;
		y15=128+128*100*15/ySc;
		y20=128+128*100*20/ySc;
		y25=128+128*100*25/ySc;
		y30=128+128*100*30/ySc;
		y35=128+128*100*35/ySc;
		y40=128+128*100*40/ySc;
		y45=128+128*100*45/ySc;
		y50=128+128*100*50/ySc;
		y55=128+128*100*55/ySc;
		y60=128+128*100*60/ySc;

		painter0.drawLine(0, y5 ,3, y5 );
		painter0.drawLine(0, y10 ,5, y10 );
		painter0.drawLine(0, y15 ,3, y15 );
		painter0.drawLine(0, y20 ,5, y20 );
		painter0.drawLine(0, y25 ,3, y25 );
		painter0.drawLine(0, y30 ,5, y30 );
		painter0.drawLine(0, y35 ,3, y35 );
		painter0.drawLine(0, y40 ,5, y40 );
		painter0.drawLine(0, y45 ,3, y45 );
		painter0.drawLine(0, y50 ,5, y50 );
		painter0.drawLine(0, y55 ,3, y55 );
		painter0.drawLine(0, y60 ,5, y60 );
		painter0.drawText(5+5,y10+5,"-10");
		painter0.drawText(5+5,y20+5,"-20");
		painter0.drawText(5+5,y30+5,"-30");
		painter0.drawText(5+5,y40+5,"-40");
		painter0.drawText(5+5,y50+5,"-50");
		painter0.drawText(5+5,y60+5,"-60");

		painter0.drawLine(0, 128 ,511, 128 );
//-
		int x400=100,x800=200,x1200=300,x1600=400,x2000=500;
		painter0.drawLine( x400 ,256, x400,249);
		painter0.drawLine( x800 ,256, x800,249);
		painter0.drawLine(x1200 ,256, x1200,249);
		painter0.drawLine(x1600 ,256, x1600,249);
		painter0.drawLine(x2000 ,256, x2000,249);
		painter0.drawText(x400-8,249-2,"400");
		painter0.drawText(x800-8,249-2,"800");
		painter0.drawText(x1200-8,249-2,"1200");
		painter0.drawText(x1600-8,249-2,"1600");
		painter0.drawText(x2000-12,249-2,"2000");

	}
//-код угла
	if(glCuRr->bCode)
	{
		painter0.setPen(colors.colorCode);					//colorCode
		QPoint point0,point1;
		for(int i=1;i<glCuRr->sizeVe-1;i++)
		{
			point0=glCuRr->veCoAnGlide.at(i);
			point1=glCuRr->veCoAnGlide.at(i+1);
			if(point0.x()!=0&&point1.x()!=0)
				painter0.drawLine(point0,point1);
		}
	}
//-метки
	if(glCuRr->bMet)
	{
		painter0.setPen(colors.colorMet);				//colorMet
		for(int i=0;i<6;i++)
			painter0.drawLine(glCuRr->rMet[i]  ,0,  glCuRr->rMet[i]  ,256);
	}
//-вход
	if(glCuRr->bInp)
	{
		painter0.setPen(colors.colorInp);					//colorInp	
	for(int i=0;i<511;i++)
	{
		painter0.drawLine(veP0.at(i),veP0.at(i+1));
	}}
//-выход
	if(glCuRr->bOutp)
	{
		painter0.setPen(colors.colorOutp);						//colorOutp			
	for(int i=0;i<511;i++)
	{
		painter0.drawLine(veP1.at(i),veP1.at(i+1));
	}}
	painter0.setPen(QColor(Qt::white));
//	painter0.drawLine(  glCuRr->next   ,250,  glCuRr->next  ,256); //cursor

//!!!!!!!!
	painter0.drawRect(0,0,511,254);
	if(glCuRr->bCur)
	{
		painter0.setPen(QColor(Qt::blue));
		painter0.drawLine(glCuRr->next,0,1024,1);				//cursor
	}
	painter0.end();
//////////////////////////////////////////////////////////
	painter1.begin(pixmap1);
	pixmap1->fill(colors.colorFill);								//colorFill
	painter1.setPen(QPen(Qt::yellow, 1, Qt::SolidLine));
	painter1.setPen(QPen(Qt::white, 1, Qt::SolidLine));
	painter1.drawRect(0,0,511,254);
	if(glCuRr->bLight)										//colorLight
	{
		painter1.fillRect(QRect(glCuRr->x0Cu,1,glCuRr->x1Cu-glCuRr->x0Cu,253),QBrush(colors.colorLight));
	}

//-координаты
	if(glCuRr->bGrid)
	{
		painter1.setPen(colors.colorGrid);							//colorGrid
//-
		int y5=0,y10=0,y15=0,y20=0;
		int y25=0,y30=0,y35=0,y40=0;
		int y45=0,y50=0,y55=0,y60=0;
//-
		int ySc;
		ySc=glCuRr->yScaleCourse!=0?glCuRr->yScaleCourse:1;
		y5=128-128*100*5/ySc;
		y10=128-128*100*10/ySc;
		y15=128-128*100*15/ySc;
		y20=128-128*100*20/ySc;
		y25=128-128*100*25/ySc;
		y30=128-128*100*30/ySc;
		y35=128-128*100*35/ySc;
		y40=128-128*100*40/ySc;
		y45=128-128*100*45/ySc;
		y50=128-128*100*50/ySc;
		y55=128-128*100*55/ySc;
		y60=128-128*100*60/ySc;
		painter1.drawLine(0, y5 ,3, y5 );
		painter1.drawLine(0, y10 ,5, y10 );
		painter1.drawLine(0, y15 ,3, y15 );
		painter1.drawLine(0, y20 ,5, y20 );
		painter1.drawLine(0, y25 ,3, y25 );
		painter1.drawLine(0, y30 ,5, y30 );
		painter1.drawLine(0, y35 ,3, y35 );
		painter1.drawLine(0, y40 ,5, y40 );
		painter1.drawLine(0, y45 ,3, y45 );
		painter1.drawLine(0, y50 ,5, y50 );
		painter1.drawLine(0, y55 ,3, y55 );
		painter1.drawLine(0, y60 ,5, y60 );
		painter1.drawText(5+5,y10+5,"10");
		painter1.drawText(5+5,y20+5,"20");
		painter1.drawText(5+5,y30+5,"30");
		painter1.drawText(5+5,y40+5,"40");
		painter1.drawText(5+5,y50+5,"50");
		painter1.drawText(5+5,y60+5,"60");
//-
		ySc=glCuRr->yScaleCourse!=0?glCuRr->yScaleCourse:1;
		y5=128+128*100*5/ySc;
		y10=128+128*100*10/ySc;
		y15=128+128*100*15/ySc;
		y20=128+128*100*20/ySc;
		y25=128+128*100*25/ySc;
		y30=128+128*100*30/ySc;
		y35=128+128*100*35/ySc;
		y40=128+128*100*40/ySc;
		y45=128+128*100*45/ySc;
		y50=128+128*100*50/ySc;
		y55=128+128*100*55/ySc;
		y60=128+128*100*60/ySc;
		painter1.drawLine(0, y5 ,3, y5 );
		painter1.drawLine(0, y10 ,5, y10 );
		painter1.drawLine(0, y15 ,3, y15 );
		painter1.drawLine(0, y20 ,5, y20 );
		painter1.drawLine(0, y25 ,3, y25 );
		painter1.drawLine(0, y30 ,5, y30 );
		painter1.drawLine(0, y35 ,3, y35 );
		painter1.drawLine(0, y40 ,5, y40 );
		painter1.drawLine(0, y45 ,3, y45 );
		painter1.drawLine(0, y50 ,5, y50 );
		painter1.drawLine(0, y55 ,3, y55 );
		painter1.drawLine(0, y60 ,5, y60 );
		painter1.drawText(5+5,y10+5,"-10");
		painter1.drawText(5+5,y20+5,"-20");
		painter1.drawText(5+5,y30+5,"-30");
		painter1.drawText(5+5,y40+5,"-40");
		painter1.drawText(5+5,y50+5,"-50");
		painter1.drawText(5+5,y60+5,"-60");

		painter1.drawLine(0, 128 ,511, 128 );
//		painter1.drawLine(256 ,256, 256,246);
//-
		int x400=100,x800=200,x1200=300,x1600=400,x2000=500;
		painter1.drawLine( x400 ,256, x400,249);
		painter1.drawLine( x800 ,256, x800,249);
		painter1.drawLine(x1200 ,256, x1200,249);
		painter1.drawLine(x1600 ,256, x1600,249);
		painter1.drawLine(x2000 ,256, x2000,249);
		painter1.drawText(x400-8,249-2,"400");
		painter1.drawText(x800-8,249-2,"800");
		painter1.drawText(x1200-8,249-2,"1200");
		painter1.drawText(x1600-8,249-2,"1600");
		painter1.drawText(x2000-12,249-2,"2000");
	}

//-код угла
	if(glCuRr->bCode)
	{
		painter1.setPen(colors.colorCode);					//colorCode
		QPoint point0,point1;
		for(int i=1;i<glCuRr->sizeVe-1;i++)
		{
			point0=glCuRr->veCoAnCourse.at(i);
			point1=glCuRr->veCoAnCourse.at(i+1);
			if(point0.x()!=0&&point1.x()!=0)
				painter1.drawLine(point0,point1);
		}
	}
//-метки 
	if(glCuRr->bMet)
	{
		painter1.setPen(colors.colorMet);					//colorMet
		for(int i=0;i<6;i++)
			painter1.drawLine(glCuRr->rMet[i]  ,1,  glCuRr->rMet[i]  ,253);
	}
//-вход
	if(glCuRr->bInp)
	{
		painter1.setPen(colors.colorInp);					//colorInp
		for(int i=0;i<511;i++)
		{
			painter1.drawLine(veP2.at(i),veP2.at(i+1));
		}
	}
	painter1.setPen(QColor(Qt::yellow));
//-выход
	if(glCuRr->bOutp)
	{
		painter1.setPen(colors.colorOutp);				//colorOutp
		for(int i=0;i<511;i++)
		{
			painter1.drawLine(veP3.at(i),veP3.at(i+1));
		}
	}
	painter1.setPen(QColor(Qt::white));
	if(glCuRr->bCur)
	{
		painter1.setPen(QColor(Qt::blue));
		painter1.drawLine(glCuRr->next,0,1024,1);				//cursor
	}
	painter1.end();
///////text
	pixmapText->fill(Qt::transparent);
	int sizeT=glCuRr->diagn.strList.size();
	if(glCuRr->diagn.strList.size()==0)return;
	painterText.begin(pixmapText);
	QSize size=pixmapText->size();
//	painterText.drawLine(0,0,239,559);
//	unit;
	QFont font;
	str=font.family();
	font.setFamily("Courier");
	font.setWeight(QFont::Light);
	painterText.setFont(font);
//	painterText.drawText(QRect(0,0,size.width(),size.height()), glCuRr->strText);
//-
//*
	QTextOption tO;
	tO.setFlags(QTextOption::IncludeTrailingSpaces);
	sizeT=glCuRr->diagn.strList.size();
	int i0=0,i1=0;QString str0,str1,str2;
	for(int i=0;i<sizeT;i++)
	{
		str=QString("%1").arg(i);
		str=glCuRr->diagn.strList.at(i);
		painterText.drawText(QRect(0,i*15,size.width(),size.height()),
			str,tO);
		if(i==13||i==14||i==30)
		{
			str=glCuRr->diagn.strList.at(i);
			i0=0;i1=0;
			i0=str.indexOf("да");
			if(i0>0)
				i1=str.indexOf("да",i0+1);
//-
			if(i0>0||i1>0)
			{
				if(i0>0&&i1>0)
				{
					str0=str.left(i0);
					str1=str.mid(i0,i1-i0);
					str2=str.mid(i1);
				}
				if(i0>0&&i1<=0)
				{
					str0=str.left(i0);
					str1=str.mid(i0,2);
					str2=str.mid(i0+2);
				}

//-
			painterText.drawText(QRect(0,i*15,size.width(),size.height()),str0);
			painterText.setPen(QColor(Qt::red));
			painterText.drawText(QRect(str0.size()*7,i*15,size.width(),size.height()),str1);
			if(i1>0)
				painterText.setPen(QColor(Qt::red));
			else
				painterText.setPen(QColor(Qt::black));
			painterText.drawText(QRect((str0.size()+str1.size())*7,i*15,size.width(),size.height()),str2);
			painterText.setPen(QColor(Qt::black));
			}
		}
	}
//*/
//-
	QPoint point(0,540);
	painterText.drawLine(point.x()+10,point.y(),point.x()+200,point.y()+0);
	painterText.drawLine(point.x()+10+  0,point.y()+2,point.x()+10+  0,point.y()-6);
	painterText.drawLine(point.x()+10+ 80,point.y()+2,point.x()+10+80 ,point.y()-6);
	painterText.drawLine(point.x()+10+160,point.y()+2,point.x()+10+160,point.y()-6);

//-
	painterText.drawText(point.x()+10+  0-2,point.y()+11,"0");
	painterText.drawText(point.x()+10+ 80-2,point.y()+11,"1");
	painterText.drawText(point.x()+10+160-2,point.y()+11,"2");

	int x0,x1,x00,x01;
	x0=(double)(glCuRr->diagn.mDiagn[23]->glCu.elm.unn.shU[0])*.08+.5;
	x1=(double)(glCuRr->diagn.mDiagn[23]->glCu.elm.unn.shU[1])*.08+.5;
	x00=((double)x0/10.+.5); 
	x01=((double)x1/10.+.5);
	x00*=10;x01*=10;
	painterText.fillRect(point.x()+10+x00,point.y()-30,x01-x00,
		30,QBrush(QColor(Qt::red)));
	painterText.setPen(QColor(Qt::red));
	painterText.drawRect(point.x()+10+x00,point.y()-30,x01-x00,30);
	painterText.setPen(QColor(Qt::black));
//-
	painterText.end();
}
void Rastr::refreshPixmap()
{
	if(glCuRr->typeRls==1)	refreshKo();
	else
	{
		if(glCuRr->typeRls==16)	refreshPrl();
		else refreshPrl();
	}
}
void Rastr::refreshKo()
{
//-
///////////////////str
	QString str="dsff";
	calculator++;
	str=QString("%1").arg(calculator);

///////////////////str
	painter0.begin(pixmap0);
	pixmap0->fill(colors.colorFill);						//colorFill
	QBrush brush=painter0.brush();
	QColor colorB,colorP;
	colorB=brush.color();
	QPen pen = painter0.pen();
	colorP = pen.color();
	colorP.setAlpha(10);
	painter0.setPen(colorP);
	painter0.setPen(QColor(Qt::white));
	int valueB,valueP;
	valueB	= colorB.alpha();
	valueP	= colorP.alpha();

//-подсвет
//-координаты
	if(glCuRr->bGrid)
	{
		painter0.setPen(colors.colorGrid);						//colorGrid
//-
		int y5=0,y10=0,y15=0,y20=0;
		int y25=0,y30=0,y35=0,y40=0;
		int y45=0,y50=0,y55=0,y60=0;
//-
		int ySc;
		ySc = glCuRr->yScaleGlide!=0?glCuRr->yScaleGlide:1;
		y5=128-128*100*5/ySc;
		y10=128-128*100*10/ySc;
		y15=128-128*100*15/ySc;
		y20=128-128*100*20/ySc;
		y25=128-128*100*25/ySc;
		y30=128-128*100*30/ySc;
		y35=128-128*100*35/ySc;
		y40=128-128*100*40/ySc;
		y45=128-128*100*45/ySc;
		y50=128-128*100*50/ySc;
		y55=128-128*100*55/ySc;
		y60=128-128*100*60/ySc;
		painter0.drawLine(0, y5 ,3, y5 );
		painter0.drawLine(0, y10 ,5, y10 );
		painter0.drawLine(0, y15 ,3, y15 );
		painter0.drawLine(0, y20 ,5, y20 );
		painter0.drawLine(0, y25 ,3, y25 );
		painter0.drawLine(0, y30 ,5, y30 );
		painter0.drawLine(0, y35 ,3, y35 );
		painter0.drawLine(0, y40 ,5, y40 );
		painter0.drawLine(0, y45 ,3, y45 );
		painter0.drawLine(0, y50 ,5, y50 );
		painter0.drawLine(0, y55 ,3, y55 );
		painter0.drawLine(0, y60 ,5, y60 );
		painter0.drawText(5+5,y10+5,"10");
		painter0.drawText(5+5,y20+5,"20");
		painter0.drawText(5+5,y30+5,"30");
		painter0.drawText(5+5,y40+5,"40");
		painter0.drawText(5+5,y50+5,"50");
		painter0.drawText(5+5,y60+5,"60");
//-
		ySc = glCuRr->yScaleGlide!=0?glCuRr->yScaleGlide:1;
		y5=128+128*100*5/ySc;
		y10=128+128*100*10/ySc;
		y15=128+128*100*15/ySc;
		y20=128+128*100*20/ySc;
		y25=128+128*100*25/ySc;
		y30=128+128*100*30/ySc;
		y35=128+128*100*35/ySc;
		y40=128+128*100*40/ySc;
		y45=128+128*100*45/ySc;
		y50=128+128*100*50/ySc;
		y55=128+128*100*55/ySc;
		y60=128+128*100*60/ySc;
		painter0.drawLine(0, y5 ,3, y5 );
		painter0.drawLine(0, y10 ,5, y10 );
		painter0.drawLine(0, y15 ,3, y15 );
		painter0.drawLine(0, y20 ,5, y20 );
		painter0.drawLine(0, y25 ,3, y25 );
		painter0.drawLine(0, y30 ,5, y30 );
		painter0.drawLine(0, y35 ,3, y35 );
		painter0.drawLine(0, y40 ,5, y40 );
		painter0.drawLine(0, y45 ,3, y45 );
		painter0.drawLine(0, y50 ,5, y50 );
		painter0.drawLine(0, y55 ,3, y55 );
		painter0.drawLine(0, y60 ,5, y60 );
		painter0.drawText(5+5,y10+5,"-10");
		painter0.drawText(5+5,y20+5,"-20");
		painter0.drawText(5+5,y30+5,"-30");
		painter0.drawText(5+5,y40+5,"-40");
		painter0.drawText(5+5,y50+5,"-50");
		painter0.drawText(5+5,y60+5,"-60");

		painter0.drawLine(0, 128 ,511, 128 );
//-
		int x15=125,x30=250,x45=375,x60=500;
		painter0.drawLine( x15 ,256, x15,249);
		painter0.drawLine( x30 ,256, x30,249);
		painter0.drawLine(x45 ,256, x45,249);
		painter0.drawLine(x60 ,256, x60,249);
		painter0.drawText(x15-8,249-2,"1500");
		painter0.drawText(x30-8,249-2,"3000");
		painter0.drawText(x45-8,249-2,"4500");
		painter0.drawText(x60-18,249-2,"6000");

	}
//-код угла
	if(glCuRr->bCodeView && glCuRr->bCode)
	{
		painter0.setPen(colors.colorCode);					//colorCode
		QPoint point0,point1;
		for(int i=1;i<glCuRr->sizeVe-1;i++)
		{
			point0=glCuRr->veCoAnGlide.at(i);
			point1=glCuRr->veCoAnGlide.at(i+1);
			if(point0.x()!=0&&point1.x()!=0)
				painter0.drawLine(point0,point1);
		}
	}
//-метки
/*
	if(glCuRr->bMet)
	{
		painter0.setPen(colors.colorMet);				//colorMet
		for(int i=0;i<6;i++)
			painter0.drawLine(glCuRr->rMet[i]  ,0,  glCuRr->rMet[i]  ,256);
	}
*/
//-вход
	if(glCuRr->bInp)
	{
		painter0.setPen(colors.colorInp);					//colorInp	
	for(int i=0;i<511;i++)
	{
		painter0.drawLine(veP0.at(i),veP0.at(i+1));
	}}
//-выход
	if(glCuRr->bOutp)
	{
		painter0.setPen(colors.colorOutp);						//colorOutp			
	for(int i=0;i<511;i++)
	{
		painter0.drawLine(veP1.at(i),veP1.at(i+1));
	}}
	painter0.setPen(QColor(Qt::white));
//	painter0.drawLine(  glCuRr->next   ,250,  glCuRr->next  ,256); //cursor

//!!!!!!!!
	painter0.drawRect(0,0,511,254);
	if(glCuRr->bCur)
	{
		painter0.setPen(QColor(Qt::blue));
		painter0.drawLine(glCuRr->next,0,1024,1);				//cursor
	}
	painter0.end();
//////////////////////////////////////////////////////////
	painter1.begin(pixmap1);
	pixmap1->fill(colors.colorFill);								//colorFill
	painter1.setPen(QPen(Qt::yellow, 1, Qt::SolidLine));
	painter1.setPen(QPen(Qt::white, 1, Qt::SolidLine));
	painter1.drawRect(0,0,511,254);
//-подсвет
//-координаты
	if(glCuRr->bGrid)
	{
		painter1.setPen(colors.colorGrid);							//colorGrid
//-
		int y5=0,y10=0,y15=0,y20=0;
		int y25=0,y30=0,y35=0,y40=0;
		int y45=0,y50=0,y55=0,y60=0;
//-
		int ySc;
		ySc = glCuRr->yScaleCourse!=0?glCuRr->yScaleCourse:1;
		y5=128-128*100*5/ySc;
		y10=128-128*100*10/ySc;
		y15=128-128*100*15/ySc;
		y20=128-128*100*20/ySc;
		y25=128-128*100*25/ySc;
		y30=128-128*100*30/ySc;
		y35=128-128*100*35/ySc;
		y40=128-128*100*40/ySc;
		y45=128-128*100*45/ySc;
		y50=128-128*100*50/ySc;
		y55=128-128*100*55/ySc;
		y60=128-128*100*60/ySc;
		painter1.drawLine(0, y5 ,3, y5 );
		painter1.drawLine(0, y10 ,5, y10 );
		painter1.drawLine(0, y15 ,3, y15 );
		painter1.drawLine(0, y20 ,5, y20 );
		painter1.drawLine(0, y25 ,3, y25 );
		painter1.drawLine(0, y30 ,5, y30 );
		painter1.drawLine(0, y35 ,3, y35 );
		painter1.drawLine(0, y40 ,5, y40 );
		painter1.drawLine(0, y45 ,3, y45 );
		painter1.drawLine(0, y50 ,5, y50 );
		painter1.drawLine(0, y55 ,3, y55 );
		painter1.drawLine(0, y60 ,5, y60 );
		painter1.drawText(5+5,y10+5,"10");
		painter1.drawText(5+5,y20+5,"20");
		painter1.drawText(5+5,y30+5,"30");
		painter1.drawText(5+5,y40+5,"40");
		painter1.drawText(5+5,y50+5,"50");
		painter1.drawText(5+5,y60+5,"60");
//-
		ySc = glCuRr->yScaleCourse!=0?glCuRr->yScaleCourse:1;
		y5=128+128*100*5/ySc;
		y10=128+128*100*10/ySc;
		y15=128+128*100*15/ySc;
		y20=128+128*100*20/ySc;
		y25=128+128*100*25/ySc;
		y30=128+128*100*30/ySc;
		y35=128+128*100*35/ySc;
		y40=128+128*100*40/ySc;
		y45=128+128*100*45/ySc;
		y50=128+128*100*50/ySc;
		y55=128+128*100*55/ySc;
		y60=128+128*100*60/ySc;
		painter1.drawLine(0, y5 ,3, y5 );
		painter1.drawLine(0, y10 ,5, y10 );
		painter1.drawLine(0, y15 ,3, y15 );
		painter1.drawLine(0, y20 ,5, y20 );
		painter1.drawLine(0, y25 ,3, y25 );
		painter1.drawLine(0, y30 ,5, y30 );
		painter1.drawLine(0, y35 ,3, y35 );
		painter1.drawLine(0, y40 ,5, y40 );
		painter1.drawLine(0, y45 ,3, y45 );
		painter1.drawLine(0, y50 ,5, y50 );
		painter1.drawLine(0, y55 ,3, y55 );
		painter1.drawLine(0, y60 ,5, y60 );
		painter1.drawText(5+5,y10+5,"-10");
		painter1.drawText(5+5,y20+5,"-20");
		painter1.drawText(5+5,y30+5,"-30");
		painter1.drawText(5+5,y40+5,"-40");
		painter1.drawText(5+5,y50+5,"-50");
		painter1.drawText(5+5,y60+5,"-60");

		painter1.drawLine(0, 128 ,511, 128 );
//		painter1.drawLine(256 ,256, 256,246);
//-
		int x15=125,x30=250,x45=375,x60=500;
		painter1.drawLine( x15 ,256, x15,249);
		painter1.drawLine( x30 ,256, x30,249);
		painter1.drawLine(x45 ,256, x45,249);
		painter1.drawLine(x60 ,256, x60,249);
		painter1.drawText(x15-8,249-2,"1500");
		painter1.drawText(x30-8,249-2,"3000");
		painter1.drawText(x45-8,249-2,"4500");
		painter1.drawText(x60-18,249-2,"6000");
	}

//-код угла
	if(glCuRr->bCodeView && glCuRr->bCode)
	{
		painter1.setPen(colors.colorCode);					//colorCode
		QPoint point0,point1;
		for(int i=1;i<glCuRr->sizeVe-1;i++)
		{
			point0=glCuRr->veCoAnCourse.at(i);
			point1=glCuRr->veCoAnCourse.at(i+1);
			if(point0.x()!=0&&point1.x()!=0)
				painter1.drawLine(point0,point1);
		}
	}
//-метки 
/*
	if(glCuRr->bMet)
	{
		painter1.setPen(colors.colorMet);					//colorMet
		for(int i=0;i<6;i++)
			painter1.drawLine(glCuRr->rMet[i]  ,1,  glCuRr->rMet[i]  ,253);
	}
*/
//-вход
	if(glCuRr->bInp)
	{
		painter1.setPen(colors.colorInp);					//colorInp
		for(int i=0;i<511;i++)
		{
			painter1.drawLine(veP2.at(i),veP2.at(i+1));
		}
	}
	painter1.setPen(QColor(Qt::yellow));
//-выход
	if(glCuRr->bOutp)
	{
		painter1.setPen(colors.colorOutp);				//colorOutp
		for(int i=0;i<511;i++)
		{
			painter1.drawLine(veP3.at(i),veP3.at(i+1));
		}
	}
	painter1.setPen(QColor(Qt::white));
	if(glCuRr->bCur)
	{
		painter1.setPen(QColor(Qt::blue));
		painter1.drawLine(glCuRr->next,0,1024,1);				//cursor
	}
	painter1.end();
///////text
	pixmapText->fill(Qt::transparent);
	int sizeT=glCuRr->diagn.strList.size();
	if(glCuRr->diagn.strList.size()==0)return;
	painterText.begin(pixmapText);
	QSize size=pixmapText->size();
//	painterText.drawLine(0,0,239,559);
//	unit;
	QFont font;
	str=font.family();
	font.setFamily("Courier");
	font.setWeight(QFont::Light);
	painterText.setFont(font);
//	painterText.drawText(QRect(0,0,size.width(),size.height()), glCuRr->strText);
//-
//*
	QTextOption tO;
	tO.setFlags(QTextOption::IncludeTrailingSpaces);
	sizeT=glCuRr->diagn.strList.size();
	int i0=0,i1=0;QString str0,str1,str2;
	for(int i=0;i<((sizeT>20)?20:sizeT);i++)//sizeT
	{
		str=QString("%1").arg(i);
		str=glCuRr->diagn.strList.at(i);
		painterText.drawText(QRect(0,i*15,size.width(),size.height()),
			str,tO);
		if(i==14)
		{
			str=glCuRr->diagn.strList.at(i);
			i0=0;i1=0;
			i0=str.indexOf("да");
			if(i0>0)
				i1=str.indexOf("да",i0+1);
//-
			if(i0>0||i1>0)
			{
				if(i0>0&&i1>0)
				{
					str0=str.left(i0);
					str1=str.mid(i0,i1-i0);
					str2=str.mid(i1);
				}
				if(i0>0&&i1<=0)
				{
					str0=str.left(i0);
					str1=str.mid(i0,2);
					str2=str.mid(i0+2);
				}

//-
			painterText.drawText(QRect(0,i*15,size.width(),size.height()),
				str0);
			painterText.setPen(QColor(Qt::red));
			painterText.drawText(QRect(str0.size()*7,i*15,size.width(),size.height()),str1);
			if(i1>0)
				painterText.setPen(QColor(Qt::red));
			else
				painterText.setPen(QColor(Qt::black));
			painterText.drawText(QRect((str0.size()+str1.size())*7,i*15,size.width(),size.height()),str2);
			painterText.setPen(QColor(Qt::black));
			}
		}
	}
//-ring
	QImage image(QSize(220,220),QImage::Format_ARGB32_Premultiplied);
	image.fill(Qt::transparent);
	image.fill(Qt::gray);
	
	QPainter painter;
	painter.begin(&image);
//-
	QPointF pointCentr(110,110);
	painter.fillRect(QRectF(QPointF(0,0),image.size()),QBrush(Qt::transparent));
	painter.setBrush(QBrush(colors.colorFill));
	painter.drawEllipse(QRectF(QPointF(10,10),QSize(200,200)));
//-насечки
	painter.setPen(QPen(QBrush(colors.colorFill),3));
	int n=12;
	qreal fAngle;
	qreal x0,y0,x1,y1;
	for(int i=0;i<n;++i)
	{
		fAngle=2*3.14*i/n;
		x0 = pointCentr.x()+cos(fAngle)*101;
		y0 = pointCentr.y()+sin(fAngle)*101;
		x1 = pointCentr.x()+cos(fAngle)*105;
		y1 = pointCentr.y()+sin(fAngle)*105;
		painter.drawLine(QPointF(x0,y0),QPointF(x1,y1));
	}
//-код угла
	if(glCuRr->bCodeView&&glCuRr->bCode)
	{
		if(true)
		{
			painter.setPen(colors.colorCode);
			GlCu glCu;int cA=0;	//код угла
//-
		glCu=glCuRr->veGlCu.at(0);
		cA=glCu.elm.unn.iU&0xfff;
		cA=glCuRr->codeAngle;
//-
	QRect rect(10,10,200,200);
	painter.setBrush(QColor(Qt::cyan));
	painter.setPen(QColor(Qt::cyan));
	int iAngle=90*16-(cA*16*360/4096);
	painter.drawPie(rect,iAngle,-20);

//-
		}
	}
//-метки
	if(glCuRr->bMet)
	{
		painter.setPen(Qt::yellow);
		for(int i=0;i<glCuRr->nMetMax;++i)
		{
			fAngle=2*3.14*glCuRr->rMet[i]/
				(glCuRr->nextMax?glCuRr->nextMax:512)-3.14/2;
			x0 = pointCentr.x()+cos(fAngle)*10;
			y0 = pointCentr.y()+sin(fAngle)*10;
			x1 = pointCentr.x()+cos(fAngle)*100;
			y1 = pointCentr.y()+sin(fAngle)*100;
			painter.drawLine(QPoint(x0,y0),QPointF(x1,y1));
		}
	}
	painter.end();
	painterText.drawImage(QRectF(QPointF(20,270),QSize(220,220)),image);




//-ring.end
//*/
//-координаты
	QPoint point(0,540);
	painterText.drawLine(point.x()+10,point.y(),point.x()+200,point.y()+0);
	painterText.drawLine(point.x()+10+  0,point.y()+2,point.x()+10+  0,point.y()-6);
	painterText.drawLine(point.x()+10+ 80,point.y()+2,point.x()+10+80 ,point.y()-6);
	painterText.drawLine(point.x()+10+160,point.y()+2,point.x()+10+160,point.y()-6);

//-запуск изображение
	painterText.drawText(point.x()+10+  0-2,point.y()+11,"0");
	painterText.drawText(point.x()+10+ 80-2,point.y()+11,"1");
	painterText.drawText(point.x()+10+160-2,point.y()+11,"2");

	int x00,x01;
	GlCu glCu;
	glCu = glCuRr->diagn.mDiagn[19]->glCu;
	qreal dd11,dd21;
	dd11=glCu.elm.unn.shU[0];
	dd21=glCu.elm.unn.shU[1];
	dd11/=40.;
	dd21/=40.;
	x00=(dd11+.5);
	x01=(dd21+.5);
	x00*=40;
	x01*=40;
	x00=x00*8/100; 
	x01=x01*8/100; 
	painterText.fillRect(point.x()+10+x00,point.y()-30,x01-x00,
		30,QBrush(QColor(Qt::red)));
	painterText.setPen(QColor(Qt::red));
	painterText.drawRect(point.x()+10+x00,point.y()-30,x01-x00,30);
	painterText.setPen(QColor(Qt::black));
//-end.запуск изображение
//-длительность МАИ
	glCu = glCuRr->diagn.mDiagn[11]->glCu;
	x00=glCu.elm.unn.uiU/50;
	x01=x00*8/100;
	if(x01>190)x01=190;
//	painterText.drawText(point,QString("%1").arg(x01));
	painterText.setPen(QColor(Qt::blue));
	painterText.drawLine(point.x()+10+x01,point.y(),
		point.x()+10+x01,point.y()-30);
	painterText.setPen(QColor(Qt::black));


//-
	painterText.end();
}



