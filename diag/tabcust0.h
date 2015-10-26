#ifndef TABCUST0_H
#define TABCUST0_H

#include <QtGui/QWidget>
#include "ui_tabcust0.h"
#include "unit.h"
#include "wrd.h"

class TabCust0 : public QWidget
{
	Q_OBJECT

public:
	TabCust0(QWidget *parent = 0);
	~TabCust0();
	void createActions();
	void createActionsKors();
	void createActionsArp95Ch();
	void createActionsMVRL();
	void setEnabledThe(bool b); 

	Unit* unitReceive,*unitSend;
	Wrd wrd,wrdWr;


	void updateDialog();
	void updateDialogSet();
	void updateDialogKors();
	void updateDialogArp95Ch();
	void updateDialogMVRL();
	void setTeEd00();
	int div;	ushort bl[384];

protected slots:
//Ёкранные слоты:
	void fLineEditIPInitial();
	void fLineEditBasicPort();
	void fLineEditPortBoard();
	void fLineEditGradient();
	void slPoC2();
	void slPoC2Name();
	void slCoBoPoC2Number(int);
	void slRaBuGradient();
	void slLiEdPointStandingDistance();
	void slLiEdPointStandingAzimuth();

	void grBoPoAmis();
	void slLiEdPoAmisName();
	void slLiEdAmisNumber();
	void slLiEdPoAmisNameEP();
	void slCoBoPoAmisNumber(int);
	void slCoBoPoAmisNumberLed(int);
	void slCoBoAmisComType(int);
	void slCoBoAmisComBoude(int);
	void slCoBoAmisComParity(int);
	void slRaBuAmisAsynSyn();

	void grBoPoTahion();
	void slLiEdPoTahionName();
	void slLiEdTahionNumber();
	void slCoBoPoTahionNumber(int);
	void slCoBoPoTahionNumberLed(int);
	void slCoBoTahionComType(int);
	void slCoBoTahionComBoude(int);
	void slCoBoTahionComParity(int);
	void slRaBuTahionAsynSyn();

	void slGrBoLiram();
	void slLiEdLiram();
	void slCoBoLiramNumber(int index);
	void slLiEdLiramPntDistance();
	void slLiEdLiramPntAzimuth();
	void slRaBuLiramGrad();
	void slCoBoPoLiramNumber(int index);
	void slCoBoLiramComBoude(int index);
	void slCoBoLiramComParity(int index);
	void slCoBoLiramComType(int index);
	void slCoBoPoLiramNumberLed(int index);
	void slRaBuLiramAsynSyn();

	void slGrBoKors1();
	void slLiEdKors1();
	void slCoBoKors1Number(int index);
	void slLiEdKors1PntDistance();
	void slLiEdKors1PntAzimuth();
	void slRaBuKors1Grad();
	void slCoBoPoKors1Number(int index);
	void slCoBoKors1ComBoude(int index);
	void slCoBoKors1ComParity(int index);
	void slCoBoKors1ComType(int index);
	void slCoBoPoKors1NumberLed(int index);
	void slRaBuKors1AsynSyn();

	void slGrBoKors2();
	void slLiEdKors2();
	void slCoBoKors2Number(int index);
	void slLiEdKors2PntDistance();
	void slLiEdKors2PntAzimuth();
	void slRaBuKors2Grad();
	void slCoBoPoKors2Number(int index);
	void slCoBoKors2ComBoude(int index);
	void slCoBoKors2ComParity(int index);
	void slCoBoKors2ComType(int index);
	void slCoBoPoKors2NumberLed(int index);
	void slRaBuKors2AsynSyn();

	void slGrBoKors3();
	void slLiEdKors3();
	void slCoBoKors3Number(int index);
	void slLiEdKors3PntDistance();
	void slLiEdKors3PntAzimuth();
	void slRaBuKors3Grad();
	void slCoBoPoKors3Number(int index);
	void slCoBoKors3ComBoude(int index);
	void slCoBoKors3ComParity(int index);
	void slCoBoKors3ComType(int index);
	void slCoBoPoKors3NumberLed(int index);
	void slRaBuKors3AsynSyn();

	void slGrBoMVRL1();
	void slLiEdMVRL1();
	void slCoBoMVRL1Number(int index);
	void slLiEdMVRL1PntDistance();
	void slLiEdMVRL1PntAzimuth();
	void slRaBuMVRL1Grad();
	void slCoBoPoMVRL1Number(int index);
	void slCoBoMVRL1ComBoude(int index);
	void slCoBoMVRL1ComParity(int index);
	void slCoBoMVRL1ComType(int index);
	void slCoBoPoMVRL1NumberLed(int index);
	void slRaBuMVRL1AsynSyn();

	void slGrBoMVRL2();
	void slLiEdMVRL2();
	void slCoBoMVRL2Number(int index);
	void slLiEdMVRL2PntDistance();
	void slLiEdMVRL2PntAzimuth();
	void slRaBuMVRL2Grad();
	void slCoBoPoMVRL2Number(int index);
	void slCoBoMVRL2ComBoude(int index);
	void slCoBoMVRL2ComParity(int index);
	void slCoBoMVRL2ComType(int index);
	void slCoBoPoMVRL2NumberLed(int index);
	void slRaBuMVRL2AsynSyn();

	void slGrBoSt2Th();
	void slLiEdSt2Th();
	void slCoBoSt2ThNumber(int index);
	void slLiEdSt2ThPntDistance();
	void slLiEdSt2ThPntAzimuth();
	void slRaBuSt2ThGrad();
	void slCoBoPoSt2ThNumber(int index);
	void slCoBoSt2ThComBoude(int index);
	void slCoBoSt2ThComParity(int index);
	void slCoBoSt2ThComType(int index);
	void slCoBoPoSt2ThNumberLed(int index);
	void slRaBuSt2ThAsynSyn();


	void slGrBoArp95();
	void slLiEdArp95();
	void slCoBoArp95Number(int index);
	void slLiEdArp95PntDistance();
	void slLiEdArp95PntAzimuth();
	void slRaBuArp95Grad();
	void slCoBoPoArp95Number(int index);
	void slCoBoArp95ComBoude(int index);
	void slCoBoArp95ComParity(int index);
	void slCoBoArp95ComType(int index);
	void slCoBoPoArp95NumberLed(int index);
	void slRaBuArp95AsynSyn();

protected slots:
	void slLiEdArp95Nc_1();	void slLiEdArp95Tc_1();	void slLiEdArp95Fc_1();
	void slLiEdArp95Nc_2();	void slLiEdArp95Tc_2();	void slLiEdArp95Fc_2();
	void slLiEdArp95Nc_3();	void slLiEdArp95Tc_3();	void slLiEdArp95Fc_3();
	void slLiEdArp95Nc_4();	void slLiEdArp95Tc_4();	void slLiEdArp95Fc_4();
	void slLiEdArp95Nc_5();	void slLiEdArp95Tc_5();	void slLiEdArp95Fc_5();
	void slLiEdArp95Nc_6();	void slLiEdArp95Tc_6();	void slLiEdArp95Fc_6();
	void slLiEdArp95Nc_7();	void slLiEdArp95Tc_7();	void slLiEdArp95Fc_7();
	void slLiEdArp95Nc_8();	void slLiEdArp95Tc_8();	void slLiEdArp95Fc_8();
	void slLiEdArp95Nc_9();	void slLiEdArp95Tc_9();	void slLiEdArp95Fc_9();
	void slLiEdArp95Nc_10();	void slLiEdArp95Tc_10();	void slLiEdArp95Fc_10();
	void slLiEdArp95Nc_11();	void slLiEdArp95Tc_11();	void slLiEdArp95Fc_11();
	void slLiEdArp95Nc_12();	void slLiEdArp95Tc_12();	void slLiEdArp95Fc_12();
	void slLiEdArp95Nc_13();	void slLiEdArp95Tc_13();	void slLiEdArp95Fc_13();
	void slLiEdArp95Nc_14();	void slLiEdArp95Tc_14();	void slLiEdArp95Fc_14();
	void slLiEdArp95Nc_15();	void slLiEdArp95Tc_15();	void slLiEdArp95Fc_15();
	void slLiEdArp95Nc_16();	void slLiEdArp95Tc_16();	void slLiEdArp95Fc_16();
public:
	void fLiEdAzimuth(void* l, ushort* pReceiveSePar, ushort* pSendSelPar);
	void fLiEdArp95Nc(void* l, ushort* pReceiveSePar, ushort* pSendSelPar);	//void slLiEdArp95Tc_1();	void slLiEdArp95Fc_1();
	void fLiEdArp95Tc(void* l, ushort* pReceiveSePar, ushort* pSendSelPar);	//void slLiEdArp95Tc_1();	void slLiEdArp95Fc_1();
	void fLiEdArp95Fc(void* l, ushort* pReceiveSePar, ushort* pSendSelPar);	//void slLiEdArp95Tc_1();	void slLiEdArp95Fc_1();




private:
	Ui::TabCust0 ui;
public:
	uchar firstChar(ushort a1);
	uchar secondChar(ushort a1);
};

#endif // TABCUST0_H
