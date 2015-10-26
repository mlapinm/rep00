#include "tabcust.h"
#include "unn.h"
#include <QDebug>


void TabCust::createActionsArpMetSev()
{
	connect(ui.liEdNameBoard,SIGNAL(editingFinished()),this,SLOT(slLiEdNameBoard()));//
	connect(ui.liEdIp,SIGNAL(editingFinished()),this,SLOT(fLineEditIPInitial()));
	connect(ui.liEdPortBase,SIGNAL(editingFinished()),this,SLOT(fLineEditBasicPort()));
	connect(ui.liEdSclonenie,SIGNAL(editingFinished()),this,SLOT(fLineEditGradient()));
//Arp1::::::::::::::РЛС1
	connect(ui.liEdArp1Name,SIGNAL(editingFinished()),this,SLOT(slLiEdArp1Name()));//
	connect(ui.coBoArp1Num,SIGNAL(currentIndexChanged(int)),this,SLOT(slCoBoArp1Num(int)));
	connect(ui.coBoArp1LedNum,SIGNAL(currentIndexChanged(int)),this,SLOT(slCoBoArp1LedNum(int)));
	connect(ui.grBoArp1,SIGNAL(clicked()),this,SLOT(slGrBoArp1()));
	connect(ui.liEdArp1PntDistance,SIGNAL(editingFinished()),this,SLOT(slLiEdArp1PntDistance()));
	connect(ui.liEdArp1PntAzimuth,SIGNAL(editingFinished()),this,SLOT(slLiEdArp1PntAzimuth()));
	connect(ui.raBuArp1GradMagnetic,SIGNAL(clicked()),this,SLOT(slRaBuArp1Grad()));
	connect(ui.raBuArp1GradGeographic,SIGNAL(clicked()),this,SLOT(slRaBuArp1Grad()));
	connect(ui.liEdArp1Turn,SIGNAL(editingFinished()),this,SLOT(slLiEdArp1Turn()));
	connect(ui.chBoArp1UsePort,SIGNAL(clicked()),this,SLOT(slChBoArp1UsePort()));
	connect(ui.chBoArp1UseSAC,SIGNAL(clicked()),this,SLOT(slChBoArp1UseSAC()));
	connect(ui.chBoArp1UseSIC,SIGNAL(clicked()),this,SLOT(slChBoArp1UseSIC()));
	connect(ui.liEdArp1SIC,SIGNAL(editingFinished()),this,SLOT(slLiEdArp1SIC()));
	connect(ui.liEdArp1SAC,SIGNAL(editingFinished()),this,SLOT(slLiEdArp1SAC()));
	connect(ui.coBoArp1Prot,SIGNAL(currentIndexChanged(int)),this,SLOT(slCoBoArp1Prot(int)));
	connect(ui.coBoArp1Port,SIGNAL(currentIndexChanged(int)),this,SLOT(slCoBoArp1Port(int)));

	connect(ui.liEdArp1Nc_1,SIGNAL(editingFinished()),this,SLOT(slLiEdArp1Nc_1()));//
	connect(ui.liEdArp1Nc_2,SIGNAL(editingFinished()),this,SLOT(slLiEdArp1Nc_2()));//
	connect(ui.liEdArp1Nc_3,SIGNAL(editingFinished()),this,SLOT(slLiEdArp1Nc_3()));//
	connect(ui.liEdArp1Nc_4,SIGNAL(editingFinished()),this,SLOT(slLiEdArp1Nc_4()));//
	connect(ui.liEdArp1Nc_5,SIGNAL(editingFinished()),this,SLOT(slLiEdArp1Nc_5()));//
	connect(ui.liEdArp1Nc_6,SIGNAL(editingFinished()),this,SLOT(slLiEdArp1Nc_6()));//
	connect(ui.liEdArp1Nc_7,SIGNAL(editingFinished()),this,SLOT(slLiEdArp1Nc_7()));//
	connect(ui.liEdArp1Nc_8,SIGNAL(editingFinished()),this,SLOT(slLiEdArp1Nc_8()));//
	connect(ui.liEdArp1Nc_9,SIGNAL(editingFinished()),this,SLOT(slLiEdArp1Nc_9()));//
	connect(ui.liEdArp1Nc_10,SIGNAL(editingFinished()),this,SLOT(slLiEdArp1Nc_10()));//
	connect(ui.liEdArp1Nc_11,SIGNAL(editingFinished()),this,SLOT(slLiEdArp1Nc_11()));//
	connect(ui.liEdArp1Nc_12,SIGNAL(editingFinished()),this,SLOT(slLiEdArp1Nc_12()));//
	connect(ui.liEdArp1Nc_13,SIGNAL(editingFinished()),this,SLOT(slLiEdArp1Nc_13()));//
	connect(ui.liEdArp1Nc_14,SIGNAL(editingFinished()),this,SLOT(slLiEdArp1Nc_14()));//
	connect(ui.liEdArp1Nc_15,SIGNAL(editingFinished()),this,SLOT(slLiEdArp1Nc_15()));//
	connect(ui.liEdArp1Nc_16,SIGNAL(editingFinished()),this,SLOT(slLiEdArp1Nc_16()));//



	connect(ui.liEdArp1Tc_1,SIGNAL(editingFinished()),this,SLOT(slLiEdArp1Tc_1()));//
	connect(ui.liEdArp1Tc_2,SIGNAL(editingFinished()),this,SLOT(slLiEdArp1Tc_2()));//
	connect(ui.liEdArp1Tc_3,SIGNAL(editingFinished()),this,SLOT(slLiEdArp1Tc_3()));//
	connect(ui.liEdArp1Tc_4,SIGNAL(editingFinished()),this,SLOT(slLiEdArp1Tc_4()));//
	connect(ui.liEdArp1Tc_5,SIGNAL(editingFinished()),this,SLOT(slLiEdArp1Tc_5()));//
	connect(ui.liEdArp1Tc_6,SIGNAL(editingFinished()),this,SLOT(slLiEdArp1Tc_6()));//
	connect(ui.liEdArp1Tc_7,SIGNAL(editingFinished()),this,SLOT(slLiEdArp1Tc_7()));//
	connect(ui.liEdArp1Tc_8,SIGNAL(editingFinished()),this,SLOT(slLiEdArp1Tc_8()));//
	connect(ui.liEdArp1Tc_9,SIGNAL(editingFinished()),this,SLOT(slLiEdArp1Tc_9()));//
	connect(ui.liEdArp1Tc_10,SIGNAL(editingFinished()),this,SLOT(slLiEdArp1Tc_10()));//
	connect(ui.liEdArp1Tc_11,SIGNAL(editingFinished()),this,SLOT(slLiEdArp1Tc_11()));//
	connect(ui.liEdArp1Tc_12,SIGNAL(editingFinished()),this,SLOT(slLiEdArp1Tc_12()));//
	connect(ui.liEdArp1Tc_13,SIGNAL(editingFinished()),this,SLOT(slLiEdArp1Tc_13()));//
	connect(ui.liEdArp1Tc_14,SIGNAL(editingFinished()),this,SLOT(slLiEdArp1Tc_14()));//
	connect(ui.liEdArp1Tc_15,SIGNAL(editingFinished()),this,SLOT(slLiEdArp1Tc_15()));//
	connect(ui.liEdArp1Tc_16,SIGNAL(editingFinished()),this,SLOT(slLiEdArp1Tc_16()));//



	connect(ui.liEdArp1Fc_1,SIGNAL(editingFinished()),this,SLOT(slLiEdArp1Fc_1()));//
	connect(ui.liEdArp1Fc_2,SIGNAL(editingFinished()),this,SLOT(slLiEdArp1Fc_2()));//
	connect(ui.liEdArp1Fc_3,SIGNAL(editingFinished()),this,SLOT(slLiEdArp1Fc_3()));//
	connect(ui.liEdArp1Fc_4,SIGNAL(editingFinished()),this,SLOT(slLiEdArp1Fc_4()));//
	connect(ui.liEdArp1Fc_5,SIGNAL(editingFinished()),this,SLOT(slLiEdArp1Fc_5()));//
	connect(ui.liEdArp1Fc_6,SIGNAL(editingFinished()),this,SLOT(slLiEdArp1Fc_6()));//
	connect(ui.liEdArp1Fc_7,SIGNAL(editingFinished()),this,SLOT(slLiEdArp1Fc_7()));//
	connect(ui.liEdArp1Fc_8,SIGNAL(editingFinished()),this,SLOT(slLiEdArp1Fc_8()));//
	connect(ui.liEdArp1Fc_9,SIGNAL(editingFinished()),this,SLOT(slLiEdArp1Fc_9()));//
	connect(ui.liEdArp1Fc_10,SIGNAL(editingFinished()),this,SLOT(slLiEdArp1Fc_10()));//
	connect(ui.liEdArp1Fc_11,SIGNAL(editingFinished()),this,SLOT(slLiEdArp1Fc_11()));//
	connect(ui.liEdArp1Fc_12,SIGNAL(editingFinished()),this,SLOT(slLiEdArp1Fc_12()));//
	connect(ui.liEdArp1Fc_13,SIGNAL(editingFinished()),this,SLOT(slLiEdArp1Fc_13()));//
	connect(ui.liEdArp1Fc_14,SIGNAL(editingFinished()),this,SLOT(slLiEdArp1Fc_14()));//
	connect(ui.liEdArp1Fc_15,SIGNAL(editingFinished()),this,SLOT(slLiEdArp1Fc_15()));//
	connect(ui.liEdArp1Fc_16,SIGNAL(editingFinished()),this,SLOT(slLiEdArp1Fc_16()));//

//Arp2::::::::::::::РЛС1
	connect(ui.liEdArp2Name,SIGNAL(editingFinished()),this,SLOT(slLiEdArp2Name()));//
	connect(ui.coBoArp2Num,SIGNAL(currentIndexChanged(int)),this,SLOT(slCoBoArp2Num(int)));
	connect(ui.coBoArp2LedNum,SIGNAL(currentIndexChanged(int)),this,SLOT(slCoBoArp2LedNum(int)));
	connect(ui.grBoArp2,SIGNAL(clicked()),this,SLOT(slGrBoArp2()));
	connect(ui.liEdArp2PntDistance,SIGNAL(editingFinished()),this,SLOT(slLiEdArp2PntDistance()));
	connect(ui.liEdArp2PntAzimuth,SIGNAL(editingFinished()),this,SLOT(slLiEdArp2PntAzimuth()));
	connect(ui.raBuArp2GradMagnetic,SIGNAL(clicked()),this,SLOT(slRaBuArp2Grad()));
	connect(ui.raBuArp2GradGeographic,SIGNAL(clicked()),this,SLOT(slRaBuArp2Grad()));
	connect(ui.liEdArp2Turn,SIGNAL(editingFinished()),this,SLOT(slLiEdArp2Turn()));
	connect(ui.chBoArp2UsePort,SIGNAL(clicked()),this,SLOT(slChBoArp2UsePort()));
	connect(ui.chBoArp2UseSAC,SIGNAL(clicked()),this,SLOT(slChBoArp2UseSAC()));
	connect(ui.chBoArp2UseSIC,SIGNAL(clicked()),this,SLOT(slChBoArp2UseSIC()));
	connect(ui.liEdArp2SIC,SIGNAL(editingFinished()),this,SLOT(slLiEdArp2SIC()));
	connect(ui.liEdArp2SAC,SIGNAL(editingFinished()),this,SLOT(slLiEdArp2SAC()));
	connect(ui.coBoArp2Prot,SIGNAL(currentIndexChanged(int)),this,SLOT(slCoBoArp2Prot(int)));
	connect(ui.coBoArp2Port,SIGNAL(currentIndexChanged(int)),this,SLOT(slCoBoArp2Port(int)));

	connect(ui.liEdArp2Nc_1,SIGNAL(editingFinished()),this,SLOT(slLiEdArp2Nc_1()));//
	connect(ui.liEdArp2Nc_2,SIGNAL(editingFinished()),this,SLOT(slLiEdArp2Nc_2()));//
	connect(ui.liEdArp2Nc_3,SIGNAL(editingFinished()),this,SLOT(slLiEdArp2Nc_3()));//
	connect(ui.liEdArp2Nc_4,SIGNAL(editingFinished()),this,SLOT(slLiEdArp2Nc_4()));//
	connect(ui.liEdArp2Nc_5,SIGNAL(editingFinished()),this,SLOT(slLiEdArp2Nc_5()));//
	connect(ui.liEdArp2Nc_6,SIGNAL(editingFinished()),this,SLOT(slLiEdArp2Nc_6()));//
	connect(ui.liEdArp2Nc_7,SIGNAL(editingFinished()),this,SLOT(slLiEdArp2Nc_7()));//
	connect(ui.liEdArp2Nc_8,SIGNAL(editingFinished()),this,SLOT(slLiEdArp2Nc_8()));//
	connect(ui.liEdArp2Nc_9,SIGNAL(editingFinished()),this,SLOT(slLiEdArp2Nc_9()));//
	connect(ui.liEdArp2Nc_10,SIGNAL(editingFinished()),this,SLOT(slLiEdArp2Nc_10()));//
	connect(ui.liEdArp2Nc_11,SIGNAL(editingFinished()),this,SLOT(slLiEdArp2Nc_11()));//
	connect(ui.liEdArp2Nc_12,SIGNAL(editingFinished()),this,SLOT(slLiEdArp2Nc_12()));//
	connect(ui.liEdArp2Nc_13,SIGNAL(editingFinished()),this,SLOT(slLiEdArp2Nc_13()));//
	connect(ui.liEdArp2Nc_14,SIGNAL(editingFinished()),this,SLOT(slLiEdArp2Nc_14()));//
	connect(ui.liEdArp2Nc_15,SIGNAL(editingFinished()),this,SLOT(slLiEdArp2Nc_15()));//
	connect(ui.liEdArp2Nc_16,SIGNAL(editingFinished()),this,SLOT(slLiEdArp2Nc_16()));//



	connect(ui.liEdArp2Tc_1,SIGNAL(editingFinished()),this,SLOT(slLiEdArp2Tc_1()));//
	connect(ui.liEdArp2Tc_2,SIGNAL(editingFinished()),this,SLOT(slLiEdArp2Tc_2()));//
	connect(ui.liEdArp2Tc_3,SIGNAL(editingFinished()),this,SLOT(slLiEdArp2Tc_3()));//
	connect(ui.liEdArp2Tc_4,SIGNAL(editingFinished()),this,SLOT(slLiEdArp2Tc_4()));//
	connect(ui.liEdArp2Tc_5,SIGNAL(editingFinished()),this,SLOT(slLiEdArp2Tc_5()));//
	connect(ui.liEdArp2Tc_6,SIGNAL(editingFinished()),this,SLOT(slLiEdArp2Tc_6()));//
	connect(ui.liEdArp2Tc_7,SIGNAL(editingFinished()),this,SLOT(slLiEdArp2Tc_7()));//
	connect(ui.liEdArp2Tc_8,SIGNAL(editingFinished()),this,SLOT(slLiEdArp2Tc_8()));//
	connect(ui.liEdArp2Tc_9,SIGNAL(editingFinished()),this,SLOT(slLiEdArp2Tc_9()));//
	connect(ui.liEdArp2Tc_10,SIGNAL(editingFinished()),this,SLOT(slLiEdArp2Tc_10()));//
	connect(ui.liEdArp2Tc_11,SIGNAL(editingFinished()),this,SLOT(slLiEdArp2Tc_11()));//
	connect(ui.liEdArp2Tc_12,SIGNAL(editingFinished()),this,SLOT(slLiEdArp2Tc_12()));//
	connect(ui.liEdArp2Tc_13,SIGNAL(editingFinished()),this,SLOT(slLiEdArp2Tc_13()));//
	connect(ui.liEdArp2Tc_14,SIGNAL(editingFinished()),this,SLOT(slLiEdArp2Tc_14()));//
	connect(ui.liEdArp2Tc_15,SIGNAL(editingFinished()),this,SLOT(slLiEdArp2Tc_15()));//
	connect(ui.liEdArp2Tc_16,SIGNAL(editingFinished()),this,SLOT(slLiEdArp2Tc_16()));//



	connect(ui.liEdArp2Fc_1,SIGNAL(editingFinished()),this,SLOT(slLiEdArp2Fc_1()));//
	connect(ui.liEdArp2Fc_2,SIGNAL(editingFinished()),this,SLOT(slLiEdArp2Fc_2()));//
	connect(ui.liEdArp2Fc_3,SIGNAL(editingFinished()),this,SLOT(slLiEdArp2Fc_3()));//
	connect(ui.liEdArp2Fc_4,SIGNAL(editingFinished()),this,SLOT(slLiEdArp2Fc_4()));//
	connect(ui.liEdArp2Fc_5,SIGNAL(editingFinished()),this,SLOT(slLiEdArp2Fc_5()));//
	connect(ui.liEdArp2Fc_6,SIGNAL(editingFinished()),this,SLOT(slLiEdArp2Fc_6()));//
	connect(ui.liEdArp2Fc_7,SIGNAL(editingFinished()),this,SLOT(slLiEdArp2Fc_7()));//
	connect(ui.liEdArp2Fc_8,SIGNAL(editingFinished()),this,SLOT(slLiEdArp2Fc_8()));//
	connect(ui.liEdArp2Fc_9,SIGNAL(editingFinished()),this,SLOT(slLiEdArp2Fc_9()));//
	connect(ui.liEdArp2Fc_10,SIGNAL(editingFinished()),this,SLOT(slLiEdArp2Fc_10()));//
	connect(ui.liEdArp2Fc_11,SIGNAL(editingFinished()),this,SLOT(slLiEdArp2Fc_11()));//
	connect(ui.liEdArp2Fc_12,SIGNAL(editingFinished()),this,SLOT(slLiEdArp2Fc_12()));//
	connect(ui.liEdArp2Fc_13,SIGNAL(editingFinished()),this,SLOT(slLiEdArp2Fc_13()));//
	connect(ui.liEdArp2Fc_14,SIGNAL(editingFinished()),this,SLOT(slLiEdArp2Fc_14()));//
	connect(ui.liEdArp2Fc_15,SIGNAL(editingFinished()),this,SLOT(slLiEdArp2Fc_15()));//
	connect(ui.liEdArp2Fc_16,SIGNAL(editingFinished()),this,SLOT(slLiEdArp2Fc_16()));//

//Met0::::::::::::::РЛС1
	connect(ui.liEdMet0Name,SIGNAL(editingFinished()),this,SLOT(slLiEdMet0Name()));//
	connect(ui.liEdMet0QuantityEP,SIGNAL(editingFinished()),this,SLOT(slLiEdMet0QuantityEP()));
//Met1::::::::::::::РЛС1
//	connect(ui.coBoMet1Num,SIGNAL(currentIndexChanged(int)),this,SLOT(slCoBoMet1Num(int)));
	connect(ui.coBoMet1LedNum,SIGNAL(currentIndexChanged(int)),this,SLOT(slCoBoMet1LedNum(int)));
	connect(ui.grBoMet1,SIGNAL(clicked()),this,SLOT(slGrBoMet1()));
	connect(ui.chBoMet1UsePort,SIGNAL(clicked()),this,SLOT(slChBoMet1UsePort()));
	connect(ui.chBoMet1UseSAC,SIGNAL(clicked()),this,SLOT(slChBoMet1UseSAC()));
	connect(ui.chBoMet1UseSIC,SIGNAL(clicked()),this,SLOT(slChBoMet1UseSIC()));
	connect(ui.liEdMet1SIC,SIGNAL(editingFinished()),this,SLOT(slLiEdMet1SIC()));
	connect(ui.liEdMet1SAC,SIGNAL(editingFinished()),this,SLOT(slLiEdMet1SAC()));
	connect(ui.coBoMet1Prot,SIGNAL(currentIndexChanged(int)),this,SLOT(slCoBoMet1Prot(int)));
	connect(ui.coBoMet1Port,SIGNAL(currentIndexChanged(int)),this,SLOT(slCoBoMet1Port(int)));
	connect(ui.liEdMet1NameEP,SIGNAL(editingFinished()),this,SLOT(slLiEdMet1NameEP()));//
	connect(ui.liEdMet1FirstCourse,SIGNAL(editingFinished()),this,SLOT(slLiEdMet1FirstCourse()));//
	connect(ui.liEdMet1SecondCourse,SIGNAL(editingFinished()),this,SLOT(slLiEdMet1SecondCourse()));//
//Met2::::::::::::::РЛС1
//	connect(ui.coBoMet2Num,SIGNAL(currentIndexChanged(int)),this,SLOT(slCoBoMet2Num(int)));
	connect(ui.coBoMet2LedNum,SIGNAL(currentIndexChanged(int)),this,SLOT(slCoBoMet2LedNum(int)));
	connect(ui.grBoMet2,SIGNAL(clicked()),this,SLOT(slGrBoMet2()));
	connect(ui.chBoMet2UsePort,SIGNAL(clicked()),this,SLOT(slChBoMet2UsePort()));
	connect(ui.chBoMet2UseSAC,SIGNAL(clicked()),this,SLOT(slChBoMet2UseSAC()));
	connect(ui.chBoMet2UseSIC,SIGNAL(clicked()),this,SLOT(slChBoMet2UseSIC()));
	connect(ui.liEdMet2SIC,SIGNAL(editingFinished()),this,SLOT(slLiEdMet2SIC()));
	connect(ui.liEdMet2SAC,SIGNAL(editingFinished()),this,SLOT(slLiEdMet2SAC()));
	connect(ui.coBoMet2Prot,SIGNAL(currentIndexChanged(int)),this,SLOT(slCoBoMet2Prot(int)));
	connect(ui.coBoMet2Port,SIGNAL(currentIndexChanged(int)),this,SLOT(slCoBoMet2Port(int)));
	connect(ui.liEdMet2NameEP,SIGNAL(editingFinished()),this,SLOT(slLiEdMet2NameEP()));//
	connect(ui.liEdMet2FirstCourse,SIGNAL(editingFinished()),this,SLOT(slLiEdMet2FirstCourse()));//
	connect(ui.liEdMet2SecondCourse,SIGNAL(editingFinished()),this,SLOT(slLiEdMet2SecondCourse()));//
//Met3::::::::::::::РЛС1
//	connect(ui.coBoMet3Num,SIGNAL(currentIndexChanged(int)),this,SLOT(slCoBoMet3Num(int)));
	connect(ui.coBoMet3LedNum,SIGNAL(currentIndexChanged(int)),this,SLOT(slCoBoMet3LedNum(int)));
	connect(ui.grBoMet3,SIGNAL(clicked()),this,SLOT(slGrBoMet3()));
	connect(ui.chBoMet3UsePort,SIGNAL(clicked()),this,SLOT(slChBoMet3UsePort()));
	connect(ui.chBoMet3UseSAC,SIGNAL(clicked()),this,SLOT(slChBoMet3UseSAC()));
	connect(ui.chBoMet3UseSIC,SIGNAL(clicked()),this,SLOT(slChBoMet3UseSIC()));
	connect(ui.liEdMet3SIC,SIGNAL(editingFinished()),this,SLOT(slLiEdMet3SIC()));
	connect(ui.liEdMet3SAC,SIGNAL(editingFinished()),this,SLOT(slLiEdMet3SAC()));
	connect(ui.coBoMet3Prot,SIGNAL(currentIndexChanged(int)),this,SLOT(slCoBoMet3Prot(int)));
	connect(ui.coBoMet3Port,SIGNAL(currentIndexChanged(int)),this,SLOT(slCoBoMet3Port(int)));
	connect(ui.liEdMet3NameEP,SIGNAL(editingFinished()),this,SLOT(slLiEdMet3NameEP()));//
	connect(ui.liEdMet3FirstCourse,SIGNAL(editingFinished()),this,SLOT(slLiEdMet3FirstCourse()));//
	connect(ui.liEdMet3SecondCourse,SIGNAL(editingFinished()),this,SLOT(slLiEdMet3SecondCourse()));//
//Met4::::::::::::::РЛС1
//	connect(ui.coBoMet4Num,SIGNAL(currentIndexChanged(int)),this,SLOT(slCoBoMet4Num(int)));
	connect(ui.coBoMet4LedNum,SIGNAL(currentIndexChanged(int)),this,SLOT(slCoBoMet4LedNum(int)));
	connect(ui.grBoMet4,SIGNAL(clicked()),this,SLOT(slGrBoMet4()));
	connect(ui.chBoMet4UsePort,SIGNAL(clicked()),this,SLOT(slChBoMet4UsePort()));
	connect(ui.chBoMet4UseSAC,SIGNAL(clicked()),this,SLOT(slChBoMet4UseSAC()));
	connect(ui.chBoMet4UseSIC,SIGNAL(clicked()),this,SLOT(slChBoMet4UseSIC()));
	connect(ui.liEdMet4SIC,SIGNAL(editingFinished()),this,SLOT(slLiEdMet4SIC()));
	connect(ui.liEdMet4SAC,SIGNAL(editingFinished()),this,SLOT(slLiEdMet4SAC()));
	connect(ui.coBoMet4Prot,SIGNAL(currentIndexChanged(int)),this,SLOT(slCoBoMet4Prot(int)));
	connect(ui.coBoMet4Port,SIGNAL(currentIndexChanged(int)),this,SLOT(slCoBoMet4Port(int)));
	connect(ui.liEdMet4NameEP,SIGNAL(editingFinished()),this,SLOT(slLiEdMet4NameEP()));//
	connect(ui.liEdMet4FirstCourse,SIGNAL(editingFinished()),this,SLOT(slLiEdMet4FirstCourse()));//
	connect(ui.liEdMet4SecondCourse,SIGNAL(editingFinished()),this,SLOT(slLiEdMet4SecondCourse()));//
//Sev1::::::::::::::РЛС1
	connect(ui.liEdSev1Name,SIGNAL(editingFinished()),this,SLOT(slLiEdSev1Name()));//
	connect(ui.coBoSev1Num,SIGNAL(currentIndexChanged(int)),this,SLOT(slCoBoSev1Num(int)));
	connect(ui.coBoSev1LedNum,SIGNAL(currentIndexChanged(int)),this,SLOT(slCoBoSev1LedNum(int)));
	connect(ui.grBoSev1,SIGNAL(clicked()),this,SLOT(slGrBoSev1()));
	connect(ui.chBoSev1UsePort,SIGNAL(clicked()),this,SLOT(slChBoSev1UsePort()));
	connect(ui.chBoSev1UseSAC,SIGNAL(clicked()),this,SLOT(slChBoSev1UseSAC()));
	connect(ui.chBoSev1UseSIC,SIGNAL(clicked()),this,SLOT(slChBoSev1UseSIC()));
	connect(ui.liEdSev1SIC,SIGNAL(editingFinished()),this,SLOT(slLiEdSev1SIC()));
	connect(ui.liEdSev1SAC,SIGNAL(editingFinished()),this,SLOT(slLiEdSev1SAC()));
	connect(ui.coBoSev1Prot,SIGNAL(currentIndexChanged(int)),this,SLOT(slCoBoSev1Prot(int)));
	connect(ui.coBoSev1Port,SIGNAL(currentIndexChanged(int)),this,SLOT(slCoBoSev1Port(int)));
//Sev2::::::::::::::РЛС1
	connect(ui.liEdSev2Name,SIGNAL(editingFinished()),this,SLOT(slLiEdSev2Name()));//
	connect(ui.coBoSev2Num,SIGNAL(currentIndexChanged(int)),this,SLOT(slCoBoSev2Num(int)));
	connect(ui.coBoSev2LedNum,SIGNAL(currentIndexChanged(int)),this,SLOT(slCoBoSev2LedNum(int)));
	connect(ui.grBoSev2,SIGNAL(clicked()),this,SLOT(slGrBoSev2()));
	connect(ui.chBoSev2UsePort,SIGNAL(clicked()),this,SLOT(slChBoSev2UsePort()));
	connect(ui.chBoSev2UseSAC,SIGNAL(clicked()),this,SLOT(slChBoSev2UseSAC()));
	connect(ui.chBoSev2UseSIC,SIGNAL(clicked()),this,SLOT(slChBoSev2UseSIC()));
	connect(ui.liEdSev2SIC,SIGNAL(editingFinished()),this,SLOT(slLiEdSev2SIC()));
	connect(ui.liEdSev2SAC,SIGNAL(editingFinished()),this,SLOT(slLiEdSev2SAC()));
	connect(ui.coBoSev2Prot,SIGNAL(currentIndexChanged(int)),this,SLOT(slCoBoSev2Prot(int)));
	connect(ui.coBoSev2Port,SIGNAL(currentIndexChanged(int)),this,SLOT(slCoBoSev2Port(int)));
}
//Met1::::::::::::::РЛС1
void TabCust::slLiEdArp1Name()
{
	int iAddr = 68;
	iAddr=iAddrArp1Base+4;						//68;
	PLineEdit* lineEdit = ui.liEdArp1Name;
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
void TabCust::slCoBoArp1Num(int index)
{
	if(ui.coBoArp1Num->hasFocus()&&index<8)
	{
		int iAddr =64;
		iAddr=iAddrArp1Base+0;						//64;
		wrd.f(unitReceive->basicSetting[iAddr]);
		wrdWr.f(index);
		wrd.s.bit0=wrdWr.s.bit0;
		wrd.s.bit1=wrdWr.s.bit1;
		wrd.s.bit2=wrdWr.s.bit2;
		unitReceive->basicSetting[iAddr]=wrd.f();
		unitSend->basicSetting[iAddr]=wrd.f();
	}
	return;
}

void TabCust::slCoBoArp1LedNum(int index)
{
	if(ui.coBoArp1LedNum->hasFocus()&&index<11)
	{
		int iAddr =64;
		iAddr=iAddrArp1Base+0;						//64;
		wrd.f(unitReceive->basicSetting[iAddr]);
		wrdWr.f(index);
		wrd.s.bit3=wrdWr.s.bit0;
		wrd.s.bit4=wrdWr.s.bit1;
		wrd.s.bit5=wrdWr.s.bit2;
		wrd.s.bit6=wrdWr.s.bit3;
		unitReceive->basicSetting[iAddr]=wrd.f();
		unitSend->basicSetting[iAddr]=wrd.f();
	}
	return;
}
void TabCust::slCoBoArp1Prot(int index)
{
	if(ui.coBoArp1Prot->hasFocus()&&index<11)
	{
		int iAddr =64;
		iAddr=iAddrArp1Base+0;						//64;
		wrd.f(unitReceive->basicSetting[iAddr]);
		wrdWr.f(index);
		wrd.s.bit7=wrdWr.s.bit0;
		wrd.s.bit8=wrdWr.s.bit1;
		wrd.s.bit9=wrdWr.s.bit2;
		wrd.s.bit10=wrdWr.s.bit3;
		wrd.s.bit11=wrdWr.s.bit4;
		unitReceive->basicSetting[iAddr]=wrd.f();
		unitSend->basicSetting[iAddr]=wrd.f();
	}
	return;
}
void TabCust::slGrBoArp1()
{
	int iAddr =64;
	iAddr=iAddrArp1Base+0;						//64;
	bool b;
	b=ui.grBoArp1->isChecked();
	wrd.f(
		unitReceive->basicSetting[iAddr]
		)->bit15=b;
	unitReceive->basicSetting[iAddr]=wrd.f();
	unitSend->basicSetting[iAddr]=wrd.f();
	return;
}
void TabCust::slCoBoArp1Port(int index)
{
	if(ui.coBoArp1Port->hasFocus()&&index<11)
	{
		int iAddr =67;
		iAddr=iAddrArp1Base+3;						//66+1;
		wrd.f(unitReceive->basicSetting[iAddr]);
		wrdWr.f(index);
		wrd.s.bit0=wrdWr.s.bit0;
		wrd.s.bit1=wrdWr.s.bit1;
		wrd.s.bit2=wrdWr.s.bit2;
		wrd.s.bit3=wrdWr.s.bit3;
		unitReceive->basicSetting[iAddr]=wrd.f();
		unitSend->basicSetting[iAddr]=wrd.f();
	}
	return;
}

void TabCust::slChBoArp1UsePort()
{
	int iAddr =67;
	iAddr=iAddrArp1Base+3;						//66+1;
	bool b;
	b=ui.chBoArp1UsePort->isChecked();
	wrd.f(
		unitReceive->basicSetting[iAddr]
		)->bit6=b;
	unitReceive->basicSetting[iAddr]=wrd.f();
	unitSend->basicSetting[iAddr]=wrd.f();
	return;
}

void TabCust::slChBoArp1UseSAC()
{
	int iAddr =67;
	iAddr=iAddrArp1Base+3;						//66+1;
	bool b;
	b=ui.chBoArp1UseSAC->isChecked();
	wrd.f(
		unitReceive->basicSetting[iAddr]
		)->bit4=b;
	unitReceive->basicSetting[iAddr]=wrd.f();
	unitSend->basicSetting[iAddr]=wrd.f();
	return;
}

void TabCust::slChBoArp1UseSIC()
{
	int iAddr =67;
	iAddr=iAddrArp1Base+3;						//66+1;
	bool b;
	b=ui.chBoArp1UseSIC->isChecked();
	wrd.f(
		unitReceive->basicSetting[iAddr]
		)->bit5=b;
	unitReceive->basicSetting[iAddr]=wrd.f();
	unitSend->basicSetting[iAddr]=wrd.f();
	return;
}


void TabCust::slLiEdArp1PntDistance()
{
//76
	int iAddr = 76;
	iAddr=iAddrArp1Base+12;						//76;
	PLineEdit* lineEdit = ui.liEdArp1PntDistance;
	int b1;
	QString str1,str2;
	str1=lineEdit->text();
	b1=str1.toInt();
	b1 &= 0xffff;
	lineEdit->setText(QString("%1").arg(b1));
	unitReceive->basicSetting[iAddr]=b1;
	unitSend->basicSetting[iAddr]=b1;
	return;
}
void TabCust::slLiEdArp1PntAzimuth()
{
//77
	int iAddr =77;
	iAddr=iAddrArp1Base+13;						//77;
	PLineEdit* lineEdit = ui.liEdArp1PntAzimuth ;
	fLiEdAzimuth(	lineEdit,
		&unitReceive->basicSetting[iAddr],
		&unitSend->basicSetting[iAddr]	);
	return;
}
void TabCust::slRaBuArp1Grad()
{
	int iAddr =65;
	iAddr=iAddrArp1Base+1;						//64+1;
	wrd.f(unitReceive->basicSetting[iAddr]);
	wrd.s.bit0=ui.raBuArp1GradMagnetic->isChecked();
	unitReceive->basicSetting[iAddr]=wrd.f();
	unitSend->basicSetting[iAddr]=wrd.f();
	return;
}

void TabCust::slLiEdArp1Turn()
{
//79
	int iAddr = 79;
	iAddr=iAddrArp1Base+15;						//79;
	PLineEdit* lineEdit = ui.liEdArp1Turn;
	fLiEdAzimuth(	lineEdit,
		&unitReceive->basicSetting[iAddr],
		&unitSend->basicSetting[iAddr]	);
	return;
}
void TabCust::slLiEdArp1SIC()
{
//66
	int iAddr = 66;
	iAddr=iAddrArp1Base+2;						//66;
	PLineEdit* lineEdit = ui.liEdArp1SIC;
	Unn unn;
	int b1,b2;uchar ch1;
	QString str1,str2;
	str1=lineEdit->text();
	b1=str1.toInt();
	b1 = b1>0xff ? 0xff : b1;
	b1 &= 0xff;
	ch1=(uchar)b1;
	lineEdit->setText(QString("%1").arg(b1));
	unn.uShU[0]=unitReceive->basicSetting[iAddr];
	unn.ubU[1] = ch1;
	b2=unn.uShU[0];
	unitReceive->basicSetting[iAddr]=b2;
	unitSend->basicSetting[iAddr]=b2;
}
void TabCust::slLiEdArp1SAC()
{
//66
	int iAddr = 66;
	iAddr=iAddrArp1Base+2;						//66;
	PLineEdit* lineEdit = ui.liEdArp1SAC;
	Unn unn;
	int b1,b2;uchar ch1;
	QString str1,str2;
	str1=lineEdit->text();
	b1=str1.toInt();
	b1 = b1>0xff ? 0xff : b1;
	b1 &= 0xff;
	ch1=(uchar)b1;
	lineEdit->setText(QString("%1").arg(b1));
	unn.uShU[0]=unitReceive->basicSetting[iAddr];
	unn.ubU[0] = ch1;
	b2=unn.uShU[0];
	unitReceive->basicSetting[iAddr]=b2;
	unitSend->basicSetting[iAddr]=b2;
}
//end Arp1::::::::::::::РЛС1
//Arp2::::::::::::::РЛС1
void TabCust::slLiEdArp2Name()
{
	int iAddr = 68;
	iAddr=iAddrArp2Base+4;						//68;
	PLineEdit* lineEdit = ui.liEdArp2Name;
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
void TabCust::slCoBoArp2Num(int index)
{
	if(ui.coBoArp2Num->hasFocus()&&index<8)
	{
		int iAddr =64;
		iAddr=iAddrArp2Base+0;						//64;
		wrd.f(unitReceive->basicSetting[iAddr]);
		wrdWr.f(index);
		wrd.s.bit0=wrdWr.s.bit0;
		wrd.s.bit1=wrdWr.s.bit1;
		wrd.s.bit2=wrdWr.s.bit2;
		unitReceive->basicSetting[iAddr]=wrd.f();
		unitSend->basicSetting[iAddr]=wrd.f();
	}
	return;
}

void TabCust::slCoBoArp2LedNum(int index)
{
	if(ui.coBoArp2LedNum->hasFocus()&&index<11)
	{
		int iAddr =64;
		iAddr=iAddrArp2Base+0;						//64;
		wrd.f(unitReceive->basicSetting[iAddr]);
		wrdWr.f(index);
		wrd.s.bit3=wrdWr.s.bit0;
		wrd.s.bit4=wrdWr.s.bit1;
		wrd.s.bit5=wrdWr.s.bit2;
		wrd.s.bit6=wrdWr.s.bit3;
		unitReceive->basicSetting[iAddr]=wrd.f();
		unitSend->basicSetting[iAddr]=wrd.f();
	}
	return;
}
void TabCust::slCoBoArp2Prot(int index)
{
	if(ui.coBoArp2Prot->hasFocus()&&index<11)
	{
		int iAddr =64;
		iAddr=iAddrArp2Base+0;						//64;
		wrd.f(unitReceive->basicSetting[iAddr]);
		wrdWr.f(index);
		wrd.s.bit7=wrdWr.s.bit0;
		wrd.s.bit8=wrdWr.s.bit1;
		wrd.s.bit9=wrdWr.s.bit2;
		wrd.s.bit10=wrdWr.s.bit3;
		wrd.s.bit11=wrdWr.s.bit4;
		unitReceive->basicSetting[iAddr]=wrd.f();
		unitSend->basicSetting[iAddr]=wrd.f();
	}
	return;
}
void TabCust::slGrBoArp2()
{
	int iAddr =64;
	iAddr=iAddrArp2Base+0;						//64;
	bool b;
	b=ui.grBoArp2->isChecked();
	wrd.f(
		unitReceive->basicSetting[iAddr]
		)->bit15=b;
	unitReceive->basicSetting[iAddr]=wrd.f();
	unitSend->basicSetting[iAddr]=wrd.f();
	return;
}
void TabCust::slCoBoArp2Port(int index)
{
	if(ui.coBoArp2Port->hasFocus()&&index<11)
	{
		int iAddr =67;
		iAddr=iAddrArp2Base+3;						//66+1;
		wrd.f(unitReceive->basicSetting[iAddr]);
		wrdWr.f(index);
		wrd.s.bit0=wrdWr.s.bit0;
		wrd.s.bit1=wrdWr.s.bit1;
		wrd.s.bit2=wrdWr.s.bit2;
		wrd.s.bit3=wrdWr.s.bit3;
		unitReceive->basicSetting[iAddr]=wrd.f();
		unitSend->basicSetting[iAddr]=wrd.f();
	}
	return;
}

void TabCust::slChBoArp2UsePort()
{
	int iAddr =67;
	iAddr=iAddrArp2Base+3;						//66+1;
	bool b;
	b=ui.chBoArp2UsePort->isChecked();
	wrd.f(
		unitReceive->basicSetting[iAddr]
		)->bit6=b;
	unitReceive->basicSetting[iAddr]=wrd.f();
	unitSend->basicSetting[iAddr]=wrd.f();
	return;
}

void TabCust::slChBoArp2UseSAC()
{
	int iAddr =67;
	iAddr=iAddrArp2Base+3;						//66+1;
	bool b;
	b=ui.chBoArp2UseSAC->isChecked();
	wrd.f(
		unitReceive->basicSetting[iAddr]
		)->bit4=b;
	unitReceive->basicSetting[iAddr]=wrd.f();
	unitSend->basicSetting[iAddr]=wrd.f();
	return;
}

void TabCust::slChBoArp2UseSIC()
{
	int iAddr =67;
	iAddr=iAddrArp2Base+3;						//66+1;
	bool b;
	b=ui.chBoArp2UseSIC->isChecked();
	wrd.f(
		unitReceive->basicSetting[iAddr]
		)->bit5=b;
	unitReceive->basicSetting[iAddr]=wrd.f();
	unitSend->basicSetting[iAddr]=wrd.f();
	return;
}


void TabCust::slLiEdArp2PntDistance()
{
//76
	int iAddr = 76;
	iAddr=iAddrArp2Base+12;						//76;
	PLineEdit* lineEdit = ui.liEdArp2PntDistance;
	int b1;
	QString str1,str2;
	str1=lineEdit->text();
	b1=str1.toInt();
	b1 &= 0xffff;
	lineEdit->setText(QString("%1").arg(b1));
	unitReceive->basicSetting[iAddr]=b1;
	unitSend->basicSetting[iAddr]=b1;
	return;
}
void TabCust::slLiEdArp2PntAzimuth()
{
//77
	int iAddr =77;
	iAddr=iAddrArp2Base+13;						//77;
	PLineEdit* lineEdit = ui.liEdArp2PntAzimuth ;
	fLiEdAzimuth(	lineEdit,
		&unitReceive->basicSetting[iAddr],
		&unitSend->basicSetting[iAddr]	);
	return;
}
void TabCust::slRaBuArp2Grad()
{
	int iAddr =65;
	iAddr=iAddrArp2Base+1;						//64+1;
	wrd.f(unitReceive->basicSetting[iAddr]);
	wrd.s.bit0=ui.raBuArp2GradMagnetic->isChecked();
	unitReceive->basicSetting[iAddr]=wrd.f();
	unitSend->basicSetting[iAddr]=wrd.f();
	return;
}

void TabCust::slLiEdArp2Turn()
{
//79
	int iAddr = 79;
	iAddr=iAddrArp2Base+15;						//79;
	PLineEdit* lineEdit = ui.liEdArp2Turn;
	fLiEdAzimuth(	lineEdit,
		&unitReceive->basicSetting[iAddr],
		&unitSend->basicSetting[iAddr]	);
	return;
}
void TabCust::slLiEdArp2SIC()
{
//66
	int iAddr = 66;
	iAddr=iAddrArp2Base+2;						//66;
	PLineEdit* lineEdit = ui.liEdArp2SIC;
	Unn unn;
	int b1,b2;uchar ch1;
	QString str1,str2;
	str1=lineEdit->text();
	b1=str1.toInt();
	b1 = b1>0xff ? 0xff : b1;
	b1 &= 0xff;
	ch1=(uchar)b1;
	lineEdit->setText(QString("%1").arg(b1));
	unn.uShU[0]=unitReceive->basicSetting[iAddr];
	unn.ubU[1] = ch1;
	b2=unn.uShU[0];
	unitReceive->basicSetting[iAddr]=b2;
	unitSend->basicSetting[iAddr]=b2;
}
void TabCust::slLiEdArp2SAC()
{
//66
	int iAddr = 66;
	iAddr=iAddrArp2Base+2;						//66;
	PLineEdit* lineEdit = ui.liEdArp2SAC;
	Unn unn;
	int b1,b2;uchar ch1;
	QString str1,str2;
	str1=lineEdit->text();
	b1=str1.toInt();
	b1 = b1>0xff ? 0xff : b1;
	b1 &= 0xff;
	ch1=(uchar)b1;
	lineEdit->setText(QString("%1").arg(b1));
	unn.uShU[0]=unitReceive->basicSetting[iAddr];
	unn.ubU[0] = ch1;
	b2=unn.uShU[0];
	unitReceive->basicSetting[iAddr]=b2;
	unitSend->basicSetting[iAddr]=b2;
}
//end Arp2::::::::::::::РЛС1
//Met0::::::::::::::РЛС1
void TabCust::slLiEdMet0Name()
{
	int iAddr = 68;
	iAddr=iAddrMet0Base+0;						//68;
	PLineEdit* lineEdit = ui.liEdMet0Name;
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
void TabCust::slLiEdMet0QuantityEP()
{
//66
	int iAddr = 66;
	iAddr=iAddrMet0Base+8;						//66;
	PLineEdit* lineEdit = ui.liEdMet0QuantityEP;
	Unn unn;
	int b1,b2;uchar ch1;
	QString str1,str2;
	str1=lineEdit->text();
	b1=str1.toInt();
	b1 = b1>4 ? 4 : b1;
	b1 = b1<1 ? 1 : b1;
	b1 &= 0xff;
	ch1=(uchar)b1;
	lineEdit->setText(QString("%1").arg(b1));
	unn.uShU[0]=unitReceive->basicSetting[iAddr];
	unn.ubU[1] = ch1;
	b2=unn.uShU[0];
	unitReceive->basicSetting[iAddr]=b2;
	unitSend->basicSetting[iAddr]=b2;
}




//Met1::::::::::::::РЛС1
void TabCust::slCoBoMet1Num(int index)
{
//	if(ui.coBoMet1Num->hasFocus()&&index<8)
	{
		int iAddr =64;
		iAddr=iAddrMet1Base+0;						//64;
		wrd.f(unitReceive->basicSetting[iAddr]);
		wrdWr.f(index);
		wrd.s.bit0=wrdWr.s.bit0;
		wrd.s.bit1=wrdWr.s.bit1;
		wrd.s.bit2=wrdWr.s.bit2;
		unitReceive->basicSetting[iAddr]=wrd.f();
		unitSend->basicSetting[iAddr]=wrd.f();
	}
	return;
}

void TabCust::slCoBoMet1LedNum(int index)
{
	if(ui.coBoMet1LedNum->hasFocus()&&index<11)
	{
		int iAddr =64;
		iAddr=iAddrMet1Base+0;						//64;
		wrd.f(unitReceive->basicSetting[iAddr]);
		wrdWr.f(index);
		wrd.s.bit3=wrdWr.s.bit0;
		wrd.s.bit4=wrdWr.s.bit1;
		wrd.s.bit5=wrdWr.s.bit2;
		wrd.s.bit6=wrdWr.s.bit3;
		unitReceive->basicSetting[iAddr]=wrd.f();
		unitSend->basicSetting[iAddr]=wrd.f();
	}
	return;
}
void TabCust::slCoBoMet1Prot(int index)
{
	if(ui.coBoMet1Prot->hasFocus()&&index<11)
	{
		int iAddr =64;
		iAddr=iAddrMet1Base+0;						//64;
		wrd.f(unitReceive->basicSetting[iAddr]);
		wrdWr.f(index);
		wrd.s.bit7=wrdWr.s.bit0;
		wrd.s.bit8=wrdWr.s.bit1;
		wrd.s.bit9=wrdWr.s.bit2;
		wrd.s.bit10=wrdWr.s.bit3;
		wrd.s.bit11=wrdWr.s.bit4;
		unitReceive->basicSetting[iAddr]=wrd.f();
		unitSend->basicSetting[iAddr]=wrd.f();
	}
	return;
}
void TabCust::slGrBoMet1()
{
	int iAddr =64;
	iAddr=iAddrMet1Base+0;						//64;
	bool b;
	b=ui.grBoMet1->isChecked();
	wrd.f(
		unitReceive->basicSetting[iAddr]
		)->bit15=b;
	unitReceive->basicSetting[iAddr]=wrd.f();
	unitSend->basicSetting[iAddr]=wrd.f();
	return;
}
void TabCust::slCoBoMet1Port(int index)
{
	if(ui.coBoMet1Port->hasFocus()&&index<11)
	{
		int iAddr =67;
		iAddr=iAddrMet1Base+3;						//66+1;
		wrd.f(unitReceive->basicSetting[iAddr]);
		wrdWr.f(index);
		wrd.s.bit0=wrdWr.s.bit0;
		wrd.s.bit1=wrdWr.s.bit1;
		wrd.s.bit2=wrdWr.s.bit2;
		wrd.s.bit3=wrdWr.s.bit3;
		unitReceive->basicSetting[iAddr]=wrd.f();
		unitSend->basicSetting[iAddr]=wrd.f();
	}
	return;
}

void TabCust::slChBoMet1UsePort()
{
	int iAddr =67;
	iAddr=iAddrMet1Base+3;						//66+1;
	bool b;
	b=ui.chBoMet1UsePort->isChecked();
	wrd.f(
		unitReceive->basicSetting[iAddr]
		)->bit6=b;
	unitReceive->basicSetting[iAddr]=wrd.f();
	unitSend->basicSetting[iAddr]=wrd.f();
	return;
}

void TabCust::slChBoMet1UseSAC()
{
	int iAddr =67;
	iAddr=iAddrMet1Base+3;						//66+1;
	bool b;
	b=ui.chBoMet1UseSAC->isChecked();
	wrd.f(
		unitReceive->basicSetting[iAddr]
		)->bit4=b;
	unitReceive->basicSetting[iAddr]=wrd.f();
	unitSend->basicSetting[iAddr]=wrd.f();
	return;
}

void TabCust::slChBoMet1UseSIC()
{
	int iAddr =67;
	iAddr=iAddrMet1Base+3;						//66+1;
	bool b;
	b=ui.chBoMet1UseSIC->isChecked();
	wrd.f(
		unitReceive->basicSetting[iAddr]
		)->bit5=b;
	unitReceive->basicSetting[iAddr]=wrd.f();
	unitSend->basicSetting[iAddr]=wrd.f();
	return;
}


void TabCust::slLiEdMet1SIC()
{
//66
	int iAddr = 66;
	iAddr=iAddrMet1Base+2;						//66;
	PLineEdit* lineEdit = ui.liEdMet1SIC;
	Unn unn;
	int b1,b2;uchar ch1;
	QString str1,str2;
	str1=lineEdit->text();
	b1=str1.toInt();
	b1 = b1>0xff ? 0xff : b1;
	b1 &= 0xff;
	ch1=(uchar)b1;
	lineEdit->setText(QString("%1").arg(b1));
	unn.uShU[0]=unitReceive->basicSetting[iAddr];
	unn.ubU[1] = ch1;
	b2=unn.uShU[0];
	unitReceive->basicSetting[iAddr]=b2;
	unitSend->basicSetting[iAddr]=b2;
}
void TabCust::slLiEdMet1SAC()
{
//66
	int iAddr = 66;
	iAddr=iAddrMet1Base+2;						//66;
	PLineEdit* lineEdit = ui.liEdMet1SAC;
	Unn unn;
	int b1,b2;uchar ch1;
	QString str1,str2;
	str1=lineEdit->text();
	b1=str1.toInt();
	b1 = b1>0xff ? 0xff : b1;
	b1 &= 0xff;
	ch1=(uchar)b1;
	lineEdit->setText(QString("%1").arg(b1));
	unn.uShU[0]=unitReceive->basicSetting[iAddr];
	unn.ubU[0] = ch1;
	b2=unn.uShU[0];
	unitReceive->basicSetting[iAddr]=b2;
	unitSend->basicSetting[iAddr]=b2;
}
void TabCust::slLiEdMet1NameEP()
{
	int iAddr = 68;
	iAddr=iAddrMet1Base+4;						//68;
	PLineEdit* lineEdit = ui.liEdMet1NameEP;
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
void TabCust::slLiEdMet1FirstCourse()
{
	int iAddr = 68;
	iAddr=iAddrMet1Base+12;						//68;
	PLineEdit* lineEdit = ui.liEdMet1FirstCourse;
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

	b1 = b1 > 2 ? 3 : b1;	
	ushort ua[2];
	memset(ua, 0, sizeof(ua));
	memcpy(ua, str1.toAscii().constData(), b1);

	///*
	for(int i=0;i<2;i++)
	{
		unitReceive->basicSetting[iAddr+i]=ua[i];
		unitSend->basicSetting[iAddr+i]=ua[i];
	}
}
void TabCust::slLiEdMet1SecondCourse()
{
	int iAddr = 68;
	iAddr=iAddrMet1Base+14;						//68;
	PLineEdit* lineEdit = ui.liEdMet1SecondCourse;
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

	b1 = b1 > 2 ? 3 : b1;	
	ushort ua[2];
	memset(ua, 0, sizeof(ua));
	memcpy(ua, str1.toAscii().constData(), b1);

	///*
	for(int i=0;i<2;i++)
	{
		unitReceive->basicSetting[iAddr+i]=ua[i];
		unitSend->basicSetting[iAddr+i]=ua[i];
	}
}
//end Met1::::::::::::::РЛС1
//Met2::::::::::::::РЛС1
void TabCust::slCoBoMet2Num(int index)
{
//	if(ui.coBoMet2Num->hasFocus()&&index<8)
	{
		int iAddr =64;
		iAddr=iAddrMet2Base+0;						//64;
		wrd.f(unitReceive->basicSetting[iAddr]);
		wrdWr.f(index);
		wrd.s.bit0=wrdWr.s.bit0;
		wrd.s.bit1=wrdWr.s.bit1;
		wrd.s.bit2=wrdWr.s.bit2;
		unitReceive->basicSetting[iAddr]=wrd.f();
		unitSend->basicSetting[iAddr]=wrd.f();
	}
	return;
}

void TabCust::slCoBoMet2LedNum(int index)
{
	if(ui.coBoMet2LedNum->hasFocus()&&index<11)
	{
		int iAddr =64;
		iAddr=iAddrMet2Base+0;						//64;
		wrd.f(unitReceive->basicSetting[iAddr]);
		wrdWr.f(index);
		wrd.s.bit3=wrdWr.s.bit0;
		wrd.s.bit4=wrdWr.s.bit1;
		wrd.s.bit5=wrdWr.s.bit2;
		wrd.s.bit6=wrdWr.s.bit3;
		unitReceive->basicSetting[iAddr]=wrd.f();
		unitSend->basicSetting[iAddr]=wrd.f();
	}
	return;
}
void TabCust::slCoBoMet2Prot(int index)
{
	if(ui.coBoMet2Prot->hasFocus()&&index<11)
	{
		int iAddr =64;
		iAddr=iAddrMet2Base+0;						//64;
		wrd.f(unitReceive->basicSetting[iAddr]);
		wrdWr.f(index);
		wrd.s.bit7=wrdWr.s.bit0;
		wrd.s.bit8=wrdWr.s.bit1;
		wrd.s.bit9=wrdWr.s.bit2;
		wrd.s.bit10=wrdWr.s.bit3;
		wrd.s.bit11=wrdWr.s.bit4;
		unitReceive->basicSetting[iAddr]=wrd.f();
		unitSend->basicSetting[iAddr]=wrd.f();
	}
	return;
}
void TabCust::slGrBoMet2()
{
	int iAddr =64;
	iAddr=iAddrMet2Base+0;						//64;
	bool b;
	b=ui.grBoMet2->isChecked();
	wrd.f(
		unitReceive->basicSetting[iAddr]
		)->bit15=b;
	unitReceive->basicSetting[iAddr]=wrd.f();
	unitSend->basicSetting[iAddr]=wrd.f();
	return;
}
void TabCust::slCoBoMet2Port(int index)
{
	if(ui.coBoMet2Port->hasFocus()&&index<11)
	{
		int iAddr =67;
		iAddr=iAddrMet2Base+3;						//66+1;
		wrd.f(unitReceive->basicSetting[iAddr]);
		wrdWr.f(index);
		wrd.s.bit0=wrdWr.s.bit0;
		wrd.s.bit1=wrdWr.s.bit1;
		wrd.s.bit2=wrdWr.s.bit2;
		wrd.s.bit3=wrdWr.s.bit3;
		unitReceive->basicSetting[iAddr]=wrd.f();
		unitSend->basicSetting[iAddr]=wrd.f();
	}
	return;
}

void TabCust::slChBoMet2UsePort()
{
	int iAddr =67;
	iAddr=iAddrMet2Base+3;						//66+1;
	bool b;
	b=ui.chBoMet2UsePort->isChecked();
	wrd.f(
		unitReceive->basicSetting[iAddr]
		)->bit6=b;
	unitReceive->basicSetting[iAddr]=wrd.f();
	unitSend->basicSetting[iAddr]=wrd.f();
	return;
}

void TabCust::slChBoMet2UseSAC()
{
	int iAddr =67;
	iAddr=iAddrMet2Base+3;						//66+1;
	bool b;
	b=ui.chBoMet2UseSAC->isChecked();
	wrd.f(
		unitReceive->basicSetting[iAddr]
		)->bit4=b;
	unitReceive->basicSetting[iAddr]=wrd.f();
	unitSend->basicSetting[iAddr]=wrd.f();
	return;
}

void TabCust::slChBoMet2UseSIC()
{
	int iAddr =67;
	iAddr=iAddrMet2Base+3;						//66+1;
	bool b;
	b=ui.chBoMet2UseSIC->isChecked();
	wrd.f(
		unitReceive->basicSetting[iAddr]
		)->bit5=b;
	unitReceive->basicSetting[iAddr]=wrd.f();
	unitSend->basicSetting[iAddr]=wrd.f();
	return;
}


void TabCust::slLiEdMet2SIC()
{
//66
	int iAddr = 66;
	iAddr=iAddrMet2Base+2;						//66;
	PLineEdit* lineEdit = ui.liEdMet2SIC;
	Unn unn;
	int b1,b2;uchar ch1;
	QString str1,str2;
	str1=lineEdit->text();
	b1=str1.toInt();
	b1 = b1>0xff ? 0xff : b1;
	b1 &= 0xff;
	ch1=(uchar)b1;
	lineEdit->setText(QString("%1").arg(b1));
	unn.uShU[0]=unitReceive->basicSetting[iAddr];
	unn.ubU[1] = ch1;
	b2=unn.uShU[0];
	unitReceive->basicSetting[iAddr]=b2;
	unitSend->basicSetting[iAddr]=b2;
}
void TabCust::slLiEdMet2SAC()
{
//66
	int iAddr = 66;
	iAddr=iAddrMet2Base+2;						//66;
	PLineEdit* lineEdit = ui.liEdMet2SAC;
	Unn unn;
	int b1,b2;uchar ch1;
	QString str1,str2;
	str1=lineEdit->text();
	b1=str1.toInt();
	b1 = b1>0xff ? 0xff : b1;
	b1 &= 0xff;
	ch1=(uchar)b1;
	lineEdit->setText(QString("%1").arg(b1));
	unn.uShU[0]=unitReceive->basicSetting[iAddr];
	unn.ubU[0] = ch1;
	b2=unn.uShU[0];
	unitReceive->basicSetting[iAddr]=b2;
	unitSend->basicSetting[iAddr]=b2;
}
void TabCust::slLiEdMet2NameEP()
{
	int iAddr = 68;
	iAddr=iAddrMet2Base+4;						//68;
	PLineEdit* lineEdit = ui.liEdMet2NameEP;
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
void TabCust::slLiEdMet2FirstCourse()
{
	int iAddr = 68;
	iAddr=iAddrMet2Base+12;						//68;
	PLineEdit* lineEdit = ui.liEdMet2FirstCourse;
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

	b1 = b1 > 2 ? 3 : b1;	
	ushort ua[2];
	memset(ua, 0, sizeof(ua));
	memcpy(ua, str1.toAscii().constData(), b1);

	///*
	for(int i=0;i<2;i++)
	{
		unitReceive->basicSetting[iAddr+i]=ua[i];
		unitSend->basicSetting[iAddr+i]=ua[i];
	}
}
void TabCust::slLiEdMet2SecondCourse()
{
	int iAddr = 68;
	iAddr=iAddrMet2Base+14;						//68;
	PLineEdit* lineEdit = ui.liEdMet2SecondCourse;
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

	b1 = b1 > 2 ? 3 : b1;	
	ushort ua[2];
	memset(ua, 0, sizeof(ua));
	memcpy(ua, str1.toAscii().constData(), b1);

	///*
	for(int i=0;i<2;i++)
	{
		unitReceive->basicSetting[iAddr+i]=ua[i];
		unitSend->basicSetting[iAddr+i]=ua[i];
	}
}
//end Met2::::::::::::::РЛС1
//Met3::::::::::::::РЛС1
void TabCust::slCoBoMet3Num(int index)
{
//	if(ui.coBoMet3Num->hasFocus()&&index<8)
	{
		int iAddr =64;
		iAddr=iAddrMet3Base+0;						//64;
		wrd.f(unitReceive->basicSetting[iAddr]);
		wrdWr.f(index);
		wrd.s.bit0=wrdWr.s.bit0;
		wrd.s.bit1=wrdWr.s.bit1;
		wrd.s.bit2=wrdWr.s.bit2;
		unitReceive->basicSetting[iAddr]=wrd.f();
		unitSend->basicSetting[iAddr]=wrd.f();
	}
	return;
}

void TabCust::slCoBoMet3LedNum(int index)
{
	if(ui.coBoMet3LedNum->hasFocus()&&index<11)
	{
		int iAddr =64;
		iAddr=iAddrMet3Base+0;						//64;
		wrd.f(unitReceive->basicSetting[iAddr]);
		wrdWr.f(index);
		wrd.s.bit3=wrdWr.s.bit0;
		wrd.s.bit4=wrdWr.s.bit1;
		wrd.s.bit5=wrdWr.s.bit2;
		wrd.s.bit6=wrdWr.s.bit3;
		unitReceive->basicSetting[iAddr]=wrd.f();
		unitSend->basicSetting[iAddr]=wrd.f();
	}
	return;
}
void TabCust::slCoBoMet3Prot(int index)
{
	if(ui.coBoMet3Prot->hasFocus()&&index<11)
	{
		int iAddr =64;
		iAddr=iAddrMet3Base+0;						//64;
		wrd.f(unitReceive->basicSetting[iAddr]);
		wrdWr.f(index);
		wrd.s.bit7=wrdWr.s.bit0;
		wrd.s.bit8=wrdWr.s.bit1;
		wrd.s.bit9=wrdWr.s.bit2;
		wrd.s.bit10=wrdWr.s.bit3;
		wrd.s.bit11=wrdWr.s.bit4;
		unitReceive->basicSetting[iAddr]=wrd.f();
		unitSend->basicSetting[iAddr]=wrd.f();
	}
	return;
}
void TabCust::slGrBoMet3()
{
	int iAddr =64;
	iAddr=iAddrMet3Base+0;						//64;
	bool b;
	b=ui.grBoMet3->isChecked();
	wrd.f(
		unitReceive->basicSetting[iAddr]
		)->bit15=b;
	unitReceive->basicSetting[iAddr]=wrd.f();
	unitSend->basicSetting[iAddr]=wrd.f();
	return;
}
void TabCust::slCoBoMet3Port(int index)
{
	if(ui.coBoMet3Port->hasFocus()&&index<11)
	{
		int iAddr =67;
		iAddr=iAddrMet3Base+3;						//66+1;
		wrd.f(unitReceive->basicSetting[iAddr]);
		wrdWr.f(index);
		wrd.s.bit0=wrdWr.s.bit0;
		wrd.s.bit1=wrdWr.s.bit1;
		wrd.s.bit2=wrdWr.s.bit2;
		wrd.s.bit3=wrdWr.s.bit3;
		unitReceive->basicSetting[iAddr]=wrd.f();
		unitSend->basicSetting[iAddr]=wrd.f();
	}
	return;
}

void TabCust::slChBoMet3UsePort()
{
	int iAddr =67;
	iAddr=iAddrMet3Base+3;						//66+1;
	bool b;
	b=ui.chBoMet3UsePort->isChecked();
	wrd.f(
		unitReceive->basicSetting[iAddr]
		)->bit6=b;
	unitReceive->basicSetting[iAddr]=wrd.f();
	unitSend->basicSetting[iAddr]=wrd.f();
	return;
}

void TabCust::slChBoMet3UseSAC()
{
	int iAddr =67;
	iAddr=iAddrMet3Base+3;						//66+1;
	bool b;
	b=ui.chBoMet3UseSAC->isChecked();
	wrd.f(
		unitReceive->basicSetting[iAddr]
		)->bit4=b;
	unitReceive->basicSetting[iAddr]=wrd.f();
	unitSend->basicSetting[iAddr]=wrd.f();
	return;
}

void TabCust::slChBoMet3UseSIC()
{
	int iAddr =67;
	iAddr=iAddrMet3Base+3;						//66+1;
	bool b;
	b=ui.chBoMet3UseSIC->isChecked();
	wrd.f(
		unitReceive->basicSetting[iAddr]
		)->bit5=b;
	unitReceive->basicSetting[iAddr]=wrd.f();
	unitSend->basicSetting[iAddr]=wrd.f();
	return;
}


void TabCust::slLiEdMet3SIC()
{
//66
	int iAddr = 66;
	iAddr=iAddrMet3Base+2;						//66;
	PLineEdit* lineEdit = ui.liEdMet3SIC;
	Unn unn;
	int b1,b2;uchar ch1;
	QString str1,str2;
	str1=lineEdit->text();
	b1=str1.toInt();
	b1 = b1>0xff ? 0xff : b1;
	b1 &= 0xff;
	ch1=(uchar)b1;
	lineEdit->setText(QString("%1").arg(b1));
	unn.uShU[0]=unitReceive->basicSetting[iAddr];
	unn.ubU[1] = ch1;
	b2=unn.uShU[0];
	unitReceive->basicSetting[iAddr]=b2;
	unitSend->basicSetting[iAddr]=b2;
}
void TabCust::slLiEdMet3SAC()
{
//66
	int iAddr = 66;
	iAddr=iAddrMet3Base+2;						//66;
	PLineEdit* lineEdit = ui.liEdMet3SAC;
	Unn unn;
	int b1,b2;uchar ch1;
	QString str1,str2;
	str1=lineEdit->text();
	b1=str1.toInt();
	b1 = b1>0xff ? 0xff : b1;
	b1 &= 0xff;
	ch1=(uchar)b1;
	lineEdit->setText(QString("%1").arg(b1));
	unn.uShU[0]=unitReceive->basicSetting[iAddr];
	unn.ubU[0] = ch1;
	b2=unn.uShU[0];
	unitReceive->basicSetting[iAddr]=b2;
	unitSend->basicSetting[iAddr]=b2;
}
void TabCust::slLiEdMet3NameEP()
{
	int iAddr = 68;
	iAddr=iAddrMet3Base+4;						//68;
	PLineEdit* lineEdit = ui.liEdMet3NameEP;
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
void TabCust::slLiEdMet3FirstCourse()
{
	int iAddr = 68;
	iAddr=iAddrMet3Base+12;						//68;
	PLineEdit* lineEdit = ui.liEdMet3FirstCourse;
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

	b1 = b1 > 2 ? 3 : b1;	
	ushort ua[2];
	memset(ua, 0, sizeof(ua));
	memcpy(ua, str1.toAscii().constData(), b1);

	///*
	for(int i=0;i<2;i++)
	{
		unitReceive->basicSetting[iAddr+i]=ua[i];
		unitSend->basicSetting[iAddr+i]=ua[i];
	}
}
void TabCust::slLiEdMet3SecondCourse()
{
	int iAddr = 68;
	iAddr=iAddrMet3Base+14;						//68;
	PLineEdit* lineEdit = ui.liEdMet3SecondCourse;
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

	b1 = b1 > 2 ? 3 : b1;	
	ushort ua[2];
	memset(ua, 0, sizeof(ua));
	memcpy(ua, str1.toAscii().constData(), b1);

	///*
	for(int i=0;i<2;i++)
	{
		unitReceive->basicSetting[iAddr+i]=ua[i];
		unitSend->basicSetting[iAddr+i]=ua[i];
	}
}
//end Met3::::::::::::::РЛС1
//Met4::::::::::::::РЛС1
void TabCust::slCoBoMet4Num(int index)
{
//	if(ui.coBoMet4Num->hasFocus()&&index<8)
	{
		int iAddr =64;
		iAddr=iAddrMet4Base+0;						//64;
		wrd.f(unitReceive->basicSetting[iAddr]);
		wrdWr.f(index);
		wrd.s.bit0=wrdWr.s.bit0;
		wrd.s.bit1=wrdWr.s.bit1;
		wrd.s.bit2=wrdWr.s.bit2;
		unitReceive->basicSetting[iAddr]=wrd.f();
		unitSend->basicSetting[iAddr]=wrd.f();
	}
	return;
}

void TabCust::slCoBoMet4LedNum(int index)
{
	if(ui.coBoMet4LedNum->hasFocus()&&index<11)
	{
		int iAddr =64;
		iAddr=iAddrMet4Base+0;						//64;
		wrd.f(unitReceive->basicSetting[iAddr]);
		wrdWr.f(index);
		wrd.s.bit3=wrdWr.s.bit0;
		wrd.s.bit4=wrdWr.s.bit1;
		wrd.s.bit5=wrdWr.s.bit2;
		wrd.s.bit6=wrdWr.s.bit3;
		unitReceive->basicSetting[iAddr]=wrd.f();
		unitSend->basicSetting[iAddr]=wrd.f();
	}
	return;
}
void TabCust::slCoBoMet4Prot(int index)
{
	if(ui.coBoMet4Prot->hasFocus()&&index<11)
	{
		int iAddr =64;
		iAddr=iAddrMet4Base+0;						//64;
		wrd.f(unitReceive->basicSetting[iAddr]);
		wrdWr.f(index);
		wrd.s.bit7=wrdWr.s.bit0;
		wrd.s.bit8=wrdWr.s.bit1;
		wrd.s.bit9=wrdWr.s.bit2;
		wrd.s.bit10=wrdWr.s.bit3;
		wrd.s.bit11=wrdWr.s.bit4;
		unitReceive->basicSetting[iAddr]=wrd.f();
		unitSend->basicSetting[iAddr]=wrd.f();
	}
	return;
}
void TabCust::slGrBoMet4()
{
	int iAddr =64;
	iAddr=iAddrMet4Base+0;						//64;
	bool b;
	b=ui.grBoMet4->isChecked();
	wrd.f(
		unitReceive->basicSetting[iAddr]
		)->bit15=b;
	unitReceive->basicSetting[iAddr]=wrd.f();
	unitSend->basicSetting[iAddr]=wrd.f();
	return;
}
void TabCust::slCoBoMet4Port(int index)
{
	if(ui.coBoMet4Port->hasFocus()&&index<11)
	{
		int iAddr =67;
		iAddr=iAddrMet4Base+3;						//66+1;
		wrd.f(unitReceive->basicSetting[iAddr]);
		wrdWr.f(index);
		wrd.s.bit0=wrdWr.s.bit0;
		wrd.s.bit1=wrdWr.s.bit1;
		wrd.s.bit2=wrdWr.s.bit2;
		wrd.s.bit3=wrdWr.s.bit3;
		unitReceive->basicSetting[iAddr]=wrd.f();
		unitSend->basicSetting[iAddr]=wrd.f();
	}
	return;
}

void TabCust::slChBoMet4UsePort()
{
	int iAddr =67;
	iAddr=iAddrMet4Base+3;						//66+1;
	bool b;
	b=ui.chBoMet4UsePort->isChecked();
	wrd.f(
		unitReceive->basicSetting[iAddr]
		)->bit6=b;
	unitReceive->basicSetting[iAddr]=wrd.f();
	unitSend->basicSetting[iAddr]=wrd.f();
	return;
}

void TabCust::slChBoMet4UseSAC()
{
	int iAddr =67;
	iAddr=iAddrMet4Base+3;						//66+1;
	bool b;
	b=ui.chBoMet4UseSAC->isChecked();
	wrd.f(
		unitReceive->basicSetting[iAddr]
		)->bit4=b;
	unitReceive->basicSetting[iAddr]=wrd.f();
	unitSend->basicSetting[iAddr]=wrd.f();
	return;
}

void TabCust::slChBoMet4UseSIC()
{
	int iAddr =67;
	iAddr=iAddrMet4Base+3;						//66+1;
	bool b;
	b=ui.chBoMet4UseSIC->isChecked();
	wrd.f(
		unitReceive->basicSetting[iAddr]
		)->bit5=b;
	unitReceive->basicSetting[iAddr]=wrd.f();
	unitSend->basicSetting[iAddr]=wrd.f();
	return;
}


void TabCust::slLiEdMet4SIC()
{
//66
	int iAddr = 66;
	iAddr=iAddrMet4Base+2;						//66;
	PLineEdit* lineEdit = ui.liEdMet4SIC;
	Unn unn;
	int b1,b2;uchar ch1;
	QString str1,str2;
	str1=lineEdit->text();
	b1=str1.toInt();
	b1 = b1>0xff ? 0xff : b1;
	b1 &= 0xff;
	ch1=(uchar)b1;
	lineEdit->setText(QString("%1").arg(b1));
	unn.uShU[0]=unitReceive->basicSetting[iAddr];
	unn.ubU[1] = ch1;
	b2=unn.uShU[0];
	unitReceive->basicSetting[iAddr]=b2;
	unitSend->basicSetting[iAddr]=b2;
}
void TabCust::slLiEdMet4SAC()
{
//66
	int iAddr = 66;
	iAddr=iAddrMet4Base+2;						//66;
	PLineEdit* lineEdit = ui.liEdMet4SAC;
	Unn unn;
	int b1,b2;uchar ch1;
	QString str1,str2;
	str1=lineEdit->text();
	b1=str1.toInt();
	b1 = b1>0xff ? 0xff : b1;
	b1 &= 0xff;
	ch1=(uchar)b1;
	lineEdit->setText(QString("%1").arg(b1));
	unn.uShU[0]=unitReceive->basicSetting[iAddr];
	unn.ubU[0] = ch1;
	b2=unn.uShU[0];
	unitReceive->basicSetting[iAddr]=b2;
	unitSend->basicSetting[iAddr]=b2;
}
void TabCust::slLiEdMet4NameEP()
{
	int iAddr = 68;
	iAddr=iAddrMet4Base+4;						//68;
	PLineEdit* lineEdit = ui.liEdMet4NameEP;
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
void TabCust::slLiEdMet4FirstCourse()
{
	int iAddr = 68;
	iAddr=iAddrMet4Base+12;						//68;
	PLineEdit* lineEdit = ui.liEdMet4FirstCourse;
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

	b1 = b1 > 2 ? 3 : b1;	
	ushort ua[2];
	memset(ua, 0, sizeof(ua));
	memcpy(ua, str1.toAscii().constData(), b1);

	///*
	for(int i=0;i<2;i++)
	{
		unitReceive->basicSetting[iAddr+i]=ua[i];
		unitSend->basicSetting[iAddr+i]=ua[i];
	}
}
void TabCust::slLiEdMet4SecondCourse()
{
	int iAddr = 68;
	iAddr=iAddrMet4Base+14;						//68;
	PLineEdit* lineEdit = ui.liEdMet4SecondCourse;
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

	b1 = b1 > 2 ? 3 : b1;	
	ushort ua[2];
	memset(ua, 0, sizeof(ua));
	memcpy(ua, str1.toAscii().constData(), b1);

	///*
	for(int i=0;i<2;i++)
	{
		unitReceive->basicSetting[iAddr+i]=ua[i];
		unitSend->basicSetting[iAddr+i]=ua[i];
	}
}
//end Met4::::::::::::::РЛС1
//Sev1::::::::::::::РЛС1
void TabCust::slLiEdSev1Name()
{
	int iAddr = 68;
	iAddr=iAddrSev1Base+4;						//68;
	PLineEdit* lineEdit = ui.liEdSev1Name;
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
void TabCust::slCoBoSev1Num(int index)
{
	if(ui.coBoSev1Num->hasFocus()&&index<8)
	{
		int iAddr =64;
		iAddr=iAddrSev1Base+0;						//64;
		wrd.f(unitReceive->basicSetting[iAddr]);
		wrdWr.f(index);
		wrd.s.bit0=wrdWr.s.bit0;
		wrd.s.bit1=wrdWr.s.bit1;
		wrd.s.bit2=wrdWr.s.bit2;
		unitReceive->basicSetting[iAddr]=wrd.f();
		unitSend->basicSetting[iAddr]=wrd.f();
	}
	return;
}

void TabCust::slCoBoSev1LedNum(int index)
{
	if(ui.coBoSev1LedNum->hasFocus()&&index<11)
	{
		int iAddr =64;
		iAddr=iAddrSev1Base+0;						//64;
		wrd.f(unitReceive->basicSetting[iAddr]);
		wrdWr.f(index);
		wrd.s.bit3=wrdWr.s.bit0;
		wrd.s.bit4=wrdWr.s.bit1;
		wrd.s.bit5=wrdWr.s.bit2;
		wrd.s.bit6=wrdWr.s.bit3;
		unitReceive->basicSetting[iAddr]=wrd.f();
		unitSend->basicSetting[iAddr]=wrd.f();
	}
	return;
}
void TabCust::slCoBoSev1Prot(int index)
{
	if(ui.coBoSev1Prot->hasFocus()&&index<11)
	{
		int iAddr =64;
		iAddr=iAddrSev1Base+0;						//64;
		wrd.f(unitReceive->basicSetting[iAddr]);
		wrdWr.f(index);
		wrd.s.bit7=wrdWr.s.bit0;
		wrd.s.bit8=wrdWr.s.bit1;
		wrd.s.bit9=wrdWr.s.bit2;
		wrd.s.bit10=wrdWr.s.bit3;
		wrd.s.bit11=wrdWr.s.bit4;
		unitReceive->basicSetting[iAddr]=wrd.f();
		unitSend->basicSetting[iAddr]=wrd.f();
	}
	return;
}
void TabCust::slGrBoSev1()
{
	int iAddr =64;
	iAddr=iAddrSev1Base+0;						//64;
	bool b;
	b=ui.grBoSev1->isChecked();
	wrd.f(
		unitReceive->basicSetting[iAddr]
		)->bit15=b;
	unitReceive->basicSetting[iAddr]=wrd.f();
	unitSend->basicSetting[iAddr]=wrd.f();
	return;
}
void TabCust::slCoBoSev1Port(int index)
{
	if(ui.coBoSev1Port->hasFocus()&&index<11)
	{
		int iAddr =67;
		iAddr=iAddrSev1Base+3;						//66+1;
		wrd.f(unitReceive->basicSetting[iAddr]);
		wrdWr.f(index);
		wrd.s.bit0=wrdWr.s.bit0;
		wrd.s.bit1=wrdWr.s.bit1;
		wrd.s.bit2=wrdWr.s.bit2;
		wrd.s.bit3=wrdWr.s.bit3;
		unitReceive->basicSetting[iAddr]=wrd.f();
		unitSend->basicSetting[iAddr]=wrd.f();
	}
	return;
}

void TabCust::slChBoSev1UsePort()
{
	int iAddr =67;
	iAddr=iAddrSev1Base+3;						//66+1;
	bool b;
	b=ui.chBoSev1UsePort->isChecked();
	wrd.f(
		unitReceive->basicSetting[iAddr]
		)->bit6=b;
	unitReceive->basicSetting[iAddr]=wrd.f();
	unitSend->basicSetting[iAddr]=wrd.f();
	return;
}

void TabCust::slChBoSev1UseSAC()
{
	int iAddr =67;
	iAddr=iAddrSev1Base+3;						//66+1;
	bool b;
	b=ui.chBoSev1UseSAC->isChecked();
	wrd.f(
		unitReceive->basicSetting[iAddr]
		)->bit4=b;
	unitReceive->basicSetting[iAddr]=wrd.f();
	unitSend->basicSetting[iAddr]=wrd.f();
	return;
}

void TabCust::slChBoSev1UseSIC()
{
	int iAddr =67;
	iAddr=iAddrSev1Base+3;						//66+1;
	bool b;
	b=ui.chBoSev1UseSIC->isChecked();
	wrd.f(
		unitReceive->basicSetting[iAddr]
		)->bit5=b;
	unitReceive->basicSetting[iAddr]=wrd.f();
	unitSend->basicSetting[iAddr]=wrd.f();
	return;
}


void TabCust::slLiEdSev1SIC()
{
//66
	int iAddr = 66;
	iAddr=iAddrSev1Base+2;						//66;
	PLineEdit* lineEdit = ui.liEdSev1SIC;
	Unn unn;
	int b1,b2;uchar ch1;
	QString str1,str2;
	str1=lineEdit->text();
	b1=str1.toInt();
	b1 = b1>0xff ? 0xff : b1;
	b1 &= 0xff;
	ch1=(uchar)b1;
	lineEdit->setText(QString("%1").arg(b1));
	unn.uShU[0]=unitReceive->basicSetting[iAddr];
	unn.ubU[1] = ch1;
	b2=unn.uShU[0];
	unitReceive->basicSetting[iAddr]=b2;
	unitSend->basicSetting[iAddr]=b2;
}
void TabCust::slLiEdSev1SAC()
{
//66
	int iAddr = 66;
	iAddr=iAddrSev1Base+2;						//66;
	PLineEdit* lineEdit = ui.liEdSev1SAC;
	Unn unn;
	int b1,b2;uchar ch1;
	QString str1,str2;
	str1=lineEdit->text();
	b1=str1.toInt();
	b1 = b1>0xff ? 0xff : b1;
	b1 &= 0xff;
	ch1=(uchar)b1;
	lineEdit->setText(QString("%1").arg(b1));
	unn.uShU[0]=unitReceive->basicSetting[iAddr];
	unn.ubU[0] = ch1;
	b2=unn.uShU[0];
	unitReceive->basicSetting[iAddr]=b2;
	unitSend->basicSetting[iAddr]=b2;
}
//end Sev1::::::::::::::РЛС1
//Sev2::::::::::::::РЛС1
void TabCust::slLiEdSev2Name()
{
	int iAddr = 68;
	iAddr=iAddrSev2Base+4;						//68;
	PLineEdit* lineEdit = ui.liEdSev2Name;
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
void TabCust::slCoBoSev2Num(int index)
{
	if(ui.coBoSev2Num->hasFocus()&&index<8)
	{
		int iAddr =64;
		iAddr=iAddrSev2Base+0;						//64;
		wrd.f(unitReceive->basicSetting[iAddr]);
		wrdWr.f(index);
		wrd.s.bit0=wrdWr.s.bit0;
		wrd.s.bit1=wrdWr.s.bit1;
		wrd.s.bit2=wrdWr.s.bit2;
		unitReceive->basicSetting[iAddr]=wrd.f();
		unitSend->basicSetting[iAddr]=wrd.f();
	}
	return;
}

void TabCust::slCoBoSev2LedNum(int index)
{
	if(ui.coBoSev2LedNum->hasFocus()&&index<11)
	{
		int iAddr =64;
		iAddr=iAddrSev2Base+0;						//64;
		wrd.f(unitReceive->basicSetting[iAddr]);
		wrdWr.f(index);
		wrd.s.bit3=wrdWr.s.bit0;
		wrd.s.bit4=wrdWr.s.bit1;
		wrd.s.bit5=wrdWr.s.bit2;
		wrd.s.bit6=wrdWr.s.bit3;
		unitReceive->basicSetting[iAddr]=wrd.f();
		unitSend->basicSetting[iAddr]=wrd.f();
	}
	return;
}
void TabCust::slCoBoSev2Prot(int index)
{
	if(ui.coBoSev2Prot->hasFocus()&&index<11)
	{
		int iAddr =64;
		iAddr=iAddrSev2Base+0;						//64;
		wrd.f(unitReceive->basicSetting[iAddr]);
		wrdWr.f(index);
		wrd.s.bit7=wrdWr.s.bit0;
		wrd.s.bit8=wrdWr.s.bit1;
		wrd.s.bit9=wrdWr.s.bit2;
		wrd.s.bit10=wrdWr.s.bit3;
		wrd.s.bit11=wrdWr.s.bit4;
		unitReceive->basicSetting[iAddr]=wrd.f();
		unitSend->basicSetting[iAddr]=wrd.f();
	}
	return;
}
void TabCust::slGrBoSev2()
{
	int iAddr =64;
	iAddr=iAddrSev2Base+0;						//64;
	bool b;
	b=ui.grBoSev2->isChecked();
	wrd.f(
		unitReceive->basicSetting[iAddr]
		)->bit15=b;
	unitReceive->basicSetting[iAddr]=wrd.f();
	unitSend->basicSetting[iAddr]=wrd.f();
	return;
}
void TabCust::slCoBoSev2Port(int index)
{
	if(ui.coBoSev2Port->hasFocus()&&index<11)
	{
		int iAddr =67;
		iAddr=iAddrSev2Base+3;						//66+1;
		wrd.f(unitReceive->basicSetting[iAddr]);
		wrdWr.f(index);
		wrd.s.bit0=wrdWr.s.bit0;
		wrd.s.bit1=wrdWr.s.bit1;
		wrd.s.bit2=wrdWr.s.bit2;
		wrd.s.bit3=wrdWr.s.bit3;
		unitReceive->basicSetting[iAddr]=wrd.f();
		unitSend->basicSetting[iAddr]=wrd.f();
	}
	return;
}

void TabCust::slChBoSev2UsePort()
{
	int iAddr =67;
	iAddr=iAddrSev2Base+3;						//66+1;
	bool b;
	b=ui.chBoSev2UsePort->isChecked();
	wrd.f(
		unitReceive->basicSetting[iAddr]
		)->bit6=b;
	unitReceive->basicSetting[iAddr]=wrd.f();
	unitSend->basicSetting[iAddr]=wrd.f();
	return;
}

void TabCust::slChBoSev2UseSAC()
{
	int iAddr =67;
	iAddr=iAddrSev2Base+3;						//66+1;
	bool b;
	b=ui.chBoSev2UseSAC->isChecked();
	wrd.f(
		unitReceive->basicSetting[iAddr]
		)->bit4=b;
	unitReceive->basicSetting[iAddr]=wrd.f();
	unitSend->basicSetting[iAddr]=wrd.f();
	return;
}

void TabCust::slChBoSev2UseSIC()
{
	int iAddr =67;
	iAddr=iAddrSev2Base+3;						//66+1;
	bool b;
	b=ui.chBoSev2UseSIC->isChecked();
	wrd.f(
		unitReceive->basicSetting[iAddr]
		)->bit5=b;
	unitReceive->basicSetting[iAddr]=wrd.f();
	unitSend->basicSetting[iAddr]=wrd.f();
	return;
}


void TabCust::slLiEdSev2SIC()
{
//66
	int iAddr = 66;
	iAddr=iAddrSev2Base+2;						//66;
	PLineEdit* lineEdit = ui.liEdSev2SIC;
	Unn unn;
	int b1,b2;uchar ch1;
	QString str1,str2;
	str1=lineEdit->text();
	b1=str1.toInt();
	b1 = b1>0xff ? 0xff : b1;
	b1 &= 0xff;
	ch1=(uchar)b1;
	lineEdit->setText(QString("%1").arg(b1));
	unn.uShU[0]=unitReceive->basicSetting[iAddr];
	unn.ubU[1] = ch1;
	b2=unn.uShU[0];
	unitReceive->basicSetting[iAddr]=b2;
	unitSend->basicSetting[iAddr]=b2;
}
void TabCust::slLiEdSev2SAC()
{
//66
	int iAddr = 66;
	iAddr=iAddrSev2Base+2;						//66;
	PLineEdit* lineEdit = ui.liEdSev2SAC;
	Unn unn;
	int b1,b2;uchar ch1;
	QString str1,str2;
	str1=lineEdit->text();
	b1=str1.toInt();
	b1 = b1>0xff ? 0xff : b1;
	b1 &= 0xff;
	ch1=(uchar)b1;
	lineEdit->setText(QString("%1").arg(b1));
	unn.uShU[0]=unitReceive->basicSetting[iAddr];
	unn.ubU[0] = ch1;
	b2=unn.uShU[0];
	unitReceive->basicSetting[iAddr]=b2;
	unitSend->basicSetting[iAddr]=b2;
}
//end Sev2::::::::::::::РЛС1



void TabCust::updateDialogArpMetSev()
{
//
	int iAddr=0;
	ushort a1,a2;
	
 	
    QString str,strWhole,str2;
    char ch;int k0;
	char nameSource[16];
	Unn unn;

//Met0::::::::::::::АРП 1
//236…243  название источника 16 байт
	iAddr=iAddrMet0Base+0;						//234;
	memset(nameSource,0,sizeof(nameSource));
	for (int i=0;i<16;i++)
	{
		k0=i;
		if(i/2*2==i)
		{
			ch = firstChar(unitReceive->basicSetting[i/2+iAddr]);
			if(ch == 0x00) 
			{
				k0--;
				break;
			}
			nameSource[i]=ch;
		}
		else
		{
			ch  = secondChar(unitReceive->basicSetting[i/2+iAddr]);
			if(ch == 0x0)
			{
				k0--;
				break;
			}
			nameSource[i] = ch;
		}
	}
	str2 = QString::fromAscii(nameSource,k0+1);
	if(!ui.liEdMet0Name->hasFocus())
		ui.liEdMet0Name->setText(str2);
//234 Количество аэродромов
	iAddr=iAddrMet0Base+8;						//234;
	a1=unitReceive->basicSetting[iAddr];
	unn.uShU[0]=a1;
	a2=unn.ubU[1];
	str = QString("%1").arg(a2);
	if(!ui.liEdMet0QuantityEP->hasFocus())
		ui.liEdMet0QuantityEP->setText(str);
//Met1::::::::::::::АРП 1
//424..431 параметры источника
//		бит 15:	1 — порт разрешен
//	iAddrMet1Base=232;
	iAddr=iAddrMet1Base+0;						//232;
	ui.grBoMet1->setChecked(
		wrd.f(unitReceive->basicSetting[iAddr])->bit15);
	a1=unitReceive->basicSetting[iAddr];
	iAddr=iAddrMet1Base+0;						//232;
//биты 1,0:	номер устройства
	wrd.f(unitReceive->basicSetting[iAddr]);
	a1 = wrd.s.bit2*4+wrd.s.bit1*2+wrd.s.bit0;
//	ui.coBoMet1Num->setCurrentIndex(a1);	
//биты 6,3:	номер светодиода
	iAddr=iAddrMet1Base+0;						//232;
	wrd.f(unitReceive->basicSetting[iAddr]);
	a1 = wrd.s.bit6*8+wrd.s.bit5*4+wrd.s.bit4*2+wrd.s.bit3;
	ui.coBoMet1LedNum->setCurrentIndex(a1);	
//биты 11,7:	номер устройства
	wrd.f(unitReceive->basicSetting[iAddr]);
	a1 = wrd.s.bit11*16+wrd.s.bit10*8+wrd.s.bit9*4+wrd.s.bit8*2+wrd.s.bit7;
	ui.coBoMet1Prot->setCurrentIndex(a1);	
//234 биты 7...0 SAC
	iAddr=iAddrMet1Base+2;						//234;
	a1=unitReceive->basicSetting[iAddr];
	a1&=0xFF;
	str = QString("%1").arg(a1);
	if(!ui.liEdMet1SAC->hasFocus())
		ui.liEdMet1SAC->setText(str);
//234 биты 7...0 SIC
	iAddr=iAddrMet1Base+2;						//234;
	a1=unitReceive->basicSetting[iAddr];
	unn.uShU[0]=a1;
	a2=unn.ubU[1];
	str = QString("%1").arg(a2);
	if(!ui.liEdMet1SIC->hasFocus())
		ui.liEdMet1SIC->setText(str);
//234 - биты 19...16 номер порта приема
	//66+1 - 3210
	wrd.f(unitReceive->basicSetting[iAddr+1]);
	a1 = wrd.s.bit3*8+wrd.s.bit2*4+wrd.s.bit1*2+wrd.s.bit0;
	ui.coBoMet1Port->setCurrentIndex(a1);	
	

//234-бит 20:66+1-бит 4	использовать SAC для идентификации
	iAddr=iAddrMet1Base+3;						//234+1;
	ui.chBoMet1UseSAC->setChecked(
		wrd.f(unitReceive->basicSetting[iAddr])->bit4);
//234-бит 21:66+1-бит 5	использовать SIC для идентификации
	iAddr=iAddrMet1Base+3;						//234+1;
	ui.chBoMet1UseSIC->setChecked(
		wrd.f(unitReceive->basicSetting[iAddr])->bit5);
//234-бит 22:66+1-бит 6	использовать номер порта для идентификации
	iAddr=iAddrMet1Base+3;						//234+1;
	ui.chBoMet1UsePort->setChecked(
		wrd.f(unitReceive->basicSetting[iAddr])->bit6);
//404…411  название аэродрома 16 байт
	iAddr=iAddrMet1Base+4;						//404;
	memset(nameSource,0,sizeof(nameSource));
	for (int i=0;i<16;i++)
	{
		k0=i;
		if(i/2*2==i)
		{
			ch = firstChar(unitReceive->basicSetting[i/2+iAddr]);
			if(ch == 0x00) 
			{
				k0--;
				break;
			}
			nameSource[i]=ch;
		}
		else
		{
			ch  = secondChar(unitReceive->basicSetting[i/2+iAddr]);
			if(ch == 0x0)
			{
				k0--;
				break;
			}
			nameSource[i] = ch;
		}
	}
	str2 = QString::fromAscii(nameSource,k0+1);
	if(!ui.liEdMet1NameEP->hasFocus())
		ui.liEdMet1NameEP->setText(str2);
//412…413  идентификатор первого курса  3 байт
	iAddr=iAddrMet1Base+12;						//412;
	memset(nameSource,0,sizeof(nameSource));
	for (int i=0;i<3;i++)
	{
		k0=i;
		if(i/2*2==i)
		{
			ch = firstChar(unitReceive->basicSetting[i/2+iAddr]);
			if(ch == 0x00)
			{
				k0--;
				break;
			}
			nameSource[i]=ch;
		}
		else
		{
			ch  = secondChar(unitReceive->basicSetting[i/2+iAddr]);
			if(ch == 0x0)
			{
				k0--;
				break;
			}
			nameSource[i] = ch;
		}
	}
	str2 = QString::fromAscii(nameSource,k0+1);
	if(!ui.liEdMet1FirstCourse->hasFocus())
		ui.liEdMet1FirstCourse->setText(str2);
//414…415  идентификатор второго  курса  3 байт
	iAddr=iAddrMet1Base+14;						//414;
	memset(nameSource,0,sizeof(nameSource));
	for (int i=0;i<3;i++)
	{
		k0=i;
		if(i/2*2==i)
		{
			ch = firstChar(unitReceive->basicSetting[i/2+iAddr]);
			if(ch == 0x00)
			{
				k0--;
				break;
			}
			nameSource[i]=ch;
		}
		else
		{
			ch  = secondChar(unitReceive->basicSetting[i/2+iAddr]);
			if(ch == 0x0)
			{
				k0--;
				break;
			}
			nameSource[i] = ch;
		}
	}
	str2 = QString::fromAscii(nameSource,k0+1);
	if(!ui.liEdMet1SecondCourse->hasFocus())
		ui.liEdMet1SecondCourse->setText(str2);
//end Met1::::::::::::::АРП 1
//Met2::::::::::::::АРП 1
//232..233 параметры источника
//		бит 15:	1 — порт разрешен
//	iAddrMet2Base=232;
	iAddr=iAddrMet2Base+0;						//232;
	ui.grBoMet2->setChecked(
		wrd.f(unitReceive->basicSetting[iAddr])->bit15);
	a1=unitReceive->basicSetting[iAddr];
	iAddr=iAddrMet2Base+0;						//232;
//биты 1,0:	номер устройства
	wrd.f(unitReceive->basicSetting[iAddr]);
	a1 = wrd.s.bit2*4+wrd.s.bit1*2+wrd.s.bit0;
//	ui.coBoMet2Num->setCurrentIndex(a1);	
//биты 6,3:	номер светодиода
	iAddr=iAddrMet2Base+0;						//232;
	wrd.f(unitReceive->basicSetting[iAddr]);
	a1 = wrd.s.bit6*8+wrd.s.bit5*4+wrd.s.bit4*2+wrd.s.bit3;
	ui.coBoMet2LedNum->setCurrentIndex(a1);	
//биты 11,7:	номер устройства
	wrd.f(unitReceive->basicSetting[iAddr]);
	a1 = wrd.s.bit11*16+wrd.s.bit10*8+wrd.s.bit9*4+wrd.s.bit8*2+wrd.s.bit7;
	ui.coBoMet2Prot->setCurrentIndex(a1);	
//234 биты 7...0 SAC
	iAddr=iAddrMet2Base+2;						//234;
	a1=unitReceive->basicSetting[iAddr];
	a1&=0xFF;
	str = QString("%1").arg(a1);
	if(!ui.liEdMet2SAC->hasFocus())
		ui.liEdMet2SAC->setText(str);
//234 биты 7...0 SIC
	iAddr=iAddrMet2Base+2;						//234;
	a1=unitReceive->basicSetting[iAddr];
	unn.uShU[0]=a1;
	a2=unn.ubU[1];
	str = QString("%1").arg(a2);
	if(!ui.liEdMet2SIC->hasFocus())
		ui.liEdMet2SIC->setText(str);
//234 - биты 19...16 номер порта приема
	//66+1 - 3210
	wrd.f(unitReceive->basicSetting[iAddr+1]);
	a1 = wrd.s.bit3*8+wrd.s.bit2*4+wrd.s.bit1*2+wrd.s.bit0;
	ui.coBoMet2Port->setCurrentIndex(a1);	
	

//234-бит 20:66+1-бит 4	использовать SAC для идентификации
	iAddr=iAddrMet2Base+3;						//234+1;
	ui.chBoMet2UseSAC->setChecked(
		wrd.f(unitReceive->basicSetting[iAddr])->bit4);
//234-бит 21:66+1-бит 5	использовать SIC для идентификации
	iAddr=iAddrMet2Base+3;						//234+1;
	ui.chBoMet2UseSIC->setChecked(
		wrd.f(unitReceive->basicSetting[iAddr])->bit5);
//234-бит 22:66+1-бит 6	использовать номер порта для идентификации
	iAddr=iAddrMet2Base+3;						//234+1;
	ui.chBoMet2UsePort->setChecked(
		wrd.f(unitReceive->basicSetting[iAddr])->bit6);
//404…411  название аэродрома 16 байт
	iAddr=iAddrMet2Base+4;						//404;
	memset(nameSource,0,sizeof(nameSource));
	for (int i=0;i<16;i++)
	{
		k0=i;
		if(i/2*2==i)
		{
			ch = firstChar(unitReceive->basicSetting[i/2+iAddr]);
			if(ch == 0x00) 
			{
				k0--;
				break;
			}
			nameSource[i]=ch;
		}
		else
		{
			ch  = secondChar(unitReceive->basicSetting[i/2+iAddr]);
			if(ch == 0x0)
			{
				k0--;
				break;
			}
			nameSource[i] = ch;
		}
	}
	str2 = QString::fromAscii(nameSource,k0+1);
	if(!ui.liEdMet2NameEP->hasFocus())
		ui.liEdMet2NameEP->setText(str2);
//412…413  идентификатор первого курса  3 байт
	iAddr=iAddrMet2Base+12;						//412;
	memset(nameSource,0,sizeof(nameSource));
	for (int i=0;i<3;i++)
	{
		k0=i;
		if(i/2*2==i)
		{
			ch = firstChar(unitReceive->basicSetting[i/2+iAddr]);
			if(ch == 0x00)
			{
				k0--;
				break;
			}
			nameSource[i]=ch;
		}
		else
		{
			ch  = secondChar(unitReceive->basicSetting[i/2+iAddr]);
			if(ch == 0x0)
			{
				k0--;
				break;
			}
			nameSource[i] = ch;
		}
	}
	str2 = QString::fromAscii(nameSource,k0+1);
	if(!ui.liEdMet2FirstCourse->hasFocus())
		ui.liEdMet2FirstCourse->setText(str2);
//414…415  идентификатор второго  курса  3 байт
	iAddr=iAddrMet2Base+14;						//414;
	memset(nameSource,0,sizeof(nameSource));
	for (int i=0;i<3;i++)
	{
		k0=i;
		if(i/2*2==i)
		{
			ch = firstChar(unitReceive->basicSetting[i/2+iAddr]);
			if(ch == 0x00)
			{
				k0--;
				break;
			}
			nameSource[i]=ch;
		}
		else
		{
			ch  = secondChar(unitReceive->basicSetting[i/2+iAddr]);
			if(ch == 0x0)
			{
				k0--;
				break;
			}
			nameSource[i] = ch;
		}
	}
	str2 = QString::fromAscii(nameSource,k0+1);
	if(!ui.liEdMet2SecondCourse->hasFocus())
		ui.liEdMet2SecondCourse->setText(str2);
//end Met2::::::::::::::АРП 1
//Met3::::::::::::::АРП 1
//424..431 параметры источника
//		бит 15:	1 — порт разрешен
//	iAddrMet3Base=232;
	iAddr=iAddrMet3Base+0;						//232;
	ui.grBoMet3->setChecked(
		wrd.f(unitReceive->basicSetting[iAddr])->bit15);
	a1=unitReceive->basicSetting[iAddr];
	iAddr=iAddrMet3Base+0;						//232;
//биты 1,0:	номер устройства
	wrd.f(unitReceive->basicSetting[iAddr]);
	a1 = wrd.s.bit2*4+wrd.s.bit1*2+wrd.s.bit0;
//	ui.coBoMet3Num->setCurrentIndex(a1);	
//биты 6,3:	номер светодиода
	iAddr=iAddrMet3Base+0;						//232;
	wrd.f(unitReceive->basicSetting[iAddr]);
	a1 = wrd.s.bit6*8+wrd.s.bit5*4+wrd.s.bit4*2+wrd.s.bit3;
	ui.coBoMet3LedNum->setCurrentIndex(a1);	
//биты 11,7:	номер устройства
	wrd.f(unitReceive->basicSetting[iAddr]);
	a1 = wrd.s.bit11*16+wrd.s.bit10*8+wrd.s.bit9*4+wrd.s.bit8*2+wrd.s.bit7;
	ui.coBoMet3Prot->setCurrentIndex(a1);	
//234 биты 7...0 SAC
	iAddr=iAddrMet3Base+2;						//234;
	a1=unitReceive->basicSetting[iAddr];
	a1&=0xFF;
	str = QString("%1").arg(a1);
	if(!ui.liEdMet3SAC->hasFocus())
		ui.liEdMet3SAC->setText(str);
//234 биты 7...0 SIC
	iAddr=iAddrMet3Base+2;						//234;
	a1=unitReceive->basicSetting[iAddr];
	unn.uShU[0]=a1;
	a2=unn.ubU[1];
	str = QString("%1").arg(a2);
	if(!ui.liEdMet3SIC->hasFocus())
		ui.liEdMet3SIC->setText(str);
//234 - биты 19...16 номер порта приема
	//66+1 - 3210
	wrd.f(unitReceive->basicSetting[iAddr+1]);
	a1 = wrd.s.bit3*8+wrd.s.bit2*4+wrd.s.bit1*2+wrd.s.bit0;
	ui.coBoMet3Port->setCurrentIndex(a1);	
	

//234-бит 20:66+1-бит 4	использовать SAC для идентификации
	iAddr=iAddrMet3Base+3;						//234+1;
	ui.chBoMet3UseSAC->setChecked(
		wrd.f(unitReceive->basicSetting[iAddr])->bit4);
//234-бит 21:66+1-бит 5	использовать SIC для идентификации
	iAddr=iAddrMet3Base+3;						//234+1;
	ui.chBoMet3UseSIC->setChecked(
		wrd.f(unitReceive->basicSetting[iAddr])->bit5);
//234-бит 22:66+1-бит 6	использовать номер порта для идентификации
	iAddr=iAddrMet3Base+3;						//234+1;
	ui.chBoMet3UsePort->setChecked(
		wrd.f(unitReceive->basicSetting[iAddr])->bit6);
//404…411  название аэродрома 16 байт
	iAddr=iAddrMet3Base+4;						//404;
	memset(nameSource,0,sizeof(nameSource));
	for (int i=0;i<16;i++)
	{
		k0=i;
		if(i/2*2==i)
		{
			ch = firstChar(unitReceive->basicSetting[i/2+iAddr]);
			if(ch == 0x00) 
			{
				k0--;
				break;
			}
			nameSource[i]=ch;
		}
		else
		{
			ch  = secondChar(unitReceive->basicSetting[i/2+iAddr]);
			if(ch == 0x0)
			{
				k0--;
				break;
			}
			nameSource[i] = ch;
		}
	}
	str2 = QString::fromAscii(nameSource,k0+1);
	if(!ui.liEdMet3NameEP->hasFocus())
		ui.liEdMet3NameEP->setText(str2);
//412…413  идентификатор первого курса  3 байт
	iAddr=iAddrMet3Base+12;						//412;
	memset(nameSource,0,sizeof(nameSource));
	for (int i=0;i<3;i++)
	{
		k0=i;
		if(i/2*2==i)
		{
			ch = firstChar(unitReceive->basicSetting[i/2+iAddr]);
			if(ch == 0x00)
			{
				k0--;
				break;
			}
			nameSource[i]=ch;
		}
		else
		{
			ch  = secondChar(unitReceive->basicSetting[i/2+iAddr]);
			if(ch == 0x0)
			{
				k0--;
				break;
			}
			nameSource[i] = ch;
		}
	}
	str2 = QString::fromAscii(nameSource,k0+1);
	if(!ui.liEdMet3FirstCourse->hasFocus())
		ui.liEdMet3FirstCourse->setText(str2);
//414…415  идентификатор второго  курса  3 байт
	iAddr=iAddrMet3Base+14;						//414;
	memset(nameSource,0,sizeof(nameSource));
	for (int i=0;i<3;i++)
	{
		k0=i;
		if(i/2*2==i)
		{
			ch = firstChar(unitReceive->basicSetting[i/2+iAddr]);
			if(ch == 0x00)
			{
				k0--;
				break;
			}
			nameSource[i]=ch;
		}
		else
		{
			ch  = secondChar(unitReceive->basicSetting[i/2+iAddr]);
			if(ch == 0x0)
			{
				k0--;
				break;
			}
			nameSource[i] = ch;
		}
	}
	str2 = QString::fromAscii(nameSource,k0+1);
	if(!ui.liEdMet3SecondCourse->hasFocus())
		ui.liEdMet3SecondCourse->setText(str2);
//end Met3::::::::::::::АРП 1
//Met4::::::::::::::АРП 1
//424..431 параметры источника
//		бит 15:	1 — порт разрешен
//	iAddrMet4Base=232;
	iAddr=iAddrMet4Base+0;						//232;
	ui.grBoMet4->setChecked(
		wrd.f(unitReceive->basicSetting[iAddr])->bit15);
	a1=unitReceive->basicSetting[iAddr];
	iAddr=iAddrMet4Base+0;						//232;
//биты 1,0:	номер устройства
	wrd.f(unitReceive->basicSetting[iAddr]);
	a1 = wrd.s.bit2*4+wrd.s.bit1*2+wrd.s.bit0;
//	ui.coBoMet4Num->setCurrentIndex(a1);	
//биты 6,3:	номер светодиода
	iAddr=iAddrMet4Base+0;						//232;
	wrd.f(unitReceive->basicSetting[iAddr]);
	a1 = wrd.s.bit6*8+wrd.s.bit5*4+wrd.s.bit4*2+wrd.s.bit3;
	ui.coBoMet4LedNum->setCurrentIndex(a1);	
//биты 11,7:	номер устройства
	wrd.f(unitReceive->basicSetting[iAddr]);
	a1 = wrd.s.bit11*16+wrd.s.bit10*8+wrd.s.bit9*4+wrd.s.bit8*2+wrd.s.bit7;
	ui.coBoMet4Prot->setCurrentIndex(a1);	
//234 биты 7...0 SAC
	iAddr=iAddrMet4Base+2;						//234;
	a1=unitReceive->basicSetting[iAddr];
	a1&=0xFF;
	str = QString("%1").arg(a1);
	if(!ui.liEdMet4SAC->hasFocus())
		ui.liEdMet4SAC->setText(str);
//234 биты 7...0 SIC
	iAddr=iAddrMet4Base+2;						//234;
	a1=unitReceive->basicSetting[iAddr];
	unn.uShU[0]=a1;
	a2=unn.ubU[1];
	str = QString("%1").arg(a2);
	if(!ui.liEdMet4SIC->hasFocus())
		ui.liEdMet4SIC->setText(str);
//234 - биты 19...16 номер порта приема
	//66+1 - 3210
	wrd.f(unitReceive->basicSetting[iAddr+1]);
	a1 = wrd.s.bit3*8+wrd.s.bit2*4+wrd.s.bit1*2+wrd.s.bit0;
	ui.coBoMet4Port->setCurrentIndex(a1);	
	

//234-бит 20:66+1-бит 4	использовать SAC для идентификации
	iAddr=iAddrMet4Base+3;						//234+1;
	ui.chBoMet4UseSAC->setChecked(
		wrd.f(unitReceive->basicSetting[iAddr])->bit4);
//234-бит 21:66+1-бит 5	использовать SIC для идентификации
	iAddr=iAddrMet4Base+3;						//234+1;
	ui.chBoMet4UseSIC->setChecked(
		wrd.f(unitReceive->basicSetting[iAddr])->bit5);
//234-бит 22:66+1-бит 6	использовать номер порта для идентификации
	iAddr=iAddrMet4Base+3;						//234+1;
	ui.chBoMet4UsePort->setChecked(
		wrd.f(unitReceive->basicSetting[iAddr])->bit6);
//404…411  название аэродрома 16 байт
	iAddr=iAddrMet4Base+4;						//404;
	memset(nameSource,0,sizeof(nameSource));
	for (int i=0;i<16;i++)
	{
		k0=i;
		if(i/2*2==i)
		{
			ch = firstChar(unitReceive->basicSetting[i/2+iAddr]);
			if(ch == 0x00) 
			{
				k0--;
				break;
			}
			nameSource[i]=ch;
		}
		else
		{
			ch  = secondChar(unitReceive->basicSetting[i/2+iAddr]);
			if(ch == 0x0)
			{
				k0--;
				break;
			}
			nameSource[i] = ch;
		}
	}
	str2 = QString::fromAscii(nameSource,k0+1);
	if(!ui.liEdMet4NameEP->hasFocus())
		ui.liEdMet4NameEP->setText(str2);
//412…413  идентификатор первого курса  3 байт
	iAddr=iAddrMet4Base+12;						//412;
	memset(nameSource,0,sizeof(nameSource));
	for (int i=0;i<3;i++)
	{
		k0=i;
		if(i/2*2==i)
		{
			ch = firstChar(unitReceive->basicSetting[i/2+iAddr]);
			if(ch == 0x00)
			{
				k0--;
				break;
			}
			nameSource[i]=ch;
		}
		else
		{
			ch  = secondChar(unitReceive->basicSetting[i/2+iAddr]);
			if(ch == 0x0)
			{
				k0--;
				break;
			}
			nameSource[i] = ch;
		}
	}
	str2 = QString::fromAscii(nameSource,k0+1);
	if(!ui.liEdMet4FirstCourse->hasFocus())
		ui.liEdMet4FirstCourse->setText(str2);
//414…415  идентификатор второго  курса  3 байт
	iAddr=iAddrMet4Base+14;						//414;
	memset(nameSource,0,sizeof(nameSource));
	for (int i=0;i<3;i++)
	{
		k0=i;
		if(i/2*2==i)
		{
			ch = firstChar(unitReceive->basicSetting[i/2+iAddr]);
			if(ch == 0x00)
			{
				k0--;
				break;
			}
			nameSource[i]=ch;
		}
		else
		{
			ch  = secondChar(unitReceive->basicSetting[i/2+iAddr]);
			if(ch == 0x0)
			{
				k0--;
				break;
			}
			nameSource[i] = ch;
		}
	}
	str2 = QString::fromAscii(nameSource,k0+1);
	if(!ui.liEdMet4SecondCourse->hasFocus())
		ui.liEdMet4SecondCourse->setText(str2);
//end Met4::::::::::::::АРП 1
//Sev1::::::::::::::АРП 1
//232..233 параметры источника
//		бит 15:	1 — порт разрешен
//	iAddrSev1Base=232;
	iAddr=iAddrSev1Base+0;						//232;
	ui.grBoSev1->setChecked(
		wrd.f(unitReceive->basicSetting[iAddr])->bit15);
	a1=unitReceive->basicSetting[iAddr];
	iAddr=iAddrSev1Base+0;						//232;
//биты 1,0:	номер устройства
	wrd.f(unitReceive->basicSetting[iAddr]);
	a1 = wrd.s.bit2*4+wrd.s.bit1*2+wrd.s.bit0;
	ui.coBoSev1Num->setCurrentIndex(a1);	
//биты 6,3:	номер светодиода
	iAddr=iAddrSev1Base+0;						//232;
	wrd.f(unitReceive->basicSetting[iAddr]);
	a1 = wrd.s.bit6*8+wrd.s.bit5*4+wrd.s.bit4*2+wrd.s.bit3;
	ui.coBoSev1LedNum->setCurrentIndex(a1);	
//биты 11,7:	номер устройства
	wrd.f(unitReceive->basicSetting[iAddr]);
	a1 = wrd.s.bit11*16+wrd.s.bit10*8+wrd.s.bit9*4+wrd.s.bit8*2+wrd.s.bit7;
	ui.coBoSev1Prot->setCurrentIndex(a1);	
//234 биты 7...0 SAC
	iAddr=iAddrSev1Base+2;						//234;
	a1=unitReceive->basicSetting[iAddr];
	a1&=0xFF;
	str = QString("%1").arg(a1);
	if(!ui.liEdSev1SAC->hasFocus())
		ui.liEdSev1SAC->setText(str);
//234 биты 7...0 SIC
	iAddr=iAddrSev1Base+2;						//234;
	a1=unitReceive->basicSetting[iAddr];
	unn.uShU[0]=a1;
	a2=unn.ubU[1];
	str = QString("%1").arg(a2);
	if(!ui.liEdSev1SIC->hasFocus())
		ui.liEdSev1SIC->setText(str);
//234 - биты 19...16 номер порта приема
	//66+1 - 3210
	wrd.f(unitReceive->basicSetting[iAddr+1]);
	a1 = wrd.s.bit3*8+wrd.s.bit2*4+wrd.s.bit1*2+wrd.s.bit0;
	ui.coBoSev1Port->setCurrentIndex(a1);	
	

//234-бит 20:66+1-бит 4	использовать SAC для идентификации
	iAddr=iAddrSev1Base+3;						//234+1;
	ui.chBoSev1UseSAC->setChecked(
		wrd.f(unitReceive->basicSetting[iAddr])->bit4);
//234-бит 21:66+1-бит 5	использовать SIC для идентификации
	iAddr=iAddrSev1Base+3;						//234+1;
	ui.chBoSev1UseSIC->setChecked(
		wrd.f(unitReceive->basicSetting[iAddr])->bit5);
//234-бит 22:66+1-бит 6	использовать номер порта для идентификации
	iAddr=iAddrSev1Base+3;						//234+1;
	ui.chBoSev1UsePort->setChecked(
		wrd.f(unitReceive->basicSetting[iAddr])->bit6);
//236…243  название источника 16 байт
	iAddr=iAddrSev1Base+4;						//234;
	memset(nameSource,0,sizeof(nameSource));
	for (int i=0;i<16;i++)
	{
		k0=i;
		if(i/2*2==i)
		{
			ch = firstChar(unitReceive->basicSetting[i/2+iAddr]);
			if(ch == 0x00) 
			{
				k0--;
				break;
			}
			nameSource[i]=ch;
		}
		else
		{
			ch  = secondChar(unitReceive->basicSetting[i/2+iAddr]);
			if(ch == 0x0)
			{
				k0--;
				break;
			}
			nameSource[i] = ch;
		}
	}
	str2 = QString::fromAscii(nameSource,k0+1);
	if(!ui.liEdSev1Name->hasFocus())
		ui.liEdSev1Name->setText(str2);
//end Sev1::::::::::::::АРП 1
//Sev2::::::::::::::АРП 1
//232..233 параметры источника
//		бит 15:	1 — порт разрешен
//	iAddrSev2Base=232;
	iAddr=iAddrSev2Base+0;						//232;
	ui.grBoSev2->setChecked(
		wrd.f(unitReceive->basicSetting[iAddr])->bit15);
	a1=unitReceive->basicSetting[iAddr];
	iAddr=iAddrSev2Base+0;						//232;
//биты 1,0:	номер устройства
	wrd.f(unitReceive->basicSetting[iAddr]);
	a1 = wrd.s.bit2*4+wrd.s.bit1*2+wrd.s.bit0;
	ui.coBoSev2Num->setCurrentIndex(a1);	
//биты 6,3:	номер светодиода
	iAddr=iAddrSev2Base+0;						//232;
	wrd.f(unitReceive->basicSetting[iAddr]);
	a1 = wrd.s.bit6*8+wrd.s.bit5*4+wrd.s.bit4*2+wrd.s.bit3;
	ui.coBoSev2LedNum->setCurrentIndex(a1);	
//биты 11,7:	номер устройства
	wrd.f(unitReceive->basicSetting[iAddr]);
	a1 = wrd.s.bit11*16+wrd.s.bit10*8+wrd.s.bit9*4+wrd.s.bit8*2+wrd.s.bit7;
	ui.coBoSev2Prot->setCurrentIndex(a1);	
//234 биты 7...0 SAC
	iAddr=iAddrSev2Base+2;						//234;
	a1=unitReceive->basicSetting[iAddr];
	a1&=0xFF;
	str = QString("%1").arg(a1);
	if(!ui.liEdSev2SAC->hasFocus())
		ui.liEdSev2SAC->setText(str);
//234 биты 7...0 SIC
	iAddr=iAddrSev2Base+2;						//234;
	a1=unitReceive->basicSetting[iAddr];
	unn.uShU[0]=a1;
	a2=unn.ubU[1];
	str = QString("%1").arg(a2);
	if(!ui.liEdSev2SIC->hasFocus())
		ui.liEdSev2SIC->setText(str);
//234 - биты 19...16 номер порта приема
	//66+1 - 3210
	wrd.f(unitReceive->basicSetting[iAddr+1]);
	a1 = wrd.s.bit3*8+wrd.s.bit2*4+wrd.s.bit1*2+wrd.s.bit0;
	ui.coBoSev2Port->setCurrentIndex(a1);	
	

//234-бит 20:66+1-бит 4	использовать SAC для идентификации
	iAddr=iAddrSev2Base+3;						//234+1;
	ui.chBoSev2UseSAC->setChecked(
		wrd.f(unitReceive->basicSetting[iAddr])->bit4);
//234-бит 21:66+1-бит 5	использовать SIC для идентификации
	iAddr=iAddrSev2Base+3;						//234+1;
	ui.chBoSev2UseSIC->setChecked(
		wrd.f(unitReceive->basicSetting[iAddr])->bit5);
//234-бит 22:66+1-бит 6	использовать номер порта для идентификации
	iAddr=iAddrSev2Base+3;						//234+1;
	ui.chBoSev2UsePort->setChecked(
		wrd.f(unitReceive->basicSetting[iAddr])->bit6);
//236…243  название источника 16 байт
	iAddr=iAddrSev2Base+4;						//234;
	memset(nameSource,0,sizeof(nameSource));
	for (int i=0;i<16;i++)
	{
		k0=i;
		if(i/2*2==i)
		{
			ch = firstChar(unitReceive->basicSetting[i/2+iAddr]);
			if(ch == 0x00) 
			{
				k0--;
				break;
			}
			nameSource[i]=ch;
		}
		else
		{
			ch  = secondChar(unitReceive->basicSetting[i/2+iAddr]);
			if(ch == 0x0)
			{
				k0--;
				break;
			}
			nameSource[i] = ch;
		}
	}
	str2 = QString::fromAscii(nameSource,k0+1);
	if(!ui.liEdSev2Name->hasFocus())
		ui.liEdSev2Name->setText(str2);
//end Sev2::::::::::::::АРП 1

}










void TabCust::slLiEdArp1Nc_1()
{
//304
	int iAddr =iAddrArp1Base+16+0+(1-1)*4;
	fLiEdArpNc(     ui.liEdArp1Nc_1
			,&unitReceive->basicSetting[iAddr]
			,&unitSend->basicSetting[iAddr]     );
	return;
}
void TabCust::slLiEdArp1Nc_2()
{
//308
	int iAddr =iAddrArp1Base+16+0+(2-1)*4;
	fLiEdArpNc(     ui.liEdArp1Nc_2
			,&unitReceive->basicSetting[iAddr]
			,&unitSend->basicSetting[iAddr]     );
	return;
}
void TabCust::slLiEdArp1Nc_3()
{
//312
	int iAddr =iAddrArp1Base+16+0+(3-1)*4;
	fLiEdArpNc(     ui.liEdArp1Nc_3
			,&unitReceive->basicSetting[iAddr]
			,&unitSend->basicSetting[iAddr]     );
	return;
}
void TabCust::slLiEdArp1Nc_4()
{
//316
	int iAddr =iAddrArp1Base+16+0+(4-1)*4;
	fLiEdArpNc(     ui.liEdArp1Nc_4
			,&unitReceive->basicSetting[iAddr]
			,&unitSend->basicSetting[iAddr]     );
	return;
}
void TabCust::slLiEdArp1Nc_5()
{
//320
	int iAddr =iAddrArp1Base+16+0+(5-1)*4;
	fLiEdArpNc(     ui.liEdArp1Nc_5
			,&unitReceive->basicSetting[iAddr]
			,&unitSend->basicSetting[iAddr]     );
	return;
}
void TabCust::slLiEdArp1Nc_6()
{
//324
	int iAddr =iAddrArp1Base+16+0+(6-1)*4;
	fLiEdArpNc(     ui.liEdArp1Nc_6
			,&unitReceive->basicSetting[iAddr]
			,&unitSend->basicSetting[iAddr]     );
	return;
}
void TabCust::slLiEdArp1Nc_7()
{
//328
	int iAddr =iAddrArp1Base+16+0+(7-1)*4;
	fLiEdArpNc(     ui.liEdArp1Nc_7
			,&unitReceive->basicSetting[iAddr]
			,&unitSend->basicSetting[iAddr]     );
	return;
}
void TabCust::slLiEdArp1Nc_8()
{
//332
	int iAddr =iAddrArp1Base+16+0+(8-1)*4;
	fLiEdArpNc(     ui.liEdArp1Nc_8
			,&unitReceive->basicSetting[iAddr]
			,&unitSend->basicSetting[iAddr]     );
	return;
}
void TabCust::slLiEdArp1Nc_9()
{
//336
	int iAddr =iAddrArp1Base+16+0+(9-1)*4;
	fLiEdArpNc(     ui.liEdArp1Nc_9
			,&unitReceive->basicSetting[iAddr]
			,&unitSend->basicSetting[iAddr]     );
	return;
}
void TabCust::slLiEdArp1Nc_10()
{
//340
	int iAddr =iAddrArp1Base+16+0+(10-1)*4;
	fLiEdArpNc(     ui.liEdArp1Nc_10
			,&unitReceive->basicSetting[iAddr]
			,&unitSend->basicSetting[iAddr]     );
	return;
}
void TabCust::slLiEdArp1Nc_11()
{
//344
	int iAddr =iAddrArp1Base+16+0+(11-1)*4;
	fLiEdArpNc(     ui.liEdArp1Nc_11
			,&unitReceive->basicSetting[iAddr]
			,&unitSend->basicSetting[iAddr]     );
	return;
}
void TabCust::slLiEdArp1Nc_12()
{
//348
	int iAddr =iAddrArp1Base+16+0+(12-1)*4;
	fLiEdArpNc(     ui.liEdArp1Nc_12
			,&unitReceive->basicSetting[iAddr]
			,&unitSend->basicSetting[iAddr]     );
	return;
}
void TabCust::slLiEdArp1Nc_13()
{
//352
	int iAddr =iAddrArp1Base+16+0+(13-1)*4;
	fLiEdArpNc(     ui.liEdArp1Nc_13
			,&unitReceive->basicSetting[iAddr]
			,&unitSend->basicSetting[iAddr]     );
	return;
}
void TabCust::slLiEdArp1Nc_14()
{
//356
	int iAddr =iAddrArp1Base+16+0+(14-1)*4;
	fLiEdArpNc(     ui.liEdArp1Nc_14
			,&unitReceive->basicSetting[iAddr]
			,&unitSend->basicSetting[iAddr]     );
	return;
}
void TabCust::slLiEdArp1Nc_15()
{
//360
	int iAddr =iAddrArp1Base+16+0+(15-1)*4;
	fLiEdArpNc(     ui.liEdArp1Nc_15
			,&unitReceive->basicSetting[iAddr]
			,&unitSend->basicSetting[iAddr]     );
	return;
}
void TabCust::slLiEdArp1Nc_16()
{
//364
	int iAddr =iAddrArp1Base+16+0+(16-1)*4;
	fLiEdArpNc(     ui.liEdArp1Nc_16
			,&unitReceive->basicSetting[iAddr]
			,&unitSend->basicSetting[iAddr]     );
	return;
}
void TabCust::slLiEdArp1Tc_1()
{
//305
	int iAddr =iAddrArp1Base+16+1+(1-1)*4;
	fLiEdArpTc(     ui.liEdArp1Tc_1
			,&unitReceive->basicSetting[iAddr]
			,&unitSend->basicSetting[iAddr]     );
	return;
}
void TabCust::slLiEdArp1Tc_2()
{
//309
	int iAddr =iAddrArp1Base+16+1+(2-1)*4;
	fLiEdArpTc(     ui.liEdArp1Tc_2
			,&unitReceive->basicSetting[iAddr]
			,&unitSend->basicSetting[iAddr]     );
	return;
}
void TabCust::slLiEdArp1Tc_3()
{
//313
	int iAddr =iAddrArp1Base+16+1+(3-1)*4;
	fLiEdArpTc(     ui.liEdArp1Tc_3
			,&unitReceive->basicSetting[iAddr]
			,&unitSend->basicSetting[iAddr]     );
	return;
}
void TabCust::slLiEdArp1Tc_4()
{
//317
	int iAddr =iAddrArp1Base+16+1+(4-1)*4;
	fLiEdArpTc(     ui.liEdArp1Tc_4
			,&unitReceive->basicSetting[iAddr]
			,&unitSend->basicSetting[iAddr]     );
	return;
}
void TabCust::slLiEdArp1Tc_5()
{
//321
	int iAddr =iAddrArp1Base+16+1+(5-1)*4;
	fLiEdArpTc(     ui.liEdArp1Tc_5
			,&unitReceive->basicSetting[iAddr]
			,&unitSend->basicSetting[iAddr]     );
	return;
}
void TabCust::slLiEdArp1Tc_6()
{
//325
	int iAddr =iAddrArp1Base+16+1+(6-1)*4;
	fLiEdArpTc(     ui.liEdArp1Tc_6
			,&unitReceive->basicSetting[iAddr]
			,&unitSend->basicSetting[iAddr]     );
	return;
}
void TabCust::slLiEdArp1Tc_7()
{
//329
	int iAddr =iAddrArp1Base+16+1+(7-1)*4;
	fLiEdArpTc(     ui.liEdArp1Tc_7
			,&unitReceive->basicSetting[iAddr]
			,&unitSend->basicSetting[iAddr]     );
	return;
}
void TabCust::slLiEdArp1Tc_8()
{
//333
	int iAddr =iAddrArp1Base+16+1+(8-1)*4;
	fLiEdArpTc(     ui.liEdArp1Tc_8
			,&unitReceive->basicSetting[iAddr]
			,&unitSend->basicSetting[iAddr]     );
	return;
}
void TabCust::slLiEdArp1Tc_9()
{
//337
	int iAddr =iAddrArp1Base+16+1+(9-1)*4;
	fLiEdArpTc(     ui.liEdArp1Tc_9
			,&unitReceive->basicSetting[iAddr]
			,&unitSend->basicSetting[iAddr]     );
	return;
}
void TabCust::slLiEdArp1Tc_10()
{
//341
	int iAddr =iAddrArp1Base+16+1+(10-1)*4;
	fLiEdArpTc(     ui.liEdArp1Tc_10
			,&unitReceive->basicSetting[iAddr]
			,&unitSend->basicSetting[iAddr]     );
	return;
}
void TabCust::slLiEdArp1Tc_11()
{
//345
	int iAddr =iAddrArp1Base+16+1+(11-1)*4;
	fLiEdArpTc(     ui.liEdArp1Tc_11
			,&unitReceive->basicSetting[iAddr]
			,&unitSend->basicSetting[iAddr]     );
	return;
}
void TabCust::slLiEdArp1Tc_12()
{
//349
	int iAddr =iAddrArp1Base+16+1+(12-1)*4;
	fLiEdArpTc(     ui.liEdArp1Tc_12
			,&unitReceive->basicSetting[iAddr]
			,&unitSend->basicSetting[iAddr]     );
	return;
}
void TabCust::slLiEdArp1Tc_13()
{
//353
	int iAddr =iAddrArp1Base+16+1+(13-1)*4;
	fLiEdArpTc(     ui.liEdArp1Tc_13
			,&unitReceive->basicSetting[iAddr]
			,&unitSend->basicSetting[iAddr]     );
	return;
}
void TabCust::slLiEdArp1Tc_14()
{
//357
	int iAddr =iAddrArp1Base+16+1+(14-1)*4;
	fLiEdArpTc(     ui.liEdArp1Tc_14
			,&unitReceive->basicSetting[iAddr]
			,&unitSend->basicSetting[iAddr]     );
	return;
}
void TabCust::slLiEdArp1Tc_15()
{
//361
	int iAddr =iAddrArp1Base+16+1+(15-1)*4;
	fLiEdArpTc(     ui.liEdArp1Tc_15
			,&unitReceive->basicSetting[iAddr]
			,&unitSend->basicSetting[iAddr]     );
	return;
}
void TabCust::slLiEdArp1Tc_16()
{
//365
	int iAddr =iAddrArp1Base+16+1+(16-1)*4;
	fLiEdArpTc(     ui.liEdArp1Tc_16
			,&unitReceive->basicSetting[iAddr]
			,&unitSend->basicSetting[iAddr]     );
	return;
}
void TabCust::slLiEdArp1Fc_1()
{
//306
	int iAddr =iAddrArp1Base+16+2+(1-1)*4;
	fLiEdArpFc(     ui.liEdArp1Fc_1
			,&unitReceive->basicSetting[iAddr]
			,&unitSend->basicSetting[iAddr]     );
	return;
}
void TabCust::slLiEdArp1Fc_2()
{
//310
	int iAddr =iAddrArp1Base+16+2+(2-1)*4;
	fLiEdArpFc(     ui.liEdArp1Fc_2
			,&unitReceive->basicSetting[iAddr]
			,&unitSend->basicSetting[iAddr]     );
	return;
}
void TabCust::slLiEdArp1Fc_3()
{
//314
	int iAddr =iAddrArp1Base+16+2+(3-1)*4;
	fLiEdArpFc(     ui.liEdArp1Fc_3
			,&unitReceive->basicSetting[iAddr]
			,&unitSend->basicSetting[iAddr]     );
	return;
}
void TabCust::slLiEdArp1Fc_4()
{
//318
	int iAddr =iAddrArp1Base+16+2+(4-1)*4;
	fLiEdArpFc(     ui.liEdArp1Fc_4
			,&unitReceive->basicSetting[iAddr]
			,&unitSend->basicSetting[iAddr]     );
	return;
}
void TabCust::slLiEdArp1Fc_5()
{
//322
	int iAddr =iAddrArp1Base+16+2+(5-1)*4;
	fLiEdArpFc(     ui.liEdArp1Fc_5
			,&unitReceive->basicSetting[iAddr]
			,&unitSend->basicSetting[iAddr]     );
	return;
}
void TabCust::slLiEdArp1Fc_6()
{
//326
	int iAddr =iAddrArp1Base+16+2+(6-1)*4;
	fLiEdArpFc(     ui.liEdArp1Fc_6
			,&unitReceive->basicSetting[iAddr]
			,&unitSend->basicSetting[iAddr]     );
	return;
}
void TabCust::slLiEdArp1Fc_7()
{
//330
	int iAddr =iAddrArp1Base+16+2+(7-1)*4;
	fLiEdArpFc(     ui.liEdArp1Fc_7
			,&unitReceive->basicSetting[iAddr]
			,&unitSend->basicSetting[iAddr]     );
	return;
}
void TabCust::slLiEdArp1Fc_8()
{
//334
	int iAddr =iAddrArp1Base+16+2+(8-1)*4;
	fLiEdArpFc(     ui.liEdArp1Fc_8
			,&unitReceive->basicSetting[iAddr]
			,&unitSend->basicSetting[iAddr]     );
	return;
}
void TabCust::slLiEdArp1Fc_9()
{
//338
	int iAddr =iAddrArp1Base+16+2+(9-1)*4;
	fLiEdArpFc(     ui.liEdArp1Fc_9
			,&unitReceive->basicSetting[iAddr]
			,&unitSend->basicSetting[iAddr]     );
	return;
}
void TabCust::slLiEdArp1Fc_10()
{
//342
	int iAddr =iAddrArp1Base+16+2+(10-1)*4;
	fLiEdArpFc(     ui.liEdArp1Fc_10
			,&unitReceive->basicSetting[iAddr]
			,&unitSend->basicSetting[iAddr]     );
	return;
}
void TabCust::slLiEdArp1Fc_11()
{
//346
	int iAddr =iAddrArp1Base+16+2+(11-1)*4;
	fLiEdArpFc(     ui.liEdArp1Fc_11
			,&unitReceive->basicSetting[iAddr]
			,&unitSend->basicSetting[iAddr]     );
	return;
}
void TabCust::slLiEdArp1Fc_12()
{
//350
	int iAddr =iAddrArp1Base+16+2+(12-1)*4;
	fLiEdArpFc(     ui.liEdArp1Fc_12
			,&unitReceive->basicSetting[iAddr]
			,&unitSend->basicSetting[iAddr]     );
	return;
}
void TabCust::slLiEdArp1Fc_13()
{
//354
	int iAddr =iAddrArp1Base+16+2+(13-1)*4;
	fLiEdArpFc(     ui.liEdArp1Fc_13
			,&unitReceive->basicSetting[iAddr]
			,&unitSend->basicSetting[iAddr]     );
	return;
}
void TabCust::slLiEdArp1Fc_14()
{
//358
	int iAddr =iAddrArp1Base+16+2+(14-1)*4;
	fLiEdArpFc(     ui.liEdArp1Fc_14
			,&unitReceive->basicSetting[iAddr]
			,&unitSend->basicSetting[iAddr]     );
	return;
}
void TabCust::slLiEdArp1Fc_15()
{
//362
	int iAddr =iAddrArp1Base+16+2+(15-1)*4;
	fLiEdArpFc(     ui.liEdArp1Fc_15
			,&unitReceive->basicSetting[iAddr]
			,&unitSend->basicSetting[iAddr]     );
	return;
}
void TabCust::slLiEdArp1Fc_16()
{
//366
	int iAddr =iAddrArp1Base+16+2+(16-1)*4;
	fLiEdArpFc(     ui.liEdArp1Fc_16
			,&unitReceive->basicSetting[iAddr]
			,&unitSend->basicSetting[iAddr]     );
	return;
}
///
void TabCust::slLiEdArp2Nc_1()
{
//304
	int iAddr =iAddrArp2Base+16+0+(1-1)*4;
	fLiEdArpNc(     ui.liEdArp2Nc_1
			,&unitReceive->basicSetting[iAddr]
			,&unitSend->basicSetting[iAddr]     );
	return;
}
void TabCust::slLiEdArp2Nc_2()
{
//308
	int iAddr =iAddrArp2Base+16+0+(2-1)*4;
	fLiEdArpNc(     ui.liEdArp2Nc_2
			,&unitReceive->basicSetting[iAddr]
			,&unitSend->basicSetting[iAddr]     );
	return;
}
void TabCust::slLiEdArp2Nc_3()
{
//312
	int iAddr =iAddrArp2Base+16+0+(3-1)*4;
	fLiEdArpNc(     ui.liEdArp2Nc_3
			,&unitReceive->basicSetting[iAddr]
			,&unitSend->basicSetting[iAddr]     );
	return;
}
void TabCust::slLiEdArp2Nc_4()
{
//316
	int iAddr =iAddrArp2Base+16+0+(4-1)*4;
	fLiEdArpNc(     ui.liEdArp2Nc_4
			,&unitReceive->basicSetting[iAddr]
			,&unitSend->basicSetting[iAddr]     );
	return;
}
void TabCust::slLiEdArp2Nc_5()
{
//320
	int iAddr =iAddrArp2Base+16+0+(5-1)*4;
	fLiEdArpNc(     ui.liEdArp2Nc_5
			,&unitReceive->basicSetting[iAddr]
			,&unitSend->basicSetting[iAddr]     );
	return;
}
void TabCust::slLiEdArp2Nc_6()
{
//324
	int iAddr =iAddrArp2Base+16+0+(6-1)*4;
	fLiEdArpNc(     ui.liEdArp2Nc_6
			,&unitReceive->basicSetting[iAddr]
			,&unitSend->basicSetting[iAddr]     );
	return;
}
void TabCust::slLiEdArp2Nc_7()
{
//328
	int iAddr =iAddrArp2Base+16+0+(7-1)*4;
	fLiEdArpNc(     ui.liEdArp2Nc_7
			,&unitReceive->basicSetting[iAddr]
			,&unitSend->basicSetting[iAddr]     );
	return;
}
void TabCust::slLiEdArp2Nc_8()
{
//332
	int iAddr =iAddrArp2Base+16+0+(8-1)*4;
	fLiEdArpNc(     ui.liEdArp2Nc_8
			,&unitReceive->basicSetting[iAddr]
			,&unitSend->basicSetting[iAddr]     );
	return;
}
void TabCust::slLiEdArp2Nc_9()
{
//336
	int iAddr =iAddrArp2Base+16+0+(9-1)*4;
	fLiEdArpNc(     ui.liEdArp2Nc_9
			,&unitReceive->basicSetting[iAddr]
			,&unitSend->basicSetting[iAddr]     );
	return;
}
void TabCust::slLiEdArp2Nc_10()
{
//340
	int iAddr =iAddrArp2Base+16+0+(10-1)*4;
	fLiEdArpNc(     ui.liEdArp2Nc_10
			,&unitReceive->basicSetting[iAddr]
			,&unitSend->basicSetting[iAddr]     );
	return;
}
void TabCust::slLiEdArp2Nc_11()
{
//344
	int iAddr =iAddrArp2Base+16+0+(11-1)*4;
	fLiEdArpNc(     ui.liEdArp2Nc_11
			,&unitReceive->basicSetting[iAddr]
			,&unitSend->basicSetting[iAddr]     );
	return;
}
void TabCust::slLiEdArp2Nc_12()
{
//348
	int iAddr =iAddrArp2Base+16+0+(12-1)*4;
	fLiEdArpNc(     ui.liEdArp2Nc_12
			,&unitReceive->basicSetting[iAddr]
			,&unitSend->basicSetting[iAddr]     );
	return;
}
void TabCust::slLiEdArp2Nc_13()
{
//352
	int iAddr =iAddrArp2Base+16+0+(13-1)*4;
	fLiEdArpNc(     ui.liEdArp2Nc_13
			,&unitReceive->basicSetting[iAddr]
			,&unitSend->basicSetting[iAddr]     );
	return;
}
void TabCust::slLiEdArp2Nc_14()
{
//356
	int iAddr =iAddrArp2Base+16+0+(14-1)*4;
	fLiEdArpNc(     ui.liEdArp2Nc_14
			,&unitReceive->basicSetting[iAddr]
			,&unitSend->basicSetting[iAddr]     );
	return;
}
void TabCust::slLiEdArp2Nc_15()
{
//360
	int iAddr =iAddrArp2Base+16+0+(15-1)*4;
	fLiEdArpNc(     ui.liEdArp2Nc_15
			,&unitReceive->basicSetting[iAddr]
			,&unitSend->basicSetting[iAddr]     );
	return;
}
void TabCust::slLiEdArp2Nc_16()
{
//364
	int iAddr =iAddrArp2Base+16+0+(16-1)*4;
	fLiEdArpNc(     ui.liEdArp2Nc_16
			,&unitReceive->basicSetting[iAddr]
			,&unitSend->basicSetting[iAddr]     );
	return;
}
void TabCust::slLiEdArp2Tc_1()
{
//305
	int iAddr =iAddrArp2Base+16+1+(1-1)*4;
	fLiEdArpTc(     ui.liEdArp2Tc_1
			,&unitReceive->basicSetting[iAddr]
			,&unitSend->basicSetting[iAddr]     );
	return;
}
void TabCust::slLiEdArp2Tc_2()
{
//309
	int iAddr =iAddrArp2Base+16+1+(2-1)*4;
	fLiEdArpTc(     ui.liEdArp2Tc_2
			,&unitReceive->basicSetting[iAddr]
			,&unitSend->basicSetting[iAddr]     );
	return;
}
void TabCust::slLiEdArp2Tc_3()
{
//313
	int iAddr =iAddrArp2Base+16+1+(3-1)*4;
	fLiEdArpTc(     ui.liEdArp2Tc_3
			,&unitReceive->basicSetting[iAddr]
			,&unitSend->basicSetting[iAddr]     );
	return;
}
void TabCust::slLiEdArp2Tc_4()
{
//317
	int iAddr =iAddrArp2Base+16+1+(4-1)*4;
	fLiEdArpTc(     ui.liEdArp2Tc_4
			,&unitReceive->basicSetting[iAddr]
			,&unitSend->basicSetting[iAddr]     );
	return;
}
void TabCust::slLiEdArp2Tc_5()
{
//321
	int iAddr =iAddrArp2Base+16+1+(5-1)*4;
	fLiEdArpTc(     ui.liEdArp2Tc_5
			,&unitReceive->basicSetting[iAddr]
			,&unitSend->basicSetting[iAddr]     );
	return;
}
void TabCust::slLiEdArp2Tc_6()
{
//325
	int iAddr =iAddrArp2Base+16+1+(6-1)*4;
	fLiEdArpTc(     ui.liEdArp2Tc_6
			,&unitReceive->basicSetting[iAddr]
			,&unitSend->basicSetting[iAddr]     );
	return;
}
void TabCust::slLiEdArp2Tc_7()
{
//329
	int iAddr =iAddrArp2Base+16+1+(7-1)*4;
	fLiEdArpTc(     ui.liEdArp2Tc_7
			,&unitReceive->basicSetting[iAddr]
			,&unitSend->basicSetting[iAddr]     );
	return;
}
void TabCust::slLiEdArp2Tc_8()
{
//333
	int iAddr =iAddrArp2Base+16+1+(8-1)*4;
	fLiEdArpTc(     ui.liEdArp2Tc_8
			,&unitReceive->basicSetting[iAddr]
			,&unitSend->basicSetting[iAddr]     );
	return;
}
void TabCust::slLiEdArp2Tc_9()
{
//337
	int iAddr =iAddrArp2Base+16+1+(9-1)*4;
	fLiEdArpTc(     ui.liEdArp2Tc_9
			,&unitReceive->basicSetting[iAddr]
			,&unitSend->basicSetting[iAddr]     );
	return;
}
void TabCust::slLiEdArp2Tc_10()
{
//341
	int iAddr =iAddrArp2Base+16+1+(10-1)*4;
	fLiEdArpTc(     ui.liEdArp2Tc_10
			,&unitReceive->basicSetting[iAddr]
			,&unitSend->basicSetting[iAddr]     );
	return;
}
void TabCust::slLiEdArp2Tc_11()
{
//345
	int iAddr =iAddrArp2Base+16+1+(11-1)*4;
	fLiEdArpTc(     ui.liEdArp2Tc_11
			,&unitReceive->basicSetting[iAddr]
			,&unitSend->basicSetting[iAddr]     );
	return;
}
void TabCust::slLiEdArp2Tc_12()
{
//349
	int iAddr =iAddrArp2Base+16+1+(12-1)*4;
	fLiEdArpTc(     ui.liEdArp2Tc_12
			,&unitReceive->basicSetting[iAddr]
			,&unitSend->basicSetting[iAddr]     );
	return;
}
void TabCust::slLiEdArp2Tc_13()
{
//353
	int iAddr =iAddrArp2Base+16+1+(13-1)*4;
	fLiEdArpTc(     ui.liEdArp2Tc_13
			,&unitReceive->basicSetting[iAddr]
			,&unitSend->basicSetting[iAddr]     );
	return;
}
void TabCust::slLiEdArp2Tc_14()
{
//357
	int iAddr =iAddrArp2Base+16+1+(14-1)*4;
	fLiEdArpTc(     ui.liEdArp2Tc_14
			,&unitReceive->basicSetting[iAddr]
			,&unitSend->basicSetting[iAddr]     );
	return;
}
void TabCust::slLiEdArp2Tc_15()
{
//361
	int iAddr =iAddrArp2Base+16+1+(15-1)*4;
	fLiEdArpTc(     ui.liEdArp2Tc_15
			,&unitReceive->basicSetting[iAddr]
			,&unitSend->basicSetting[iAddr]     );
	return;
}
void TabCust::slLiEdArp2Tc_16()
{
//365
	int iAddr =iAddrArp2Base+16+1+(16-1)*4;
	fLiEdArpTc(     ui.liEdArp2Tc_16
			,&unitReceive->basicSetting[iAddr]
			,&unitSend->basicSetting[iAddr]     );
	return;
}
void TabCust::slLiEdArp2Fc_1()
{
//306
	int iAddr =iAddrArp2Base+16+2+(1-1)*4;
	fLiEdArpFc(     ui.liEdArp2Fc_1
			,&unitReceive->basicSetting[iAddr]
			,&unitSend->basicSetting[iAddr]     );
	return;
}
void TabCust::slLiEdArp2Fc_2()
{
//310
	int iAddr =iAddrArp2Base+16+2+(2-1)*4;
	fLiEdArpFc(     ui.liEdArp2Fc_2
			,&unitReceive->basicSetting[iAddr]
			,&unitSend->basicSetting[iAddr]     );
	return;
}
void TabCust::slLiEdArp2Fc_3()
{
//314
	int iAddr =iAddrArp2Base+16+2+(3-1)*4;
	fLiEdArpFc(     ui.liEdArp2Fc_3
			,&unitReceive->basicSetting[iAddr]
			,&unitSend->basicSetting[iAddr]     );
	return;
}
void TabCust::slLiEdArp2Fc_4()
{
//318
	int iAddr =iAddrArp2Base+16+2+(4-1)*4;
	fLiEdArpFc(     ui.liEdArp2Fc_4
			,&unitReceive->basicSetting[iAddr]
			,&unitSend->basicSetting[iAddr]     );
	return;
}
void TabCust::slLiEdArp2Fc_5()
{
//322
	int iAddr =iAddrArp2Base+16+2+(5-1)*4;
	fLiEdArpFc(     ui.liEdArp2Fc_5
			,&unitReceive->basicSetting[iAddr]
			,&unitSend->basicSetting[iAddr]     );
	return;
}
void TabCust::slLiEdArp2Fc_6()
{
//326
	int iAddr =iAddrArp2Base+16+2+(6-1)*4;
	fLiEdArpFc(     ui.liEdArp2Fc_6
			,&unitReceive->basicSetting[iAddr]
			,&unitSend->basicSetting[iAddr]     );
	return;
}
void TabCust::slLiEdArp2Fc_7()
{
//330
	int iAddr =iAddrArp2Base+16+2+(7-1)*4;
	fLiEdArpFc(     ui.liEdArp2Fc_7
			,&unitReceive->basicSetting[iAddr]
			,&unitSend->basicSetting[iAddr]     );
	return;
}
void TabCust::slLiEdArp2Fc_8()
{
//334
	int iAddr =iAddrArp2Base+16+2+(8-1)*4;
	fLiEdArpFc(     ui.liEdArp2Fc_8
			,&unitReceive->basicSetting[iAddr]
			,&unitSend->basicSetting[iAddr]     );
	return;
}
void TabCust::slLiEdArp2Fc_9()
{
//338
	int iAddr =iAddrArp2Base+16+2+(9-1)*4;
	fLiEdArpFc(     ui.liEdArp2Fc_9
			,&unitReceive->basicSetting[iAddr]
			,&unitSend->basicSetting[iAddr]     );
	return;
}
void TabCust::slLiEdArp2Fc_10()
{
//342
	int iAddr =iAddrArp2Base+16+2+(10-1)*4;
	fLiEdArpFc(     ui.liEdArp2Fc_10
			,&unitReceive->basicSetting[iAddr]
			,&unitSend->basicSetting[iAddr]     );
	return;
}
void TabCust::slLiEdArp2Fc_11()
{
//346
	int iAddr =iAddrArp2Base+16+2+(11-1)*4;
	fLiEdArpFc(     ui.liEdArp2Fc_11
			,&unitReceive->basicSetting[iAddr]
			,&unitSend->basicSetting[iAddr]     );
	return;
}
void TabCust::slLiEdArp2Fc_12()
{
//350
	int iAddr =iAddrArp2Base+16+2+(12-1)*4;
	fLiEdArpFc(     ui.liEdArp2Fc_12
			,&unitReceive->basicSetting[iAddr]
			,&unitSend->basicSetting[iAddr]     );
	return;
}
void TabCust::slLiEdArp2Fc_13()
{
//354
	int iAddr =iAddrArp2Base+16+2+(13-1)*4;
	fLiEdArpFc(     ui.liEdArp2Fc_13
			,&unitReceive->basicSetting[iAddr]
			,&unitSend->basicSetting[iAddr]     );
	return;
}
void TabCust::slLiEdArp2Fc_14()
{
//358
	int iAddr =iAddrArp2Base+16+2+(14-1)*4;
	fLiEdArpFc(     ui.liEdArp2Fc_14
			,&unitReceive->basicSetting[iAddr]
			,&unitSend->basicSetting[iAddr]     );
	return;
}
void TabCust::slLiEdArp2Fc_15()
{
//362
	int iAddr =iAddrArp2Base+16+2+(15-1)*4;
	fLiEdArpFc(     ui.liEdArp2Fc_15
			,&unitReceive->basicSetting[iAddr]
			,&unitSend->basicSetting[iAddr]     );
	return;
}
void TabCust::slLiEdArp2Fc_16()
{
//366
	int iAddr =iAddrArp2Base+16+2+(16-1)*4;
	fLiEdArpFc(     ui.liEdArp2Fc_16
			,&unitReceive->basicSetting[iAddr]
			,&unitSend->basicSetting[iAddr]     );
	return;
}
///
void TabCust::fLiEdArpNc(void* l, ushort* pReceiveSePar, ushort* pSendSelPar)	//void slLiEdArp1Tc_1();	void slLiEdArp1Fc_1();
{
	PLineEdit* lineEdit=(PLineEdit*)l;
	QString str1,str2;
	ushort b1=0;
	str1=lineEdit->text();
	bool ok=true;
	b1=str1.toInt(&ok);
	b1 &= 0xffff;
	if(ok&&b1>0)
	{
		lineEdit->setText(QString("%1").arg(b1));
		*pReceiveSePar=b1-1;
		*pSendSelPar=b1-1;
	}

//	unitReceive->selectedParameters0[iAddr]=b1;
//	unitSend->selectedParameters0[iAddr]=b1;

	return;
}

void TabCust::fLiEdArpTc(void* l, ushort* pReceiveSePar, ushort* pSendSelPar)	//void slLiEdArp1Tc_1();	void slLiEdArp1Fc_1();
{
	PLineEdit* lineEdit=(PLineEdit*)l;
	QString str1,str2,str3,str;int index=0;
	ushort b1=0,b2=0;int size=0;bool ok=true;
	str1=lineEdit->text();
	b1=str1.toInt();
	b1 &= 0xffff;
	QStringList lst;
	index=str1.indexOf(',');
	if(index>=0)
	{
		lst = str1.split(',');
	}else
	{
		index=str1.indexOf('.');
		if(index>=0)
		{
			lst = str1.split('.');
		}else
		{
			str1+=",0";
			lst = str1.split(',');
		}
	}
	if(lst.size()==2)
	{
		for(int i=0;i<2;i++)
		{
			if(lst.at(i).size()==0)
			{
				lst.replace(i,"0");
			}
		}
		for(int i=0;i<2;i++)
		{
			if(i==1)
			{
				str=lst[i];
				if(str.size()>1)
				{
					str=str.left(1);
				}
				str2+=str;
				break;
			}
			str2+=lst[i];
		}
	}
	b1=str2.toInt(&ok);
	b2=str2.toInt(&ok)*20;

//	a2 = a1/20;
	str3 = QString("%1").arg(b2/20,2,10,QChar('0'));
	size =str3.size();
	str3.insert(size-1,',');



//	lineEdit->setText(QString("%1").arg(b2));
	lineEdit->setText(str3);
	if(ok)
	{
		*pReceiveSePar=b2;
		*pSendSelPar=b2;
	}
//	unitReceive->selectedParameters0[iAddr]=b1;
//	unitSend->selectedParameters0[iAddr]=b1;

	return;
}

void TabCust::fLiEdArpFc(void* l, ushort* pReceiveSePar, ushort* pSendSelPar)	//void slLiEdArp1Tc_1();	void slLiEdArp1Fc_1();
{
	PLineEdit* lineEdit=(PLineEdit*)l;
	QString str1,str2;
        uint k0;
	uint* p0,*p1;
	p0=(uint*)pReceiveSePar;
	p1=(uint*)pSendSelPar;
	str1=lineEdit->text();
	bool ok=true;
	k0=str1.toInt(&ok);
	if(ok)
	{
		lineEdit->setText(QString("%1").arg(k0));
		*p0 = k0;
		*p1 = k0;
	}
//	*pReceiveSePar=b1;
//	*pSendSelPar=b1;

//	unitReceive->selectedParameters0[iAddr]=b1;
//	unitSend->selectedParameters0[iAddr]=b1;

	return;
}
































void TabCust::updateDialogArp1Ch()
{
        int iAddr=0;
        ushort a1,a2;
        uint uk0;
        int size=0;
        QString str;
    char ch;int k0;
	char nameSource[16];
	Unn unn;
    QString str2;
	ushort a0;
//Arp1::::::::::::::АРП 1
//232..233 параметры источника
//		бит 15:	1 — порт разрешен
//	iAddrArp1Base=232;
	iAddr=iAddrArp1Base+0;						//232;
	ui.grBoArp1->setChecked(
		wrd.f(unitReceive->basicSetting[iAddr])->bit15);
	a1=unitReceive->basicSetting[iAddr];
	iAddr=iAddrArp1Base+0;						//232;
//биты 1,0:	номер устройства
	wrd.f(unitReceive->basicSetting[iAddr]);
	a1 = wrd.s.bit2*4+wrd.s.bit1*2+wrd.s.bit0;
	ui.coBoArp1Num->setCurrentIndex(a1);	
//биты 6,3:	номер светодиода
	iAddr=iAddrArp1Base+0;						//232;
	wrd.f(unitReceive->basicSetting[iAddr]);
	a1 = wrd.s.bit6*8+wrd.s.bit5*4+wrd.s.bit4*2+wrd.s.bit3;
	ui.coBoArp1LedNum->setCurrentIndex(a1);	
//биты 11,7:	номер устройства
	wrd.f(unitReceive->basicSetting[iAddr]);
	a1 = wrd.s.bit11*16+wrd.s.bit10*8+wrd.s.bit9*4+wrd.s.bit8*2+wrd.s.bit7;
	ui.coBoArp1Prot->setCurrentIndex(a1);	
//64-бит 16:64+1-бит 0	склонение (0 — географическое (истинное), 1 — магнитное)
	iAddr=iAddrArp1Base+1;						//232+1;
	wrd.f(unitReceive->basicSetting[iAddr]);
	if(wrd.s.bit0)
		ui.raBuArp1GradMagnetic->setChecked(true);
	else
		ui.raBuArp1GradGeographic->setChecked(true);
//234 биты 7...0 SAC
	iAddr=iAddrArp1Base+2;						//234;
	a1=unitReceive->basicSetting[iAddr];
	a1&=0xFF;
	str = QString("%1").arg(a1);
	if(!ui.liEdArp1SAC->hasFocus())
		ui.liEdArp1SAC->setText(str);
//234 биты 7...0 SIC
	iAddr=iAddrArp1Base+2;						//234;
	a1=unitReceive->basicSetting[iAddr];
	unn.uShU[0]=a1;
	a2=unn.ubU[1];
	str = QString("%1").arg(a2);
	if(!ui.liEdArp1SIC->hasFocus())
		ui.liEdArp1SIC->setText(str);
//234 - биты 19...16 номер порта приема
	//66+1 - 3210
	wrd.f(unitReceive->basicSetting[iAddr+1]);
	a1 = wrd.s.bit3*8+wrd.s.bit2*4+wrd.s.bit1*2+wrd.s.bit0;
	ui.coBoArp1Port->setCurrentIndex(a1);	
	

//234-бит 20:66+1-бит 4	использовать SAC для идентификации
	iAddr=iAddrArp1Base+3;						//234+1;
	ui.chBoArp1UseSAC->setChecked(
		wrd.f(unitReceive->basicSetting[iAddr])->bit4);
//234-бит 21:66+1-бит 5	использовать SIC для идентификации
	iAddr=iAddrArp1Base+3;						//234+1;
	ui.chBoArp1UseSIC->setChecked(
		wrd.f(unitReceive->basicSetting[iAddr])->bit5);
//234-бит 22:66+1-бит 6	использовать номер порта для идентификации
	iAddr=iAddrArp1Base+3;						//234+1;
	ui.chBoArp1UsePort->setChecked(
		wrd.f(unitReceive->basicSetting[iAddr])->bit6);
//236…243  название источника 16 байт
	iAddr=iAddrArp1Base+4;						//234;
	for (int i=0;i<16;i++)
	{
		k0=i;
		if(i/2*2==i)
		{
			ch = firstChar(unitReceive->basicSetting[i/2+iAddr]);
			if(ch == 0x00) break;
			nameSource[i]=ch;
		}
		else
		{
			ch  = secondChar(unitReceive->basicSetting[i/2+iAddr]);
			if(ch == 0x0)break;
			nameSource[i] = ch;
		}
	}
	str2 = QString::fromAscii(nameSource,k0);
	if(!ui.liEdArp1Name->hasFocus())
		ui.liEdArp1Name->setText(str2);
//244	дальность точки стояния, метры
	iAddr=iAddrArp1Base+12;						//244;
	a1 = unitReceive->basicSetting[iAddr];
	str = QString("%1").arg(a1);
	if(!ui.liEdArp1PntDistance->hasFocus())
		ui.liEdArp1PntDistance->setText(str);
//245 азимут точки стояния, минуты (градусы ? 60)
	iAddr=iAddrArp1Base+13;						//245;
	a0 = unitReceive->basicSetting[iAddr];
	a1 = a0/60;
	a2 = a0 - (a1*60);
	str = QString("%1").arg(a1);
	str.append(QString("°%1'").arg(a2,2,10,QLatin1Char( '0' )));
	if(!ui.liEdArp1PntAzimuth->hasFocus())
		ui.liEdArp1PntAzimuth->setText(str);
//247 доворот, минуты (градусы*60)
	iAddr=iAddrArp1Base+15;						//247;
	a0 = unitReceive->basicSetting[iAddr];
	a1 = a0/60;
	a2 = a0 - (a1*60);
	str = QString("%1").arg(a1);
	str.append(QString("°%1'").arg(a2,2,10,QLatin1Char( '0' )));
	if(!ui.liEdArp1Turn->hasFocus())
		ui.liEdArp1Turn->setText(str);

//248		присвоенный номер канала 1
//	iAddrArp1Base=232;
	iAddr =iAddrArp1Base +16;
	a1 = unitReceive->basicSetting[iAddr];
	str = QString("%1").arg(a1+1);
	if(!ui.liEdArp1Nc_1->hasFocus())
		ui.liEdArp1Nc_1->setText(str);
//249		задержка сброса в единицах 5 мс (200 ? 1 с) канала 1
	iAddr =iAddrArp1Base +17;
	a1 = unitReceive->basicSetting[iAddr];
	a2 = a1/20;
	str = QString("%1").arg(a2,2,10,QChar('0'));
	size =str.size();
	str.insert(size-1,',');
	if(!ui.liEdArp1Tc_1->hasFocus())
		ui.liEdArp1Tc_1->setText(str);
//250-251	частота канала 1
	iAddr =iAddrArp1Base +18;
	uk0 = *(int*)&unitReceive->basicSetting[iAddr];
	if(uk0==0xffffffff)
		str = "не используется";
	else
		str = QString("%1").arg(uk0);
	if(!ui.liEdArp1Fc_1->hasFocus())
		ui.liEdArp1Fc_1->setText(str);
/////
//308		присвоенный номер канала 2
	iAddr =iAddrArp1Base +20;
	a1 = unitReceive->basicSetting[iAddr];
	str = QString("%1").arg(a1+1);
	if(!ui.liEdArp1Nc_2->hasFocus())
		ui.liEdArp1Nc_2->setText(str);
//309		задержка сброса в единицах 5 мс (200 ? 1 с) канала 2
	iAddr =iAddrArp1Base +21;
	a1 = unitReceive->basicSetting[iAddr];
	a2 = a1/20;
	str = QString("%1").arg(a2,2,10,QChar('0'));
	size =str.size();
	str.insert(size-1,',');
	if(!ui.liEdArp1Tc_2->hasFocus())
		ui.liEdArp1Tc_2->setText(str);
//310-311	частота канала 2
	iAddr =iAddrArp1Base +22;
	uk0 = *(int*)&unitReceive->basicSetting[iAddr];
	if(uk0==0xffffffff)
		str = "не используется";
	else
		str = QString("%1").arg(uk0);
	if(!ui.liEdArp1Fc_2->hasFocus())
		ui.liEdArp1Fc_2->setText(str);
/////
//312		присвоенный номер канала 3
	iAddr =iAddrArp1Base +24;
	a1 = unitReceive->basicSetting[iAddr];
	str = QString("%1").arg(a1+1);
	if(!ui.liEdArp1Nc_3->hasFocus())
		ui.liEdArp1Nc_3->setText(str);
//313		задержка сброса в единицах 5 мс (200 ? 1 с) канала 3
	iAddr =iAddrArp1Base +25;
	a1 = unitReceive->basicSetting[iAddr];
	a2 = a1/20;
	str = QString("%1").arg(a2,2,10,QChar('0'));
	size =str.size();
	str.insert(size-1,',');
	if(!ui.liEdArp1Tc_3->hasFocus())
		ui.liEdArp1Tc_3->setText(str);
//314-235	частота канала 3
	iAddr =iAddrArp1Base +26;
	uk0 = *(int*)&unitReceive->basicSetting[iAddr];
	if(uk0==0xffffffff)
		str = "не используется";
	else
		str = QString("%1").arg(uk0);
	if(!ui.liEdArp1Fc_3->hasFocus())
		ui.liEdArp1Fc_3->setText(str);
/////
//316		присвоенный номер канала 4
	iAddr =iAddrArp1Base +28;
	a1 = unitReceive->basicSetting[iAddr];
	str = QString("%1").arg(a1+1);
	if(!ui.liEdArp1Nc_4->hasFocus())
		ui.liEdArp1Nc_4->setText(str);
//317		задержка сброса в единицах 5 мс (200 ? 1 с) канала 4
	iAddr =iAddrArp1Base +29;
	a1 = unitReceive->basicSetting[iAddr];
	a2 = a1/20;
	str = QString("%1").arg(a2,2,10,QChar('0'));
	size =str.size();
	str.insert(size-1,',');
	if(!ui.liEdArp1Tc_4->hasFocus())
		ui.liEdArp1Tc_4->setText(str);
//318-239	частота канала 4
	iAddr =iAddrArp1Base +30;
	uk0 = *(int*)&unitReceive->basicSetting[iAddr];
	if(uk0==0xffffffff)
		str = "не используется";
	else
		str = QString("%1").arg(uk0);
	if(!ui.liEdArp1Fc_4->hasFocus())
		ui.liEdArp1Fc_4->setText(str);
/////
//320		присвоенный номер канала 5
	iAddr =iAddrArp1Base +32;
	a1 = unitReceive->basicSetting[iAddr];
	str = QString("%1").arg(a1+1);
	if(!ui.liEdArp1Nc_5->hasFocus())
		ui.liEdArp1Nc_5->setText(str);
//321		задержка сброса в единицах 5 мс (200 ? 1 с) канала 5
	iAddr =iAddrArp1Base +33;
	a1 = unitReceive->basicSetting[iAddr];
	a2 = a1/20;
	str = QString("%1").arg(a2,2,10,QChar('0'));
	size =str.size();
	str.insert(size-1,',');
	if(!ui.liEdArp1Tc_5->hasFocus())
		ui.liEdArp1Tc_5->setText(str);
//322-243	частота канала 5
	iAddr =iAddrArp1Base +34;
	uk0 = *(int*)&unitReceive->basicSetting[iAddr];
	if(uk0==0xffffffff)
		str = "не используется";
	else
		str = QString("%1").arg(uk0);
	if(!ui.liEdArp1Fc_5->hasFocus())
		ui.liEdArp1Fc_5->setText(str);
/////
//324		присвоенный номер канала 6
	iAddr =iAddrArp1Base +36;
	a1 = unitReceive->basicSetting[iAddr];
	str = QString("%1").arg(a1+1);
	if(!ui.liEdArp1Nc_6->hasFocus())
		ui.liEdArp1Nc_6->setText(str);
//325		задержка сброса в единицах 5 мс (200 ? 1 с) канала 6
	iAddr =iAddrArp1Base +37;
	a1 = unitReceive->basicSetting[iAddr];
	a2 = a1/20;
	str = QString("%1").arg(a2,2,10,QChar('0'));
	size =str.size();
	str.insert(size-1,',');
	if(!ui.liEdArp1Tc_6->hasFocus())
		ui.liEdArp1Tc_6->setText(str);
//326-327	частота канала 6
	iAddr =iAddrArp1Base +38;
	uk0 = *(int*)&unitReceive->basicSetting[iAddr];
	if(uk0==0xffffffff)
		str = "не используется";
	else
		str = QString("%1").arg(uk0);
	if(!ui.liEdArp1Fc_6->hasFocus())
		ui.liEdArp1Fc_6->setText(str);
/////
//328		присвоенный номер канала 7
	iAddr =iAddrArp1Base +40;
	a1 = unitReceive->basicSetting[iAddr];
	str = QString("%1").arg(a1+1);
	if(!ui.liEdArp1Nc_7->hasFocus())
		ui.liEdArp1Nc_7->setText(str);
//329		задержка сброса в единицах 5 мс (200 ? 1 с) канала 7
	iAddr =iAddrArp1Base +41;
	a1 = unitReceive->basicSetting[iAddr];
	a2 = a1/20;
	str = QString("%1").arg(a2,2,10,QChar('0'));
	size =str.size();
	str.insert(size-1,',');
	if(!ui.liEdArp1Tc_7->hasFocus())
		ui.liEdArp1Tc_7->setText(str);
//330-331	частота канала 7
	iAddr =iAddrArp1Base +42;
	uk0 = *(int*)&unitReceive->basicSetting[iAddr];
	if(uk0==0xffffffff)
		str = "не используется";
	else
		str = QString("%1").arg(uk0);
	if(!ui.liEdArp1Fc_7->hasFocus())
		ui.liEdArp1Fc_7->setText(str);
/////
//332		присвоенный номер канала 8
	iAddr =iAddrArp1Base +44;
	a1 = unitReceive->basicSetting[iAddr];
	str = QString("%1").arg(a1+1);
	if(!ui.liEdArp1Nc_8->hasFocus())
		ui.liEdArp1Nc_8->setText(str);
//333		задержка сброса в единицах 5 мс (200 ? 1 с) канала 8
	iAddr =iAddrArp1Base +45;
	a1 = unitReceive->basicSetting[iAddr];
	a2 = a1/20;
	str = QString("%1").arg(a2,2,10,QChar('0'));
	size =str.size();
	str.insert(size-1,',');
	if(!ui.liEdArp1Tc_8->hasFocus())
		ui.liEdArp1Tc_8->setText(str);
//334-335	частота канала 8
	iAddr =iAddrArp1Base +46;
	uk0 = *(int*)&unitReceive->basicSetting[iAddr];
	if(uk0==0xffffffff)
		str = "не используется";
	else
		str = QString("%1").arg(uk0);
	if(!ui.liEdArp1Fc_8->hasFocus())
		ui.liEdArp1Fc_8->setText(str);
/////
//336		присвоенный номер канала 9
	iAddr =iAddrArp1Base +48;
	a1 = unitReceive->basicSetting[iAddr];
	str = QString("%1").arg(a1+1);
	if(!ui.liEdArp1Nc_9->hasFocus())
		ui.liEdArp1Nc_9->setText(str);
//337		задержка сброса в единицах 5 мс (200 ? 1 с) канала 9
	iAddr =iAddrArp1Base +49;
	a1 = unitReceive->basicSetting[iAddr];
	a2 = a1/20;
	str = QString("%1").arg(a2,2,10,QChar('0'));
	size =str.size();
	str.insert(size-1,',');
	if(!ui.liEdArp1Tc_9->hasFocus())
		ui.liEdArp1Tc_9->setText(str);
//338-259	частота канала 9
	iAddr =iAddrArp1Base +50;
	uk0 = *(int*)&unitReceive->basicSetting[iAddr];
	if(uk0==0xffffffff)
		str = "не используется";
	else
		str = QString("%1").arg(uk0);
	if(!ui.liEdArp1Fc_9->hasFocus())
		ui.liEdArp1Fc_9->setText(str);
/////
//340		присвоенный номер канала 10
	iAddr =iAddrArp1Base +52;
	a1 = unitReceive->basicSetting[iAddr];
	str = QString("%1").arg(a1+1);
	if(!ui.liEdArp1Nc_10->hasFocus())
		ui.liEdArp1Nc_10->setText(str);
//341		задержка сброса в единицах 5 мс (200 ? 1 с) канала 10
	iAddr =iAddrArp1Base +53;
	a1 = unitReceive->basicSetting[iAddr];
	a2 = a1/20;
	str = QString("%1").arg(a2,2,10,QChar('0'));
	size =str.size();
	str.insert(size-1,',');
	if(!ui.liEdArp1Tc_10->hasFocus())
		ui.liEdArp1Tc_10->setText(str);
//342-343	частота канала 10
	iAddr =iAddrArp1Base +54;
	uk0 = *(int*)&unitReceive->basicSetting[iAddr];
	if(uk0==0xffffffff)
		str = "не используется";
	else
		str = QString("%1").arg(uk0);
	if(!ui.liEdArp1Fc_10->hasFocus())
		ui.liEdArp1Fc_10->setText(str);
/////
//344		присвоенный номер канала 11
	iAddr =iAddrArp1Base +56;
	a1 = unitReceive->basicSetting[iAddr];
	str = QString("%1").arg(a1+1);
	if(!ui.liEdArp1Nc_11->hasFocus())
		ui.liEdArp1Nc_11->setText(str);
//345		задержка сброса в единицах 5 мс (200 ? 1 с) канала 11
	iAddr =iAddrArp1Base +57;
	a1 = unitReceive->basicSetting[iAddr];
	a2 = a1/20;
	str = QString("%1").arg(a2,2,10,QChar('0'));
	size =str.size();
	str.insert(size-1,',');
	if(!ui.liEdArp1Tc_11->hasFocus())
		ui.liEdArp1Tc_11->setText(str);
//346-347	частота канала 11
	iAddr =iAddrArp1Base +58;
	uk0 = *(int*)&unitReceive->basicSetting[iAddr];
	if(uk0==0xffffffff)
		str = "не используется";
	else
		str = QString("%1").arg(uk0);
	if(!ui.liEdArp1Fc_11->hasFocus())
		ui.liEdArp1Fc_11->setText(str);
/////
//348		присвоенный номер канала 12
	iAddr =iAddrArp1Base +60;
	a1 = unitReceive->basicSetting[iAddr];
	str = QString("%1").arg(a1+1);
	if(!ui.liEdArp1Nc_12->hasFocus())
		ui.liEdArp1Nc_12->setText(str);
//349		задержка сброса в единицах 5 мс (200 ? 1 с) канала 12
	iAddr =iAddrArp1Base +61;
	a1 = unitReceive->basicSetting[iAddr];
	a2 = a1/20;
	str = QString("%1").arg(a2,2,10,QChar('0'));
	size =str.size();
	str.insert(size-1,',');
	if(!ui.liEdArp1Tc_12->hasFocus())
		ui.liEdArp1Tc_12->setText(str);
//350-351	частота канала 12
	iAddr =iAddrArp1Base +62;
	uk0 = *(int*)&unitReceive->basicSetting[iAddr];
	if(uk0==0xffffffff)
		str = "не используется";
	else
		str = QString("%1").arg(uk0);
	if(!ui.liEdArp1Fc_12->hasFocus())
		ui.liEdArp1Fc_12->setText(str);
/////
//352		присвоенный номер канала 13
	iAddr =iAddrArp1Base +64;
	a1 = unitReceive->basicSetting[iAddr];
	str = QString("%1").arg(a1+1);
	if(!ui.liEdArp1Nc_13->hasFocus())
		ui.liEdArp1Nc_13->setText(str);
//353		задержка сброса в единицах 5 мс (200 ? 1 с) канала 13
	iAddr =iAddrArp1Base +65;
	a1 = unitReceive->basicSetting[iAddr];
	a2 = a1/20;
	str = QString("%1").arg(a2,2,10,QChar('0'));
	size =str.size();
	str.insert(size-1,',');
	if(!ui.liEdArp1Tc_13->hasFocus())
		ui.liEdArp1Tc_13->setText(str);
//354-355	частота канала 13
	iAddr =iAddrArp1Base +66;
	uk0 = *(int*)&unitReceive->basicSetting[iAddr];
	if(uk0==0xffffffff)
		str = "не используется";
	else
		str = QString("%1").arg(uk0);
	if(!ui.liEdArp1Fc_13->hasFocus())
		ui.liEdArp1Fc_13->setText(str);
/////
//356		присвоенный номер канала 14
	iAddr =iAddrArp1Base +68;
	a1 = unitReceive->basicSetting[iAddr];
	str = QString("%1").arg(a1+1);
	if(!ui.liEdArp1Nc_14->hasFocus())
		ui.liEdArp1Nc_14->setText(str);
//357		задержка сброса в единицах 5 мс (200 ? 1 с) канала 14
	iAddr =iAddrArp1Base +69;
	a1 = unitReceive->basicSetting[iAddr];
	a2 = a1/20;
	str = QString("%1").arg(a2,2,10,QChar('0'));
	size =str.size();
	str.insert(size-1,',');
	if(!ui.liEdArp1Tc_14->hasFocus())
		ui.liEdArp1Tc_14->setText(str);
//358-359	частота канала 14
	iAddr =iAddrArp1Base +70;
	uk0 = *(int*)&unitReceive->basicSetting[iAddr];
	if(uk0==0xffffffff)
		str = "не используется";
	else
		str = QString("%1").arg(uk0);
	if(!ui.liEdArp1Fc_14->hasFocus())
		ui.liEdArp1Fc_14->setText(str);
/////
//360		присвоенный номер канала 15
	iAddr =iAddrArp1Base +72;
	a1 = unitReceive->basicSetting[iAddr];
	str = QString("%1").arg(a1+1);
	if(!ui.liEdArp1Nc_15->hasFocus())
		ui.liEdArp1Nc_15->setText(str);
//361		задержка сброса в единицах 5 мс (200 ? 1 с) канала 15
	iAddr =iAddrArp1Base +73;
	a1 = unitReceive->basicSetting[iAddr];
	a2 = a1/20;
	str = QString("%1").arg(a2,2,10,QChar('0'));
	size =str.size();
	str.insert(size-1,',');
	if(!ui.liEdArp1Tc_15->hasFocus())
		ui.liEdArp1Tc_15->setText(str);
//362-363	частота канала 15
	iAddr =iAddrArp1Base +74;
	uk0 = *(int*)&unitReceive->basicSetting[iAddr];
	if(uk0==0xffffffff)
		str = "не используется";
	else
		str = QString("%1").arg(uk0);
	if(!ui.liEdArp1Fc_15->hasFocus())
		ui.liEdArp1Fc_15->setText(str);
/////
//364		присвоенный номер канала 16
	iAddr =iAddrArp1Base +76;
	a1 = unitReceive->basicSetting[iAddr];
	str = QString("%1").arg(a1+1);
	if(!ui.liEdArp1Nc_16->hasFocus())
		ui.liEdArp1Nc_16->setText(str);
//365		задержка сброса в единицах 5 мс (200 ? 1 с) канала 16
	iAddr =iAddrArp1Base +77;
	a1 = unitReceive->basicSetting[iAddr];
	a2 = a1/20;
	str = QString("%1").arg(a2,2,10,QChar('0'));
	size =str.size();
	str.insert(size-1,',');
	if(!ui.liEdArp1Tc_16->hasFocus())
		ui.liEdArp1Tc_16->setText(str);
//366-287	частота канала 16
	iAddr =iAddrArp1Base +78;
	uk0 = *(int*)&unitReceive->basicSetting[iAddr];
	if(uk0==0xffffffff)
		str = "не используется";
	else
		str = QString("%1").arg(uk0);
	if(!ui.liEdArp1Fc_16->hasFocus())
		ui.liEdArp1Fc_16->setText(str);
/////

	return;
}






void TabCust::updateDialogArp2Ch()
{
        int iAddr=0;
        ushort a1,a2;
        uint uk0;
        int size=0;
        QString str;
    char ch;int k0;
	char nameSource[16];
	Unn unn;
    QString str2;
	ushort a0;
//Arp2::::::::::::::АРП 1
//232..233 параметры источника
//		бит 15:	1 — порт разрешен
//	iAddrArp2Base=232;
//Arp2::::::::::::::АРП 1
//232..233 параметры источника
//		бит 15:	1 — порт разрешен
//	iAddrArp2Base=232;
	iAddr=iAddrArp2Base+0;						//232;
	ui.grBoArp2->setChecked(
		wrd.f(unitReceive->basicSetting[iAddr])->bit15);
	a1=unitReceive->basicSetting[iAddr];
	iAddr=iAddrArp2Base+0;						//232;
//биты 1,0:	номер устройства
	wrd.f(unitReceive->basicSetting[iAddr]);
	a1 = wrd.s.bit2*4+wrd.s.bit1*2+wrd.s.bit0;
	ui.coBoArp2Num->setCurrentIndex(a1);	
//биты 6,3:	номер светодиода
	iAddr=iAddrArp2Base+0;						//232;
	wrd.f(unitReceive->basicSetting[iAddr]);
	a1 = wrd.s.bit6*8+wrd.s.bit5*4+wrd.s.bit4*2+wrd.s.bit3;
	ui.coBoArp2LedNum->setCurrentIndex(a1);	
//биты 11,7:	номер устройства
	wrd.f(unitReceive->basicSetting[iAddr]);
	a1 = wrd.s.bit11*16+wrd.s.bit10*8+wrd.s.bit9*4+wrd.s.bit8*2+wrd.s.bit7;
	ui.coBoArp2Prot->setCurrentIndex(a1);	
//64-бит 16:64+1-бит 0	склонение (0 — географическое (истинное), 1 — магнитное)
	iAddr=iAddrArp2Base+1;						//232+1;
	wrd.f(unitReceive->basicSetting[iAddr]);
	if(wrd.s.bit0)
		ui.raBuArp2GradMagnetic->setChecked(true);
	else
		ui.raBuArp2GradGeographic->setChecked(true);
//234 биты 7...0 SAC
	iAddr=iAddrArp2Base+2;						//234;
	a1=unitReceive->basicSetting[iAddr];
	a1&=0xFF;
	str = QString("%1").arg(a1);
	if(!ui.liEdArp2SAC->hasFocus())
		ui.liEdArp2SAC->setText(str);
//234 биты 7...0 SIC
	iAddr=iAddrArp2Base+2;						//234;
	a1=unitReceive->basicSetting[iAddr];
	unn.uShU[0]=a1;
	a2=unn.ubU[1];
	str = QString("%1").arg(a2);
	if(!ui.liEdArp2SIC->hasFocus())
		ui.liEdArp2SIC->setText(str);
//234 - биты 19...16 номер порта приема
	//66+1 - 3210
	wrd.f(unitReceive->basicSetting[iAddr+1]);
	a1 = wrd.s.bit3*8+wrd.s.bit2*4+wrd.s.bit1*2+wrd.s.bit0;
	ui.coBoArp2Port->setCurrentIndex(a1);	
	

//234-бит 20:66+1-бит 4	использовать SAC для идентификации
	iAddr=iAddrArp2Base+3;						//234+1;
	ui.chBoArp2UseSAC->setChecked(
		wrd.f(unitReceive->basicSetting[iAddr])->bit4);
//234-бит 21:66+1-бит 5	использовать SIC для идентификации
	iAddr=iAddrArp2Base+3;						//234+1;
	ui.chBoArp2UseSIC->setChecked(
		wrd.f(unitReceive->basicSetting[iAddr])->bit5);
//234-бит 22:66+1-бит 6	использовать номер порта для идентификации
	iAddr=iAddrArp2Base+3;						//234+1;
	ui.chBoArp2UsePort->setChecked(
		wrd.f(unitReceive->basicSetting[iAddr])->bit6);
//236…243  название источника 16 байт
	iAddr=iAddrArp2Base+4;						//234;
	for (int i=0;i<16;i++)
	{
		k0=i;
		if(i/2*2==i)
		{
			ch = firstChar(unitReceive->basicSetting[i/2+iAddr]);
			if(ch == 0x00) break;
			nameSource[i]=ch;
		}
		else
		{
			ch  = secondChar(unitReceive->basicSetting[i/2+iAddr]);
			if(ch == 0x0)break;
			nameSource[i] = ch;
		}
	}
	str2 = QString::fromAscii(nameSource,k0);
	if(!ui.liEdArp2Name->hasFocus())
		ui.liEdArp2Name->setText(str2);
//244	дальность точки стояния, метры
	iAddr=iAddrArp2Base+12;						//244;
	a1 = unitReceive->basicSetting[iAddr];
	str = QString("%1").arg(a1);
	if(!ui.liEdArp2PntDistance->hasFocus())
		ui.liEdArp2PntDistance->setText(str);
//245 азимут точки стояния, минуты (градусы ? 60)
	iAddr=iAddrArp2Base+13;						//245;
	a0 = unitReceive->basicSetting[iAddr];
	a1 = a0/60;
	a2 = a0 - (a1*60);
	str = QString("%1").arg(a1);
	str.append(QString("°%1'").arg(a2,2,10,QLatin1Char( '0' )));
	if(!ui.liEdArp2PntAzimuth->hasFocus())
		ui.liEdArp2PntAzimuth->setText(str);
//247 доворот, минуты (градусы*60)
	iAddr=iAddrArp2Base+15;						//247;
	a0 = unitReceive->basicSetting[iAddr];
	a1 = a0/60;
	a2 = a0 - (a1*60);
	str = QString("%1").arg(a1);
	str.append(QString("°%1'").arg(a2,2,10,QLatin1Char( '0' )));
	if(!ui.liEdArp2Turn->hasFocus())
		ui.liEdArp2Turn->setText(str);

//248		присвоенный номер канала 1
//	iAddrArp2Base=232;
	iAddr =iAddrArp2Base +16;
	a1 = unitReceive->basicSetting[iAddr];
	str = QString("%1").arg(a1+1);
	if(!ui.liEdArp2Nc_1->hasFocus())
		ui.liEdArp2Nc_1->setText(str);
//249		задержка сброса в единицах 5 мс (200 ? 1 с) канала 1
	iAddr =iAddrArp2Base +17;
	a1 = unitReceive->basicSetting[iAddr];
	a2 = a1/20;
	str = QString("%1").arg(a2,2,10,QChar('0'));
	size =str.size();
	str.insert(size-1,',');
	if(!ui.liEdArp2Tc_1->hasFocus())
		ui.liEdArp2Tc_1->setText(str);
//250-251	частота канала 1
	iAddr =iAddrArp2Base +18;
	uk0 = *(int*)&unitReceive->basicSetting[iAddr];
	if(uk0==0xffffffff)
		str = "не используется";
	else
		str = QString("%1").arg(uk0);
	if(!ui.liEdArp2Fc_1->hasFocus())
		ui.liEdArp2Fc_1->setText(str);
/////
//308		присвоенный номер канала 2
	iAddr =iAddrArp2Base +20;
	a1 = unitReceive->basicSetting[iAddr];
	str = QString("%1").arg(a1+1);
	if(!ui.liEdArp2Nc_2->hasFocus())
		ui.liEdArp2Nc_2->setText(str);
//309		задержка сброса в единицах 5 мс (200 ? 1 с) канала 2
	iAddr =iAddrArp2Base +21;
	a1 = unitReceive->basicSetting[iAddr];
	a2 = a1/20;
	str = QString("%1").arg(a2,2,10,QChar('0'));
	size =str.size();
	str.insert(size-1,',');
	if(!ui.liEdArp2Tc_2->hasFocus())
		ui.liEdArp2Tc_2->setText(str);
//310-311	частота канала 2
	iAddr =iAddrArp2Base +22;
	uk0 = *(int*)&unitReceive->basicSetting[iAddr];
	if(uk0==0xffffffff)
		str = "не используется";
	else
		str = QString("%1").arg(uk0);
	if(!ui.liEdArp2Fc_2->hasFocus())
		ui.liEdArp2Fc_2->setText(str);
/////
//312		присвоенный номер канала 3
	iAddr =iAddrArp2Base +24;
	a1 = unitReceive->basicSetting[iAddr];
	str = QString("%1").arg(a1+1);
	if(!ui.liEdArp2Nc_3->hasFocus())
		ui.liEdArp2Nc_3->setText(str);
//313		задержка сброса в единицах 5 мс (200 ? 1 с) канала 3
	iAddr =iAddrArp2Base +25;
	a1 = unitReceive->basicSetting[iAddr];
	a2 = a1/20;
	str = QString("%1").arg(a2,2,10,QChar('0'));
	size =str.size();
	str.insert(size-1,',');
	if(!ui.liEdArp2Tc_3->hasFocus())
		ui.liEdArp2Tc_3->setText(str);
//314-235	частота канала 3
	iAddr =iAddrArp2Base +26;
	uk0 = *(int*)&unitReceive->basicSetting[iAddr];
	if(uk0==0xffffffff)
		str = "не используется";
	else
		str = QString("%1").arg(uk0);
	if(!ui.liEdArp2Fc_3->hasFocus())
		ui.liEdArp2Fc_3->setText(str);
/////
//316		присвоенный номер канала 4
	iAddr =iAddrArp2Base +28;
	a1 = unitReceive->basicSetting[iAddr];
	str = QString("%1").arg(a1+1);
	if(!ui.liEdArp2Nc_4->hasFocus())
		ui.liEdArp2Nc_4->setText(str);
//317		задержка сброса в единицах 5 мс (200 ? 1 с) канала 4
	iAddr =iAddrArp2Base +29;
	a1 = unitReceive->basicSetting[iAddr];
	a2 = a1/20;
	str = QString("%1").arg(a2,2,10,QChar('0'));
	size =str.size();
	str.insert(size-1,',');
	if(!ui.liEdArp2Tc_4->hasFocus())
		ui.liEdArp2Tc_4->setText(str);
//318-239	частота канала 4
	iAddr =iAddrArp2Base +30;
	uk0 = *(int*)&unitReceive->basicSetting[iAddr];
	if(uk0==0xffffffff)
		str = "не используется";
	else
		str = QString("%1").arg(uk0);
	if(!ui.liEdArp2Fc_4->hasFocus())
		ui.liEdArp2Fc_4->setText(str);
/////
//320		присвоенный номер канала 5
	iAddr =iAddrArp2Base +32;
	a1 = unitReceive->basicSetting[iAddr];
	str = QString("%1").arg(a1+1);
	if(!ui.liEdArp2Nc_5->hasFocus())
		ui.liEdArp2Nc_5->setText(str);
//321		задержка сброса в единицах 5 мс (200 ? 1 с) канала 5
	iAddr =iAddrArp2Base +33;
	a1 = unitReceive->basicSetting[iAddr];
	a2 = a1/20;
	str = QString("%1").arg(a2,2,10,QChar('0'));
	size =str.size();
	str.insert(size-1,',');
	if(!ui.liEdArp2Tc_5->hasFocus())
		ui.liEdArp2Tc_5->setText(str);
//322-243	частота канала 5
	iAddr =iAddrArp2Base +34;
	uk0 = *(int*)&unitReceive->basicSetting[iAddr];
	if(uk0==0xffffffff)
		str = "не используется";
	else
		str = QString("%1").arg(uk0);
	if(!ui.liEdArp2Fc_5->hasFocus())
		ui.liEdArp2Fc_5->setText(str);
/////
//324		присвоенный номер канала 6
	iAddr =iAddrArp2Base +36;
	a1 = unitReceive->basicSetting[iAddr];
	str = QString("%1").arg(a1+1);
	if(!ui.liEdArp2Nc_6->hasFocus())
		ui.liEdArp2Nc_6->setText(str);
//325		задержка сброса в единицах 5 мс (200 ? 1 с) канала 6
	iAddr =iAddrArp2Base +37;
	a1 = unitReceive->basicSetting[iAddr];
	a2 = a1/20;
	str = QString("%1").arg(a2,2,10,QChar('0'));
	size =str.size();
	str.insert(size-1,',');
	if(!ui.liEdArp2Tc_6->hasFocus())
		ui.liEdArp2Tc_6->setText(str);
//326-327	частота канала 6
	iAddr =iAddrArp2Base +38;
	uk0 = *(int*)&unitReceive->basicSetting[iAddr];
	if(uk0==0xffffffff)
		str = "не используется";
	else
		str = QString("%1").arg(uk0);
	if(!ui.liEdArp2Fc_6->hasFocus())
		ui.liEdArp2Fc_6->setText(str);
/////
//328		присвоенный номер канала 7
	iAddr =iAddrArp2Base +40;
	a1 = unitReceive->basicSetting[iAddr];
	str = QString("%1").arg(a1+1);
	if(!ui.liEdArp2Nc_7->hasFocus())
		ui.liEdArp2Nc_7->setText(str);
//329		задержка сброса в единицах 5 мс (200 ? 1 с) канала 7
	iAddr =iAddrArp2Base +41;
	a1 = unitReceive->basicSetting[iAddr];
	a2 = a1/20;
	str = QString("%1").arg(a2,2,10,QChar('0'));
	size =str.size();
	str.insert(size-1,',');
	if(!ui.liEdArp2Tc_7->hasFocus())
		ui.liEdArp2Tc_7->setText(str);
//330-331	частота канала 7
	iAddr =iAddrArp2Base +42;
	uk0 = *(int*)&unitReceive->basicSetting[iAddr];
	if(uk0==0xffffffff)
		str = "не используется";
	else
		str = QString("%1").arg(uk0);
	if(!ui.liEdArp2Fc_7->hasFocus())
		ui.liEdArp2Fc_7->setText(str);
/////
//332		присвоенный номер канала 8
	iAddr =iAddrArp2Base +44;
	a1 = unitReceive->basicSetting[iAddr];
	str = QString("%1").arg(a1+1);
	if(!ui.liEdArp2Nc_8->hasFocus())
		ui.liEdArp2Nc_8->setText(str);
//333		задержка сброса в единицах 5 мс (200 ? 1 с) канала 8
	iAddr =iAddrArp2Base +45;
	a1 = unitReceive->basicSetting[iAddr];
	a2 = a1/20;
	str = QString("%1").arg(a2,2,10,QChar('0'));
	size =str.size();
	str.insert(size-1,',');
	if(!ui.liEdArp2Tc_8->hasFocus())
		ui.liEdArp2Tc_8->setText(str);
//334-335	частота канала 8
	iAddr =iAddrArp2Base +46;
	uk0 = *(int*)&unitReceive->basicSetting[iAddr];
	if(uk0==0xffffffff)
		str = "не используется";
	else
		str = QString("%1").arg(uk0);
	if(!ui.liEdArp2Fc_8->hasFocus())
		ui.liEdArp2Fc_8->setText(str);
/////
//336		присвоенный номер канала 9
	iAddr =iAddrArp2Base +48;
	a1 = unitReceive->basicSetting[iAddr];
	str = QString("%1").arg(a1+1);
	if(!ui.liEdArp2Nc_9->hasFocus())
		ui.liEdArp2Nc_9->setText(str);
//337		задержка сброса в единицах 5 мс (200 ? 1 с) канала 9
	iAddr =iAddrArp2Base +49;
	a1 = unitReceive->basicSetting[iAddr];
	a2 = a1/20;
	str = QString("%1").arg(a2,2,10,QChar('0'));
	size =str.size();
	str.insert(size-1,',');
	if(!ui.liEdArp2Tc_9->hasFocus())
		ui.liEdArp2Tc_9->setText(str);
//338-259	частота канала 9
	iAddr =iAddrArp2Base +50;
	uk0 = *(int*)&unitReceive->basicSetting[iAddr];
	if(uk0==0xffffffff)
		str = "не используется";
	else
		str = QString("%1").arg(uk0);
	if(!ui.liEdArp2Fc_9->hasFocus())
		ui.liEdArp2Fc_9->setText(str);
/////
//340		присвоенный номер канала 10
	iAddr =iAddrArp2Base +52;
	a1 = unitReceive->basicSetting[iAddr];
	str = QString("%1").arg(a1+1);
	if(!ui.liEdArp2Nc_10->hasFocus())
		ui.liEdArp2Nc_10->setText(str);
//341		задержка сброса в единицах 5 мс (200 ? 1 с) канала 10
	iAddr =iAddrArp2Base +53;
	a1 = unitReceive->basicSetting[iAddr];
	a2 = a1/20;
	str = QString("%1").arg(a2,2,10,QChar('0'));
	size =str.size();
	str.insert(size-1,',');
	if(!ui.liEdArp2Tc_10->hasFocus())
		ui.liEdArp2Tc_10->setText(str);
//342-343	частота канала 10
	iAddr =iAddrArp2Base +54;
	uk0 = *(int*)&unitReceive->basicSetting[iAddr];
	if(uk0==0xffffffff)
		str = "не используется";
	else
		str = QString("%1").arg(uk0);
	if(!ui.liEdArp2Fc_10->hasFocus())
		ui.liEdArp2Fc_10->setText(str);
/////
//344		присвоенный номер канала 11
	iAddr =iAddrArp2Base +56;
	a1 = unitReceive->basicSetting[iAddr];
	str = QString("%1").arg(a1+1);
	if(!ui.liEdArp2Nc_11->hasFocus())
		ui.liEdArp2Nc_11->setText(str);
//345		задержка сброса в единицах 5 мс (200 ? 1 с) канала 11
	iAddr =iAddrArp2Base +57;
	a1 = unitReceive->basicSetting[iAddr];
	a2 = a1/20;
	str = QString("%1").arg(a2,2,10,QChar('0'));
	size =str.size();
	str.insert(size-1,',');
	if(!ui.liEdArp2Tc_11->hasFocus())
		ui.liEdArp2Tc_11->setText(str);
//346-347	частота канала 11
	iAddr =iAddrArp2Base +58;
	uk0 = *(int*)&unitReceive->basicSetting[iAddr];
	if(uk0==0xffffffff)
		str = "не используется";
	else
		str = QString("%1").arg(uk0);
	if(!ui.liEdArp2Fc_11->hasFocus())
		ui.liEdArp2Fc_11->setText(str);
/////
//348		присвоенный номер канала 12
	iAddr =iAddrArp2Base +60;
	a1 = unitReceive->basicSetting[iAddr];
	str = QString("%1").arg(a1+1);
	if(!ui.liEdArp2Nc_12->hasFocus())
		ui.liEdArp2Nc_12->setText(str);
//349		задержка сброса в единицах 5 мс (200 ? 1 с) канала 12
	iAddr =iAddrArp2Base +61;
	a1 = unitReceive->basicSetting[iAddr];
	a2 = a1/20;
	str = QString("%1").arg(a2,2,10,QChar('0'));
	size =str.size();
	str.insert(size-1,',');
	if(!ui.liEdArp2Tc_12->hasFocus())
		ui.liEdArp2Tc_12->setText(str);
//350-351	частота канала 12
	iAddr =iAddrArp2Base +62;
	uk0 = *(int*)&unitReceive->basicSetting[iAddr];
	if(uk0==0xffffffff)
		str = "не используется";
	else
		str = QString("%1").arg(uk0);
	if(!ui.liEdArp2Fc_12->hasFocus())
		ui.liEdArp2Fc_12->setText(str);
/////
//352		присвоенный номер канала 13
	iAddr =iAddrArp2Base +64;
	a1 = unitReceive->basicSetting[iAddr];
	str = QString("%1").arg(a1+1);
	if(!ui.liEdArp2Nc_13->hasFocus())
		ui.liEdArp2Nc_13->setText(str);
//353		задержка сброса в единицах 5 мс (200 ? 1 с) канала 13
	iAddr =iAddrArp2Base +65;
	a1 = unitReceive->basicSetting[iAddr];
	a2 = a1/20;
	str = QString("%1").arg(a2,2,10,QChar('0'));
	size =str.size();
	str.insert(size-1,',');
	if(!ui.liEdArp2Tc_13->hasFocus())
		ui.liEdArp2Tc_13->setText(str);
//354-355	частота канала 13
	iAddr =iAddrArp2Base +66;
	uk0 = *(int*)&unitReceive->basicSetting[iAddr];
	if(uk0==0xffffffff)
		str = "не используется";
	else
		str = QString("%1").arg(uk0);
	if(!ui.liEdArp2Fc_13->hasFocus())
		ui.liEdArp2Fc_13->setText(str);
/////
//356		присвоенный номер канала 14
	iAddr =iAddrArp2Base +68;
	a1 = unitReceive->basicSetting[iAddr];
	str = QString("%1").arg(a1+1);
	if(!ui.liEdArp2Nc_14->hasFocus())
		ui.liEdArp2Nc_14->setText(str);
//357		задержка сброса в единицах 5 мс (200 ? 1 с) канала 14
	iAddr =iAddrArp2Base +69;
	a1 = unitReceive->basicSetting[iAddr];
	a2 = a1/20;
	str = QString("%1").arg(a2,2,10,QChar('0'));
	size =str.size();
	str.insert(size-1,',');
	if(!ui.liEdArp2Tc_14->hasFocus())
		ui.liEdArp2Tc_14->setText(str);
//358-359	частота канала 14
	iAddr =iAddrArp2Base +70;
	uk0 = *(int*)&unitReceive->basicSetting[iAddr];
	if(uk0==0xffffffff)
		str = "не используется";
	else
		str = QString("%1").arg(uk0);
	if(!ui.liEdArp2Fc_14->hasFocus())
		ui.liEdArp2Fc_14->setText(str);
/////
//360		присвоенный номер канала 15
	iAddr =iAddrArp2Base +72;
	a1 = unitReceive->basicSetting[iAddr];
	str = QString("%1").arg(a1+1);
	if(!ui.liEdArp2Nc_15->hasFocus())
		ui.liEdArp2Nc_15->setText(str);
//361		задержка сброса в единицах 5 мс (200 ? 1 с) канала 15
	iAddr =iAddrArp2Base +73;
	a1 = unitReceive->basicSetting[iAddr];
	a2 = a1/20;
	str = QString("%1").arg(a2,2,10,QChar('0'));
	size =str.size();
	str.insert(size-1,',');
	if(!ui.liEdArp2Tc_15->hasFocus())
		ui.liEdArp2Tc_15->setText(str);
//362-363	частота канала 15
	iAddr =iAddrArp2Base +74;
	uk0 = *(int*)&unitReceive->basicSetting[iAddr];
	if(uk0==0xffffffff)
		str = "не используется";
	else
		str = QString("%1").arg(uk0);
	if(!ui.liEdArp2Fc_15->hasFocus())
		ui.liEdArp2Fc_15->setText(str);
/////
//364		присвоенный номер канала 16
	iAddr =iAddrArp2Base +76;
	a1 = unitReceive->basicSetting[iAddr];
	str = QString("%1").arg(a1+1);
	if(!ui.liEdArp2Nc_16->hasFocus())
		ui.liEdArp2Nc_16->setText(str);
//365		задержка сброса в единицах 5 мс (200 ? 1 с) канала 16
	iAddr =iAddrArp2Base +77;
	a1 = unitReceive->basicSetting[iAddr];
	a2 = a1/20;
	str = QString("%1").arg(a2,2,10,QChar('0'));
	size =str.size();
	str.insert(size-1,',');
	if(!ui.liEdArp2Tc_16->hasFocus())
		ui.liEdArp2Tc_16->setText(str);
//366-287	частота канала 16
	iAddr =iAddrArp2Base +78;
	uk0 = *(int*)&unitReceive->basicSetting[iAddr];
	if(uk0==0xffffffff)
		str = "не используется";
	else
		str = QString("%1").arg(uk0);
	if(!ui.liEdArp2Fc_16->hasFocus())
		ui.liEdArp2Fc_16->setText(str);
/////

	return;
}






