#ifndef GLCU_H
#define GLCU_H

#include <QtCore/QObject>
#include <QtCore/QStringList>
#include <QtCore/QVector>
#include <QtCore/QPoint>

#include "unn.h"

//#define uchar unsigned char
//#define ushort unsigned short
//#define uint unsigned int

struct Met
{
	ushort bit0 : 1;
	ushort code : 9;
	ushort bit10 : 1;
	ushort bit11 : 1;
	ushort bit12 : 1;
	ushort bit13 : 1;
	ushort bit14 : 1;
	ushort bit15 : 1;
};
struct MMet
{
	Met met;
	uchar b2,b3,b4,b5;
};

struct Elm
{
	Unn unn;
	uchar b5;
	uchar b6;
};
class GlCu 
{
public:
	GlCu();
	~GlCu();

	union
	{
		Elm elm;
		MMet mMet;
		uchar bts[6];
	};
private:
};
class MDiagn 
{
public:
	MDiagn();
	~MDiagn();
	int num;
	int numProt;
	int quant;	//кол-во байт
	int type;
	GlCu glCu;
	QString strName[4];
	QString strValue[2];
	QString strValueHex;
	QString strNum;
	void fill(uchar* pCh,int q);
private:
};
class Diagn 
{
public:
	Diagn();
	~Diagn();
	MDiagn* mDiagn[100];
	QString strText;
	void setDiagn();
	void fillDiagnPrl(uchar* pCh);
	void fillDiagnKo(uchar* pCh);
	QString toTextEd();
	QString toTxt();
	QStringList strList;
	QStringList toStrList();
};


struct GlCuRr 
{
	int x0Gl;
	int x1Gl;
	int x0Cu;
	int x1Cu;
	int met;
	int yScaleGlide,yScaleCourse;
	const static int maxMet=38;
	int rMet[maxMet];
	int nMet,nMetMax;
	bool bGl,bCu;
	QString strText;
//	QStringList strListText;
	int next;
	int glCuSync;	//0-gl,1-cu
	bool bCur,bLight,bInp,bOutp,bMet,bGrid,bCode;
	int xGr[10],yGr[10],xAngle[10],yValue[10];
	QVector<GlCu> veGlCu;
	QVector<QPoint> veCoAnGlide,veCoAnCourse;
	int sizeVe;		//512
	Diagn diagn;
	
	QString strText1;
	int typeRls;
	int culc,res,culc12,res12,val,va11,va12,va21,va22;
	int nextMax;
	bool bCodeView;int codeAngle;
//	QVector<GlCu> veGlCu6000;
//	QVector<int> veIndex6000;
};
#endif // GLCU_H
