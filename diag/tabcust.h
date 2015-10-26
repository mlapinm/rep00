#ifndef TABCUST_H
#define TABCUST_H

#include <QtGui/QWidget>
#include "ui_tabcust.h"
#include "unit.h"
#include "wrd.h"
#include "diagnosticapsp.h"

class TabCust : public QWidget
{
	Q_OBJECT

public:
	TabCust(QWidget *parent = 0);
	~TabCust();
	void createActions();
	void createActionsKors();
	void createActionsArp95Ch();
	void createActionsMVRL();
	void createActionsSoPo();
	void createActionsArpMetSev();
	void setEnabledThe(bool b); 

	Unit* unitReceive,*unitSend;
	Wrd wrd,wrdWr;
//диагностика
	DiagnosticaPsp* diagnosticaPsp;
	QByteArray baDiagnosticaPsp;

	void toTabCust(uchar* pch,int sz);
	void updDiagRlsPorts();
	QStringList stLiRls[6],stLiPort[10];
	QString st10Port6Rls,st10Port6RlsPrev;
	void updateDialog();
	void updateDialogKors();
	void updateDialogArp95Ch();
	void updateDialogMVRL();
	void updateDialogSoPo();
	void updateDialogArpMetSev();
	void updateDialogArp1Ch();
	void updateDialogArp2Ch();
	int div;	ushort bl[384];

protected slots:
//Экранные слоты:
	void slLiEdNameBoard();
//44	параметры порта 1					//--------------//
	void slGrBoPort1();
	void slCoBoPort1Boude(int index);
	void slChBoPort1ParityBit();
	void slRaBuPort1Parity();
	void slChBoPort1SincrInf();
	void slCoBoPort1AsincrProt(int index);
	void slCoBoPort1SincrProt(int index);
	void slRaBuPort1Asincr();
//44	параметры порта 2					//--------------//
	void slGrBoPort2();
	void slCoBoPort2Boude(int index);
	void slChBoPort2ParityBit();
	void slRaBuPort2Parity();
	void slChBoPort2SincrInf();
	void slCoBoPort2AsincrProt(int index);
	void slCoBoPort2SincrProt(int index);
	void slRaBuPort2Asincr();
//44	параметры порта 3					//--------------//
	void slGrBoPort3();
	void slCoBoPort3Boude(int index);
	void slChBoPort3ParityBit();
	void slRaBuPort3Parity();
	void slChBoPort3SincrInf();
	void slCoBoPort3AsincrProt(int index);
	void slCoBoPort3SincrProt(int index);
	void slRaBuPort3Asincr();
//44	параметры порта 4					//--------------//
	void slGrBoPort4();
	void slCoBoPort4Boude(int index);
	void slChBoPort4ParityBit();
	void slRaBuPort4Parity();
	void slChBoPort4SincrInf();
	void slCoBoPort4AsincrProt(int index);
	void slCoBoPort4SincrProt(int index);
	void slRaBuPort4Asincr();
//44	параметры порта 5					//--------------//
	void slGrBoPort5();
	void slCoBoPort5Boude(int index);
	void slChBoPort5ParityBit();
	void slRaBuPort5Parity();
	void slChBoPort5SincrInf();
	void slCoBoPort5AsincrProt(int index);
	void slCoBoPort5SincrProt(int index);
	void slRaBuPort5Asincr();
//44	параметры порта 6					//--------------//
	void slGrBoPort6();
	void slCoBoPort6Boude(int index);
	void slChBoPort6ParityBit();
	void slRaBuPort6Parity();
	void slChBoPort6SincrInf();
	void slCoBoPort6AsincrProt(int index);
	void slCoBoPort6SincrProt(int index);
	void slRaBuPort6Asincr();
//44	параметры порта 7					//--------------//
	void slGrBoPort7();
	void slCoBoPort7Boude(int index);
	void slChBoPort7ParityBit();
	void slRaBuPort7Parity();
	void slChBoPort7SincrInf();
	void slCoBoPort7AsincrProt(int index);
	void slCoBoPort7SincrProt(int index);
	void slRaBuPort7Asincr();
//44	параметры порта 8					//--------------//
	void slGrBoPort8();
	void slCoBoPort8Boude(int index);
	void slChBoPort8ParityBit();
	void slRaBuPort8Parity();
	void slChBoPort8SincrInf();
	void slCoBoPort8AsincrProt(int index);
	void slCoBoPort8SincrProt(int index);
	void slRaBuPort8Asincr();
//44	параметры порта 9					//--------------//
	void slGrBoPort9();
	void slCoBoPort9Boude(int index);
	void slChBoPort9ParityBit();
	void slRaBuPort9Parity();
	void slChBoPort9SincrInf();
	void slCoBoPort9AsincrProt(int index);
	void slCoBoPort9SincrProt(int index);
	void slRaBuPort9Asincr();
//44	параметры порта 10					//--------------//
	void slGrBoPort10();
	void slCoBoPort10Boude(int index);
	void slChBoPort10ParityBit();
	void slRaBuPort10Parity();
	void slChBoPort10SincrInf();
	void slCoBoPort10AsincrProt(int index);
	void slCoBoPort10SincrProt(int index);
	void slRaBuPort10Asincr();

public: 
	const static int iAddrRls1Base=64;
	const static int iAddrRls2Base=92;
	const static int iAddrRls3Base=120;
	const static int iAddrRls4Base=148;
	const static int iAddrRls5Base=176;
	const static int iAddrRls6Base=204;
	const static int iAddrArp1Base=232;
	const static int iAddrArp2Base=312;
	const static int iAddrSev1Base=392;		//440	
	const static int iAddrSev2Base=408;		//456
	const static int iAddrMet0Base=424;
	const static int iAddrMet1Base=440;
	const static int iAddrMet2Base=458;		//416
	const static int iAddrMet3Base=476;		//
	const static int iAddrMet4Base=494;		//
protected slots:
//Rls1::::::::::::::РЛС1
	void slLiEdRls1Name();
	void slCoBoRls1Num(int index);
	void slCoBoRls1LedNum(int index);
	void slGrBoRls1();
	void slLiEdRls1PntDistance();
	void slLiEdRls1PntAzimuth();
	void slRaBuRls1Grad();
	void slGrBoRls1Prl();
	void slGrBoRls2Prl();
	void slGrBoRls3Prl();
	void slGrBoRls4Prl();
	void slGrBoRls5Prl();
	void slGrBoRls6Prl();
	void slLiEdRls1DisPlace();

	void slLiEdRls1Blockirov();
	void slLiEdRls2Blockirov();
	void slLiEdRls3Blockirov();
	void slLiEdRls4Blockirov();
	void slLiEdRls5Blockirov();
	void slLiEdRls6Blockirov();

	void slLiEdRls1Turn();
	void slChBoRls1UsePort();
	void slChBoRls1UseSAC();
	void slChBoRls1UseSIC();
	void slLiEdRls1SIC();
	void slLiEdRls1SAC();
	void slLiEdRls1DistanceAxisVPP();
	void slLiEdRls1HighAerialVPP1();
	void slLiEdRls1HighAerialVPP2();
	void slLiEdRls1EndFaceVPP1();
	void slLiEdRls1EndFaceVPP2();
	void slLiEdRls1PointPlanting1();
	void slLiEdRls1PointPlanting2();
	void slCoBoRls1Prot(int index);
	void slCoBoRls1Port(int index);
//end Rls1::::::::::::::РЛС1
//Rls2::::::::::::::РЛС2
	void slLiEdRls2Name();
	void slCoBoRls2Num(int index);
	void slCoBoRls2LedNum(int index);
	void slGrBoRls2();
	void slLiEdRls2PntDistance();
	void slLiEdRls2PntAzimuth();
	void slRaBuRls2Grad();
	void slLiEdRls2DisPlace();
	void slLiEdRls2Turn();
	void slChBoRls2UsePort();
	void slChBoRls2UseSAC();
	void slChBoRls2UseSIC();
	void slLiEdRls2SIC();
	void slLiEdRls2SAC();
	void slLiEdRls2DistanceAxisVPP();
	void slLiEdRls2HighAerialVPP1();
	void slLiEdRls2HighAerialVPP2();
	void slLiEdRls2EndFaceVPP1();
	void slLiEdRls2EndFaceVPP2();
	void slLiEdRls2PointPlanting1();
	void slLiEdRls2PointPlanting2();
	void slCoBoRls2Prot(int index);
	void slCoBoRls2Port(int index);
//end Rls2::::::::::::::РЛС2
//Rls3::::::::::::::РЛС3
	void slLiEdRls3Name();
	void slCoBoRls3Num(int index);
	void slCoBoRls3LedNum(int index);
	void slGrBoRls3();
	void slLiEdRls3PntDistance();
	void slLiEdRls3PntAzimuth();
	void slRaBuRls3Grad();
	void slLiEdRls3DisPlace();
	void slLiEdRls3Turn();
	void slChBoRls3UsePort();
	void slChBoRls3UseSAC();
	void slChBoRls3UseSIC();
	void slLiEdRls3SIC();
	void slLiEdRls3SAC();
	void slLiEdRls3DistanceAxisVPP();
	void slLiEdRls3HighAerialVPP1();
	void slLiEdRls3HighAerialVPP2();
	void slLiEdRls3EndFaceVPP1();
	void slLiEdRls3EndFaceVPP2();
	void slLiEdRls3PointPlanting1();
	void slLiEdRls3PointPlanting2();
	void slCoBoRls3Prot(int index);
	void slCoBoRls3Port(int index);
//end Rls3::::::::::::::РЛС3
//Rls4::::::::::::::РЛС4
	void slLiEdRls4Name();
	void slCoBoRls4Num(int index);
	void slCoBoRls4LedNum(int index);
	void slGrBoRls4();
	void slLiEdRls4PntDistance();
	void slLiEdRls4PntAzimuth();
	void slRaBuRls4Grad();
	void slLiEdRls4DisPlace();
	void slLiEdRls4Turn();
	void slChBoRls4UsePort();
	void slChBoRls4UseSAC();
	void slChBoRls4UseSIC();
	void slLiEdRls4SIC();
	void slLiEdRls4SAC();
	void slLiEdRls4DistanceAxisVPP();
	void slLiEdRls4HighAerialVPP1();
	void slLiEdRls4HighAerialVPP2();
	void slLiEdRls4EndFaceVPP1();
	void slLiEdRls4EndFaceVPP2();
	void slLiEdRls4PointPlanting1();
	void slLiEdRls4PointPlanting2();
	void slCoBoRls4Prot(int index);
	void slCoBoRls4Port(int index);
//end Rls4::::::::::::::РЛС4
//Rls5::::::::::::::РЛС5
	void slLiEdRls5Name();
	void slCoBoRls5Num(int index);
	void slCoBoRls5LedNum(int index);
	void slGrBoRls5();
	void slLiEdRls5PntDistance();
	void slLiEdRls5PntAzimuth();
	void slRaBuRls5Grad();
	void slLiEdRls5DisPlace();
	void slLiEdRls5Turn();
	void slChBoRls5UsePort();
	void slChBoRls5UseSAC();
	void slChBoRls5UseSIC();
	void slLiEdRls5SIC();
	void slLiEdRls5SAC();
	void slLiEdRls5DistanceAxisVPP();
	void slLiEdRls5HighAerialVPP1();
	void slLiEdRls5HighAerialVPP2();
	void slLiEdRls5EndFaceVPP1();
	void slLiEdRls5EndFaceVPP2();
	void slLiEdRls5PointPlanting1();
	void slLiEdRls5PointPlanting2();
	void slCoBoRls5Prot(int index);
	void slCoBoRls5Port(int index);
//end Rls5::::::::::::::РЛС5
//Rls6::::::::::::::РЛС6
	void slLiEdRls6Name();
	void slCoBoRls6Num(int index);
	void slCoBoRls6LedNum(int index);
	void slGrBoRls6();
	void slLiEdRls6PntDistance();
	void slLiEdRls6PntAzimuth();
	void slRaBuRls6Grad();
	void slLiEdRls6DisPlace();
	void slLiEdRls6Turn();
	void slChBoRls6UsePort();
	void slChBoRls6UseSAC();
	void slChBoRls6UseSIC();
	void slLiEdRls6SIC();
	void slLiEdRls6SAC();
	void slLiEdRls6DistanceAxisVPP();
	void slLiEdRls6HighAerialVPP1();
	void slLiEdRls6HighAerialVPP2();
	void slLiEdRls6EndFaceVPP1();
	void slLiEdRls6EndFaceVPP2();
	void slLiEdRls6PointPlanting1();
	void slLiEdRls6PointPlanting2();
	void slCoBoRls6Prot(int index);
	void slCoBoRls6Port(int index);
//end Rls6::::::::::::::РЛС6
//Arp1::::::::::::::РЛС1
	void slLiEdArp1Name();
	void slCoBoArp1Num(int index);
	void slCoBoArp1LedNum(int index);
	void slGrBoArp1();
	void slLiEdArp1PntDistance();
	void slLiEdArp1PntAzimuth();
	void slRaBuArp1Grad();
	void slLiEdArp1Turn();
	void slChBoArp1UsePort();
	void slChBoArp1UseSAC();
	void slChBoArp1UseSIC();
	void slLiEdArp1SIC();
	void slLiEdArp1SAC();
	void slCoBoArp1Prot(int index);
	void slCoBoArp1Port(int index);
//end Arp1::::::::::::::РЛС1
//Arp2::::::::::::::РЛС1
	void slLiEdArp2Name();
	void slCoBoArp2Num(int index);
	void slCoBoArp2LedNum(int index);
	void slGrBoArp2();
	void slLiEdArp2PntDistance();
	void slLiEdArp2PntAzimuth();
	void slRaBuArp2Grad();
	void slLiEdArp2Turn();
	void slChBoArp2UsePort();
	void slChBoArp2UseSAC();
	void slChBoArp2UseSIC();
	void slLiEdArp2SIC();
	void slLiEdArp2SAC();
	void slCoBoArp2Prot(int index);
	void slCoBoArp2Port(int index);
//end Arp2::::::::::::::РЛС1
//Met0::::::::::::::РЛС1
	void slLiEdMet0Name();
	void slLiEdMet0QuantityEP();
//Met1::::::::::::::РЛС1
	void slCoBoMet1Num(int index);
	void slCoBoMet1LedNum(int index);
	void slGrBoMet1();
	void slChBoMet1UsePort();
	void slChBoMet1UseSAC();
	void slChBoMet1UseSIC();
	void slLiEdMet1SIC();
	void slLiEdMet1SAC();
	void slCoBoMet1Prot(int index);
	void slCoBoMet1Port(int index);
	void slLiEdMet1NameEP();
	void slLiEdMet1FirstCourse();
	void slLiEdMet1SecondCourse();
//end Met1::::::::::::::РЛС1
//Met2::::::::::::::РЛС1
	void slCoBoMet2Num(int index);
	void slCoBoMet2LedNum(int index);
	void slGrBoMet2();
	void slChBoMet2UsePort();
	void slChBoMet2UseSAC();
	void slChBoMet2UseSIC();
	void slLiEdMet2SIC();
	void slLiEdMet2SAC();
	void slCoBoMet2Prot(int index);
	void slCoBoMet2Port(int index);
	void slLiEdMet2NameEP();
	void slLiEdMet2FirstCourse();
	void slLiEdMet2SecondCourse();
//end Met2::::::::::::::РЛС1
//Met3::::::::::::::РЛС1
	void slCoBoMet3Num(int index);
	void slCoBoMet3LedNum(int index);
	void slGrBoMet3();
	void slChBoMet3UsePort();
	void slChBoMet3UseSAC();
	void slChBoMet3UseSIC();
	void slLiEdMet3SIC();
	void slLiEdMet3SAC();
	void slCoBoMet3Prot(int index);
	void slCoBoMet3Port(int index);
	void slLiEdMet3NameEP();
	void slLiEdMet3FirstCourse();
	void slLiEdMet3SecondCourse();
//end Met3::::::::::::::РЛС1
//Met1::::::::::::::РЛС1
	void slCoBoMet4Num(int index);
	void slCoBoMet4LedNum(int index);
	void slGrBoMet4();
	void slChBoMet4UsePort();
	void slChBoMet4UseSAC();
	void slChBoMet4UseSIC();
	void slLiEdMet4SIC();
	void slLiEdMet4SAC();
	void slCoBoMet4Prot(int index);
	void slCoBoMet4Port(int index);
	void slLiEdMet4NameEP();
	void slLiEdMet4FirstCourse();
	void slLiEdMet4SecondCourse();
//end Met4::::::::::::::РЛС1
//Sev1::::::::::::::РЛС1
	void slLiEdSev1Name();
	void slCoBoSev1Num(int index);
	void slCoBoSev1LedNum(int index);
	void slGrBoSev1();
	void slChBoSev1UsePort();
	void slChBoSev1UseSAC();
	void slChBoSev1UseSIC();
	void slLiEdSev1SIC();
	void slLiEdSev1SAC();
	void slCoBoSev1Prot(int index);
	void slCoBoSev1Port(int index);
//end Sev1::::::::::::::РЛС1
//Sev2::::::::::::::РЛС1
	void slLiEdSev2Name();
	void slCoBoSev2Num(int index);
	void slCoBoSev2LedNum(int index);
	void slGrBoSev2();
	void slChBoSev2UsePort();
	void slChBoSev2UseSAC();
	void slChBoSev2UseSIC();
	void slLiEdSev2SIC();
	void slLiEdSev2SAC();
	void slCoBoSev2Prot(int index);
	void slCoBoSev2Port(int index);
//end Sev2::::::::::::::РЛС1

/////////////////////////////////
	void fLineEditIPInitial();
	void fLineEditBasicPort();
	void fLineEditPortBoard();
	void fLineEditGradient();

protected slots:
	void slLiEdArp1Nc_1();	void slLiEdArp1Tc_1();	void slLiEdArp1Fc_1();
	void slLiEdArp1Nc_2();	void slLiEdArp1Tc_2();	void slLiEdArp1Fc_2();
	void slLiEdArp1Nc_3();	void slLiEdArp1Tc_3();	void slLiEdArp1Fc_3();
	void slLiEdArp1Nc_4();	void slLiEdArp1Tc_4();	void slLiEdArp1Fc_4();
	void slLiEdArp1Nc_5();	void slLiEdArp1Tc_5();	void slLiEdArp1Fc_5();
	void slLiEdArp1Nc_6();	void slLiEdArp1Tc_6();	void slLiEdArp1Fc_6();
	void slLiEdArp1Nc_7();	void slLiEdArp1Tc_7();	void slLiEdArp1Fc_7();
	void slLiEdArp1Nc_8();	void slLiEdArp1Tc_8();	void slLiEdArp1Fc_8();
	void slLiEdArp1Nc_9();	void slLiEdArp1Tc_9();	void slLiEdArp1Fc_9();
	void slLiEdArp1Nc_10();	void slLiEdArp1Tc_10();	void slLiEdArp1Fc_10();
	void slLiEdArp1Nc_11();	void slLiEdArp1Tc_11();	void slLiEdArp1Fc_11();
	void slLiEdArp1Nc_12();	void slLiEdArp1Tc_12();	void slLiEdArp1Fc_12();
	void slLiEdArp1Nc_13();	void slLiEdArp1Tc_13();	void slLiEdArp1Fc_13();
	void slLiEdArp1Nc_14();	void slLiEdArp1Tc_14();	void slLiEdArp1Fc_14();
	void slLiEdArp1Nc_15();	void slLiEdArp1Tc_15();	void slLiEdArp1Fc_15();
	void slLiEdArp1Nc_16();	void slLiEdArp1Tc_16();	void slLiEdArp1Fc_16();
	void slLiEdArp2Nc_1();	void slLiEdArp2Tc_1();	void slLiEdArp2Fc_1();
	void slLiEdArp2Nc_2();	void slLiEdArp2Tc_2();	void slLiEdArp2Fc_2();
	void slLiEdArp2Nc_3();	void slLiEdArp2Tc_3();	void slLiEdArp2Fc_3();
	void slLiEdArp2Nc_4();	void slLiEdArp2Tc_4();	void slLiEdArp2Fc_4();
	void slLiEdArp2Nc_5();	void slLiEdArp2Tc_5();	void slLiEdArp2Fc_5();
	void slLiEdArp2Nc_6();	void slLiEdArp2Tc_6();	void slLiEdArp2Fc_6();
	void slLiEdArp2Nc_7();	void slLiEdArp2Tc_7();	void slLiEdArp2Fc_7();
	void slLiEdArp2Nc_8();	void slLiEdArp2Tc_8();	void slLiEdArp2Fc_8();
	void slLiEdArp2Nc_9();	void slLiEdArp2Tc_9();	void slLiEdArp2Fc_9();
	void slLiEdArp2Nc_10();	void slLiEdArp2Tc_10();	void slLiEdArp2Fc_10();
	void slLiEdArp2Nc_11();	void slLiEdArp2Tc_11();	void slLiEdArp2Fc_11();
	void slLiEdArp2Nc_12();	void slLiEdArp2Tc_12();	void slLiEdArp2Fc_12();
	void slLiEdArp2Nc_13();	void slLiEdArp2Tc_13();	void slLiEdArp2Fc_13();
	void slLiEdArp2Nc_14();	void slLiEdArp2Tc_14();	void slLiEdArp2Fc_14();
	void slLiEdArp2Nc_15();	void slLiEdArp2Tc_15();	void slLiEdArp2Fc_15();
	void slLiEdArp2Nc_16();	void slLiEdArp2Tc_16();	void slLiEdArp2Fc_16();
public:
	void fLiEdAzimuth(void* l, ushort* pReceiveSePar, ushort* pSendSelPar);
	void fLiEdArpNc(void* l, ushort* pReceiveSePar, ushort* pSendSelPar);	//void slLiEdArp1Tc_1();	void slLiEdArp1Fc_1();
	void fLiEdArpTc(void* l, ushort* pReceiveSePar, ushort* pSendSelPar);	//void slLiEdArp1Tc_1();	void slLiEdArp1Fc_1();
	void fLiEdArpFc(void* l, ushort* pReceiveSePar, ushort* pSendSelPar);	//void slLiEdArp1Tc_1();	void slLiEdArp1Fc_1();


private:
	Ui::TabCustClass ui;
public:
	uchar firstChar(ushort a1);
	uchar secondChar(ushort a1);
};

#endif // TABCUST_H
