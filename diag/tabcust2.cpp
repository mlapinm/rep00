#include "tabcust.h"
#include "unn.h"
#include <QDebug>


void TabCust::createActionsSoPo()
{
//порты синхр информации
	QPoint pnt0;
	pnt0=ui.coBoPort1AsincrProt->pos();
	ui.coBoPort1SincrProt_2->move(pnt0);
	ui.coBoPort1SincrProt_2->setVisible(false);

	ui.coBoPort2SincrProt_2->move(pnt0);
	ui.coBoPort2SincrProt_2->setVisible(false);

	ui.coBoPort3SincrProt_2->move(pnt0);
	ui.coBoPort3SincrProt_2->setVisible(false);

	ui.coBoPort4SincrProt_2->move(pnt0);
	ui.coBoPort4SincrProt_2->setVisible(false);

	ui.coBoPort5SincrProt_2->move(pnt0);
	ui.coBoPort5SincrProt_2->setVisible(false);

	ui.coBoPort6SincrProt_2->move(pnt0);
	ui.coBoPort6SincrProt_2->setVisible(false);

	ui.coBoPort7SincrProt_2->move(pnt0);
	ui.coBoPort7SincrProt_2->setVisible(false);

	ui.coBoPort8SincrProt_2->move(pnt0);
	ui.coBoPort8SincrProt_2->setVisible(false);

	ui.coBoPort9SincrProt_2->move(pnt0);
	ui.coBoPort9SincrProt_2->setVisible(false);

	ui.coBoPort10SincrProt_2->move(pnt0);
	ui.coBoPort10SincrProt_2->setVisible(false);


//протоколы 1->..
	QStringList sl;
	sl.clear();
	for(int i=0;i<ui.coBoRls1Prot->count();i++)
	{
		sl+=ui.coBoRls1Prot->itemText(i);
	}
	ui.coBoRls2Prot->clear();
	for(int i=0;i<ui.coBoRls1Prot->count();i++)
	{
		ui.coBoRls2Prot->insertItem(i,sl[i]);
	}
	ui.coBoRls3Prot->clear();
	for(int i=0;i<ui.coBoRls1Prot->count();i++)
	{
		ui.coBoRls3Prot->insertItem(i,sl[i]);
	}
	ui.coBoRls4Prot->clear();
	for(int i=0;i<ui.coBoRls1Prot->count();i++)
	{
		ui.coBoRls4Prot->insertItem(i,sl[i]);
	}
	ui.coBoRls5Prot->clear();
	for(int i=0;i<ui.coBoRls1Prot->count();i++)
	{
		ui.coBoRls5Prot->insertItem(i,sl[i]);
	}
	ui.coBoRls6Prot->clear();
	for(int i=0;i<ui.coBoRls1Prot->count();i++)
	{
		ui.coBoRls6Prot->insertItem(i,sl[i]);
	}
//
	sl.clear();
	for(int i=0;i<ui.coBoArp1Prot->count();i++)
	{
		sl+=ui.coBoArp1Prot->itemText(i);
	}
	ui.coBoArp2Prot->clear();
	for(int i=0;i<ui.coBoArp1Prot->count();i++)
	{
		ui.coBoArp2Prot->insertItem(i,sl[i]);
	}
//
	sl.clear();
	for(int i=0;i<ui.coBoSev1Prot->count();i++)
	{
		sl+=ui.coBoSev1Prot->itemText(i);
	}
	ui.coBoSev2Prot->clear();
	for(int i=0;i<ui.coBoSev1Prot->count();i++)
	{
		ui.coBoSev2Prot->insertItem(i,sl[i]);
	}
//1
	sl.clear();
	for(int i=0;i<ui.coBoPort1SincrProt->count();i++)
	{
		sl+=ui.coBoPort1SincrProt->itemText(i);
	}
//1
	ui.coBoPort1SincrProt_2->clear();
	for(int i=0;i<ui.coBoPort1SincrProt->count();i++)
	{
		ui.coBoPort1SincrProt_2->insertItem(i,sl[i]);
	}
//1
	ui.coBoPort2SincrProt_2->clear();
	for(int i=0;i<ui.coBoPort1SincrProt->count();i++)
	{
		ui.coBoPort2SincrProt_2->insertItem(i,sl[i]);
	}
//1
	ui.coBoPort3SincrProt_2->clear();
	for(int i=0;i<ui.coBoPort1SincrProt->count();i++)
	{
		ui.coBoPort3SincrProt_2->insertItem(i,sl[i]);
	}
//1
	ui.coBoPort4SincrProt_2->clear();
	for(int i=0;i<ui.coBoPort1SincrProt->count();i++)
	{
		ui.coBoPort4SincrProt_2->insertItem(i,sl[i]);
	}
//1
	ui.coBoPort5SincrProt_2->clear();
	for(int i=0;i<ui.coBoPort1SincrProt->count();i++)
	{
		ui.coBoPort5SincrProt_2->insertItem(i,sl[i]);
	}
//1
	ui.coBoPort6SincrProt_2->clear();
	for(int i=0;i<ui.coBoPort1SincrProt->count();i++)
	{
		ui.coBoPort6SincrProt_2->insertItem(i,sl[i]);
	}
//1
	ui.coBoPort7SincrProt_2->clear();
	for(int i=0;i<ui.coBoPort1SincrProt->count();i++)
	{
		ui.coBoPort7SincrProt_2->insertItem(i,sl[i]);
	}
//1
	ui.coBoPort8SincrProt_2->clear();
	for(int i=0;i<ui.coBoPort1SincrProt->count();i++)
	{
		ui.coBoPort8SincrProt_2->insertItem(i,sl[i]);
	}
//1
	ui.coBoPort9SincrProt_2->clear();
	for(int i=0;i<ui.coBoPort1SincrProt->count();i++)
	{
		ui.coBoPort9SincrProt_2->insertItem(i,sl[i]);
	}
//1
	ui.coBoPort10SincrProt_2->clear();
	for(int i=0;i<ui.coBoPort1SincrProt->count();i++)
	{
		ui.coBoPort10SincrProt_2->insertItem(i,sl[i]);
	}

//
//
	connect(ui.liEdNameBoard,SIGNAL(editingFinished()),this,SLOT(slLiEdNameBoard()));//
	connect(ui.liEdIp,SIGNAL(editingFinished()),this,SLOT(fLineEditIPInitial()));
	connect(ui.liEdPortBase,SIGNAL(editingFinished()),this,SLOT(fLineEditBasicPort()));
	connect(ui.liEdPortBoard,SIGNAL(editingFinished()),this,SLOT(fLineEditPortBoard()));
	connect(ui.liEdSclonenie,SIGNAL(editingFinished()),this,SLOT(fLineEditGradient()));
//44	параметры порта 1					//--------------//
	connect(ui.grBoPort1,SIGNAL(clicked()),this,SLOT(slGrBoPort1()));
	connect(ui.coBoPort1Boude,SIGNAL(currentIndexChanged(int)),this,SLOT(slCoBoPort1Boude(int)));
	connect(ui.chBoPort1ParityBit,SIGNAL(clicked()),this,SLOT(slChBoPort1ParityBit()));
	connect(ui.raBuPort1Parity,SIGNAL(clicked()),this,SLOT(slRaBuPort1Parity()));
	connect(ui.raBuPort1ParityNo,SIGNAL(clicked()),this,SLOT(slRaBuPort1Parity()));
	connect(ui.chBoPort1SincrInf,SIGNAL(clicked()),this,SLOT(slChBoPort1SincrInf()));
	connect(ui.coBoPort1AsincrProt,SIGNAL(currentIndexChanged(int)),this,SLOT(slCoBoPort1AsincrProt(int)));
	connect(ui.coBoPort1SincrProt,SIGNAL(currentIndexChanged(int)),this,SLOT(slCoBoPort1SincrProt(int)));
	connect(ui.coBoPort1SincrProt_2,SIGNAL(currentIndexChanged(int)),this,SLOT(slCoBoPort1SincrProt(int)));
	connect(ui.raBuPort1Asincr,SIGNAL(clicked()),this,SLOT(slRaBuPort1Asincr()));
	connect(ui.raBuPort1Sincr,SIGNAL(clicked()),this,SLOT(slRaBuPort1Asincr()));
//44	параметры порта 2					//--------------//
	connect(ui.grBoPort2,SIGNAL(clicked()),this,SLOT(slGrBoPort2()));
	connect(ui.coBoPort2Boude,SIGNAL(currentIndexChanged(int)),this,SLOT(slCoBoPort2Boude(int)));
	connect(ui.chBoPort2ParityBit,SIGNAL(clicked()),this,SLOT(slChBoPort2ParityBit()));
	connect(ui.raBuPort2Parity,SIGNAL(clicked()),this,SLOT(slRaBuPort2Parity()));
	connect(ui.raBuPort2ParityNo,SIGNAL(clicked()),this,SLOT(slRaBuPort2Parity()));
	connect(ui.chBoPort2SincrInf,SIGNAL(clicked()),this,SLOT(slChBoPort2SincrInf()));
	connect(ui.coBoPort2AsincrProt,SIGNAL(currentIndexChanged(int)),this,SLOT(slCoBoPort2AsincrProt(int)));
	connect(ui.coBoPort2SincrProt,SIGNAL(currentIndexChanged(int)),this,SLOT(slCoBoPort2SincrProt(int)));
	connect(ui.coBoPort2SincrProt_2,SIGNAL(currentIndexChanged(int)),this,SLOT(slCoBoPort2SincrProt(int)));
	connect(ui.raBuPort2Asincr,SIGNAL(clicked()),this,SLOT(slRaBuPort2Asincr()));
	connect(ui.raBuPort2Sincr,SIGNAL(clicked()),this,SLOT(slRaBuPort2Asincr()));
//44	параметры порта 3					//--------------//
	connect(ui.grBoPort3,SIGNAL(clicked()),this,SLOT(slGrBoPort3()));
	connect(ui.coBoPort3Boude,SIGNAL(currentIndexChanged(int)),this,SLOT(slCoBoPort3Boude(int)));
	connect(ui.chBoPort3ParityBit,SIGNAL(clicked()),this,SLOT(slChBoPort3ParityBit()));
	connect(ui.raBuPort3Parity,SIGNAL(clicked()),this,SLOT(slRaBuPort3Parity()));
	connect(ui.raBuPort3ParityNo,SIGNAL(clicked()),this,SLOT(slRaBuPort3Parity()));
	connect(ui.chBoPort3SincrInf,SIGNAL(clicked()),this,SLOT(slChBoPort3SincrInf()));
	connect(ui.coBoPort3AsincrProt,SIGNAL(currentIndexChanged(int)),this,SLOT(slCoBoPort3AsincrProt(int)));
	connect(ui.coBoPort3SincrProt,SIGNAL(currentIndexChanged(int)),this,SLOT(slCoBoPort3SincrProt(int)));
	connect(ui.coBoPort3SincrProt_2,SIGNAL(currentIndexChanged(int)),this,SLOT(slCoBoPort3SincrProt(int)));
	connect(ui.raBuPort3Asincr,SIGNAL(clicked()),this,SLOT(slRaBuPort3Asincr()));
	connect(ui.raBuPort3Sincr,SIGNAL(clicked()),this,SLOT(slRaBuPort3Asincr()));
//44	параметры порта 4					//--------------//
	connect(ui.grBoPort4,SIGNAL(clicked()),this,SLOT(slGrBoPort4()));
	connect(ui.coBoPort4Boude,SIGNAL(currentIndexChanged(int)),this,SLOT(slCoBoPort4Boude(int)));
	connect(ui.chBoPort4ParityBit,SIGNAL(clicked()),this,SLOT(slChBoPort4ParityBit()));
	connect(ui.raBuPort4Parity,SIGNAL(clicked()),this,SLOT(slRaBuPort4Parity()));
	connect(ui.raBuPort4ParityNo,SIGNAL(clicked()),this,SLOT(slRaBuPort4Parity()));
	connect(ui.chBoPort4SincrInf,SIGNAL(clicked()),this,SLOT(slChBoPort4SincrInf()));
	connect(ui.coBoPort4AsincrProt,SIGNAL(currentIndexChanged(int)),this,SLOT(slCoBoPort4AsincrProt(int)));
	connect(ui.coBoPort4SincrProt,SIGNAL(currentIndexChanged(int)),this,SLOT(slCoBoPort4SincrProt(int)));
	connect(ui.coBoPort4SincrProt_2,SIGNAL(currentIndexChanged(int)),this,SLOT(slCoBoPort4SincrProt(int)));
	connect(ui.raBuPort4Asincr,SIGNAL(clicked()),this,SLOT(slRaBuPort4Asincr()));
	connect(ui.raBuPort4Sincr,SIGNAL(clicked()),this,SLOT(slRaBuPort4Asincr()));
//44	параметры порта 5					//--------------//
	connect(ui.grBoPort5,SIGNAL(clicked()),this,SLOT(slGrBoPort5()));
	connect(ui.coBoPort5Boude,SIGNAL(currentIndexChanged(int)),this,SLOT(slCoBoPort5Boude(int)));
	connect(ui.chBoPort5ParityBit,SIGNAL(clicked()),this,SLOT(slChBoPort5ParityBit()));
	connect(ui.raBuPort5Parity,SIGNAL(clicked()),this,SLOT(slRaBuPort5Parity()));
	connect(ui.raBuPort5ParityNo,SIGNAL(clicked()),this,SLOT(slRaBuPort5Parity()));
	connect(ui.chBoPort5SincrInf,SIGNAL(clicked()),this,SLOT(slChBoPort5SincrInf()));
	connect(ui.coBoPort5AsincrProt,SIGNAL(currentIndexChanged(int)),this,SLOT(slCoBoPort5AsincrProt(int)));
	connect(ui.coBoPort5SincrProt,SIGNAL(currentIndexChanged(int)),this,SLOT(slCoBoPort5SincrProt(int)));
	connect(ui.coBoPort5SincrProt_2,SIGNAL(currentIndexChanged(int)),this,SLOT(slCoBoPort5SincrProt(int)));
	connect(ui.raBuPort5Asincr,SIGNAL(clicked()),this,SLOT(slRaBuPort5Asincr()));
	connect(ui.raBuPort5Sincr,SIGNAL(clicked()),this,SLOT(slRaBuPort5Asincr()));
//44	параметры порта 6					//--------------//
	connect(ui.grBoPort6,SIGNAL(clicked()),this,SLOT(slGrBoPort6()));
	connect(ui.coBoPort6Boude,SIGNAL(currentIndexChanged(int)),this,SLOT(slCoBoPort6Boude(int)));
	connect(ui.chBoPort6ParityBit,SIGNAL(clicked()),this,SLOT(slChBoPort6ParityBit()));
	connect(ui.raBuPort6Parity,SIGNAL(clicked()),this,SLOT(slRaBuPort6Parity()));
	connect(ui.raBuPort6ParityNo,SIGNAL(clicked()),this,SLOT(slRaBuPort6Parity()));
	connect(ui.chBoPort6SincrInf,SIGNAL(clicked()),this,SLOT(slChBoPort6SincrInf()));
	connect(ui.coBoPort6AsincrProt,SIGNAL(currentIndexChanged(int)),this,SLOT(slCoBoPort6AsincrProt(int)));
	connect(ui.coBoPort6SincrProt,SIGNAL(currentIndexChanged(int)),this,SLOT(slCoBoPort6SincrProt(int)));
	connect(ui.coBoPort6SincrProt_2,SIGNAL(currentIndexChanged(int)),this,SLOT(slCoBoPort6SincrProt(int)));
	connect(ui.raBuPort6Asincr,SIGNAL(clicked()),this,SLOT(slRaBuPort6Asincr()));
	connect(ui.raBuPort6Sincr,SIGNAL(clicked()),this,SLOT(slRaBuPort6Asincr()));
//44	параметры порта 7					//--------------//
	connect(ui.grBoPort7,SIGNAL(clicked()),this,SLOT(slGrBoPort7()));
	connect(ui.coBoPort7Boude,SIGNAL(currentIndexChanged(int)),this,SLOT(slCoBoPort7Boude(int)));
	connect(ui.chBoPort7ParityBit,SIGNAL(clicked()),this,SLOT(slChBoPort7ParityBit()));
	connect(ui.raBuPort7Parity,SIGNAL(clicked()),this,SLOT(slRaBuPort7Parity()));
	connect(ui.raBuPort7ParityNo,SIGNAL(clicked()),this,SLOT(slRaBuPort7Parity()));
	connect(ui.chBoPort7SincrInf,SIGNAL(clicked()),this,SLOT(slChBoPort7SincrInf()));
	connect(ui.coBoPort7AsincrProt,SIGNAL(currentIndexChanged(int)),this,SLOT(slCoBoPort7AsincrProt(int)));
	connect(ui.coBoPort7SincrProt,SIGNAL(currentIndexChanged(int)),this,SLOT(slCoBoPort7SincrProt(int)));
	connect(ui.coBoPort7SincrProt_2,SIGNAL(currentIndexChanged(int)),this,SLOT(slCoBoPort7SincrProt(int)));
	connect(ui.raBuPort7Asincr,SIGNAL(clicked()),this,SLOT(slRaBuPort7Asincr()));
	connect(ui.raBuPort7Sincr,SIGNAL(clicked()),this,SLOT(slRaBuPort7Asincr()));
//44	параметры порта 8					//--------------//
	connect(ui.grBoPort8,SIGNAL(clicked()),this,SLOT(slGrBoPort8()));
	connect(ui.coBoPort8Boude,SIGNAL(currentIndexChanged(int)),this,SLOT(slCoBoPort8Boude(int)));
	connect(ui.chBoPort8ParityBit,SIGNAL(clicked()),this,SLOT(slChBoPort8ParityBit()));
	connect(ui.raBuPort8Parity,SIGNAL(clicked()),this,SLOT(slRaBuPort8Parity()));
	connect(ui.raBuPort8ParityNo,SIGNAL(clicked()),this,SLOT(slRaBuPort8Parity()));
	connect(ui.chBoPort8SincrInf,SIGNAL(clicked()),this,SLOT(slChBoPort8SincrInf()));
	connect(ui.coBoPort8AsincrProt,SIGNAL(currentIndexChanged(int)),this,SLOT(slCoBoPort8AsincrProt(int)));
	connect(ui.coBoPort8SincrProt,SIGNAL(currentIndexChanged(int)),this,SLOT(slCoBoPort8SincrProt(int)));
	connect(ui.coBoPort8SincrProt_2,SIGNAL(currentIndexChanged(int)),this,SLOT(slCoBoPort8SincrProt(int)));
	connect(ui.raBuPort8Asincr,SIGNAL(clicked()),this,SLOT(slRaBuPort8Asincr()));
	connect(ui.raBuPort8Sincr,SIGNAL(clicked()),this,SLOT(slRaBuPort8Asincr()));
//44	параметры порта 9					//--------------//
	connect(ui.grBoPort9,SIGNAL(clicked()),this,SLOT(slGrBoPort9()));
	connect(ui.coBoPort9Boude,SIGNAL(currentIndexChanged(int)),this,SLOT(slCoBoPort9Boude(int)));
	connect(ui.chBoPort9ParityBit,SIGNAL(clicked()),this,SLOT(slChBoPort9ParityBit()));
	connect(ui.raBuPort9Parity,SIGNAL(clicked()),this,SLOT(slRaBuPort9Parity()));
	connect(ui.raBuPort9ParityNo,SIGNAL(clicked()),this,SLOT(slRaBuPort9Parity()));
	connect(ui.chBoPort9SincrInf,SIGNAL(clicked()),this,SLOT(slChBoPort9SincrInf()));
	connect(ui.coBoPort9AsincrProt,SIGNAL(currentIndexChanged(int)),this,SLOT(slCoBoPort9AsincrProt(int)));
	connect(ui.coBoPort9SincrProt,SIGNAL(currentIndexChanged(int)),this,SLOT(slCoBoPort9SincrProt(int)));
	connect(ui.coBoPort9SincrProt_2,SIGNAL(currentIndexChanged(int)),this,SLOT(slCoBoPort9SincrProt(int)));
	connect(ui.raBuPort9Asincr,SIGNAL(clicked()),this,SLOT(slRaBuPort9Asincr()));
	connect(ui.raBuPort9Sincr,SIGNAL(clicked()),this,SLOT(slRaBuPort9Asincr()));
//44	параметры порта 10					//--------------//
	connect(ui.grBoPort10,SIGNAL(clicked()),this,SLOT(slGrBoPort10()));
	connect(ui.coBoPort10Boude,SIGNAL(currentIndexChanged(int)),this,SLOT(slCoBoPort10Boude(int)));
	connect(ui.chBoPort10ParityBit,SIGNAL(clicked()),this,SLOT(slChBoPort10ParityBit()));
	connect(ui.raBuPort10Parity,SIGNAL(clicked()),this,SLOT(slRaBuPort10Parity()));
	connect(ui.raBuPort10ParityNo,SIGNAL(clicked()),this,SLOT(slRaBuPort10Parity()));
	connect(ui.chBoPort10SincrInf,SIGNAL(clicked()),this,SLOT(slChBoPort10SincrInf()));
	connect(ui.coBoPort10AsincrProt,SIGNAL(currentIndexChanged(int)),this,SLOT(slCoBoPort10AsincrProt(int)));
//	connect(ui.coBoPort10SincrProt,SIGNAL(currentIndexChanged(int)),this,SLOT(slCoBoPort10SincrProt(int)));
//	connect(ui.coBoPort10SincrProt_2,SIGNAL(currentIndexChanged(int)),this,SLOT(slCoBoPort10SincrProt(int)));
	connect(ui.raBuPort10Asincr,SIGNAL(clicked()),this,SLOT(slRaBuPort10Asincr()));
//	connect(ui.raBuPort10Sincr,SIGNAL(clicked()),this,SLOT(slRaBuPort10Asincr()));


//Rls1::::::::::::::РЛС1
	connect(ui.liEdRls1Name,SIGNAL(editingFinished()),this,SLOT(slLiEdRls1Name()));//
	connect(ui.coBoRls1Num,SIGNAL(currentIndexChanged(int)),this,SLOT(slCoBoRls1Num(int)));
	connect(ui.coBoRls1LedNum,SIGNAL(currentIndexChanged(int)),this,SLOT(slCoBoRls1LedNum(int)));
	connect(ui.grBoRls1,SIGNAL(clicked()),this,SLOT(slGrBoRls1()));
	connect(ui.liEdRls1PntDistance,SIGNAL(editingFinished()),this,SLOT(slLiEdRls1PntDistance()));
	connect(ui.liEdRls1PntAzimuth,SIGNAL(editingFinished()),this,SLOT(slLiEdRls1PntAzimuth()));
	connect(ui.raBuRls1GradMagnetic,SIGNAL(clicked()),this,SLOT(slRaBuRls1Grad()));
	connect(ui.raBuRls1GradGeographic,SIGNAL(clicked()),this,SLOT(slRaBuRls1Grad()));

	connect(ui.grBoRls1Prl,SIGNAL(clicked()),this,SLOT(slGrBoRls1Prl()));
	connect(ui.grBoRls2Prl,SIGNAL(clicked()),this,SLOT(slGrBoRls2Prl()));
	connect(ui.grBoRls3Prl,SIGNAL(clicked()),this,SLOT(slGrBoRls3Prl()));
	connect(ui.grBoRls4Prl,SIGNAL(clicked()),this,SLOT(slGrBoRls4Prl()));
	connect(ui.grBoRls5Prl,SIGNAL(clicked()),this,SLOT(slGrBoRls5Prl()));
	connect(ui.grBoRls6Prl,SIGNAL(clicked()),this,SLOT(slGrBoRls6Prl()));


	connect(ui.liEdRls1DisPlace,SIGNAL(editingFinished()),this,SLOT(slLiEdRls1DisPlace()));

	connect(ui.liEdRls1Blockirov,SIGNAL(editingFinished()),this,SLOT(slLiEdRls1Blockirov()));
	connect(ui.liEdRls2Blockirov,SIGNAL(editingFinished()),this,SLOT(slLiEdRls2Blockirov()));
	connect(ui.liEdRls3Blockirov,SIGNAL(editingFinished()),this,SLOT(slLiEdRls3Blockirov()));
	connect(ui.liEdRls4Blockirov,SIGNAL(editingFinished()),this,SLOT(slLiEdRls4Blockirov()));
	connect(ui.liEdRls5Blockirov,SIGNAL(editingFinished()),this,SLOT(slLiEdRls5Blockirov()));
	connect(ui.liEdRls6Blockirov,SIGNAL(editingFinished()),this,SLOT(slLiEdRls6Blockirov()));

	connect(ui.liEdRls1Turn,SIGNAL(editingFinished()),this,SLOT(slLiEdRls1Turn()));
	connect(ui.chBoRls1UsePort,SIGNAL(clicked()),this,SLOT(slChBoRls1UsePort()));
	connect(ui.chBoRls1UseSAC,SIGNAL(clicked()),this,SLOT(slChBoRls1UseSAC()));
	connect(ui.chBoRls1UseSIC,SIGNAL(clicked()),this,SLOT(slChBoRls1UseSIC()));
	connect(ui.liEdRls1SIC,SIGNAL(editingFinished()),this,SLOT(slLiEdRls1SIC()));
	connect(ui.liEdRls1SAC,SIGNAL(editingFinished()),this,SLOT(slLiEdRls1SAC()));
	connect(ui.liEdRls1DistanceAxisVPP,SIGNAL(editingFinished()),this,SLOT(slLiEdRls1DistanceAxisVPP()));
	connect(ui.liEdRls1HighAerialVPP1,SIGNAL(editingFinished()),this,SLOT(slLiEdRls1HighAerialVPP1()));
	connect(ui.liEdRls1HighAerialVPP2,SIGNAL(editingFinished()),this,SLOT(slLiEdRls1HighAerialVPP2()));
	connect(ui.liEdRls1EndFaceVPP1,SIGNAL(editingFinished()),this,SLOT(slLiEdRls1EndFaceVPP1()));
	connect(ui.liEdRls1EndFaceVPP2,SIGNAL(editingFinished()),this,SLOT(slLiEdRls1EndFaceVPP2()));
	connect(ui.liEdRls1PointPlanting1,SIGNAL(editingFinished()),this,SLOT(slLiEdRls1PointPlanting1()));
	connect(ui.liEdRls1PointPlanting2,SIGNAL(editingFinished()),this,SLOT(slLiEdRls1PointPlanting2()));
	connect(ui.coBoRls1Prot,SIGNAL(currentIndexChanged(int)),this,SLOT(slCoBoRls1Prot(int)));
	connect(ui.coBoRls1Port,SIGNAL(currentIndexChanged(int)),this,SLOT(slCoBoRls1Port(int)));
//end Rls1::::::::::::::РЛС1
//Rls2::::::::::::::РЛС2
	connect(ui.liEdRls2Name,SIGNAL(editingFinished()),this,SLOT(slLiEdRls2Name()));//
	connect(ui.coBoRls2Num,SIGNAL(currentIndexChanged(int)),this,SLOT(slCoBoRls2Num(int)));
	connect(ui.coBoRls2LedNum,SIGNAL(currentIndexChanged(int)),this,SLOT(slCoBoRls2LedNum(int)));
	connect(ui.grBoRls2,SIGNAL(clicked()),this,SLOT(slGrBoRls2()));
	connect(ui.liEdRls2PntDistance,SIGNAL(editingFinished()),this,SLOT(slLiEdRls2PntDistance()));
	connect(ui.liEdRls2PntAzimuth,SIGNAL(editingFinished()),this,SLOT(slLiEdRls2PntAzimuth()));
	connect(ui.raBuRls2GradMagnetic,SIGNAL(clicked()),this,SLOT(slRaBuRls2Grad()));
	connect(ui.raBuRls2GradGeographic,SIGNAL(clicked()),this,SLOT(slRaBuRls2Grad()));
	connect(ui.liEdRls2DisPlace,SIGNAL(editingFinished()),this,SLOT(slLiEdRls2DisPlace()));
	connect(ui.liEdRls2Turn,SIGNAL(editingFinished()),this,SLOT(slLiEdRls2Turn()));
	connect(ui.chBoRls2UsePort,SIGNAL(clicked()),this,SLOT(slChBoRls2UsePort()));
	connect(ui.chBoRls2UseSAC,SIGNAL(clicked()),this,SLOT(slChBoRls2UseSAC()));
	connect(ui.chBoRls2UseSIC,SIGNAL(clicked()),this,SLOT(slChBoRls2UseSIC()));
	connect(ui.liEdRls2SIC,SIGNAL(editingFinished()),this,SLOT(slLiEdRls2SIC()));
	connect(ui.liEdRls2SAC,SIGNAL(editingFinished()),this,SLOT(slLiEdRls2SAC()));
	connect(ui.liEdRls2DistanceAxisVPP,SIGNAL(editingFinished()),this,SLOT(slLiEdRls2DistanceAxisVPP()));
	connect(ui.liEdRls2HighAerialVPP1,SIGNAL(editingFinished()),this,SLOT(slLiEdRls2HighAerialVPP1()));
	connect(ui.liEdRls2HighAerialVPP2,SIGNAL(editingFinished()),this,SLOT(slLiEdRls2HighAerialVPP2()));
	connect(ui.liEdRls2EndFaceVPP1,SIGNAL(editingFinished()),this,SLOT(slLiEdRls2EndFaceVPP1()));
	connect(ui.liEdRls2EndFaceVPP2,SIGNAL(editingFinished()),this,SLOT(slLiEdRls2EndFaceVPP2()));
	connect(ui.liEdRls2PointPlanting1,SIGNAL(editingFinished()),this,SLOT(slLiEdRls2PointPlanting1()));
	connect(ui.liEdRls2PointPlanting2,SIGNAL(editingFinished()),this,SLOT(slLiEdRls2PointPlanting2()));
	connect(ui.coBoRls2Prot,SIGNAL(currentIndexChanged(int)),this,SLOT(slCoBoRls2Prot(int)));
	connect(ui.coBoRls2Port,SIGNAL(currentIndexChanged(int)),this,SLOT(slCoBoRls2Port(int)));
//end Rls2::::::::::::::РЛС2
//Rls3::::::::::::::РЛС3
	connect(ui.liEdRls3Name,SIGNAL(editingFinished()),this,SLOT(slLiEdRls3Name()));//
	connect(ui.coBoRls3Num,SIGNAL(currentIndexChanged(int)),this,SLOT(slCoBoRls3Num(int)));
	connect(ui.coBoRls3LedNum,SIGNAL(currentIndexChanged(int)),this,SLOT(slCoBoRls3LedNum(int)));
	connect(ui.grBoRls3,SIGNAL(clicked()),this,SLOT(slGrBoRls3()));
	connect(ui.liEdRls3PntDistance,SIGNAL(editingFinished()),this,SLOT(slLiEdRls3PntDistance()));
	connect(ui.liEdRls3PntAzimuth,SIGNAL(editingFinished()),this,SLOT(slLiEdRls3PntAzimuth()));
	connect(ui.raBuRls3GradMagnetic,SIGNAL(clicked()),this,SLOT(slRaBuRls3Grad()));
	connect(ui.raBuRls3GradGeographic,SIGNAL(clicked()),this,SLOT(slRaBuRls3Grad()));
	connect(ui.liEdRls3DisPlace,SIGNAL(editingFinished()),this,SLOT(slLiEdRls3DisPlace()));
	connect(ui.liEdRls3Turn,SIGNAL(editingFinished()),this,SLOT(slLiEdRls3Turn()));
	connect(ui.chBoRls3UsePort,SIGNAL(clicked()),this,SLOT(slChBoRls3UsePort()));
	connect(ui.chBoRls3UseSAC,SIGNAL(clicked()),this,SLOT(slChBoRls3UseSAC()));
	connect(ui.chBoRls3UseSIC,SIGNAL(clicked()),this,SLOT(slChBoRls3UseSIC()));
	connect(ui.liEdRls3SIC,SIGNAL(editingFinished()),this,SLOT(slLiEdRls3SIC()));
	connect(ui.liEdRls3SAC,SIGNAL(editingFinished()),this,SLOT(slLiEdRls3SAC()));
	connect(ui.liEdRls3DistanceAxisVPP,SIGNAL(editingFinished()),this,SLOT(slLiEdRls3DistanceAxisVPP()));
	connect(ui.liEdRls3HighAerialVPP1,SIGNAL(editingFinished()),this,SLOT(slLiEdRls3HighAerialVPP1()));
	connect(ui.liEdRls3HighAerialVPP2,SIGNAL(editingFinished()),this,SLOT(slLiEdRls3HighAerialVPP2()));
	connect(ui.liEdRls3EndFaceVPP1,SIGNAL(editingFinished()),this,SLOT(slLiEdRls3EndFaceVPP1()));
	connect(ui.liEdRls3EndFaceVPP2,SIGNAL(editingFinished()),this,SLOT(slLiEdRls3EndFaceVPP2()));
	connect(ui.liEdRls3PointPlanting1,SIGNAL(editingFinished()),this,SLOT(slLiEdRls3PointPlanting1()));
	connect(ui.liEdRls3PointPlanting2,SIGNAL(editingFinished()),this,SLOT(slLiEdRls3PointPlanting2()));
	connect(ui.coBoRls3Prot,SIGNAL(currentIndexChanged(int)),this,SLOT(slCoBoRls3Prot(int)));
	connect(ui.coBoRls3Port,SIGNAL(currentIndexChanged(int)),this,SLOT(slCoBoRls3Port(int)));
//end Rls3::::::::::::::РЛС3
//Rls4::::::::::::::РЛС4
	connect(ui.liEdRls4Name,SIGNAL(editingFinished()),this,SLOT(slLiEdRls4Name()));//
	connect(ui.coBoRls4Num,SIGNAL(currentIndexChanged(int)),this,SLOT(slCoBoRls4Num(int)));
	connect(ui.coBoRls4LedNum,SIGNAL(currentIndexChanged(int)),this,SLOT(slCoBoRls4LedNum(int)));
	connect(ui.grBoRls4,SIGNAL(clicked()),this,SLOT(slGrBoRls4()));
	connect(ui.liEdRls4PntDistance,SIGNAL(editingFinished()),this,SLOT(slLiEdRls4PntDistance()));
	connect(ui.liEdRls4PntAzimuth,SIGNAL(editingFinished()),this,SLOT(slLiEdRls4PntAzimuth()));
	connect(ui.raBuRls4GradMagnetic,SIGNAL(clicked()),this,SLOT(slRaBuRls4Grad()));
	connect(ui.raBuRls4GradGeographic,SIGNAL(clicked()),this,SLOT(slRaBuRls4Grad()));
	connect(ui.liEdRls4DisPlace,SIGNAL(editingFinished()),this,SLOT(slLiEdRls4DisPlace()));
	connect(ui.liEdRls4Turn,SIGNAL(editingFinished()),this,SLOT(slLiEdRls4Turn()));
	connect(ui.chBoRls4UsePort,SIGNAL(clicked()),this,SLOT(slChBoRls4UsePort()));
	connect(ui.chBoRls4UseSAC,SIGNAL(clicked()),this,SLOT(slChBoRls4UseSAC()));
	connect(ui.chBoRls4UseSIC,SIGNAL(clicked()),this,SLOT(slChBoRls4UseSIC()));
	connect(ui.liEdRls4SIC,SIGNAL(editingFinished()),this,SLOT(slLiEdRls4SIC()));
	connect(ui.liEdRls4SAC,SIGNAL(editingFinished()),this,SLOT(slLiEdRls4SAC()));
	connect(ui.liEdRls4DistanceAxisVPP,SIGNAL(editingFinished()),this,SLOT(slLiEdRls4DistanceAxisVPP()));
	connect(ui.liEdRls4HighAerialVPP1,SIGNAL(editingFinished()),this,SLOT(slLiEdRls4HighAerialVPP1()));
	connect(ui.liEdRls4HighAerialVPP2,SIGNAL(editingFinished()),this,SLOT(slLiEdRls4HighAerialVPP2()));
	connect(ui.liEdRls4EndFaceVPP1,SIGNAL(editingFinished()),this,SLOT(slLiEdRls4EndFaceVPP1()));
	connect(ui.liEdRls4EndFaceVPP2,SIGNAL(editingFinished()),this,SLOT(slLiEdRls4EndFaceVPP2()));
	connect(ui.liEdRls4PointPlanting1,SIGNAL(editingFinished()),this,SLOT(slLiEdRls4PointPlanting1()));
	connect(ui.liEdRls4PointPlanting2,SIGNAL(editingFinished()),this,SLOT(slLiEdRls4PointPlanting2()));
	connect(ui.coBoRls4Prot,SIGNAL(currentIndexChanged(int)),this,SLOT(slCoBoRls4Prot(int)));
	connect(ui.coBoRls4Port,SIGNAL(currentIndexChanged(int)),this,SLOT(slCoBoRls4Port(int)));
//end Rls4::::::::::::::РЛС4
//Rls5::::::::::::::РЛС5
	connect(ui.liEdRls5Name,SIGNAL(editingFinished()),this,SLOT(slLiEdRls5Name()));//
	connect(ui.coBoRls5Num,SIGNAL(currentIndexChanged(int)),this,SLOT(slCoBoRls5Num(int)));
	connect(ui.coBoRls5LedNum,SIGNAL(currentIndexChanged(int)),this,SLOT(slCoBoRls5LedNum(int)));
	connect(ui.grBoRls5,SIGNAL(clicked()),this,SLOT(slGrBoRls5()));
	connect(ui.liEdRls5PntDistance,SIGNAL(editingFinished()),this,SLOT(slLiEdRls5PntDistance()));
	connect(ui.liEdRls5PntAzimuth,SIGNAL(editingFinished()),this,SLOT(slLiEdRls5PntAzimuth()));
	connect(ui.raBuRls5GradMagnetic,SIGNAL(clicked()),this,SLOT(slRaBuRls5Grad()));
	connect(ui.raBuRls5GradGeographic,SIGNAL(clicked()),this,SLOT(slRaBuRls5Grad()));
	connect(ui.liEdRls5DisPlace,SIGNAL(editingFinished()),this,SLOT(slLiEdRls5DisPlace()));
	connect(ui.liEdRls5Turn,SIGNAL(editingFinished()),this,SLOT(slLiEdRls5Turn()));
	connect(ui.chBoRls5UsePort,SIGNAL(clicked()),this,SLOT(slChBoRls5UsePort()));
	connect(ui.chBoRls5UseSAC,SIGNAL(clicked()),this,SLOT(slChBoRls5UseSAC()));
	connect(ui.chBoRls5UseSIC,SIGNAL(clicked()),this,SLOT(slChBoRls5UseSIC()));
	connect(ui.liEdRls5SIC,SIGNAL(editingFinished()),this,SLOT(slLiEdRls5SIC()));
	connect(ui.liEdRls5SAC,SIGNAL(editingFinished()),this,SLOT(slLiEdRls5SAC()));
	connect(ui.liEdRls5DistanceAxisVPP,SIGNAL(editingFinished()),this,SLOT(slLiEdRls5DistanceAxisVPP()));
	connect(ui.liEdRls5HighAerialVPP1,SIGNAL(editingFinished()),this,SLOT(slLiEdRls5HighAerialVPP1()));
	connect(ui.liEdRls5HighAerialVPP2,SIGNAL(editingFinished()),this,SLOT(slLiEdRls5HighAerialVPP2()));
	connect(ui.liEdRls5EndFaceVPP1,SIGNAL(editingFinished()),this,SLOT(slLiEdRls5EndFaceVPP1()));
	connect(ui.liEdRls5EndFaceVPP2,SIGNAL(editingFinished()),this,SLOT(slLiEdRls5EndFaceVPP2()));
	connect(ui.liEdRls5PointPlanting1,SIGNAL(editingFinished()),this,SLOT(slLiEdRls5PointPlanting1()));
	connect(ui.liEdRls5PointPlanting2,SIGNAL(editingFinished()),this,SLOT(slLiEdRls5PointPlanting2()));
	connect(ui.coBoRls5Prot,SIGNAL(currentIndexChanged(int)),this,SLOT(slCoBoRls5Prot(int)));
	connect(ui.coBoRls5Port,SIGNAL(currentIndexChanged(int)),this,SLOT(slCoBoRls5Port(int)));
//end Rls5::::::::::::::РЛС5
//Rls6::::::::::::::РЛС6
	connect(ui.liEdRls6Name,SIGNAL(editingFinished()),this,SLOT(slLiEdRls6Name()));//
	connect(ui.coBoRls6Num,SIGNAL(currentIndexChanged(int)),this,SLOT(slCoBoRls6Num(int)));
	connect(ui.coBoRls6LedNum,SIGNAL(currentIndexChanged(int)),this,SLOT(slCoBoRls6LedNum(int)));
	connect(ui.grBoRls6,SIGNAL(clicked()),this,SLOT(slGrBoRls6()));
	connect(ui.liEdRls6PntDistance,SIGNAL(editingFinished()),this,SLOT(slLiEdRls6PntDistance()));
	connect(ui.liEdRls6PntAzimuth,SIGNAL(editingFinished()),this,SLOT(slLiEdRls6PntAzimuth()));
	connect(ui.raBuRls6GradMagnetic,SIGNAL(clicked()),this,SLOT(slRaBuRls6Grad()));
	connect(ui.raBuRls6GradGeographic,SIGNAL(clicked()),this,SLOT(slRaBuRls6Grad()));
	connect(ui.liEdRls6DisPlace,SIGNAL(editingFinished()),this,SLOT(slLiEdRls6DisPlace()));
	connect(ui.liEdRls6Turn,SIGNAL(editingFinished()),this,SLOT(slLiEdRls6Turn()));
	connect(ui.chBoRls6UsePort,SIGNAL(clicked()),this,SLOT(slChBoRls6UsePort()));
	connect(ui.chBoRls6UseSAC,SIGNAL(clicked()),this,SLOT(slChBoRls6UseSAC()));
	connect(ui.chBoRls6UseSIC,SIGNAL(clicked()),this,SLOT(slChBoRls6UseSIC()));
	connect(ui.liEdRls6SIC,SIGNAL(editingFinished()),this,SLOT(slLiEdRls6SIC()));
	connect(ui.liEdRls6SAC,SIGNAL(editingFinished()),this,SLOT(slLiEdRls6SAC()));
	connect(ui.liEdRls6DistanceAxisVPP,SIGNAL(editingFinished()),this,SLOT(slLiEdRls6DistanceAxisVPP()));
	connect(ui.liEdRls6HighAerialVPP1,SIGNAL(editingFinished()),this,SLOT(slLiEdRls6HighAerialVPP1()));
	connect(ui.liEdRls6HighAerialVPP2,SIGNAL(editingFinished()),this,SLOT(slLiEdRls6HighAerialVPP2()));
	connect(ui.liEdRls6EndFaceVPP1,SIGNAL(editingFinished()),this,SLOT(slLiEdRls6EndFaceVPP1()));
	connect(ui.liEdRls6EndFaceVPP2,SIGNAL(editingFinished()),this,SLOT(slLiEdRls6EndFaceVPP2()));
	connect(ui.liEdRls6PointPlanting1,SIGNAL(editingFinished()),this,SLOT(slLiEdRls6PointPlanting1()));
	connect(ui.liEdRls6PointPlanting2,SIGNAL(editingFinished()),this,SLOT(slLiEdRls6PointPlanting2()));
	connect(ui.coBoRls6Prot,SIGNAL(currentIndexChanged(int)),this,SLOT(slCoBoRls6Prot(int)));
	connect(ui.coBoRls6Port,SIGNAL(currentIndexChanged(int)),this,SLOT(slCoBoRls6Port(int)));
//end Rls6::::::::::::::РЛС6

}
void TabCust::slLiEdNameBoard()
{
//12…14  функциональное название платы 6 байт
	int iAddr = 12;
	PLineEdit* lineEdit = ui.liEdNameBoard;
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
	for(int i=0;i<3;i++)
	{
		unitReceive->basicSetting[iAddr+i]=ua[i];
		unitSend->basicSetting[iAddr+i]=ua[i];
	}
}
void TabCust::fLineEditIPInitial()
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
void TabCust::fLineEditBasicPort()
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
void TabCust::fLineEditGradient()
{
	int iAddr = 7;
	PLineEdit* lineEdit = ui.liEdSclonenie;
	fLiEdAzimuth(	lineEdit,
		&unitReceive->basicSetting[iAddr],
		&unitSend->basicSetting[iAddr]	);

}

void TabCust::fLineEditPortBoard()
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
//44	параметры порта 1					//--------------//
void TabCust::slGrBoPort1()
{
	int iAddr=44;
	bool b;
	b=ui.grBoPort1->isChecked();
	wrd.f(
		unitReceive->basicSetting[iAddr]
		)->bit15=b;
	unitReceive->basicSetting[iAddr]=wrd.f();
	unitSend->basicSetting[iAddr]=wrd.f();
	return;
}
void TabCust::slCoBoPort1Boude(int index)
{
	if(ui.coBoPort1Boude->hasFocus()&&index<8)
	{
		int iAddr =44;
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
void TabCust::slChBoPort1ParityBit()
{
	int iAddr=44;
	bool b;
	b=ui.chBoPort1ParityBit->isChecked();
	wrd.f(
		unitReceive->basicSetting[iAddr]
		)->bit4=b;
	unitReceive->basicSetting[iAddr]=wrd.f();
	unitSend->basicSetting[iAddr]=wrd.f();
	return;
}
void TabCust::slRaBuPort1Parity()
{
	int iAddr=44;
	bool b;
	b=ui.raBuPort1Parity->isChecked();
	if(b)
	{
		wrd.f(unitReceive->basicSetting[iAddr])->bit5=1;
	}else
	{
		wrd.f(unitReceive->basicSetting[iAddr])->bit5=0;
	}
	unitReceive->basicSetting[iAddr]=wrd.f();
	unitSend->basicSetting[iAddr]=wrd.f();
	return;
}
void TabCust::slRaBuPort1Asincr()
{
	int iAddr=44;
	bool b;
	b=ui.raBuPort1Asincr->isChecked();
	if(!b)
	{
		wrd.f(unitReceive->basicSetting[iAddr])->bit6=1;
	}else
	{
		wrd.f(unitReceive->basicSetting[iAddr])->bit6=0;
	}
	unitReceive->basicSetting[iAddr]=wrd.f();
	unitSend->basicSetting[iAddr]=wrd.f();
	return;
}
void TabCust::slChBoPort1SincrInf()
{
	int iAddr=44;
	bool b;
	b=ui.chBoPort1SincrInf->isChecked();
	wrd.f(
		unitReceive->basicSetting[iAddr]
		)->bit7=b;
	unitReceive->basicSetting[iAddr]=wrd.f();
	unitSend->basicSetting[iAddr]=wrd.f();
	return;
}
void TabCust::slCoBoPort1AsincrProt(int index)
{
	if(ui.coBoPort1AsincrProt->hasFocus()&&index<9)
	{
		int iAddr =45;
		wrd.f(unitReceive->basicSetting[iAddr]);
		wrdWr.f(index);
		wrd.s.bit0=wrdWr.s.bit0;
		wrd.s.bit1=wrdWr.s.bit1;
		wrd.s.bit2=wrdWr.s.bit2;
		wrd.s.bit3=wrdWr.s.bit3;
		wrd.s.bit4=wrdWr.s.bit4;
		unitReceive->basicSetting[iAddr]=wrd.f();
		unitSend->basicSetting[iAddr]=wrd.f();
	}
	return;
}
void TabCust::slCoBoPort1SincrProt(int index)
{
	if((ui.coBoPort1SincrProt->hasFocus()||ui.coBoPort1SincrProt_2->hasFocus())&&index<9)
	{
		int iAddr =45;
		wrd.f(unitReceive->basicSetting[iAddr]);
		wrdWr.f(index);
		wrd.s.bit5=wrdWr.s.bit0;
		wrd.s.bit6=wrdWr.s.bit1;
		wrd.s.bit7=wrdWr.s.bit2;
		wrd.s.bit8=wrdWr.s.bit3;
		wrd.s.bit9=wrdWr.s.bit4;
		unitReceive->basicSetting[iAddr]=wrd.f();
		unitSend->basicSetting[iAddr]=wrd.f();
	}
	return;
}
//конец	параметры порта 1
//46	параметры порта 2					//--------------//
void TabCust::slGrBoPort2()
{
	int iAddr=46;
	bool b;
	b=ui.grBoPort2->isChecked();
	wrd.f(
		unitReceive->basicSetting[iAddr]
		)->bit15=b;
	unitReceive->basicSetting[iAddr]=wrd.f();
	unitSend->basicSetting[iAddr]=wrd.f();
	return;
}
void TabCust::slCoBoPort2Boude(int index)
{
	if(ui.coBoPort2Boude->hasFocus()&&index<8)
	{
		int iAddr =46;
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
void TabCust::slChBoPort2ParityBit()
{
	int iAddr=46;
	bool b;
	b=ui.chBoPort2ParityBit->isChecked();
	wrd.f(
		unitReceive->basicSetting[iAddr]
		)->bit4=b;
	unitReceive->basicSetting[iAddr]=wrd.f();
	unitSend->basicSetting[iAddr]=wrd.f();
	return;
}
void TabCust::slRaBuPort2Parity()
{
	int iAddr=46;
	bool b;
	b=ui.raBuPort2Parity->isChecked();
	if(b)
	{
		wrd.f(unitReceive->basicSetting[iAddr])->bit5=1;
	}else
	{
		wrd.f(unitReceive->basicSetting[iAddr])->bit5=0;
	}
	unitReceive->basicSetting[iAddr]=wrd.f();
	unitSend->basicSetting[iAddr]=wrd.f();
	return;
}
void TabCust::slRaBuPort2Asincr()
{
	int iAddr=46;
	bool b;
	b=ui.raBuPort2Asincr->isChecked();
	if(!b)
	{
		wrd.f(unitReceive->basicSetting[iAddr])->bit6=1;
	}else
	{
		wrd.f(unitReceive->basicSetting[iAddr])->bit6=0;
	}
	unitReceive->basicSetting[iAddr]=wrd.f();
	unitSend->basicSetting[iAddr]=wrd.f();
	return;
}
void TabCust::slChBoPort2SincrInf()
{
	int iAddr=46;
	bool b;
	b=ui.chBoPort2SincrInf->isChecked();
	wrd.f(
		unitReceive->basicSetting[iAddr]
		)->bit7=b;
	unitReceive->basicSetting[iAddr]=wrd.f();
	unitSend->basicSetting[iAddr]=wrd.f();
	return;
}
void TabCust::slCoBoPort2AsincrProt(int index)
{
	if(ui.coBoPort2AsincrProt->hasFocus()&&index<9)
	{
		int iAddr =47;
		wrd.f(unitReceive->basicSetting[iAddr]);
		wrdWr.f(index);
		wrd.s.bit0=wrdWr.s.bit0;
		wrd.s.bit1=wrdWr.s.bit1;
		wrd.s.bit2=wrdWr.s.bit2;
		wrd.s.bit3=wrdWr.s.bit3;
		wrd.s.bit4=wrdWr.s.bit4;
		unitReceive->basicSetting[iAddr]=wrd.f();
		unitSend->basicSetting[iAddr]=wrd.f();
	}
	return;
}
void TabCust::slCoBoPort2SincrProt(int index)
{
	if((ui.coBoPort2SincrProt->hasFocus()||ui.coBoPort2SincrProt_2->hasFocus())&&index<9)
	{
		int iAddr =47;
		wrd.f(unitReceive->basicSetting[iAddr]);
		wrdWr.f(index);
		wrd.s.bit5=wrdWr.s.bit0;
		wrd.s.bit6=wrdWr.s.bit1;
		wrd.s.bit7=wrdWr.s.bit2;
		wrd.s.bit8=wrdWr.s.bit3;
		wrd.s.bit9=wrdWr.s.bit4;
		unitReceive->basicSetting[iAddr]=wrd.f();
		unitSend->basicSetting[iAddr]=wrd.f();
	}
	return;
}
//конец	параметры порта 2
//48	параметры порта 3					//--------------//
void TabCust::slGrBoPort3()
{
	int iAddr=48;
	bool b;
	b=ui.grBoPort3->isChecked();
	wrd.f(
		unitReceive->basicSetting[iAddr]
		)->bit15=b;
	unitReceive->basicSetting[iAddr]=wrd.f();
	unitSend->basicSetting[iAddr]=wrd.f();
	return;
}
void TabCust::slCoBoPort3Boude(int index)
{
	if(ui.coBoPort3Boude->hasFocus()&&index<8)
	{
		int iAddr =48;
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
void TabCust::slChBoPort3ParityBit()
{
	int iAddr=48;
	bool b;
	b=ui.chBoPort3ParityBit->isChecked();
	wrd.f(
		unitReceive->basicSetting[iAddr]
		)->bit4=b;
	unitReceive->basicSetting[iAddr]=wrd.f();
	unitSend->basicSetting[iAddr]=wrd.f();
	return;
}
void TabCust::slRaBuPort3Parity()
{
	int iAddr=48;
	bool b;
	b=ui.raBuPort3Parity->isChecked();
	if(b)
	{
		wrd.f(unitReceive->basicSetting[iAddr])->bit5=1;
	}else
	{
		wrd.f(unitReceive->basicSetting[iAddr])->bit5=0;
	}
	unitReceive->basicSetting[iAddr]=wrd.f();
	unitSend->basicSetting[iAddr]=wrd.f();
	return;
}
void TabCust::slRaBuPort3Asincr()
{
	int iAddr=48;
	bool b;
	b=ui.raBuPort3Asincr->isChecked();
	if(!b)
	{
		wrd.f(unitReceive->basicSetting[iAddr])->bit6=1;
	}else
	{
		wrd.f(unitReceive->basicSetting[iAddr])->bit6=0;
	}
	unitReceive->basicSetting[iAddr]=wrd.f();
	unitSend->basicSetting[iAddr]=wrd.f();
	return;
}
void TabCust::slChBoPort3SincrInf()
{
	int iAddr=48;
	bool b;
	b=ui.chBoPort3SincrInf->isChecked();
	wrd.f(
		unitReceive->basicSetting[iAddr]
		)->bit7=b;
	unitReceive->basicSetting[iAddr]=wrd.f();
	unitSend->basicSetting[iAddr]=wrd.f();
	return;
}
void TabCust::slCoBoPort3AsincrProt(int index)
{
	if(ui.coBoPort3AsincrProt->hasFocus()&&index<9)
	{
		int iAddr =49;
		wrd.f(unitReceive->basicSetting[iAddr]);
		wrdWr.f(index);
		wrd.s.bit0=wrdWr.s.bit0;
		wrd.s.bit1=wrdWr.s.bit1;
		wrd.s.bit2=wrdWr.s.bit2;
		wrd.s.bit3=wrdWr.s.bit3;
		wrd.s.bit4=wrdWr.s.bit4;
		unitReceive->basicSetting[iAddr]=wrd.f();
		unitSend->basicSetting[iAddr]=wrd.f();
	}
	return;
}
void TabCust::slCoBoPort3SincrProt(int index)
{
	if((ui.coBoPort3SincrProt->hasFocus()||ui.coBoPort3SincrProt_2->hasFocus())&&index<9)
	{
		int iAddr =49;
		wrd.f(unitReceive->basicSetting[iAddr]);
		wrdWr.f(index);
		wrd.s.bit5=wrdWr.s.bit0;
		wrd.s.bit6=wrdWr.s.bit1;
		wrd.s.bit7=wrdWr.s.bit2;
		wrd.s.bit8=wrdWr.s.bit3;
		wrd.s.bit9=wrdWr.s.bit4;
		unitReceive->basicSetting[iAddr]=wrd.f();
		unitSend->basicSetting[iAddr]=wrd.f();
	}
	return;
}
//конец	параметры порта 3
//50	параметры порта 4					//--------------//
void TabCust::slGrBoPort4()
{
	int iAddr=50;
	bool b;
	b=ui.grBoPort4->isChecked();
	wrd.f(
		unitReceive->basicSetting[iAddr]
		)->bit15=b;
	unitReceive->basicSetting[iAddr]=wrd.f();
	unitSend->basicSetting[iAddr]=wrd.f();
	return;
}
void TabCust::slCoBoPort4Boude(int index)
{
	if(ui.coBoPort4Boude->hasFocus()&&index<8)
	{
		int iAddr =50;
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
void TabCust::slChBoPort4ParityBit()
{
	int iAddr=50;
	bool b;
	b=ui.chBoPort4ParityBit->isChecked();
	wrd.f(
		unitReceive->basicSetting[iAddr]
		)->bit4=b;
	unitReceive->basicSetting[iAddr]=wrd.f();
	unitSend->basicSetting[iAddr]=wrd.f();
	return;
}
void TabCust::slRaBuPort4Parity()
{
	int iAddr=50;
	bool b;
	b=ui.raBuPort4Parity->isChecked();
	if(b)
	{
		wrd.f(unitReceive->basicSetting[iAddr])->bit5=1;
	}else
	{
		wrd.f(unitReceive->basicSetting[iAddr])->bit5=0;
	}
	unitReceive->basicSetting[iAddr]=wrd.f();
	unitSend->basicSetting[iAddr]=wrd.f();
	return;
}
void TabCust::slRaBuPort4Asincr()
{
	int iAddr=50;
	bool b;
	b=ui.raBuPort4Asincr->isChecked();
	if(!b)
	{
		wrd.f(unitReceive->basicSetting[iAddr])->bit6=1;
	}else
	{
		wrd.f(unitReceive->basicSetting[iAddr])->bit6=0;
	}
	unitReceive->basicSetting[iAddr]=wrd.f();
	unitSend->basicSetting[iAddr]=wrd.f();
	return;
}
void TabCust::slChBoPort4SincrInf()
{
	int iAddr=50;
	bool b;
	b=ui.chBoPort4SincrInf->isChecked();
	wrd.f(
		unitReceive->basicSetting[iAddr]
		)->bit7=b;
	unitReceive->basicSetting[iAddr]=wrd.f();
	unitSend->basicSetting[iAddr]=wrd.f();
	return;
}
void TabCust::slCoBoPort4AsincrProt(int index)
{
	if(ui.coBoPort4AsincrProt->hasFocus()&&index<9)
	{
		int iAddr =51;
		wrd.f(unitReceive->basicSetting[iAddr]);
		wrdWr.f(index);
		wrd.s.bit0=wrdWr.s.bit0;
		wrd.s.bit1=wrdWr.s.bit1;
		wrd.s.bit2=wrdWr.s.bit2;
		wrd.s.bit3=wrdWr.s.bit3;
		wrd.s.bit4=wrdWr.s.bit4;
		unitReceive->basicSetting[iAddr]=wrd.f();
		unitSend->basicSetting[iAddr]=wrd.f();
	}
	return;
}
void TabCust::slCoBoPort4SincrProt(int index)
{
	if((ui.coBoPort4SincrProt->hasFocus()||ui.coBoPort4SincrProt_2->hasFocus())&&index<9)
	{
		int iAddr =51;
		wrd.f(unitReceive->basicSetting[iAddr]);
		wrdWr.f(index);
		wrd.s.bit5=wrdWr.s.bit0;
		wrd.s.bit6=wrdWr.s.bit1;
		wrd.s.bit7=wrdWr.s.bit2;
		wrd.s.bit8=wrdWr.s.bit3;
		wrd.s.bit9=wrdWr.s.bit4;
		unitReceive->basicSetting[iAddr]=wrd.f();
		unitSend->basicSetting[iAddr]=wrd.f();
	}
	return;
}
//конец	параметры порта 4
//52	параметры порта 5					//--------------//
void TabCust::slGrBoPort5()
{
	int iAddr=52;
	bool b;
	b=ui.grBoPort5->isChecked();
	wrd.f(
		unitReceive->basicSetting[iAddr]
		)->bit15=b;
	unitReceive->basicSetting[iAddr]=wrd.f();
	unitSend->basicSetting[iAddr]=wrd.f();
	return;
}
void TabCust::slCoBoPort5Boude(int index)
{
	if(ui.coBoPort5Boude->hasFocus()&&index<8)
	{
		int iAddr =52;
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
void TabCust::slChBoPort5ParityBit()
{
	int iAddr=52;
	bool b;
	b=ui.chBoPort5ParityBit->isChecked();
	wrd.f(
		unitReceive->basicSetting[iAddr]
		)->bit4=b;
	unitReceive->basicSetting[iAddr]=wrd.f();
	unitSend->basicSetting[iAddr]=wrd.f();
	return;
}
void TabCust::slRaBuPort5Parity()
{
	int iAddr=52;
	bool b;
	b=ui.raBuPort5Parity->isChecked();
	if(b)
	{
		wrd.f(unitReceive->basicSetting[iAddr])->bit5=1;
	}else
	{
		wrd.f(unitReceive->basicSetting[iAddr])->bit5=0;
	}
	unitReceive->basicSetting[iAddr]=wrd.f();
	unitSend->basicSetting[iAddr]=wrd.f();
	return;
}
void TabCust::slRaBuPort5Asincr()
{
	int iAddr=52;
	bool b;
	b=ui.raBuPort5Asincr->isChecked();
	if(!b)
	{
		wrd.f(unitReceive->basicSetting[iAddr])->bit6=1;
	}else
	{
		wrd.f(unitReceive->basicSetting[iAddr])->bit6=0;
	}
	unitReceive->basicSetting[iAddr]=wrd.f();
	unitSend->basicSetting[iAddr]=wrd.f();
	return;
}
void TabCust::slChBoPort5SincrInf()
{
	int iAddr=52;
	bool b;
	b=ui.chBoPort5SincrInf->isChecked();
	wrd.f(
		unitReceive->basicSetting[iAddr]
		)->bit7=b;
	unitReceive->basicSetting[iAddr]=wrd.f();
	unitSend->basicSetting[iAddr]=wrd.f();
	return;
}
void TabCust::slCoBoPort5AsincrProt(int index)
{
	if(ui.coBoPort5AsincrProt->hasFocus()&&index<9)
	{
		int iAddr =53;
		wrd.f(unitReceive->basicSetting[iAddr]);
		wrdWr.f(index);
		wrd.s.bit0=wrdWr.s.bit0;
		wrd.s.bit1=wrdWr.s.bit1;
		wrd.s.bit2=wrdWr.s.bit2;
		wrd.s.bit3=wrdWr.s.bit3;
		wrd.s.bit4=wrdWr.s.bit4;
		unitReceive->basicSetting[iAddr]=wrd.f();
		unitSend->basicSetting[iAddr]=wrd.f();
	}
	return;
}
void TabCust::slCoBoPort5SincrProt(int index)
{
	if((ui.coBoPort5SincrProt->hasFocus()||ui.coBoPort5SincrProt_2->hasFocus())&&index<9)
	{
		int iAddr =53;
		wrd.f(unitReceive->basicSetting[iAddr]);
		wrdWr.f(index);
		wrd.s.bit5=wrdWr.s.bit0;
		wrd.s.bit6=wrdWr.s.bit1;
		wrd.s.bit7=wrdWr.s.bit2;
		wrd.s.bit8=wrdWr.s.bit3;
		wrd.s.bit9=wrdWr.s.bit4;
		unitReceive->basicSetting[iAddr]=wrd.f();
		unitSend->basicSetting[iAddr]=wrd.f();
	}
	return;
}
//конец	параметры порта 5
//54	параметры порта 6					//--------------//
void TabCust::slGrBoPort6()
{
	int iAddr=54;
	bool b;
	b=ui.grBoPort6->isChecked();
	wrd.f(
		unitReceive->basicSetting[iAddr]
		)->bit15=b;
	unitReceive->basicSetting[iAddr]=wrd.f();
	unitSend->basicSetting[iAddr]=wrd.f();
	return;
}
void TabCust::slCoBoPort6Boude(int index)
{
	if(ui.coBoPort6Boude->hasFocus()&&index<8)
	{
		int iAddr =54;
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
void TabCust::slChBoPort6ParityBit()
{
	int iAddr=54;
	bool b;
	b=ui.chBoPort6ParityBit->isChecked();
	wrd.f(
		unitReceive->basicSetting[iAddr]
		)->bit4=b;
	unitReceive->basicSetting[iAddr]=wrd.f();
	unitSend->basicSetting[iAddr]=wrd.f();
	return;
}
void TabCust::slRaBuPort6Parity()
{
	int iAddr=54;
	bool b;
	b=ui.raBuPort6Parity->isChecked();
	if(b)
	{
		wrd.f(unitReceive->basicSetting[iAddr])->bit5=1;
	}else
	{
		wrd.f(unitReceive->basicSetting[iAddr])->bit5=0;
	}
	unitReceive->basicSetting[iAddr]=wrd.f();
	unitSend->basicSetting[iAddr]=wrd.f();
	return;
}
void TabCust::slRaBuPort6Asincr()
{
	int iAddr=54;
	bool b;
	b=ui.raBuPort6Asincr->isChecked();
	if(!b)
	{
		wrd.f(unitReceive->basicSetting[iAddr])->bit6=1;
	}else
	{
		wrd.f(unitReceive->basicSetting[iAddr])->bit6=0;
	}
	unitReceive->basicSetting[iAddr]=wrd.f();
	unitSend->basicSetting[iAddr]=wrd.f();
	return;
}
void TabCust::slChBoPort6SincrInf()
{
	int iAddr=54;
	bool b;
	b=ui.chBoPort6SincrInf->isChecked();
	wrd.f(
		unitReceive->basicSetting[iAddr]
		)->bit7=b;
	unitReceive->basicSetting[iAddr]=wrd.f();
	unitSend->basicSetting[iAddr]=wrd.f();
	return;
}
void TabCust::slCoBoPort6AsincrProt(int index)
{
	if(ui.coBoPort6AsincrProt->hasFocus()&&index<9)
	{
		int iAddr =55;
		wrd.f(unitReceive->basicSetting[iAddr]);
		wrdWr.f(index);
		wrd.s.bit0=wrdWr.s.bit0;
		wrd.s.bit1=wrdWr.s.bit1;
		wrd.s.bit2=wrdWr.s.bit2;
		wrd.s.bit3=wrdWr.s.bit3;
		wrd.s.bit4=wrdWr.s.bit4;
		unitReceive->basicSetting[iAddr]=wrd.f();
		unitSend->basicSetting[iAddr]=wrd.f();
	}
	return;
}
void TabCust::slCoBoPort6SincrProt(int index)
{
	if((ui.coBoPort6SincrProt->hasFocus()||ui.coBoPort6SincrProt_2->hasFocus())&&index<9)
	{
		int iAddr =55;
		wrd.f(unitReceive->basicSetting[iAddr]);
		wrdWr.f(index);
		wrd.s.bit5=wrdWr.s.bit0;
		wrd.s.bit6=wrdWr.s.bit1;
		wrd.s.bit7=wrdWr.s.bit2;
		wrd.s.bit8=wrdWr.s.bit3;
		wrd.s.bit9=wrdWr.s.bit4;
		unitReceive->basicSetting[iAddr]=wrd.f();
		unitSend->basicSetting[iAddr]=wrd.f();
	}
	return;
}
//конец	параметры порта 6
//56	параметры порта 7					//--------------//
void TabCust::slGrBoPort7()
{
	int iAddr=56;
	bool b;
	b=ui.grBoPort7->isChecked();
	wrd.f(
		unitReceive->basicSetting[iAddr]
		)->bit15=b;
	unitReceive->basicSetting[iAddr]=wrd.f();
	unitSend->basicSetting[iAddr]=wrd.f();
	return;
}
void TabCust::slCoBoPort7Boude(int index)
{
	if(ui.coBoPort7Boude->hasFocus()&&index<8)
	{
		int iAddr =56;
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
void TabCust::slChBoPort7ParityBit()
{
	int iAddr=56;
	bool b;
	b=ui.chBoPort7ParityBit->isChecked();
	wrd.f(
		unitReceive->basicSetting[iAddr]
		)->bit4=b;
	unitReceive->basicSetting[iAddr]=wrd.f();
	unitSend->basicSetting[iAddr]=wrd.f();
	return;
}
void TabCust::slRaBuPort7Parity()
{
	int iAddr=56;
	bool b;
	b=ui.raBuPort7Parity->isChecked();
	if(b)
	{
		wrd.f(unitReceive->basicSetting[iAddr])->bit5=1;
	}else
	{
		wrd.f(unitReceive->basicSetting[iAddr])->bit5=0;
	}
	unitReceive->basicSetting[iAddr]=wrd.f();
	unitSend->basicSetting[iAddr]=wrd.f();
	return;
}
void TabCust::slRaBuPort7Asincr()
{
	int iAddr=56;
	bool b;
	b=ui.raBuPort7Asincr->isChecked();
	if(!b)
	{
		wrd.f(unitReceive->basicSetting[iAddr])->bit6=1;
	}else
	{
		wrd.f(unitReceive->basicSetting[iAddr])->bit6=0;
	}
	unitReceive->basicSetting[iAddr]=wrd.f();
	unitSend->basicSetting[iAddr]=wrd.f();
	return;
}
void TabCust::slChBoPort7SincrInf()
{
	int iAddr=56;
	bool b;
	b=ui.chBoPort7SincrInf->isChecked();
	wrd.f(
		unitReceive->basicSetting[iAddr]
		)->bit7=b;
	unitReceive->basicSetting[iAddr]=wrd.f();
	unitSend->basicSetting[iAddr]=wrd.f();
	return;
}
void TabCust::slCoBoPort7AsincrProt(int index)
{
	if(ui.coBoPort7AsincrProt->hasFocus()&&index<9)
	{
		int iAddr =57;
		wrd.f(unitReceive->basicSetting[iAddr]);
		wrdWr.f(index);
		wrd.s.bit0=wrdWr.s.bit0;
		wrd.s.bit1=wrdWr.s.bit1;
		wrd.s.bit2=wrdWr.s.bit2;
		wrd.s.bit3=wrdWr.s.bit3;
		wrd.s.bit4=wrdWr.s.bit4;
		unitReceive->basicSetting[iAddr]=wrd.f();
		unitSend->basicSetting[iAddr]=wrd.f();
	}
	return;
}
void TabCust::slCoBoPort7SincrProt(int index)
{
	if((ui.coBoPort7SincrProt->hasFocus()||ui.coBoPort7SincrProt_2->hasFocus())&&index<9)
	{
		int iAddr =57;
		wrd.f(unitReceive->basicSetting[iAddr]);
		wrdWr.f(index);
		wrd.s.bit5=wrdWr.s.bit0;
		wrd.s.bit6=wrdWr.s.bit1;
		wrd.s.bit7=wrdWr.s.bit2;
		wrd.s.bit8=wrdWr.s.bit3;
		wrd.s.bit9=wrdWr.s.bit4;
		unitReceive->basicSetting[iAddr]=wrd.f();
		unitSend->basicSetting[iAddr]=wrd.f();
	}
	return;
}
//конец	параметры порта 7
//58	параметры порта 8					//--------------//
void TabCust::slGrBoPort8()
{
	int iAddr=58;
	bool b;
	b=ui.grBoPort8->isChecked();
	wrd.f(
		unitReceive->basicSetting[iAddr]
		)->bit15=b;
	unitReceive->basicSetting[iAddr]=wrd.f();
	unitSend->basicSetting[iAddr]=wrd.f();
	return;
}
void TabCust::slCoBoPort8Boude(int index)
{
	if(ui.coBoPort8Boude->hasFocus()&&index<8)
	{
		int iAddr =58;
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
void TabCust::slChBoPort8ParityBit()
{
	int iAddr=58;
	bool b;
	b=ui.chBoPort8ParityBit->isChecked();
	wrd.f(
		unitReceive->basicSetting[iAddr]
		)->bit4=b;
	unitReceive->basicSetting[iAddr]=wrd.f();
	unitSend->basicSetting[iAddr]=wrd.f();
	return;
}
void TabCust::slRaBuPort8Parity()
{
	int iAddr=58;
	bool b;
	b=ui.raBuPort8Parity->isChecked();
	if(b)
	{
		wrd.f(unitReceive->basicSetting[iAddr])->bit5=1;
	}else
	{
		wrd.f(unitReceive->basicSetting[iAddr])->bit5=0;
	}
	unitReceive->basicSetting[iAddr]=wrd.f();
	unitSend->basicSetting[iAddr]=wrd.f();
	return;
}
void TabCust::slRaBuPort8Asincr()
{
	int iAddr=58;
	bool b;
	b=ui.raBuPort8Asincr->isChecked();
	if(!b)
	{
		wrd.f(unitReceive->basicSetting[iAddr])->bit6=1;
	}else
	{
		wrd.f(unitReceive->basicSetting[iAddr])->bit6=0;
	}
	unitReceive->basicSetting[iAddr]=wrd.f();
	unitSend->basicSetting[iAddr]=wrd.f();
	return;
}
void TabCust::slChBoPort8SincrInf()
{
	int iAddr=58;
	bool b;
	b=ui.chBoPort8SincrInf->isChecked();
	wrd.f(
		unitReceive->basicSetting[iAddr]
		)->bit7=b;
	unitReceive->basicSetting[iAddr]=wrd.f();
	unitSend->basicSetting[iAddr]=wrd.f();
	return;
}
void TabCust::slCoBoPort8AsincrProt(int index)
{
	if(ui.coBoPort8AsincrProt->hasFocus()&&index<9)
	{
		int iAddr =59;
		wrd.f(unitReceive->basicSetting[iAddr]);
		wrdWr.f(index);
		wrd.s.bit0=wrdWr.s.bit0;
		wrd.s.bit1=wrdWr.s.bit1;
		wrd.s.bit2=wrdWr.s.bit2;
		wrd.s.bit3=wrdWr.s.bit3;
		wrd.s.bit4=wrdWr.s.bit4;
		unitReceive->basicSetting[iAddr]=wrd.f();
		unitSend->basicSetting[iAddr]=wrd.f();
	}
	return;
}
void TabCust::slCoBoPort8SincrProt(int index)
{
	if((ui.coBoPort8SincrProt->hasFocus()||ui.coBoPort8SincrProt_2->hasFocus())&&index<9)
	{
		int iAddr =59;
		wrd.f(unitReceive->basicSetting[iAddr]);
		wrdWr.f(index);
		wrd.s.bit5=wrdWr.s.bit0;
		wrd.s.bit6=wrdWr.s.bit1;
		wrd.s.bit7=wrdWr.s.bit2;
		wrd.s.bit8=wrdWr.s.bit3;
		wrd.s.bit9=wrdWr.s.bit4;
		unitReceive->basicSetting[iAddr]=wrd.f();
		unitSend->basicSetting[iAddr]=wrd.f();
	}
	return;
}
//конец	параметры порта 8
//60	параметры порта 9					//--------------//
void TabCust::slGrBoPort9()
{
	int iAddr=60;
	bool b;
	b=ui.grBoPort9->isChecked();
	wrd.f(
		unitReceive->basicSetting[iAddr]
		)->bit15=b;
	unitReceive->basicSetting[iAddr]=wrd.f();
	unitSend->basicSetting[iAddr]=wrd.f();
	return;
}
void TabCust::slCoBoPort9Boude(int index)
{
	if(ui.coBoPort9Boude->hasFocus()&&index<8)
	{
		int iAddr =60;
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
void TabCust::slChBoPort9ParityBit()
{
	int iAddr=60;
	bool b;
	b=ui.chBoPort9ParityBit->isChecked();
	wrd.f(
		unitReceive->basicSetting[iAddr]
		)->bit4=b;
	unitReceive->basicSetting[iAddr]=wrd.f();
	unitSend->basicSetting[iAddr]=wrd.f();
	return;
}
void TabCust::slRaBuPort9Parity()
{
	int iAddr=60;
	bool b;
	b=ui.raBuPort9Parity->isChecked();
	if(b)
	{
		wrd.f(unitReceive->basicSetting[iAddr])->bit5=1;
	}else
	{
		wrd.f(unitReceive->basicSetting[iAddr])->bit5=0;
	}
	unitReceive->basicSetting[iAddr]=wrd.f();
	unitSend->basicSetting[iAddr]=wrd.f();
	return;
}
void TabCust::slRaBuPort9Asincr()
{
	int iAddr=60;
	bool b;
	b=ui.raBuPort9Asincr->isChecked();
	if(!b)
	{
		wrd.f(unitReceive->basicSetting[iAddr])->bit6=1;
	}else
	{
		wrd.f(unitReceive->basicSetting[iAddr])->bit6=0;
	}
	unitReceive->basicSetting[iAddr]=wrd.f();
	unitSend->basicSetting[iAddr]=wrd.f();
	return;
}
void TabCust::slChBoPort9SincrInf()
{
	int iAddr=60;
	bool b;
	b=ui.chBoPort9SincrInf->isChecked();
	wrd.f(
		unitReceive->basicSetting[iAddr]
		)->bit7=b;
	unitReceive->basicSetting[iAddr]=wrd.f();
	unitSend->basicSetting[iAddr]=wrd.f();
	return;
}
void TabCust::slCoBoPort9AsincrProt(int index)
{
	if(ui.coBoPort9AsincrProt->hasFocus()&&index<9)
	{
		int iAddr =61;
		wrd.f(unitReceive->basicSetting[iAddr]);
		wrdWr.f(index);
		wrd.s.bit0=wrdWr.s.bit0;
		wrd.s.bit1=wrdWr.s.bit1;
		wrd.s.bit2=wrdWr.s.bit2;
		wrd.s.bit3=wrdWr.s.bit3;
		wrd.s.bit4=wrdWr.s.bit4;
		unitReceive->basicSetting[iAddr]=wrd.f();
		unitSend->basicSetting[iAddr]=wrd.f();
	}
	return;
}
void TabCust::slCoBoPort9SincrProt(int index)
{
	if((ui.coBoPort9SincrProt->hasFocus()||ui.coBoPort9SincrProt_2->hasFocus())&&index<9)
	{
		int iAddr =61;
		wrd.f(unitReceive->basicSetting[iAddr]);
		wrdWr.f(index);
		wrd.s.bit5=wrdWr.s.bit0;
		wrd.s.bit6=wrdWr.s.bit1;
		wrd.s.bit7=wrdWr.s.bit2;
		wrd.s.bit8=wrdWr.s.bit3;
		wrd.s.bit9=wrdWr.s.bit4;
		unitReceive->basicSetting[iAddr]=wrd.f();
		unitSend->basicSetting[iAddr]=wrd.f();
	}
	return;
}
//конец	параметры порта 9
//62	параметры порта 10					//--------------//
void TabCust::slGrBoPort10()
{
	int iAddr=62;
	bool b;
	b=ui.grBoPort10->isChecked();
	wrd.f(
		unitReceive->basicSetting[iAddr]
		)->bit15=b;
	unitReceive->basicSetting[iAddr]=wrd.f();
	unitSend->basicSetting[iAddr]=wrd.f();
	return;
}
void TabCust::slCoBoPort10Boude(int index)
{
	if(ui.coBoPort10Boude->hasFocus()&&index<8)
	{
		int iAddr =62;
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
void TabCust::slChBoPort10ParityBit()
{
	int iAddr=62;
	bool b;
	b=ui.chBoPort10ParityBit->isChecked();
	wrd.f(
		unitReceive->basicSetting[iAddr]
		)->bit4=b;
	unitReceive->basicSetting[iAddr]=wrd.f();
	unitSend->basicSetting[iAddr]=wrd.f();
	return;
}
void TabCust::slRaBuPort10Parity()
{
	int iAddr=62;
	bool b;
	b=ui.raBuPort10Parity->isChecked();
	if(b)
	{
		wrd.f(unitReceive->basicSetting[iAddr])->bit5=1;
	}else
	{
		wrd.f(unitReceive->basicSetting[iAddr])->bit5=0;
	}
	unitReceive->basicSetting[iAddr]=wrd.f();
	unitSend->basicSetting[iAddr]=wrd.f();
	return;
}
void TabCust::slRaBuPort10Asincr()
{
	int iAddr=62;
	bool b;
	b=ui.raBuPort10Asincr->isChecked();
	if(!b)
	{
		wrd.f(unitReceive->basicSetting[iAddr])->bit6=1;
	}else
	{
		wrd.f(unitReceive->basicSetting[iAddr])->bit6=0;
	}
	unitReceive->basicSetting[iAddr]=wrd.f();
	unitSend->basicSetting[iAddr]=wrd.f();
	return;
}
void TabCust::slChBoPort10SincrInf()
{
	int iAddr=62;
	bool b;
	b=ui.chBoPort10SincrInf->isChecked();
	wrd.f(
		unitReceive->basicSetting[iAddr]
		)->bit7=b;
	unitReceive->basicSetting[iAddr]=wrd.f();
	unitSend->basicSetting[iAddr]=wrd.f();
	return;
}
void TabCust::slCoBoPort10AsincrProt(int index)
{
	if(ui.coBoPort10AsincrProt->hasFocus()&&index<9)
	{
		int iAddr =63;
		wrd.f(unitReceive->basicSetting[iAddr]);
		wrdWr.f(index);
		wrd.s.bit0=wrdWr.s.bit0;
		wrd.s.bit1=wrdWr.s.bit1;
		wrd.s.bit2=wrdWr.s.bit2;
		wrd.s.bit3=wrdWr.s.bit3;
		wrd.s.bit4=wrdWr.s.bit4;
		unitReceive->basicSetting[iAddr]=wrd.f();
		unitSend->basicSetting[iAddr]=wrd.f();
	}
	return;
}
void TabCust::slCoBoPort10SincrProt(int index)
{
	index = 0;
/*
	if((ui.coBoPort10SincrProt->hasFocus()||ui.coBoPort10SincrProt_2->hasFocus())&&index<9)
	{
		int iAddr =63;
		wrd.f(unitReceive->basicSetting[iAddr]);
		wrdWr.f(index);
		wrd.s.bit5=wrdWr.s.bit0;
		wrd.s.bit6=wrdWr.s.bit1;
		wrd.s.bit7=wrdWr.s.bit2;
		wrd.s.bit8=wrdWr.s.bit3;
		wrd.s.bit9=wrdWr.s.bit4;
		unitReceive->basicSetting[iAddr]=wrd.f();
		unitSend->basicSetting[iAddr]=wrd.f();
	}
	return;
*/
}
//конец	параметры порта 10



//Rls1::::::::::::::РЛС1
void TabCust::slLiEdRls1Name()
{
	int iAddr = 68;
	iAddr=iAddrRls1Base+4;						//68;
	PLineEdit* lineEdit = ui.liEdRls1Name;
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
void TabCust::slCoBoRls1Num(int index)
{
	if(ui.coBoRls1Num->hasFocus()&&index<8)
	{
		int iAddr =64;
		iAddr=iAddrRls1Base+0;						//64;
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

void TabCust::slCoBoRls1LedNum(int index)
{
	if(ui.coBoRls1LedNum->hasFocus()&&index<11)
	{
		int iAddr =64;
		iAddr=iAddrRls1Base+0;						//64;
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
void TabCust::slCoBoRls1Prot(int index)
{
	if(ui.coBoRls1Prot->hasFocus()&&index<12)
	{
		int iAddr =64;
		iAddr=iAddrRls1Base+0;						//64;
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
void TabCust::slGrBoRls1()
{
	int iAddr =64;
	iAddr=iAddrRls1Base+0;						//64;
	bool b;
	b=ui.grBoRls1->isChecked();
	wrd.f(
		unitReceive->basicSetting[iAddr]
		)->bit15=b;
	unitReceive->basicSetting[iAddr]=wrd.f();
	unitSend->basicSetting[iAddr]=wrd.f();
	return;
}
void TabCust::slGrBoRls1Prl()
{
	int iAddr =64;
	iAddr=iAddrRls1Base+1;						//64;
	bool b;
	b=ui.grBoRls1Prl->isChecked();
	wrd.f(
		unitReceive->basicSetting[iAddr]
		)->bit1=b;
	unitReceive->basicSetting[iAddr]=wrd.f();
	unitSend->basicSetting[iAddr]=wrd.f();
	return;
}
void TabCust::slGrBoRls2Prl()
{
	int iAddr =64;
	iAddr=iAddrRls2Base+1;						//64;
	bool b;
	b=ui.grBoRls2Prl->isChecked();
	wrd.f(
		unitReceive->basicSetting[iAddr]
		)->bit1=b;
	unitReceive->basicSetting[iAddr]=wrd.f();
	unitSend->basicSetting[iAddr]=wrd.f();
	return;
}
void TabCust::slGrBoRls3Prl()
{
	int iAddr =64;
	iAddr=iAddrRls3Base+1;						//64;
	bool b;
	b=ui.grBoRls3Prl->isChecked();
	wrd.f(
		unitReceive->basicSetting[iAddr]
		)->bit1=b;
	unitReceive->basicSetting[iAddr]=wrd.f();
	unitSend->basicSetting[iAddr]=wrd.f();
	return;
}
void TabCust::slGrBoRls4Prl()
{
	int iAddr =64;
	iAddr=iAddrRls4Base+1;						//64;
	bool b;
	b=ui.grBoRls4Prl->isChecked();
	wrd.f(
		unitReceive->basicSetting[iAddr]
		)->bit1=b;
	unitReceive->basicSetting[iAddr]=wrd.f();
	unitSend->basicSetting[iAddr]=wrd.f();
	return;
}
void TabCust::slGrBoRls5Prl()
{
	int iAddr =64;
	iAddr=iAddrRls5Base+1;						//64;
	bool b;
	b=ui.grBoRls5Prl->isChecked();
	wrd.f(
		unitReceive->basicSetting[iAddr]
		)->bit1=b;
	unitReceive->basicSetting[iAddr]=wrd.f();
	unitSend->basicSetting[iAddr]=wrd.f();
	return;
}
void TabCust::slGrBoRls6Prl()
{
	int iAddr =64;
	iAddr=iAddrRls6Base+1;						//64;
	bool b;
	b=ui.grBoRls6Prl->isChecked();
	wrd.f(
		unitReceive->basicSetting[iAddr]
		)->bit1=b;
	unitReceive->basicSetting[iAddr]=wrd.f();
	unitSend->basicSetting[iAddr]=wrd.f();
	return;
}
void TabCust::slCoBoRls1Port(int index)
{
	if(ui.coBoRls1Port->hasFocus()&&index<11)
	{
		int iAddr =67;
		iAddr=iAddrRls1Base+3;						//66+1;
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

void TabCust::slChBoRls1UsePort()
{
	int iAddr =67;
	iAddr=iAddrRls1Base+3;						//66+1;
	bool b;
	b=ui.chBoRls1UsePort->isChecked();
	wrd.f(
		unitReceive->basicSetting[iAddr]
		)->bit6=b;
	unitReceive->basicSetting[iAddr]=wrd.f();
	unitSend->basicSetting[iAddr]=wrd.f();
	return;
}

void TabCust::slChBoRls1UseSAC()
{
	int iAddr =67;
	iAddr=iAddrRls1Base+3;						//66+1;
	bool b;
	b=ui.chBoRls1UseSAC->isChecked();
	wrd.f(
		unitReceive->basicSetting[iAddr]
		)->bit4=b;
	unitReceive->basicSetting[iAddr]=wrd.f();
	unitSend->basicSetting[iAddr]=wrd.f();
	return;
}

void TabCust::slChBoRls1UseSIC()
{
	int iAddr =67;
	iAddr=iAddrRls1Base+3;						//66+1;
	bool b;
	b=ui.chBoRls1UseSIC->isChecked();
	wrd.f(
		unitReceive->basicSetting[iAddr]
		)->bit5=b;
	unitReceive->basicSetting[iAddr]=wrd.f();
	unitSend->basicSetting[iAddr]=wrd.f();
	return;
}


void TabCust::slLiEdRls1PntDistance()
{
//76
	int iAddr = 76;
	iAddr=iAddrRls1Base+12;						//76;
	PLineEdit* lineEdit = ui.liEdRls1PntDistance;
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
void TabCust::slLiEdRls1PntAzimuth()
{
//77
	int iAddr =77;
	iAddr=iAddrRls1Base+13;						//77;
	PLineEdit* lineEdit = ui.liEdRls1PntAzimuth ;
	fLiEdAzimuth(	lineEdit,
		&unitReceive->basicSetting[iAddr],
		&unitSend->basicSetting[iAddr]	);
	return;
}
void TabCust::slRaBuRls1Grad()
{
	int iAddr =65;
	iAddr=iAddrRls1Base+1;						//64+1;
	wrd.f(unitReceive->basicSetting[iAddr]);
	wrd.s.bit0=ui.raBuRls1GradMagnetic->isChecked();
	unitReceive->basicSetting[iAddr]=wrd.f();
	unitSend->basicSetting[iAddr]=wrd.f();
	return;
}
void TabCust::slLiEdRls1DisPlace()
{
//78
	int iAddr = 78;
	iAddr=iAddrRls1Base+14;						//78;
	PLineEdit* lineEdit = ui.liEdRls1DisPlace;
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
void TabCust::slLiEdRls1Turn()
{
//79
	int iAddr = 79;
	iAddr=iAddrRls1Base+15;						//79;
	PLineEdit* lineEdit = ui.liEdRls1Turn;
	fLiEdAzimuth(	lineEdit,
		&unitReceive->basicSetting[iAddr],
		&unitSend->basicSetting[iAddr]	);
	return;
}
void TabCust::slLiEdRls1Blockirov()
{
//80
	int iAddr = 80;
	iAddr=iAddrRls1Base+16;						//78;
	PLineEdit* lineEdit = ui.liEdRls1Blockirov;
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
void TabCust::slLiEdRls2Blockirov()
{
//80
	int iAddr = 80;
	iAddr=iAddrRls2Base+16;						//78;
	PLineEdit* lineEdit = ui.liEdRls2Blockirov;
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
void TabCust::slLiEdRls3Blockirov()
{
//80
	int iAddr = 80;
	iAddr=iAddrRls3Base+16;						//78;
	PLineEdit* lineEdit = ui.liEdRls3Blockirov;
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
void TabCust::slLiEdRls4Blockirov()
{
//80
	int iAddr = 80;
	iAddr=iAddrRls4Base+16;						//78;
	PLineEdit* lineEdit = ui.liEdRls4Blockirov;
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
void TabCust::slLiEdRls5Blockirov()
{
//80
	int iAddr = 80;
	iAddr=iAddrRls5Base+16;						//78;
	PLineEdit* lineEdit = ui.liEdRls5Blockirov;
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
void TabCust::slLiEdRls6Blockirov()
{
//80
	int iAddr = 80;
	iAddr=iAddrRls6Base+16;						//78;
	PLineEdit* lineEdit = ui.liEdRls6Blockirov;
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
void TabCust::slLiEdRls1SIC()
{
//66
	int iAddr = 66;
	iAddr=iAddrRls1Base+2;						//66;
	PLineEdit* lineEdit = ui.liEdRls1SIC;
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
void TabCust::slLiEdRls1SAC()
{
//66
	int iAddr = 66;
	iAddr=iAddrRls1Base+2;						//66;
	PLineEdit* lineEdit = ui.liEdRls1SAC;
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
void TabCust::slLiEdRls1DistanceAxisVPP()
{
//86
	int iAddr = 86;
	iAddr=iAddrRls1Base+22;						//86;
	PLineEdit* lineEdit = ui.liEdRls1DistanceAxisVPP;
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
void TabCust::slLiEdRls1HighAerialVPP1()
{
//87м
	int iAddr = 87;
	iAddr=iAddrRls1Base+23;						//87;
	PLineEdit* lineEdit = ui.liEdRls1HighAerialVPP1;
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
void TabCust::slLiEdRls1HighAerialVPP2()
{
//87с
	int iAddr = 87;
	iAddr=iAddrRls1Base+23;						//87;
	PLineEdit* lineEdit = ui.liEdRls1HighAerialVPP2;
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
void TabCust::slLiEdRls1EndFaceVPP1()
{
//88
	int iAddr = 88;
	iAddr=iAddrRls1Base+24;						//88;
	PLineEdit* lineEdit = ui.liEdRls1EndFaceVPP1;
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
void TabCust::slLiEdRls1EndFaceVPP2()
{
//89
	int iAddr = 89;
	iAddr=iAddrRls1Base+25;						//89;
	PLineEdit* lineEdit = ui.liEdRls1EndFaceVPP2;
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
void TabCust::slLiEdRls1PointPlanting1()
{
//90
	int iAddr = 90;
	iAddr=iAddrRls1Base+26;						//90;
	PLineEdit* lineEdit = ui.liEdRls1PointPlanting1;
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
void TabCust::slLiEdRls1PointPlanting2()
{
//91
	int iAddr = 91;
	iAddr=iAddrRls1Base+27;						//91;
	PLineEdit* lineEdit = ui.liEdRls1PointPlanting2;
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
//end Rls1::::::::::::::РЛС1
//Rls2::::::::::::::РЛС2
void TabCust::slLiEdRls2Name()
{
	int iAddr = 68;
	iAddr=iAddrRls2Base+4;						//68;
	PLineEdit* lineEdit = ui.liEdRls2Name;
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
void TabCust::slCoBoRls2Num(int index)
{
	if(ui.coBoRls2Num->hasFocus()&&index<8)
	{
		int iAddr =64;
		iAddr=iAddrRls2Base+0;						//64;
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

void TabCust::slCoBoRls2LedNum(int index)
{
	if(ui.coBoRls2LedNum->hasFocus()&&index<11)
	{
		int iAddr =64;
		iAddr=iAddrRls2Base+0;						//64;
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
void TabCust::slCoBoRls2Prot(int index)
{
	if(ui.coBoRls2Prot->hasFocus()&&index<12)
	{
		int iAddr =64;
		iAddr=iAddrRls2Base+0;						//64;
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
void TabCust::slGrBoRls2()
{
	int iAddr =64;
	iAddr=iAddrRls2Base+0;						//64;
	bool b;
	b=ui.grBoRls2->isChecked();
	wrd.f(
		unitReceive->basicSetting[iAddr]
		)->bit15=b;
	unitReceive->basicSetting[iAddr]=wrd.f();
	unitSend->basicSetting[iAddr]=wrd.f();
	return;
}
void TabCust::slCoBoRls2Port(int index)
{
	if(ui.coBoRls2Port->hasFocus()&&index<11)
	{
		int iAddr =67;
		iAddr=iAddrRls2Base+3;						//66+1;
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

void TabCust::slChBoRls2UsePort()
{
	int iAddr =67;
	iAddr=iAddrRls2Base+3;						//66+1;
	bool b;
	b=ui.chBoRls2UsePort->isChecked();
	wrd.f(
		unitReceive->basicSetting[iAddr]
		)->bit6=b;
	unitReceive->basicSetting[iAddr]=wrd.f();
	unitSend->basicSetting[iAddr]=wrd.f();
	return;
}

void TabCust::slChBoRls2UseSAC()
{
	int iAddr =67;
	iAddr=iAddrRls2Base+3;						//66+1;
	bool b;
	b=ui.chBoRls2UseSAC->isChecked();
	wrd.f(
		unitReceive->basicSetting[iAddr]
		)->bit4=b;
	unitReceive->basicSetting[iAddr]=wrd.f();
	unitSend->basicSetting[iAddr]=wrd.f();
	return;
}

void TabCust::slChBoRls2UseSIC()
{
	int iAddr =67;
	iAddr=iAddrRls2Base+3;						//66+1;
	bool b;
	b=ui.chBoRls2UseSIC->isChecked();
	wrd.f(
		unitReceive->basicSetting[iAddr]
		)->bit5=b;
	unitReceive->basicSetting[iAddr]=wrd.f();
	unitSend->basicSetting[iAddr]=wrd.f();
	return;
}


void TabCust::slLiEdRls2PntDistance()
{
//76
	int iAddr = 76;
	iAddr=iAddrRls2Base+12;						//76;
	PLineEdit* lineEdit = ui.liEdRls2PntDistance;
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
void TabCust::slLiEdRls2PntAzimuth()
{
//77
	int iAddr =77;
	iAddr=iAddrRls2Base+13;						//77;
	PLineEdit* lineEdit = ui.liEdRls2PntAzimuth ;
	fLiEdAzimuth(	lineEdit,
		&unitReceive->basicSetting[iAddr],
		&unitSend->basicSetting[iAddr]	);
	return;
}
void TabCust::slRaBuRls2Grad()
{
	int iAddr =65;
	iAddr=iAddrRls2Base+1;						//64+1;
	wrd.f(unitReceive->basicSetting[iAddr]);
	wrd.s.bit0=ui.raBuRls2GradMagnetic->isChecked();
	unitReceive->basicSetting[iAddr]=wrd.f();
	unitSend->basicSetting[iAddr]=wrd.f();
	return;
}
void TabCust::slLiEdRls2DisPlace()
{
//78
	int iAddr = 78;
	iAddr=iAddrRls2Base+14;						//78;
	PLineEdit* lineEdit = ui.liEdRls2DisPlace;
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
void TabCust::slLiEdRls2Turn()
{
//79
	int iAddr = 79;
	iAddr=iAddrRls2Base+15;						//79;
	PLineEdit* lineEdit = ui.liEdRls2Turn;
	fLiEdAzimuth(	lineEdit,
		&unitReceive->basicSetting[iAddr],
		&unitSend->basicSetting[iAddr]	);
	return;
}
void TabCust::slLiEdRls2SIC()
{
//66
	int iAddr = 66;
	iAddr=iAddrRls2Base+2;						//66;
	PLineEdit* lineEdit = ui.liEdRls2SIC;
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
void TabCust::slLiEdRls2SAC()
{
//66
	int iAddr = 66;
	iAddr=iAddrRls2Base+2;						//66;
	PLineEdit* lineEdit = ui.liEdRls2SAC;
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
void TabCust::slLiEdRls2DistanceAxisVPP()
{
//86
	int iAddr = 86;
	iAddr=iAddrRls2Base+22;						//86;
	PLineEdit* lineEdit = ui.liEdRls2DistanceAxisVPP;
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
void TabCust::slLiEdRls2HighAerialVPP1()
{
//87м
	int iAddr = 87;
	iAddr=iAddrRls2Base+23;						//87;
	PLineEdit* lineEdit = ui.liEdRls2HighAerialVPP1;
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
void TabCust::slLiEdRls2HighAerialVPP2()
{
//87с
	int iAddr = 87;
	iAddr=iAddrRls2Base+23;						//87;
	PLineEdit* lineEdit = ui.liEdRls2HighAerialVPP2;
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
void TabCust::slLiEdRls2EndFaceVPP1()
{
//88
	int iAddr = 88;
	iAddr=iAddrRls2Base+24;						//88;
	PLineEdit* lineEdit = ui.liEdRls2EndFaceVPP1;
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
void TabCust::slLiEdRls2EndFaceVPP2()
{
//89
	int iAddr = 89;
	iAddr=iAddrRls2Base+25;						//89;
	PLineEdit* lineEdit = ui.liEdRls2EndFaceVPP2;
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
void TabCust::slLiEdRls2PointPlanting1()
{
//90
	int iAddr = 90;
	iAddr=iAddrRls2Base+26;						//90;
	PLineEdit* lineEdit = ui.liEdRls2PointPlanting1;
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
void TabCust::slLiEdRls2PointPlanting2()
{
//91
	int iAddr = 91;
	iAddr=iAddrRls2Base+27;						//91;
	PLineEdit* lineEdit = ui.liEdRls2PointPlanting2;
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
//end Rls2::::::::::::::РЛС2
//Rls3::::::::::::::РЛС3
void TabCust::slLiEdRls3Name()
{
	int iAddr = 68;
	iAddr=iAddrRls3Base+4;						//68;
	PLineEdit* lineEdit = ui.liEdRls3Name;
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
void TabCust::slCoBoRls3Num(int index)
{
	if(ui.coBoRls3Num->hasFocus()&&index<8)
	{
		int iAddr =64;
		iAddr=iAddrRls3Base+0;						//64;
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

void TabCust::slCoBoRls3LedNum(int index)
{
	if(ui.coBoRls3LedNum->hasFocus()&&index<11)
	{
		int iAddr =64;
		iAddr=iAddrRls3Base+0;						//64;
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
void TabCust::slCoBoRls3Prot(int index)
{
	if(ui.coBoRls3Prot->hasFocus()&&index<12)
	{
		int iAddr =64;
		iAddr=iAddrRls3Base+0;						//64;
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
void TabCust::slGrBoRls3()
{
	int iAddr =64;
	iAddr=iAddrRls3Base+0;						//64;
	bool b;
	b=ui.grBoRls3->isChecked();
	wrd.f(
		unitReceive->basicSetting[iAddr]
		)->bit15=b;
	unitReceive->basicSetting[iAddr]=wrd.f();
	unitSend->basicSetting[iAddr]=wrd.f();
	return;
}
void TabCust::slCoBoRls3Port(int index)
{
	if(ui.coBoRls3Port->hasFocus()&&index<11)
	{
		int iAddr =67;
		iAddr=iAddrRls3Base+3;						//66+1;
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

void TabCust::slChBoRls3UsePort()
{
	int iAddr =67;
	iAddr=iAddrRls3Base+3;						//66+1;
	bool b;
	b=ui.chBoRls3UsePort->isChecked();
	wrd.f(
		unitReceive->basicSetting[iAddr]
		)->bit6=b;
	unitReceive->basicSetting[iAddr]=wrd.f();
	unitSend->basicSetting[iAddr]=wrd.f();
	return;
}

void TabCust::slChBoRls3UseSAC()
{
	int iAddr =67;
	iAddr=iAddrRls3Base+3;						//66+1;
	bool b;
	b=ui.chBoRls3UseSAC->isChecked();
	wrd.f(
		unitReceive->basicSetting[iAddr]
		)->bit4=b;
	unitReceive->basicSetting[iAddr]=wrd.f();
	unitSend->basicSetting[iAddr]=wrd.f();
	return;
}

void TabCust::slChBoRls3UseSIC()
{
	int iAddr =67;
	iAddr=iAddrRls3Base+3;						//66+1;
	bool b;
	b=ui.chBoRls3UseSIC->isChecked();
	wrd.f(
		unitReceive->basicSetting[iAddr]
		)->bit5=b;
	unitReceive->basicSetting[iAddr]=wrd.f();
	unitSend->basicSetting[iAddr]=wrd.f();
	return;
}


void TabCust::slLiEdRls3PntDistance()
{
//76
	int iAddr = 76;
	iAddr=iAddrRls3Base+12;						//76;
	PLineEdit* lineEdit = ui.liEdRls3PntDistance;
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
void TabCust::slLiEdRls3PntAzimuth()
{
//77
	int iAddr =77;
	iAddr=iAddrRls3Base+13;						//77;
	PLineEdit* lineEdit = ui.liEdRls3PntAzimuth ;
	fLiEdAzimuth(	lineEdit,
		&unitReceive->basicSetting[iAddr],
		&unitSend->basicSetting[iAddr]	);
	return;
}
void TabCust::slRaBuRls3Grad()
{
	int iAddr =65;
	iAddr=iAddrRls3Base+1;						//64+1;
	wrd.f(unitReceive->basicSetting[iAddr]);
	wrd.s.bit0=ui.raBuRls3GradMagnetic->isChecked();
	unitReceive->basicSetting[iAddr]=wrd.f();
	unitSend->basicSetting[iAddr]=wrd.f();
	return;
}
void TabCust::slLiEdRls3DisPlace()
{
//78
	int iAddr = 78;
	iAddr=iAddrRls3Base+14;						//78;
	PLineEdit* lineEdit = ui.liEdRls3DisPlace;
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
void TabCust::slLiEdRls3Turn()
{
//79
	int iAddr = 79;
	iAddr=iAddrRls3Base+15;						//79;
	PLineEdit* lineEdit = ui.liEdRls3Turn;
	fLiEdAzimuth(	lineEdit,
		&unitReceive->basicSetting[iAddr],
		&unitSend->basicSetting[iAddr]	);
	return;
}
void TabCust::slLiEdRls3SIC()
{
//66
	int iAddr = 66;
	iAddr=iAddrRls3Base+2;						//66;
	PLineEdit* lineEdit = ui.liEdRls3SIC;
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
void TabCust::slLiEdRls3SAC()
{
//66
	int iAddr = 66;
	iAddr=iAddrRls3Base+2;						//66;
	PLineEdit* lineEdit = ui.liEdRls3SAC;
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
void TabCust::slLiEdRls3DistanceAxisVPP()
{
//86
	int iAddr = 86;
	iAddr=iAddrRls3Base+22;						//86;
	PLineEdit* lineEdit = ui.liEdRls3DistanceAxisVPP;
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
void TabCust::slLiEdRls3HighAerialVPP1()
{
//87м
	int iAddr = 87;
	iAddr=iAddrRls3Base+23;						//87;
	PLineEdit* lineEdit = ui.liEdRls3HighAerialVPP1;
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
void TabCust::slLiEdRls3HighAerialVPP2()
{
//87с
	int iAddr = 87;
	iAddr=iAddrRls3Base+23;						//87;
	PLineEdit* lineEdit = ui.liEdRls3HighAerialVPP2;
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
void TabCust::slLiEdRls3EndFaceVPP1()
{
//88
	int iAddr = 88;
	iAddr=iAddrRls3Base+24;						//88;
	PLineEdit* lineEdit = ui.liEdRls3EndFaceVPP1;
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
void TabCust::slLiEdRls3EndFaceVPP2()
{
//89
	int iAddr = 89;
	iAddr=iAddrRls3Base+25;						//89;
	PLineEdit* lineEdit = ui.liEdRls3EndFaceVPP2;
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
void TabCust::slLiEdRls3PointPlanting1()
{
//90
	int iAddr = 90;
	iAddr=iAddrRls3Base+26;						//90;
	PLineEdit* lineEdit = ui.liEdRls3PointPlanting1;
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
void TabCust::slLiEdRls3PointPlanting2()
{
//91
	int iAddr = 91;
	iAddr=iAddrRls3Base+27;						//91;
	PLineEdit* lineEdit = ui.liEdRls3PointPlanting2;
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
//end Rls3::::::::::::::РЛС3
//Rls4::::::::::::::РЛС4
void TabCust::slLiEdRls4Name()
{
	int iAddr = 68;
	iAddr=iAddrRls4Base+4;						//68;
	PLineEdit* lineEdit = ui.liEdRls4Name;
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
void TabCust::slCoBoRls4Num(int index)
{
	if(ui.coBoRls4Num->hasFocus()&&index<8)
	{
		int iAddr =64;
		iAddr=iAddrRls4Base+0;						//64;
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

void TabCust::slCoBoRls4LedNum(int index)
{
	if(ui.coBoRls4LedNum->hasFocus()&&index<11)
	{
		int iAddr =64;
		iAddr=iAddrRls4Base+0;						//64;
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
void TabCust::slCoBoRls4Prot(int index)
{
	if(ui.coBoRls4Prot->hasFocus()&&index<12)
	{
		int iAddr =64;
		iAddr=iAddrRls4Base+0;						//64;
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
void TabCust::slGrBoRls4()
{
	int iAddr =64;
	iAddr=iAddrRls4Base+0;						//64;
	bool b;
	b=ui.grBoRls4->isChecked();
	wrd.f(
		unitReceive->basicSetting[iAddr]
		)->bit15=b;
	unitReceive->basicSetting[iAddr]=wrd.f();
	unitSend->basicSetting[iAddr]=wrd.f();
	return;
}
void TabCust::slCoBoRls4Port(int index)
{
	if(ui.coBoRls4Port->hasFocus()&&index<11)
	{
		int iAddr =67;
		iAddr=iAddrRls4Base+3;						//66+1;
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

void TabCust::slChBoRls4UsePort()
{
	int iAddr =67;
	iAddr=iAddrRls4Base+3;						//66+1;
	bool b;
	b=ui.chBoRls4UsePort->isChecked();
	wrd.f(
		unitReceive->basicSetting[iAddr]
		)->bit6=b;
	unitReceive->basicSetting[iAddr]=wrd.f();
	unitSend->basicSetting[iAddr]=wrd.f();
	return;
}

void TabCust::slChBoRls4UseSAC()
{
	int iAddr =67;
	iAddr=iAddrRls4Base+3;						//66+1;
	bool b;
	b=ui.chBoRls4UseSAC->isChecked();
	wrd.f(
		unitReceive->basicSetting[iAddr]
		)->bit4=b;
	unitReceive->basicSetting[iAddr]=wrd.f();
	unitSend->basicSetting[iAddr]=wrd.f();
	return;
}

void TabCust::slChBoRls4UseSIC()
{
	int iAddr =67;
	iAddr=iAddrRls4Base+3;						//66+1;
	bool b;
	b=ui.chBoRls4UseSIC->isChecked();
	wrd.f(
		unitReceive->basicSetting[iAddr]
		)->bit5=b;
	unitReceive->basicSetting[iAddr]=wrd.f();
	unitSend->basicSetting[iAddr]=wrd.f();
	return;
}


void TabCust::slLiEdRls4PntDistance()
{
//76
	int iAddr = 76;
	iAddr=iAddrRls4Base+12;						//76;
	PLineEdit* lineEdit = ui.liEdRls4PntDistance;
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
void TabCust::slLiEdRls4PntAzimuth()
{
//77
	int iAddr =77;
	iAddr=iAddrRls4Base+13;						//77;
	PLineEdit* lineEdit = ui.liEdRls4PntAzimuth ;
	fLiEdAzimuth(	lineEdit,
		&unitReceive->basicSetting[iAddr],
		&unitSend->basicSetting[iAddr]	);
	return;
}
void TabCust::slRaBuRls4Grad()
{
	int iAddr =65;
	iAddr=iAddrRls4Base+1;						//64+1;
	wrd.f(unitReceive->basicSetting[iAddr]);
	wrd.s.bit0=ui.raBuRls4GradMagnetic->isChecked();
	unitReceive->basicSetting[iAddr]=wrd.f();
	unitSend->basicSetting[iAddr]=wrd.f();
	return;
}
void TabCust::slLiEdRls4DisPlace()
{
//78
	int iAddr = 78;
	iAddr=iAddrRls4Base+14;						//78;
	PLineEdit* lineEdit = ui.liEdRls4DisPlace;
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
void TabCust::slLiEdRls4Turn()
{
//79
	int iAddr = 79;
	iAddr=iAddrRls4Base+15;						//79;
	PLineEdit* lineEdit = ui.liEdRls4Turn;
	fLiEdAzimuth(	lineEdit,
		&unitReceive->basicSetting[iAddr],
		&unitSend->basicSetting[iAddr]	);
	return;
}
void TabCust::slLiEdRls4SIC()
{
//66
	int iAddr = 66;
	iAddr=iAddrRls4Base+2;						//66;
	PLineEdit* lineEdit = ui.liEdRls4SIC;
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
void TabCust::slLiEdRls4SAC()
{
//66
	int iAddr = 66;
	iAddr=iAddrRls4Base+2;						//66;
	PLineEdit* lineEdit = ui.liEdRls4SAC;
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
void TabCust::slLiEdRls4DistanceAxisVPP()
{
//86
	int iAddr = 86;
	iAddr=iAddrRls4Base+22;						//86;
	PLineEdit* lineEdit = ui.liEdRls4DistanceAxisVPP;
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
void TabCust::slLiEdRls4HighAerialVPP1()
{
//87м
	int iAddr = 87;
	iAddr=iAddrRls4Base+23;						//87;
	PLineEdit* lineEdit = ui.liEdRls4HighAerialVPP1;
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
void TabCust::slLiEdRls4HighAerialVPP2()
{
//87с
	int iAddr = 87;
	iAddr=iAddrRls4Base+23;						//87;
	PLineEdit* lineEdit = ui.liEdRls4HighAerialVPP2;
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
void TabCust::slLiEdRls4EndFaceVPP1()
{
//88
	int iAddr = 88;
	iAddr=iAddrRls4Base+24;						//88;
	PLineEdit* lineEdit = ui.liEdRls4EndFaceVPP1;
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
void TabCust::slLiEdRls4EndFaceVPP2()
{
//89
	int iAddr = 89;
	iAddr=iAddrRls4Base+25;						//89;
	PLineEdit* lineEdit = ui.liEdRls4EndFaceVPP2;
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
void TabCust::slLiEdRls4PointPlanting1()
{
//90
	int iAddr = 90;
	iAddr=iAddrRls4Base+26;						//90;
	PLineEdit* lineEdit = ui.liEdRls4PointPlanting1;
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
void TabCust::slLiEdRls4PointPlanting2()
{
//91
	int iAddr = 91;
	iAddr=iAddrRls4Base+27;						//91;
	PLineEdit* lineEdit = ui.liEdRls4PointPlanting2;
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
//end Rls4::::::::::::::РЛС4
//Rls5::::::::::::::РЛС5
void TabCust::slLiEdRls5Name()
{
	int iAddr = 68;
	iAddr=iAddrRls5Base+4;						//68;
	PLineEdit* lineEdit = ui.liEdRls5Name;
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
void TabCust::slCoBoRls5Num(int index)
{
	if(ui.coBoRls5Num->hasFocus()&&index<8)
	{
		int iAddr =64;
		iAddr=iAddrRls5Base+0;						//64;
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

void TabCust::slCoBoRls5LedNum(int index)
{
	if(ui.coBoRls5LedNum->hasFocus()&&index<11)
	{
		int iAddr =64;
		iAddr=iAddrRls5Base+0;						//64;
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
void TabCust::slCoBoRls5Prot(int index)
{
	if(ui.coBoRls5Prot->hasFocus()&&index<12)
	{
		int iAddr =64;
		iAddr=iAddrRls5Base+0;						//64;
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
void TabCust::slGrBoRls5()
{
	int iAddr =64;
	iAddr=iAddrRls5Base+0;						//64;
	bool b;
	b=ui.grBoRls5->isChecked();
	wrd.f(
		unitReceive->basicSetting[iAddr]
		)->bit15=b;
	unitReceive->basicSetting[iAddr]=wrd.f();
	unitSend->basicSetting[iAddr]=wrd.f();
	return;
}
void TabCust::slCoBoRls5Port(int index)
{
	if(ui.coBoRls5Port->hasFocus()&&index<11)
	{
		int iAddr =67;
		iAddr=iAddrRls5Base+3;						//66+1;
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

void TabCust::slChBoRls5UsePort()
{
	int iAddr =67;
	iAddr=iAddrRls5Base+3;						//66+1;
	bool b;
	b=ui.chBoRls5UsePort->isChecked();
	wrd.f(
		unitReceive->basicSetting[iAddr]
		)->bit6=b;
	unitReceive->basicSetting[iAddr]=wrd.f();
	unitSend->basicSetting[iAddr]=wrd.f();
	return;
}

void TabCust::slChBoRls5UseSAC()
{
	int iAddr =67;
	iAddr=iAddrRls5Base+3;						//66+1;
	bool b;
	b=ui.chBoRls5UseSAC->isChecked();
	wrd.f(
		unitReceive->basicSetting[iAddr]
		)->bit4=b;
	unitReceive->basicSetting[iAddr]=wrd.f();
	unitSend->basicSetting[iAddr]=wrd.f();
	return;
}

void TabCust::slChBoRls5UseSIC()
{
	int iAddr =67;
	iAddr=iAddrRls5Base+3;						//66+1;
	bool b;
	b=ui.chBoRls5UseSIC->isChecked();
	wrd.f(
		unitReceive->basicSetting[iAddr]
		)->bit5=b;
	unitReceive->basicSetting[iAddr]=wrd.f();
	unitSend->basicSetting[iAddr]=wrd.f();
	return;
}


void TabCust::slLiEdRls5PntDistance()
{
//76
	int iAddr = 76;
	iAddr=iAddrRls5Base+12;						//76;
	PLineEdit* lineEdit = ui.liEdRls5PntDistance;
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
void TabCust::slLiEdRls5PntAzimuth()
{
//77
	int iAddr =77;
	iAddr=iAddrRls5Base+13;						//77;
	PLineEdit* lineEdit = ui.liEdRls5PntAzimuth ;
	fLiEdAzimuth(	lineEdit,
		&unitReceive->basicSetting[iAddr],
		&unitSend->basicSetting[iAddr]	);
	return;
}
void TabCust::slRaBuRls5Grad()
{
	int iAddr =65;
	iAddr=iAddrRls5Base+1;						//64+1;
	wrd.f(unitReceive->basicSetting[iAddr]);
	wrd.s.bit0=ui.raBuRls5GradMagnetic->isChecked();
	unitReceive->basicSetting[iAddr]=wrd.f();
	unitSend->basicSetting[iAddr]=wrd.f();
	return;
}
void TabCust::slLiEdRls5DisPlace()
{
//78
	int iAddr = 78;
	iAddr=iAddrRls5Base+14;						//78;
	PLineEdit* lineEdit = ui.liEdRls5DisPlace;
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
void TabCust::slLiEdRls5Turn()
{
//79
	int iAddr = 79;
	iAddr=iAddrRls5Base+15;						//79;
	PLineEdit* lineEdit = ui.liEdRls5Turn;
	fLiEdAzimuth(	lineEdit,
		&unitReceive->basicSetting[iAddr],
		&unitSend->basicSetting[iAddr]	);
	return;
}
void TabCust::slLiEdRls5SIC()
{
//66
	int iAddr = 66;
	iAddr=iAddrRls5Base+2;						//66;
	PLineEdit* lineEdit = ui.liEdRls5SIC;
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
void TabCust::slLiEdRls5SAC()
{
//66
	int iAddr = 66;
	iAddr=iAddrRls5Base+2;						//66;
	PLineEdit* lineEdit = ui.liEdRls5SAC;
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
void TabCust::slLiEdRls5DistanceAxisVPP()
{
//86
	int iAddr = 86;
	iAddr=iAddrRls5Base+22;						//86;
	PLineEdit* lineEdit = ui.liEdRls5DistanceAxisVPP;
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
void TabCust::slLiEdRls5HighAerialVPP1()
{
//87м
	int iAddr = 87;
	iAddr=iAddrRls5Base+23;						//87;
	PLineEdit* lineEdit = ui.liEdRls5HighAerialVPP1;
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
void TabCust::slLiEdRls5HighAerialVPP2()
{
//87с
	int iAddr = 87;
	iAddr=iAddrRls5Base+23;						//87;
	PLineEdit* lineEdit = ui.liEdRls5HighAerialVPP2;
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
void TabCust::slLiEdRls5EndFaceVPP1()
{
//88
	int iAddr = 88;
	iAddr=iAddrRls5Base+24;						//88;
	PLineEdit* lineEdit = ui.liEdRls5EndFaceVPP1;
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
void TabCust::slLiEdRls5EndFaceVPP2()
{
//89
	int iAddr = 89;
	iAddr=iAddrRls5Base+25;						//89;
	PLineEdit* lineEdit = ui.liEdRls5EndFaceVPP2;
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
void TabCust::slLiEdRls5PointPlanting1()
{
//90
	int iAddr = 90;
	iAddr=iAddrRls5Base+26;						//90;
	PLineEdit* lineEdit = ui.liEdRls5PointPlanting1;
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
void TabCust::slLiEdRls5PointPlanting2()
{
//91
	int iAddr = 91;
	iAddr=iAddrRls5Base+27;						//91;
	PLineEdit* lineEdit = ui.liEdRls5PointPlanting2;
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
//end Rls5::::::::::::::РЛС5
//Rls6::::::::::::::РЛС6
void TabCust::slLiEdRls6Name()
{
	int iAddr = 68;
	iAddr=iAddrRls6Base+4;						//68;
	PLineEdit* lineEdit = ui.liEdRls6Name;
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
void TabCust::slCoBoRls6Num(int index)
{
	if(ui.coBoRls6Num->hasFocus()&&index<8)
	{
		int iAddr =64;
		iAddr=iAddrRls6Base+0;						//64;
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

void TabCust::slCoBoRls6LedNum(int index)
{
	if(ui.coBoRls6LedNum->hasFocus()&&index<11)
	{
		int iAddr =64;
		iAddr=iAddrRls6Base+0;						//64;
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
void TabCust::slCoBoRls6Prot(int index)
{
	if(ui.coBoRls6Prot->hasFocus()&&index<12)
	{
		int iAddr =64;
		iAddr=iAddrRls6Base+0;						//64;
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
void TabCust::slGrBoRls6()
{
	int iAddr =64;
	iAddr=iAddrRls6Base+0;						//64;
	bool b;
	b=ui.grBoRls6->isChecked();
	wrd.f(
		unitReceive->basicSetting[iAddr]
		)->bit15=b;
	unitReceive->basicSetting[iAddr]=wrd.f();
	unitSend->basicSetting[iAddr]=wrd.f();
	return;
}
void TabCust::slCoBoRls6Port(int index)
{
	if(ui.coBoRls6Port->hasFocus()&&index<11)
	{
		int iAddr =67;
		iAddr=iAddrRls6Base+3;						//66+1;
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

void TabCust::slChBoRls6UsePort()
{
	int iAddr =67;
	iAddr=iAddrRls6Base+3;						//66+1;
	bool b;
	b=ui.chBoRls6UsePort->isChecked();
	wrd.f(
		unitReceive->basicSetting[iAddr]
		)->bit6=b;
	unitReceive->basicSetting[iAddr]=wrd.f();
	unitSend->basicSetting[iAddr]=wrd.f();
	return;
}

void TabCust::slChBoRls6UseSAC()
{
	int iAddr =67;
	iAddr=iAddrRls6Base+3;						//66+1;
	bool b;
	b=ui.chBoRls6UseSAC->isChecked();
	wrd.f(
		unitReceive->basicSetting[iAddr]
		)->bit4=b;
	unitReceive->basicSetting[iAddr]=wrd.f();
	unitSend->basicSetting[iAddr]=wrd.f();
	return;
}

void TabCust::slChBoRls6UseSIC()
{
	int iAddr =67;
	iAddr=iAddrRls6Base+3;						//66+1;
	bool b;
	b=ui.chBoRls6UseSIC->isChecked();
	wrd.f(
		unitReceive->basicSetting[iAddr]
		)->bit5=b;
	unitReceive->basicSetting[iAddr]=wrd.f();
	unitSend->basicSetting[iAddr]=wrd.f();
	return;
}


void TabCust::slLiEdRls6PntDistance()
{
//76
	int iAddr = 76;
	iAddr=iAddrRls6Base+12;						//76;
	PLineEdit* lineEdit = ui.liEdRls6PntDistance;
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
void TabCust::slLiEdRls6PntAzimuth()
{
//77
	int iAddr =77;
	iAddr=iAddrRls6Base+13;						//77;
	PLineEdit* lineEdit = ui.liEdRls6PntAzimuth ;
	fLiEdAzimuth(	lineEdit,
		&unitReceive->basicSetting[iAddr],
		&unitSend->basicSetting[iAddr]	);
	return;
}
void TabCust::slRaBuRls6Grad()
{
	int iAddr =65;
	iAddr=iAddrRls6Base+1;						//64+1;
	wrd.f(unitReceive->basicSetting[iAddr]);
	wrd.s.bit0=ui.raBuRls6GradMagnetic->isChecked();
	unitReceive->basicSetting[iAddr]=wrd.f();
	unitSend->basicSetting[iAddr]=wrd.f();
	return;
}
void TabCust::slLiEdRls6DisPlace()
{
//78
	int iAddr = 78;
	iAddr=iAddrRls6Base+14;						//78;
	PLineEdit* lineEdit = ui.liEdRls6DisPlace;
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
void TabCust::slLiEdRls6Turn()
{
//79
	int iAddr = 79;
	iAddr=iAddrRls6Base+15;						//79;
	PLineEdit* lineEdit = ui.liEdRls6Turn;
	fLiEdAzimuth(	lineEdit,
		&unitReceive->basicSetting[iAddr],
		&unitSend->basicSetting[iAddr]	);
	return;
}
void TabCust::slLiEdRls6SIC()
{
//66
	int iAddr = 66;
	iAddr=iAddrRls6Base+2;						//66;
	PLineEdit* lineEdit = ui.liEdRls6SIC;
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
void TabCust::slLiEdRls6SAC()
{
//66
	int iAddr = 66;
	iAddr=iAddrRls6Base+2;						//66;
	PLineEdit* lineEdit = ui.liEdRls6SAC;
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
void TabCust::slLiEdRls6DistanceAxisVPP()
{
//86
	int iAddr = 86;
	iAddr=iAddrRls6Base+22;						//86;
	PLineEdit* lineEdit = ui.liEdRls6DistanceAxisVPP;
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
void TabCust::slLiEdRls6HighAerialVPP1()
{
//87м
	int iAddr = 87;
	iAddr=iAddrRls6Base+23;						//87;
	PLineEdit* lineEdit = ui.liEdRls6HighAerialVPP1;
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
void TabCust::slLiEdRls6HighAerialVPP2()
{
//87с
	int iAddr = 87;
	iAddr=iAddrRls6Base+23;						//87;
	PLineEdit* lineEdit = ui.liEdRls6HighAerialVPP2;
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
void TabCust::slLiEdRls6EndFaceVPP1()
{
//88
	int iAddr = 88;
	iAddr=iAddrRls6Base+24;						//88;
	PLineEdit* lineEdit = ui.liEdRls6EndFaceVPP1;
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
void TabCust::slLiEdRls6EndFaceVPP2()
{
//89
	int iAddr = 89;
	iAddr=iAddrRls6Base+25;						//89;
	PLineEdit* lineEdit = ui.liEdRls6EndFaceVPP2;
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
void TabCust::slLiEdRls6PointPlanting1()
{
//90
	int iAddr = 90;
	iAddr=iAddrRls6Base+26;						//90;
	PLineEdit* lineEdit = ui.liEdRls6PointPlanting1;
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
void TabCust::slLiEdRls6PointPlanting2()
{
//91
	int iAddr = 91;
	iAddr=iAddrRls6Base+27;						//91;
	PLineEdit* lineEdit = ui.liEdRls6PointPlanting2;
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
//end Rls6::::::::::::::РЛС6



void TabCust::updateDialogSoPo()
{
//
	int iAddr0=0,iAddr=0;
	ushort a0,a1,a2,a3;
	short b1;
    QString str,strWhole,str2;
    char ch;int k0;
	char nameSource[16];
	Unn unn;
//12…14  функциональное название платы 6 байт
	iAddr=12;						//12;
	for (int i=0;i<6;i++)
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
	if(!ui.liEdNameBoard->hasFocus())
		ui.liEdNameBoard->setText(str2);
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
//44	параметры порта 1					//--------------//
	iAddr0 =44;
	wrd.f(unitReceive->basicSetting[iAddr0]);
//		бит 15:	1 — порт разрешен
	ui.grBoPort1->setChecked(wrd.s.bit15);
//bits 2...0	-	скорость
	a1 =wrd.s.bit2*4+wrd.s.bit1*2+wrd.s.bit0;
	ui.coBoPort1Boude->setCurrentIndex(a1);
//бит 4: 0 — бит четности отсутствует, 1 — бит четности присутствует
//бит 5: 0 — четность, 1 — нечетность 
	if(wrd.s.bit4==0)
	{
		ui.chBoPort1ParityBit->setChecked(false);
		ui.raBuPort1Parity->setEnabled(false);
		ui.raBuPort1ParityNo->setEnabled(false);

	}else
	{
		ui.chBoPort1ParityBit->setChecked(true);
		ui.raBuPort1Parity->setEnabled(true);
		ui.raBuPort1ParityNo->setEnabled(true);
	}

	if(wrd.s.bit5==1)
	{
		ui.raBuPort1Parity->setChecked(true);
	}else
	{
		ui.raBuPort1ParityNo->setChecked(true);
	}
//бит 6: для порта 8: 0- потры 8,9,10 - независимые порты, 1 - порты
	//8,9,10 образуют стык С2
	//для нечетных портов: 0 - асинхронный, 1- синхронный
	//для остальных потов не используется
	if(wrd.s.bit6==0)
	{
		ui.raBuPort1Asincr->setChecked(true);
		ui.grBoPort1Asincr->setEnabled(true);
		ui.grBoPort1Sincr->setEnabled(false);
	}else
	{
		ui.raBuPort1Sincr->setChecked(true);
		ui.grBoPort1Sincr->setEnabled(true);
		ui.grBoPort1Asincr->setEnabled(false);
	}

//7 - бит,тип информации асинхронного порта:
	//асинхронный байт(0) или 8 бит информации синхронного порта(1)
	int bitSincr=0;		//1 - синхронность информации в асинхр порту
	if(wrd.s.bit7==0)
	{
		ui.chBoPort1SincrInf->setChecked(false);
		ui.coBoPort1AsincrProt->setVisible(true);
		ui.coBoPort1SincrProt_2->setVisible(false);
		bitSincr=0;
	}else
	{
		ui.chBoPort1SincrInf->setChecked(true);
		ui.coBoPort1AsincrProt->setVisible(false);
		ui.coBoPort1SincrProt_2->setVisible(true);
		bitSincr=1;
	}
//биты 20...16: номер асинхронного протокола
	//43210
	iAddr0 =45;
	wrd.f(unitReceive->basicSetting[iAddr0]);
	a1 =wrd.s.bit4*16+wrd.s.bit3*8+wrd.s.bit2*4+wrd.s.bit1*2+wrd.s.bit0;
	ui.coBoPort1AsincrProt->setCurrentIndex(a1);
//биты 25...21: номер синхронного протокола
//98765
	a1 =wrd.s.bit9*16+wrd.s.bit8*8+wrd.s.bit7*4+wrd.s.bit6*2+wrd.s.bit5;
	ui.coBoPort1SincrProt->setCurrentIndex(a1);
	ui.coBoPort1SincrProt_2->setCurrentIndex(a1);
//конец	параметры порта 1
//46	параметры порта 2					//--------------//
	iAddr0 =46;
	wrd.f(unitReceive->basicSetting[iAddr0]);
//		бит 15:	1 — порт разрешен
	ui.grBoPort2->setChecked(wrd.s.bit15);
//bits 2...0	-	скорость
	a1 =wrd.s.bit2*4+wrd.s.bit1*2+wrd.s.bit0;
	ui.coBoPort2Boude->setCurrentIndex(a1);
//бит 4: 0 — бит четности отсутствует, 1 — бит четности присутствует
//бит 5: 0 — четность, 1 — нечетность 
	if(wrd.s.bit4==0)
	{
		ui.chBoPort2ParityBit->setChecked(false);
		ui.raBuPort2Parity->setEnabled(false);
		ui.raBuPort2ParityNo->setEnabled(false);

	}else
	{
		ui.chBoPort2ParityBit->setChecked(true);
		ui.raBuPort2Parity->setEnabled(true);
		ui.raBuPort2ParityNo->setEnabled(true);
	}

	if(wrd.s.bit5==1)
	{
		ui.raBuPort2Parity->setChecked(true);
	}else
	{
		ui.raBuPort2ParityNo->setChecked(true);
	}
//бит 6: для порта 8: 0- потры 8,9,10 - независимые порты, 1 - порты
	//8,9,10 образуют стык С2
	//для нечетных портов: 0 - асинхронный, 1- синхронный
	//для остальных потов не используется
	if(wrd.s.bit6==0)
	{
		ui.raBuPort2Asincr->setChecked(true);
		ui.grBoPort2Asincr->setEnabled(true);
		ui.grBoPort2Sincr->setEnabled(false);
	}else
	{
		ui.raBuPort2Sincr->setChecked(true);
		ui.grBoPort2Sincr->setEnabled(true);
		ui.grBoPort2Asincr->setEnabled(false);
	}

//7 - бит,тип информации асинхронного порта:
	//асинхронный байт(0) или 8 бит информации синхронного порта(1)
	if(wrd.s.bit7==0)
	{
		ui.chBoPort2SincrInf->setChecked(false);
		ui.coBoPort2AsincrProt->setVisible(true);
		ui.coBoPort2SincrProt_2->setVisible(false);
	}else
	{
		ui.chBoPort2SincrInf->setChecked(true);
		ui.coBoPort2AsincrProt->setVisible(false);
		ui.coBoPort2SincrProt_2->setVisible(true);
	}
//биты 20...16: номер асинхронного протокола
	//43210
	iAddr0 =47;
	wrd.f(unitReceive->basicSetting[iAddr0]);
	a1 =wrd.s.bit4*16+wrd.s.bit3*8+wrd.s.bit2*4+wrd.s.bit1*2+wrd.s.bit0;
	ui.coBoPort2AsincrProt->setCurrentIndex(a1);
//биты 25...21: номер синхронного протокола
//98765
	a1 =wrd.s.bit9*16+wrd.s.bit8*8+wrd.s.bit7*4+wrd.s.bit6*2+wrd.s.bit5;
	ui.coBoPort2SincrProt->setCurrentIndex(a1);
//конец	параметры порта 2
//48	параметры порта 3					//--------------//
	iAddr0 =48;
	wrd.f(unitReceive->basicSetting[iAddr0]);
//		бит 15:	1 — порт разрешен
	ui.grBoPort3->setChecked(wrd.s.bit15);
//bits 2...0	-	скорость
	a1 =wrd.s.bit2*4+wrd.s.bit1*2+wrd.s.bit0;
	ui.coBoPort3Boude->setCurrentIndex(a1);
//бит 4: 0 — бит четности отсутствует, 1 — бит четности присутствует
//бит 5: 0 — четность, 1 — нечетность 
	if(wrd.s.bit4==0)
	{
		ui.chBoPort3ParityBit->setChecked(false);
		ui.raBuPort3Parity->setEnabled(false);
		ui.raBuPort3ParityNo->setEnabled(false);

	}else
	{
		ui.chBoPort3ParityBit->setChecked(true);
		ui.raBuPort3Parity->setEnabled(true);
		ui.raBuPort3ParityNo->setEnabled(true);
	}

	if(wrd.s.bit5==1)
	{
		ui.raBuPort3Parity->setChecked(true);
	}else
	{
		ui.raBuPort3ParityNo->setChecked(true);
	}
//бит 6: для порта 8: 0- потры 8,9,10 - независимые порты, 1 - порты
	//8,9,10 образуют стык С2
	//для нечетных портов: 0 - асинхронный, 1- синхронный
	//для остальных потов не используется
	if(wrd.s.bit6==0)
	{
		ui.raBuPort3Asincr->setChecked(true);
		ui.grBoPort3Asincr->setEnabled(true);
		ui.grBoPort3Sincr->setEnabled(false);
	}else
	{
		ui.raBuPort3Sincr->setChecked(true);
		ui.grBoPort3Sincr->setEnabled(true);
		ui.grBoPort3Asincr->setEnabled(false);
	}

//7 - бит,тип информации асинхронного порта:
	//асинхронный байт(0) или 8 бит информации синхронного порта(1)
	if(wrd.s.bit7==0)
	{
		ui.chBoPort3SincrInf->setChecked(false);
		ui.coBoPort3AsincrProt->setVisible(true);
		ui.coBoPort3SincrProt_2->setVisible(false);
	}else
	{
		ui.chBoPort3SincrInf->setChecked(true);
		ui.coBoPort3AsincrProt->setVisible(false);
		ui.coBoPort3SincrProt_2->setVisible(true);
	}
//биты 20...16: номер асинхронного протокола
	//43210
	iAddr0 =47;
	wrd.f(unitReceive->basicSetting[iAddr0]);
	a1 =wrd.s.bit4*16+wrd.s.bit3*8+wrd.s.bit2*4+wrd.s.bit1*2+wrd.s.bit0;
	ui.coBoPort3AsincrProt->setCurrentIndex(a1);
//биты 25...21: номер синхронного протокола
//98765
	a1 =wrd.s.bit9*16+wrd.s.bit8*8+wrd.s.bit7*4+wrd.s.bit6*2+wrd.s.bit5;
	ui.coBoPort3SincrProt->setCurrentIndex(a1);
//конец	параметры порта 3
//50	параметры порта 4					//--------------//
	iAddr0 =50;
	wrd.f(unitReceive->basicSetting[iAddr0]);
//		бит 15:	1 — порт разрешен
	ui.grBoPort4->setChecked(wrd.s.bit15);
//bits 2...0	-	скорость
	a1 =wrd.s.bit2*4+wrd.s.bit1*2+wrd.s.bit0;
	ui.coBoPort4Boude->setCurrentIndex(a1);
//бит 4: 0 — бит четности отсутствует, 1 — бит четности присутствует
//бит 5: 0 — четность, 1 — нечетность 
	if(wrd.s.bit4==0)
	{
		ui.chBoPort4ParityBit->setChecked(false);
		ui.raBuPort4Parity->setEnabled(false);
		ui.raBuPort4ParityNo->setEnabled(false);

	}else
	{
		ui.chBoPort4ParityBit->setChecked(true);
		ui.raBuPort4Parity->setEnabled(true);
		ui.raBuPort4ParityNo->setEnabled(true);
	}

	if(wrd.s.bit5==1)
	{
		ui.raBuPort4Parity->setChecked(true);
	}else
	{
		ui.raBuPort4ParityNo->setChecked(true);
	}
//бит 6: для порта 8: 0- потры 8,9,10 - независимые порты, 1 - порты
	//8,9,10 образуют стык С2
	//для нечетных портов: 0 - асинхронный, 1- синхронный
	//для остальных потов не используется
	if(wrd.s.bit6==0)
	{
		ui.raBuPort4Asincr->setChecked(true);
		ui.grBoPort4Asincr->setEnabled(true);
		ui.grBoPort4Sincr->setEnabled(false);
	}else
	{
		ui.raBuPort4Sincr->setChecked(true);
		ui.grBoPort4Sincr->setEnabled(true);
		ui.grBoPort4Asincr->setEnabled(false);
	}

//7 - бит,тип информации асинхронного порта:
	//асинхронный байт(0) или 8 бит информации синхронного порта(1)
	if(wrd.s.bit7==0)
	{
		ui.chBoPort4SincrInf->setChecked(false);
		ui.coBoPort4AsincrProt->setVisible(true);
		ui.coBoPort4SincrProt_2->setVisible(false);
	}else
	{
		ui.chBoPort4SincrInf->setChecked(true);
		ui.coBoPort4AsincrProt->setVisible(false);
		ui.coBoPort4SincrProt_2->setVisible(true);
	}
//биты 20...16: номер асинхронного протокола
	//43210
	iAddr0 =51;
	wrd.f(unitReceive->basicSetting[iAddr0]);
	a1 =wrd.s.bit4*16+wrd.s.bit3*8+wrd.s.bit2*4+wrd.s.bit1*2+wrd.s.bit0;
	ui.coBoPort4AsincrProt->setCurrentIndex(a1);
//биты 25...21: номер синхронного протокола
//98765
	a1 =wrd.s.bit9*16+wrd.s.bit8*8+wrd.s.bit7*4+wrd.s.bit6*2+wrd.s.bit5;
	ui.coBoPort4SincrProt->setCurrentIndex(a1);
//конец	параметры порта 4
//52	параметры порта 5					//--------------//
	iAddr0 =52;
	wrd.f(unitReceive->basicSetting[iAddr0]);
//		бит 15:	1 — порт разрешен
	ui.grBoPort5->setChecked(wrd.s.bit15);
//bits 2...0	-	скорость
	a1 =wrd.s.bit2*4+wrd.s.bit1*2+wrd.s.bit0;
	ui.coBoPort5Boude->setCurrentIndex(a1);
//бит 4: 0 — бит четности отсутствует, 1 — бит четности присутствует
//бит 5: 0 — четность, 1 — нечетность 
	if(wrd.s.bit4==0)
	{
		ui.chBoPort5ParityBit->setChecked(false);
		ui.raBuPort5Parity->setEnabled(false);
		ui.raBuPort5ParityNo->setEnabled(false);

	}else
	{
		ui.chBoPort5ParityBit->setChecked(true);
		ui.raBuPort5Parity->setEnabled(true);
		ui.raBuPort5ParityNo->setEnabled(true);
	}

	if(wrd.s.bit5==1)
	{
		ui.raBuPort5Parity->setChecked(true);
	}else
	{
		ui.raBuPort5ParityNo->setChecked(true);
	}
//бит 6: для порта 8: 0- потры 8,9,10 - независимые порты, 1 - порты
	//8,9,10 образуют стык С2
	//для нечетных портов: 0 - асинхронный, 1- синхронный
	//для остальных потов не используется
	if(wrd.s.bit6==0)
	{
		ui.raBuPort5Asincr->setChecked(true);
		ui.grBoPort5Asincr->setEnabled(true);
		ui.grBoPort5Sincr->setEnabled(false);
	}else
	{
		ui.raBuPort5Sincr->setChecked(true);
		ui.grBoPort5Sincr->setEnabled(true);
		ui.grBoPort5Asincr->setEnabled(false);
	}

//7 - бит,тип информации асинхронного порта:
	//асинхронный байт(0) или 8 бит информации синхронного порта(1)
	if(wrd.s.bit7==0)
	{
		ui.chBoPort5SincrInf->setChecked(false);
		ui.coBoPort5AsincrProt->setVisible(true);
		ui.coBoPort5SincrProt_2->setVisible(false);
	}else
	{
		ui.chBoPort5SincrInf->setChecked(true);
		ui.coBoPort5AsincrProt->setVisible(false);
		ui.coBoPort5SincrProt_2->setVisible(true);
	}
//биты 20...16: номер асинхронного протокола
	//43210
	iAddr0 =53;
	wrd.f(unitReceive->basicSetting[iAddr0]);
	a1 =wrd.s.bit4*16+wrd.s.bit3*8+wrd.s.bit2*4+wrd.s.bit1*2+wrd.s.bit0;
	ui.coBoPort5AsincrProt->setCurrentIndex(a1);
//биты 25...21: номер синхронного протокола
//98765
	a1 =wrd.s.bit9*16+wrd.s.bit8*8+wrd.s.bit7*4+wrd.s.bit6*2+wrd.s.bit5;
	ui.coBoPort5SincrProt->setCurrentIndex(a1);
//конец	параметры порта 5
//54	параметры порта 6					//--------------//
	iAddr0 =54;
	wrd.f(unitReceive->basicSetting[iAddr0]);
//		бит 15:	1 — порт разрешен
	ui.grBoPort6->setChecked(wrd.s.bit15);
//bits 2...0	-	скорость
	a1 =wrd.s.bit2*4+wrd.s.bit1*2+wrd.s.bit0;
	ui.coBoPort6Boude->setCurrentIndex(a1);
//бит 4: 0 — бит четности отсутствует, 1 — бит четности присутствует
//бит 5: 0 — четность, 1 — нечетность 
	if(wrd.s.bit4==0)
	{
		ui.chBoPort6ParityBit->setChecked(false);
		ui.raBuPort6Parity->setEnabled(false);
		ui.raBuPort6ParityNo->setEnabled(false);

	}else
	{
		ui.chBoPort6ParityBit->setChecked(true);
		ui.raBuPort6Parity->setEnabled(true);
		ui.raBuPort6ParityNo->setEnabled(true);
	}

	if(wrd.s.bit5==1)
	{
		ui.raBuPort6Parity->setChecked(true);
	}else
	{
		ui.raBuPort6ParityNo->setChecked(true);
	}
//бит 6: для порта 8: 0- потры 8,9,10 - независимые порты, 1 - порты
	//8,9,10 образуют стык С2
	//для нечетных портов: 0 - асинхронный, 1- синхронный
	//для остальных потов не используется
	if(wrd.s.bit6==0)
	{
		ui.raBuPort6Asincr->setChecked(true);
		ui.grBoPort6Asincr->setEnabled(true);
		ui.grBoPort6Sincr->setEnabled(false);
	}else
	{
		ui.raBuPort6Sincr->setChecked(true);
		ui.grBoPort6Sincr->setEnabled(true);
		ui.grBoPort6Asincr->setEnabled(false);
	}

//7 - бит,тип информации асинхронного порта:
	//асинхронный байт(0) или 8 бит информации синхронного порта(1)
	if(wrd.s.bit7==0)
	{
		ui.chBoPort6SincrInf->setChecked(false);
		ui.coBoPort6AsincrProt->setVisible(true);
		ui.coBoPort6SincrProt_2->setVisible(false);
	}else
	{
		ui.chBoPort6SincrInf->setChecked(true);
		ui.coBoPort6AsincrProt->setVisible(false);
		ui.coBoPort6SincrProt_2->setVisible(true);
	}
//биты 20...16: номер асинхронного протокола
	//43210
	iAddr0 =55;
	wrd.f(unitReceive->basicSetting[iAddr0]);
	a1 =wrd.s.bit4*16+wrd.s.bit3*8+wrd.s.bit2*4+wrd.s.bit1*2+wrd.s.bit0;
	ui.coBoPort6AsincrProt->setCurrentIndex(a1);
//биты 25...21: номер синхронного протокола
//98765
	a1 =wrd.s.bit9*16+wrd.s.bit8*8+wrd.s.bit7*4+wrd.s.bit6*2+wrd.s.bit5;
	ui.coBoPort6SincrProt->setCurrentIndex(a1);
//конец	параметры порта 6
//56	параметры порта 7					//--------------//
	iAddr0 =56;
	wrd.f(unitReceive->basicSetting[iAddr0]);
//		бит 15:	1 — порт разрешен
	ui.grBoPort7->setChecked(wrd.s.bit15);
//bits 2...0	-	скорость
	a1 =wrd.s.bit2*4+wrd.s.bit1*2+wrd.s.bit0;
	ui.coBoPort7Boude->setCurrentIndex(a1);
//бит 4: 0 — бит четности отсутствует, 1 — бит четности присутствует
//бит 5: 0 — четность, 1 — нечетность 
	if(wrd.s.bit4==0)
	{
		ui.chBoPort7ParityBit->setChecked(false);
		ui.raBuPort7Parity->setEnabled(false);
		ui.raBuPort7ParityNo->setEnabled(false);

	}else
	{
		ui.chBoPort7ParityBit->setChecked(true);
		ui.raBuPort7Parity->setEnabled(true);
		ui.raBuPort7ParityNo->setEnabled(true);
	}

	if(wrd.s.bit5==1)
	{
		ui.raBuPort7Parity->setChecked(true);
	}else
	{
		ui.raBuPort7ParityNo->setChecked(true);
	}
//бит 6: для порта 8: 0- потры 8,9,10 - независимые порты, 1 - порты
	//8,9,10 образуют стык С2
	//для нечетных портов: 0 - асинхронный, 1- синхронный
	//для остальных потов не используется
	if(wrd.s.bit6==0)
	{
		ui.raBuPort7Asincr->setChecked(true);
		ui.grBoPort7Asincr->setEnabled(true);
		ui.grBoPort7Sincr->setEnabled(false);
	}else
	{
		ui.raBuPort7Sincr->setChecked(true);
		ui.grBoPort7Sincr->setEnabled(true);
		ui.grBoPort7Asincr->setEnabled(false);
	}

//7 - бит,тип информации асинхронного порта:
	//асинхронный байт(0) или 8 бит информации синхронного порта(1)
	if(wrd.s.bit7==0)
	{
		ui.chBoPort7SincrInf->setChecked(false);
		ui.coBoPort7AsincrProt->setVisible(true);
		ui.coBoPort7SincrProt_2->setVisible(false);
	}else
	{
		ui.chBoPort7SincrInf->setChecked(true);
		ui.coBoPort7AsincrProt->setVisible(false);
		ui.coBoPort7SincrProt_2->setVisible(true);
	}
//биты 20...16: номер асинхронного протокола
	//43210
	iAddr0 =57;
	wrd.f(unitReceive->basicSetting[iAddr0]);
	a1 =wrd.s.bit4*16+wrd.s.bit3*8+wrd.s.bit2*4+wrd.s.bit1*2+wrd.s.bit0;
	ui.coBoPort7AsincrProt->setCurrentIndex(a1);
//биты 25...21: номер синхронного протокола
//98765
	a1 =wrd.s.bit9*16+wrd.s.bit8*8+wrd.s.bit7*4+wrd.s.bit6*2+wrd.s.bit5;
	ui.coBoPort7SincrProt->setCurrentIndex(a1);
//конец	параметры порта 7
//58	параметры порта 8					//--------------//
	iAddr0 =58;
	wrd.f(unitReceive->basicSetting[iAddr0]);
//		бит 15:	1 — порт разрешен
	ui.grBoPort8->setChecked(wrd.s.bit15);
//bits 2...0	-	скорость
	a1 =wrd.s.bit2*4+wrd.s.bit1*2+wrd.s.bit0;
	ui.coBoPort8Boude->setCurrentIndex(a1);
//бит 4: 0 — бит четности отсутствует, 1 — бит четности присутствует
//бит 5: 0 — четность, 1 — нечетность 
	if(wrd.s.bit4==0)
	{
		ui.chBoPort8ParityBit->setChecked(false);
		ui.raBuPort8Parity->setEnabled(false);
		ui.raBuPort8ParityNo->setEnabled(false);

	}else
	{
		ui.chBoPort8ParityBit->setChecked(true);
		ui.raBuPort8Parity->setEnabled(true);
		ui.raBuPort8ParityNo->setEnabled(true);
	}

	if(wrd.s.bit5==1)
	{
		ui.raBuPort8Parity->setChecked(true);
	}else
	{
		ui.raBuPort8ParityNo->setChecked(true);
	}
//бит 6: для порта 8: 0- потры 8,9,10 - независимые порты, 1 - порты
	//8,9,10 образуют стык С2
	//для нечетных портов: 0 - асинхронный, 1- синхронный
	//для остальных потов не используется
	if(wrd.s.bit6==0)
	{
		ui.raBuPort8Asincr->setChecked(true);
		ui.grBoPort8Asincr->setEnabled(true);
		ui.grBoPort8Sincr->setEnabled(false);
	}else
	{
		ui.raBuPort8Sincr->setChecked(true);
		ui.grBoPort8Sincr->setEnabled(true);
		ui.grBoPort8Asincr->setEnabled(false);
	}

//7 - бит,тип информации асинхронного порта:
	//асинхронный байт(0) или 8 бит информации синхронного порта(1)
	if(wrd.s.bit7==0)
	{
		ui.chBoPort8SincrInf->setChecked(false);
		ui.coBoPort8AsincrProt->setVisible(true);
		ui.coBoPort8SincrProt_2->setVisible(false);
	}else
	{
		ui.chBoPort8SincrInf->setChecked(true);
		ui.coBoPort8AsincrProt->setVisible(false);
		ui.coBoPort8SincrProt_2->setVisible(true);
	}
//биты 20...16: номер асинхронного протокола
	//43210
	iAddr0 =59;
	wrd.f(unitReceive->basicSetting[iAddr0]);
	a1 =wrd.s.bit4*16+wrd.s.bit3*8+wrd.s.bit2*4+wrd.s.bit1*2+wrd.s.bit0;
	ui.coBoPort8AsincrProt->setCurrentIndex(a1);
//биты 25...21: номер синхронного протокола
//98765
	a1 =wrd.s.bit9*16+wrd.s.bit8*8+wrd.s.bit7*4+wrd.s.bit6*2+wrd.s.bit5;
	ui.coBoPort8SincrProt->setCurrentIndex(a1);
//конец	параметры порта 8
//60	параметры порта 9					//--------------//
	iAddr0 =60;
	wrd.f(unitReceive->basicSetting[iAddr0]);
//		бит 15:	1 — порт разрешен
	ui.grBoPort9->setChecked(wrd.s.bit15);
//bits 2...0	-	скорость
	a1 =wrd.s.bit2*4+wrd.s.bit1*2+wrd.s.bit0;
	ui.coBoPort9Boude->setCurrentIndex(a1);
//бит 4: 0 — бит четности отсутствует, 1 — бит четности присутствует
//бит 5: 0 — четность, 1 — нечетность 
	if(wrd.s.bit4==0)
	{
		ui.chBoPort9ParityBit->setChecked(false);
		ui.raBuPort9Parity->setEnabled(false);
		ui.raBuPort9ParityNo->setEnabled(false);

	}else
	{
		ui.chBoPort9ParityBit->setChecked(true);
		ui.raBuPort9Parity->setEnabled(true);
		ui.raBuPort9ParityNo->setEnabled(true);
	}

	if(wrd.s.bit5==1)
	{
		ui.raBuPort9Parity->setChecked(true);
	}else
	{
		ui.raBuPort9ParityNo->setChecked(true);
	}
//бит 6: для порта 8: 0- потры 8,9,10 - независимые порты, 1 - порты
	//8,9,10 образуют стык С2
	//для нечетных портов: 0 - асинхронный, 1- синхронный
	//для остальных потов не используется
	if(wrd.s.bit6==0)
	{
		ui.raBuPort9Asincr->setChecked(true);
		ui.grBoPort9Asincr->setEnabled(true);
		ui.grBoPort9Sincr->setEnabled(false);
	}else
	{
		ui.raBuPort9Sincr->setChecked(true);
		ui.grBoPort9Sincr->setEnabled(true);
		ui.grBoPort9Asincr->setEnabled(false);
	}

//7 - бит,тип информации асинхронного порта:
	//асинхронный байт(0) или 8 бит информации синхронного порта(1)
	if(wrd.s.bit7==0)
	{
		ui.chBoPort9SincrInf->setChecked(false);
		ui.coBoPort9AsincrProt->setVisible(true);
		ui.coBoPort9SincrProt_2->setVisible(false);
	}else
	{
		ui.chBoPort9SincrInf->setChecked(true);
		ui.coBoPort9AsincrProt->setVisible(false);
		ui.coBoPort9SincrProt_2->setVisible(true);
	}
//биты 20...16: номер асинхронного протокола
	//43210
	iAddr0 =61;
	wrd.f(unitReceive->basicSetting[iAddr0]);
	a1 =wrd.s.bit4*16+wrd.s.bit3*8+wrd.s.bit2*4+wrd.s.bit1*2+wrd.s.bit0;
	ui.coBoPort9AsincrProt->setCurrentIndex(a1);
//биты 25...21: номер синхронного протокола
//98765
	a1 =wrd.s.bit9*16+wrd.s.bit8*8+wrd.s.bit7*4+wrd.s.bit6*2+wrd.s.bit5;
	ui.coBoPort9SincrProt->setCurrentIndex(a1);
//конец	параметры порта 9
//62	параметры порта 10					//--------------//
	iAddr0 =62;
	wrd.f(unitReceive->basicSetting[iAddr0]);
//		бит 15:	1 — порт разрешен
	ui.grBoPort10->setChecked(wrd.s.bit15);
//bits 2...0	-	скорость
	iAddr0 =62;
	wrd.f(unitReceive->basicSetting[iAddr0]);
	a1 =wrd.s.bit2*4+wrd.s.bit1*2+wrd.s.bit0;
	ui.coBoPort10Boude->setCurrentIndex(a1);
//бит 4: 0 — бит четности отсутствует, 1 — бит четности присутствует
//бит 5: 0 — четность, 1 — нечетность 
	if(wrd.s.bit4==0)
	{
		ui.chBoPort10ParityBit->setChecked(false);
		ui.raBuPort10Parity->setEnabled(false);
		ui.raBuPort10ParityNo->setEnabled(false);

	}else
	{
		ui.chBoPort10ParityBit->setChecked(true);
		ui.raBuPort10Parity->setEnabled(true);
		ui.raBuPort10ParityNo->setEnabled(true);
	}

	if(wrd.s.bit5==1)
	{
		ui.raBuPort10Parity->setChecked(true);
	}else
	{
		ui.raBuPort10ParityNo->setChecked(true);
	}
//бит 6: для порта 8: 0- потры 8,9,10 - независимые порты, 1 - порты
	//8,9,10 образуют стык С2
	//для нечетных портов: 0 - асинхронный, 1- синхронный
	//для остальных потов не используется
	if(wrd.s.bit6==0)
	{
		ui.raBuPort10Asincr->setChecked(true);
		ui.grBoPort10Asincr->setEnabled(true);
	}else
	{
		ui.grBoPort10Asincr->setEnabled(false);
	}

//7 - бит,тип информации асинхронного порта:
	//асинхронный байт(0) или 8 бит информации синхронного порта(1)
	if(wrd.s.bit7==0)
	{
		ui.chBoPort10SincrInf->setChecked(false);
		ui.coBoPort10AsincrProt->setVisible(true);
		ui.coBoPort10SincrProt_2->setVisible(false);
	}else
	{
		ui.chBoPort10SincrInf->setChecked(true);
		ui.coBoPort10AsincrProt->setVisible(false);
		ui.coBoPort10SincrProt_2->setVisible(true);
	}
//биты 20...16: номер асинхронного протокола
	//43210
	iAddr0 =63;
	wrd.f(unitReceive->basicSetting[iAddr0]);
	a1 =wrd.s.bit4*16+wrd.s.bit3*8+wrd.s.bit2*4+wrd.s.bit1*2+wrd.s.bit0;
	ui.coBoPort10AsincrProt->setCurrentIndex(a1);
//биты 25...21: номер синхронного протокола
//98765
	a1 =wrd.s.bit9*16+wrd.s.bit8*8+wrd.s.bit7*4+wrd.s.bit6*2+wrd.s.bit5;
//	ui.coBoPort10SincrProt->setCurrentIndex(a1);
//конец	параметры порта 10


//Rls1::::::::::::::РЛС1
//64...65 параметры источника
//		бит 15:	1 — порт разрешен
//	iAddrRls1Base=64;
	iAddr=iAddrRls1Base+0;						//64;
	ui.grBoRls1->setChecked(
		wrd.f(unitReceive->basicSetting[iAddr])->bit15);
	a1=unitReceive->basicSetting[iAddr];
	iAddr=iAddrRls1Base+0;						//64;
//биты 1,0:	номер устройства
	wrd.f(unitReceive->basicSetting[iAddr]);
	a1 = wrd.s.bit2*4+wrd.s.bit1*2+wrd.s.bit0;
	ui.coBoRls1Num->setCurrentIndex(a1);	
//биты 6,3:	номер светодиода
	iAddr=iAddrRls1Base+0;						//64;
	wrd.f(unitReceive->basicSetting[iAddr]);
	a1 = wrd.s.bit6*8+wrd.s.bit5*4+wrd.s.bit4*2+wrd.s.bit3;
	ui.coBoRls1LedNum->setCurrentIndex(a1);	
//биты 11,7:	номер устройства
	wrd.f(unitReceive->basicSetting[iAddr]);
	a1 = wrd.s.bit11*16+wrd.s.bit10*8+wrd.s.bit9*4+wrd.s.bit8*2+wrd.s.bit7;
	ui.coBoRls1Prot->setCurrentIndex(a1);	
//64-бит 16:64+1-бит 0	склонение (0 — географическое (истинное), 1 — магнитное)
	iAddr=iAddrRls1Base+1;						//64+1;
	wrd.f(unitReceive->basicSetting[iAddr]);
	if(wrd.s.bit0)
		ui.raBuRls1GradMagnetic->setChecked(true);
	else
		ui.raBuRls1GradGeographic->setChecked(true);
//64-бит 17:64+1-бит 1	бит 17 признак наличия посадочной РЛС (1)
	iAddr=iAddrRls1Base+1;						//64+1;
	ui.grBoRls1Prl->setChecked(
		wrd.f(unitReceive->basicSetting[iAddr])->bit1);
//64-бит 17:64+1-бит 1	бит 17 признак наличия посадочной РЛС (1)
	iAddr=iAddrRls2Base+1;						//64+1;
	ui.grBoRls2Prl->setChecked(
		wrd.f(unitReceive->basicSetting[iAddr])->bit1);
//64-бит 17:64+1-бит 1	бит 17 признак наличия посадочной РЛС (1)
	iAddr=iAddrRls3Base+1;						//64+1;
	ui.grBoRls3Prl->setChecked(
		wrd.f(unitReceive->basicSetting[iAddr])->bit1);
//64-бит 17:64+1-бит 1	бит 17 признак наличия посадочной РЛС (1)
	iAddr=iAddrRls4Base+1;						//64+1;
	ui.grBoRls4Prl->setChecked(
		wrd.f(unitReceive->basicSetting[iAddr])->bit1);
//64-бит 17:64+1-бит 1	бит 17 признак наличия посадочной РЛС (1)
	iAddr=iAddrRls5Base+1;						//64+1;
	ui.grBoRls5Prl->setChecked(
		wrd.f(unitReceive->basicSetting[iAddr])->bit1);
//64-бит 17:64+1-бит 1	бит 17 признак наличия посадочной РЛС (1)
	iAddr=iAddrRls6Base+1;						//64+1;
	ui.grBoRls6Prl->setChecked(
		wrd.f(unitReceive->basicSetting[iAddr])->bit1);
//66 биты 7...0 SAC
	iAddr=iAddrRls1Base+2;						//66;
	a1=unitReceive->basicSetting[iAddr];
	a1&=0xFF;
	str = QString("%1").arg(a1);
	if(!ui.liEdRls1SAC->hasFocus())
		ui.liEdRls1SAC->setText(str);
//66 биты 7...0 SIC
	iAddr=iAddrRls1Base+2;						//66;
	a1=unitReceive->basicSetting[iAddr];
	unn.uShU[0]=a1;
	a2=unn.ubU[1];
	str = QString("%1").arg(a2);
	if(!ui.liEdRls1SIC->hasFocus())
		ui.liEdRls1SIC->setText(str);
//66 - биты 19...16 номер порта приема
	//66+1 - 3210
	wrd.f(unitReceive->basicSetting[iAddr+1]);
	a1 = wrd.s.bit3*8+wrd.s.bit2*4+wrd.s.bit1*2+wrd.s.bit0;
	ui.coBoRls1Port->setCurrentIndex(a1);	
	

//66-бит 20:66+1-бит 4	использовать SAC для идентификации
	iAddr=iAddrRls1Base+3;						//66+1;
	ui.chBoRls1UseSAC->setChecked(
		wrd.f(unitReceive->basicSetting[iAddr])->bit4);
//66-бит 21:66+1-бит 5	использовать SIC для идентификации
	iAddr=iAddrRls1Base+3;						//66+1;
	ui.chBoRls1UseSIC->setChecked(
		wrd.f(unitReceive->basicSetting[iAddr])->bit5);
//66-бит 22:66+1-бит 6	использовать номер порта для идентификации
	iAddr=iAddrRls1Base+3;						//66+1;
	ui.chBoRls1UsePort->setChecked(
		wrd.f(unitReceive->basicSetting[iAddr])->bit6);
//68…75  название источника 16 байт
	iAddr=iAddrRls1Base+4;						//68;
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
	if(!ui.liEdRls1Name->hasFocus())
		ui.liEdRls1Name->setText(str2);
//76	дальность точки стояния, метры
	iAddr=iAddrRls1Base+12;						//76;
	a1 = unitReceive->basicSetting[iAddr];
	str = QString("%1").arg(a1);
	if(!ui.liEdRls1PntDistance->hasFocus())
		ui.liEdRls1PntDistance->setText(str);
//77 азимут точки стояния, минуты (градусы ? 60)
	iAddr=iAddrRls1Base+13;						//77;
	a0 = unitReceive->basicSetting[iAddr];
	a1 = a0/60;
	a2 = a0 - (a1*60);
	str = QString("%1").arg(a1);
	str.append(QString("°%1'").arg(a2,2,10,QLatin1Char( '0' )));
	if(!ui.liEdRls1PntAzimuth->hasFocus())
		ui.liEdRls1PntAzimuth->setText(str);
//78 смещение, метры
	iAddr=iAddrRls1Base+14;						//78;
	a1 = unitReceive->basicSetting[iAddr];
	str = QString("%1").arg(a1);
	if(!ui.liEdRls1DisPlace->hasFocus())
		ui.liEdRls1DisPlace->setText(str);
//79 доворот, минуты (градусы*60)
	iAddr=iAddrRls1Base+15;						//79;
	a0 = unitReceive->basicSetting[iAddr];
	a1 = a0/60;
	a2 = a0 - (a1*60);
	str = QString("%1").arg(a1);
	str.append(QString("°%1'").arg(a2,2,10,QLatin1Char( '0' )));
	if(!ui.liEdRls1Turn->hasFocus())
		ui.liEdRls1Turn->setText(str);
//80 смещение, метры
	iAddr=iAddrRls1Base+16;						//80;
	a1 = unitReceive->basicSetting[iAddr];
	str = QString("%1").arg(a1);
	if(!ui.liEdRls1Blockirov->hasFocus())
		ui.liEdRls1Blockirov->setText(str);
//80 блокировка, метры
	iAddr=iAddrRls2Base+16;						//80;
	a1 = unitReceive->basicSetting[iAddr];
	str = QString("%1").arg(a1);
	if(!ui.liEdRls2Blockirov->hasFocus())
		ui.liEdRls2Blockirov->setText(str);
//80 блокировка, метры
	iAddr=iAddrRls3Base+16;						//80;
	a1 = unitReceive->basicSetting[iAddr];
	str = QString("%1").arg(a1);
	if(!ui.liEdRls3Blockirov->hasFocus())
		ui.liEdRls3Blockirov->setText(str);
//80 блокировка, метры
	iAddr=iAddrRls4Base+16;						//80;
	a1 = unitReceive->basicSetting[iAddr];
	str = QString("%1").arg(a1);
	if(!ui.liEdRls4Blockirov->hasFocus())
		ui.liEdRls4Blockirov->setText(str);
//80 блокировка, метры
	iAddr=iAddrRls5Base+16;						//80;
	a1 = unitReceive->basicSetting[iAddr];
	str = QString("%1").arg(a1);
	if(!ui.liEdRls5Blockirov->hasFocus())
		ui.liEdRls5Blockirov->setText(str);
//80 блокировка, метры
	iAddr=iAddrRls6Base+16;						//80;
	a1 = unitReceive->basicSetting[iAddr];
	str = QString("%1").arg(a1);
	if(!ui.liEdRls6Blockirov->hasFocus())
		ui.liEdRls6Blockirov->setText(str);
//86 удаление антенны от продольной оси ВПП (число знаковое), м
	iAddr=iAddrRls1Base+22;						//86;
	str = QString("%1").arg((short)unitReceive->basicSetting[iAddr]);
	if(!ui.liEdRls1DistanceAxisVPP->hasFocus())
		ui.liEdRls1DistanceAxisVPP->setText(str);
//87м высота антенны, пересчитанная к торцу ВП, направление 1
	iAddr=iAddrRls1Base+23;						//87;
	b1 = unitReceive->basicSetting[iAddr];
	unn.shU[0] = b1;
	str = QString("%1").arg((short)unn.ubU[0]);
	if(!ui.liEdRls1HighAerialVPP1->hasFocus())
		ui.liEdRls1HighAerialVPP1->setText(str);
//87c высота антенны, пересчитанная к торцу ВП, направление 2
	iAddr=iAddrRls1Base+23;						//87;
	b1 = unitReceive->basicSetting[iAddr];
	unn.shU[0] = b1;
	str = QString("%1").arg((short)unn.ubU[1]);
	if(!ui.liEdRls1HighAerialVPP2->hasFocus())
		ui.liEdRls1HighAerialVPP2->setText(str);
//88 удаление торца ВПП от антенны (нулевой километр), м, направление 1 
	iAddr=iAddrRls1Base+24;						//88;
	str = QString("%1").arg(unitReceive->basicSetting[iAddr]);
	if(!ui.liEdRls1EndFaceVPP1->hasFocus())
		ui.liEdRls1EndFaceVPP1->setText(str);
//89 удаление торца ВПП от антенны (нулевой километр), м, направление 1 
	iAddr=iAddrRls1Base+25;						//89;
	str = QString("%1").arg(unitReceive->basicSetting[iAddr]);
	if(!ui.liEdRls1EndFaceVPP2->hasFocus())
		ui.liEdRls1EndFaceVPP2->setText(str);
//90 удаление точки посадки от антенны, м, направление 1 
	iAddr=iAddrRls1Base+26;						//90;
	str = QString("%1").arg(unitReceive->basicSetting[iAddr]);
	if(!ui.liEdRls1PointPlanting1->hasFocus())
		ui.liEdRls1PointPlanting1->setText(str);
//91 удаление точки посадки от антенны, м, направление 2 
	iAddr=iAddrRls1Base+27;						//91;
	str = QString("%1").arg(unitReceive->basicSetting[iAddr]);
	if(!ui.liEdRls1PointPlanting2->hasFocus())
		ui.liEdRls1PointPlanting2->setText(str);
//end Rls1::::::::::::::РЛС1
//Rls2::::::::::::::РЛС2
//64...65 параметры источника
//		бит 15:	1 — порт разрешен
//	iAddrRls2Base=64;
	iAddr=iAddrRls2Base+0;						//64;
	ui.grBoRls2->setChecked(
		wrd.f(unitReceive->basicSetting[iAddr])->bit15);
//биты 1,0:	номер устройства
	wrd.f(unitReceive->basicSetting[iAddr]);
	a1 = wrd.s.bit2*4+wrd.s.bit1*2+wrd.s.bit0;
	ui.coBoRls2Num->setCurrentIndex(a1);	
//биты 6,3:	номер светодиода
	iAddr=iAddrRls2Base+0;						//64;
	wrd.f(unitReceive->basicSetting[iAddr]);
	a1 = wrd.s.bit6*8+wrd.s.bit5*4+wrd.s.bit4*2+wrd.s.bit3;
	ui.coBoRls2LedNum->setCurrentIndex(a1);	
//биты 11,7:	номер устройства
	wrd.f(unitReceive->basicSetting[iAddr]);
	a1 = wrd.s.bit11*16+wrd.s.bit10*8+wrd.s.bit9*4+wrd.s.bit8*2+wrd.s.bit7;
	ui.coBoRls2Prot->setCurrentIndex(a1);	
//64-бит 16:64+1-бит 0	склонение (0 — географическое (истинное), 1 — магнитное)
	iAddr=iAddrRls2Base+1;						//64+1;
	wrd.f(unitReceive->basicSetting[iAddr]);
	if(wrd.s.bit0)
		ui.raBuRls2GradMagnetic->setChecked(true);
	else
		ui.raBuRls2GradGeographic->setChecked(true);
//66 биты 7...0 SAC
	iAddr=iAddrRls2Base+2;						//66;
	a1=unitReceive->basicSetting[iAddr];
	a1&=0xFF;
	str = QString("%1").arg(a1);
	if(!ui.liEdRls2SAC->hasFocus())
		ui.liEdRls2SAC->setText(str);
//66 биты 7...0 SIC
	iAddr=iAddrRls2Base+2;						//66;
	a1=unitReceive->basicSetting[iAddr];
	unn.uShU[0]=a1;
	a2=unn.ubU[1];
	str = QString("%1").arg(a2);
	if(!ui.liEdRls2SIC->hasFocus())
		ui.liEdRls2SIC->setText(str);
//66 - биты 19...16 номер порта приема
	//66+1 - 3210
	wrd.f(unitReceive->basicSetting[iAddr+1]);
	a1 = wrd.s.bit3*8+wrd.s.bit2*4+wrd.s.bit1*2+wrd.s.bit0;
	ui.coBoRls2Port->setCurrentIndex(a1);	
	

//66-бит 20:66+1-бит 4	использовать SAC для идентификации
	iAddr=iAddrRls2Base+3;						//66+1;
	ui.chBoRls2UseSAC->setChecked(
		wrd.f(unitReceive->basicSetting[iAddr])->bit4);
//66-бит 21:66+1-бит 5	использовать SIC для идентификации
	iAddr=iAddrRls2Base+3;						//66+1;
	ui.chBoRls2UseSIC->setChecked(
		wrd.f(unitReceive->basicSetting[iAddr])->bit5);
//66-бит 22:66+1-бит 6	использовать номер порта для идентификации
	iAddr=iAddrRls2Base+3;						//66+1;
	ui.chBoRls2UsePort->setChecked(
		wrd.f(unitReceive->basicSetting[iAddr])->bit6);
//68…75  название источника
	iAddr=iAddrRls2Base+4;						//68;
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
	if(!ui.liEdRls2Name->hasFocus())
		ui.liEdRls2Name->setText(str2);
//76	дальность точки стояния, метры
	iAddr=iAddrRls2Base+12;						//76;
	a1 = unitReceive->basicSetting[iAddr];
	str = QString("%1").arg(a1);
	if(!ui.liEdRls2PntDistance->hasFocus())
		ui.liEdRls2PntDistance->setText(str);
//77 азимут точки стояния, минуты (градусы ? 60)
	iAddr=iAddrRls2Base+13;						//77;
	a0 = unitReceive->basicSetting[iAddr];
	a1 = a0/60;
	a2 = a0 - (a1*60);
	str = QString("%1").arg(a1);
	str.append(QString("°%1'").arg(a2,2,10,QLatin1Char( '0' )));
	if(!ui.liEdRls2PntAzimuth->hasFocus())
		ui.liEdRls2PntAzimuth->setText(str);
//78 смещение, метры
	iAddr=iAddrRls2Base+14;						//78;
	a1 = unitReceive->basicSetting[iAddr];
	str = QString("%1").arg(a1);
	if(!ui.liEdRls2DisPlace->hasFocus())
		ui.liEdRls2DisPlace->setText(str);
//79 доворот, минуты (градусы*60)
	iAddr=iAddrRls2Base+15;						//79;
	a0 = unitReceive->basicSetting[iAddr];
	a1 = a0/60;
	a2 = a0 - (a1*60);
	str = QString("%1").arg(a1);
	str.append(QString("°%1'").arg(a2,2,10,QLatin1Char( '0' )));
	if(!ui.liEdRls2Turn->hasFocus())
		ui.liEdRls2Turn->setText(str);
//86 удаление антенны от продольной оси ВПП (число знаковое), м
	iAddr=iAddrRls2Base+22;						//86;
	str = QString("%1").arg((short)unitReceive->basicSetting[iAddr]);
	if(!ui.liEdRls2DistanceAxisVPP->hasFocus())
		ui.liEdRls2DistanceAxisVPP->setText(str);
//87м высота антенны, пересчитанная к торцу ВП, направление 1
	iAddr=iAddrRls2Base+23;						//87;
	b1 = unitReceive->basicSetting[iAddr];
	unn.shU[0] = b1;
	str = QString("%1").arg((short)unn.ubU[0]);
	if(!ui.liEdRls2HighAerialVPP1->hasFocus())
		ui.liEdRls2HighAerialVPP1->setText(str);
//87c высота антенны, пересчитанная к торцу ВП, направление 2
	iAddr=iAddrRls2Base+23;						//87;
	b1 = unitReceive->basicSetting[iAddr];
	unn.shU[0] = b1;
	str = QString("%1").arg((short)unn.ubU[1]);
	if(!ui.liEdRls2HighAerialVPP2->hasFocus())
		ui.liEdRls2HighAerialVPP2->setText(str);
//88 удаление торца ВПП от антенны (нулевой километр), м, направление 1 
	iAddr=iAddrRls2Base+24;						//88;
	str = QString("%1").arg(unitReceive->basicSetting[iAddr]);
	if(!ui.liEdRls2EndFaceVPP1->hasFocus())
		ui.liEdRls2EndFaceVPP1->setText(str);
//89 удаление торца ВПП от антенны (нулевой километр), м, направление 1 
	iAddr=iAddrRls2Base+25;						//89;
	str = QString("%1").arg(unitReceive->basicSetting[iAddr]);
	if(!ui.liEdRls2EndFaceVPP2->hasFocus())
		ui.liEdRls2EndFaceVPP2->setText(str);
//90 удаление точки посадки от антенны, м, направление 1 
	iAddr=iAddrRls2Base+26;						//90;
	str = QString("%1").arg(unitReceive->basicSetting[iAddr]);
	if(!ui.liEdRls2PointPlanting1->hasFocus())
		ui.liEdRls2PointPlanting1->setText(str);
//91 удаление точки посадки от антенны, м, направление 2 
	iAddr=iAddrRls2Base+27;						//91;
	str = QString("%1").arg(unitReceive->basicSetting[iAddr]);
	if(!ui.liEdRls2PointPlanting2->hasFocus())
		ui.liEdRls2PointPlanting2->setText(str);
//end Rls2::::::::::::::РЛС2
//Rls3::::::::::::::РЛС3
//64...65 параметры источника
//		бит 15:	1 — порт разрешен
//	iAddrRls3Base=64;
	iAddr=iAddrRls3Base+0;						//64;
	ui.grBoRls3->setChecked(
		wrd.f(unitReceive->basicSetting[iAddr])->bit15);
//биты 1,0:	номер устройства
	wrd.f(unitReceive->basicSetting[iAddr]);
	a1 = wrd.s.bit2*4+wrd.s.bit1*2+wrd.s.bit0;
	ui.coBoRls3Num->setCurrentIndex(a1);	
//биты 6,3:	номер светодиода
	iAddr=iAddrRls3Base+0;						//64;
	wrd.f(unitReceive->basicSetting[iAddr]);
	a1 = wrd.s.bit6*8+wrd.s.bit5*4+wrd.s.bit4*2+wrd.s.bit3;
	ui.coBoRls3LedNum->setCurrentIndex(a1);	
//биты 11,7:	номер устройства
	wrd.f(unitReceive->basicSetting[iAddr]);
	a1 = wrd.s.bit11*16+wrd.s.bit10*8+wrd.s.bit9*4+wrd.s.bit8*2+wrd.s.bit7;
	ui.coBoRls3Prot->setCurrentIndex(a1);	
//64-бит 16:64+1-бит 0	склонение (0 — географическое (истинное), 1 — магнитное)
	iAddr=iAddrRls3Base+1;						//64+1;
	wrd.f(unitReceive->basicSetting[iAddr]);
	if(wrd.s.bit0)
		ui.raBuRls3GradMagnetic->setChecked(true);
	else
		ui.raBuRls3GradGeographic->setChecked(true);
//66 биты 7...0 SAC
	iAddr=iAddrRls3Base+2;						//66;
	a1=unitReceive->basicSetting[iAddr];
	a1&=0xFF;
	str = QString("%1").arg(a1);
	if(!ui.liEdRls3SAC->hasFocus())
		ui.liEdRls3SAC->setText(str);
//66 биты 7...0 SIC
	iAddr=iAddrRls3Base+2;						//66;
	a1=unitReceive->basicSetting[iAddr];
	unn.uShU[0]=a1;
	a2=unn.ubU[1];
	str = QString("%1").arg(a2);
	if(!ui.liEdRls3SIC->hasFocus())
		ui.liEdRls3SIC->setText(str);
//66 - биты 19...16 номер порта приема
	//66+1 - 3210
	wrd.f(unitReceive->basicSetting[iAddr+1]);
	a1 = wrd.s.bit3*8+wrd.s.bit2*4+wrd.s.bit1*2+wrd.s.bit0;
	ui.coBoRls3Port->setCurrentIndex(a1);	
	

//66-бит 20:66+1-бит 4	использовать SAC для идентификации
	iAddr=iAddrRls3Base+3;						//66+1;
	ui.chBoRls3UseSAC->setChecked(
		wrd.f(unitReceive->basicSetting[iAddr])->bit4);
//66-бит 21:66+1-бит 5	использовать SIC для идентификации
	iAddr=iAddrRls3Base+3;						//66+1;
	ui.chBoRls3UseSIC->setChecked(
		wrd.f(unitReceive->basicSetting[iAddr])->bit5);
//66-бит 22:66+1-бит 6	использовать номер порта для идентификации
	iAddr=iAddrRls3Base+3;						//66+1;
	ui.chBoRls3UsePort->setChecked(
		wrd.f(unitReceive->basicSetting[iAddr])->bit6);
//68…75  название источника
	iAddr=iAddrRls3Base+4;						//68;
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
	if(!ui.liEdRls3Name->hasFocus())
		ui.liEdRls3Name->setText(str2);
//76	дальность точки стояния, метры
	iAddr=iAddrRls3Base+12;						//76;
	a1 = unitReceive->basicSetting[iAddr];
	str = QString("%1").arg(a1);
	if(!ui.liEdRls3PntDistance->hasFocus())
		ui.liEdRls3PntDistance->setText(str);
//77 азимут точки стояния, минуты (градусы ? 60)
	iAddr=iAddrRls3Base+13;						//77;
	a0 = unitReceive->basicSetting[iAddr];
	a1 = a0/60;
	a2 = a0 - (a1*60);
	str = QString("%1").arg(a1);
	str.append(QString("°%1'").arg(a2,2,10,QLatin1Char( '0' )));
	if(!ui.liEdRls3PntAzimuth->hasFocus())
		ui.liEdRls3PntAzimuth->setText(str);
//78 смещение, метры
	iAddr=iAddrRls3Base+14;						//78;
	a1 = unitReceive->basicSetting[iAddr];
	str = QString("%1").arg(a1);
	if(!ui.liEdRls3DisPlace->hasFocus())
		ui.liEdRls3DisPlace->setText(str);
//79 доворот, минуты (градусы*60)
	iAddr=iAddrRls3Base+15;						//79;
	a0 = unitReceive->basicSetting[iAddr];
	a1 = a0/60;
	a2 = a0 - (a1*60);
	str = QString("%1").arg(a1);
	str.append(QString("°%1'").arg(a2,2,10,QLatin1Char( '0' )));
	if(!ui.liEdRls3Turn->hasFocus())
		ui.liEdRls3Turn->setText(str);
//86 удаление антенны от продольной оси ВПП (число знаковое), м
	iAddr=iAddrRls3Base+22;						//86;
	str = QString("%1").arg((short)unitReceive->basicSetting[iAddr]);
	if(!ui.liEdRls3DistanceAxisVPP->hasFocus())
		ui.liEdRls3DistanceAxisVPP->setText(str);
//87м высота антенны, пересчитанная к торцу ВП, направление 1
	iAddr=iAddrRls3Base+23;						//87;
	b1 = unitReceive->basicSetting[iAddr];
	unn.shU[0] = b1;
	str = QString("%1").arg((short)unn.ubU[0]);
	if(!ui.liEdRls3HighAerialVPP1->hasFocus())
		ui.liEdRls3HighAerialVPP1->setText(str);
//87c высота антенны, пересчитанная к торцу ВП, направление 2
	iAddr=iAddrRls3Base+23;						//87;
	b1 = unitReceive->basicSetting[iAddr];
	unn.shU[0] = b1;
	str = QString("%1").arg((short)unn.ubU[1]);
	if(!ui.liEdRls3HighAerialVPP2->hasFocus())
		ui.liEdRls3HighAerialVPP2->setText(str);
//88 удаление торца ВПП от антенны (нулевой километр), м, направление 1 
	iAddr=iAddrRls3Base+24;						//88;
	str = QString("%1").arg(unitReceive->basicSetting[iAddr]);
	if(!ui.liEdRls3EndFaceVPP1->hasFocus())
		ui.liEdRls3EndFaceVPP1->setText(str);
//89 удаление торца ВПП от антенны (нулевой километр), м, направление 1 
	iAddr=iAddrRls3Base+25;						//89;
	str = QString("%1").arg(unitReceive->basicSetting[iAddr]);
	if(!ui.liEdRls3EndFaceVPP2->hasFocus())
		ui.liEdRls3EndFaceVPP2->setText(str);
//90 удаление точки посадки от антенны, м, направление 1 
	iAddr=iAddrRls3Base+26;						//90;
	str = QString("%1").arg(unitReceive->basicSetting[iAddr]);
	if(!ui.liEdRls3PointPlanting1->hasFocus())
		ui.liEdRls3PointPlanting1->setText(str);
//91 удаление точки посадки от антенны, м, направление 2 
	iAddr=iAddrRls3Base+27;						//91;
	str = QString("%1").arg(unitReceive->basicSetting[iAddr]);
	if(!ui.liEdRls3PointPlanting2->hasFocus())
		ui.liEdRls3PointPlanting2->setText(str);
//end Rls3::::::::::::::РЛС3
//Rls4::::::::::::::РЛС4
//64...65 параметры источника
//		бит 15:	1 — порт разрешен
//	iAddrRls4Base=64;
	iAddr=iAddrRls4Base+0;						//64;
	ui.grBoRls4->setChecked(
		wrd.f(unitReceive->basicSetting[iAddr])->bit15);
//биты 1,0:	номер устройства
	wrd.f(unitReceive->basicSetting[iAddr]);
	a1 = wrd.s.bit2*4+wrd.s.bit1*2+wrd.s.bit0;
	ui.coBoRls4Num->setCurrentIndex(a1);	
//биты 6,3:	номер светодиода
	iAddr=iAddrRls4Base+0;						//64;
	wrd.f(unitReceive->basicSetting[iAddr]);
	a1 = wrd.s.bit6*8+wrd.s.bit5*4+wrd.s.bit4*2+wrd.s.bit3;
	ui.coBoRls4LedNum->setCurrentIndex(a1);	
//биты 11,7:	номер устройства
	wrd.f(unitReceive->basicSetting[iAddr]);
	a1 = wrd.s.bit11*16+wrd.s.bit10*8+wrd.s.bit9*4+wrd.s.bit8*2+wrd.s.bit7;
	ui.coBoRls4Prot->setCurrentIndex(a1);	
//64-бит 16:64+1-бит 0	склонение (0 — географическое (истинное), 1 — магнитное)
	iAddr=iAddrRls4Base+1;						//64+1;
	wrd.f(unitReceive->basicSetting[iAddr]);
	if(wrd.s.bit0)
		ui.raBuRls4GradMagnetic->setChecked(true);
	else
		ui.raBuRls4GradGeographic->setChecked(true);
//66 биты 7...0 SAC
	iAddr=iAddrRls4Base+2;						//66;
	a1=unitReceive->basicSetting[iAddr];
	a1&=0xFF;
	str = QString("%1").arg(a1);
	if(!ui.liEdRls4SAC->hasFocus())
		ui.liEdRls4SAC->setText(str);
//66 биты 7...0 SIC
	iAddr=iAddrRls4Base+2;						//66;
	a1=unitReceive->basicSetting[iAddr];
	unn.uShU[0]=a1;
	a2=unn.ubU[1];
	str = QString("%1").arg(a2);
	if(!ui.liEdRls4SIC->hasFocus())
		ui.liEdRls4SIC->setText(str);
//66 - биты 19...16 номер порта приема
	//66+1 - 3210
	wrd.f(unitReceive->basicSetting[iAddr+1]);
	a1 = wrd.s.bit3*8+wrd.s.bit2*4+wrd.s.bit1*2+wrd.s.bit0;
	ui.coBoRls4Port->setCurrentIndex(a1);	
	

//66-бит 20:66+1-бит 4	использовать SAC для идентификации
	iAddr=iAddrRls4Base+3;						//66+1;
	ui.chBoRls4UseSAC->setChecked(
		wrd.f(unitReceive->basicSetting[iAddr])->bit4);
//66-бит 21:66+1-бит 5	использовать SIC для идентификации
	iAddr=iAddrRls4Base+3;						//66+1;
	ui.chBoRls4UseSIC->setChecked(
		wrd.f(unitReceive->basicSetting[iAddr])->bit5);
//66-бит 22:66+1-бит 6	использовать номер порта для идентификации
	iAddr=iAddrRls4Base+3;						//66+1;
	ui.chBoRls4UsePort->setChecked(
		wrd.f(unitReceive->basicSetting[iAddr])->bit6);
//68…75  название источника
	iAddr=iAddrRls4Base+4;						//68;
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
	if(!ui.liEdRls4Name->hasFocus())
		ui.liEdRls4Name->setText(str2);
//76	дальность точки стояния, метры
	iAddr=iAddrRls4Base+12;						//76;
	a1 = unitReceive->basicSetting[iAddr];
	str = QString("%1").arg(a1);
	if(!ui.liEdRls4PntDistance->hasFocus())
		ui.liEdRls4PntDistance->setText(str);
//77 азимут точки стояния, минуты (градусы ? 60)
	iAddr=iAddrRls4Base+13;						//77;
	a0 = unitReceive->basicSetting[iAddr];
	a1 = a0/60;
	a2 = a0 - (a1*60);
	str = QString("%1").arg(a1);
	str.append(QString("°%1'").arg(a2,2,10,QLatin1Char( '0' )));
	if(!ui.liEdRls4PntAzimuth->hasFocus())
		ui.liEdRls4PntAzimuth->setText(str);
//78 смещение, метры
	iAddr=iAddrRls4Base+14;						//78;
	a1 = unitReceive->basicSetting[iAddr];
	str = QString("%1").arg(a1);
	if(!ui.liEdRls4DisPlace->hasFocus())
		ui.liEdRls4DisPlace->setText(str);
//79 доворот, минуты (градусы*60)
	iAddr=iAddrRls4Base+15;						//79;
	a0 = unitReceive->basicSetting[iAddr];
	a1 = a0/60;
	a2 = a0 - (a1*60);
	str = QString("%1").arg(a1);
	str.append(QString("°%1'").arg(a2,2,10,QLatin1Char( '0' )));
	if(!ui.liEdRls4Turn->hasFocus())
		ui.liEdRls4Turn->setText(str);
//86 удаление антенны от продольной оси ВПП (число знаковое), м
	iAddr=iAddrRls4Base+22;						//86;
	str = QString("%1").arg((short)unitReceive->basicSetting[iAddr]);
	if(!ui.liEdRls4DistanceAxisVPP->hasFocus())
		ui.liEdRls4DistanceAxisVPP->setText(str);
//87м высота антенны, пересчитанная к торцу ВП, направление 1
	iAddr=iAddrRls4Base+23;						//87;
	b1 = unitReceive->basicSetting[iAddr];
	unn.shU[0] = b1;
	str = QString("%1").arg((short)unn.ubU[0]);
	if(!ui.liEdRls4HighAerialVPP1->hasFocus())
		ui.liEdRls4HighAerialVPP1->setText(str);
//87c высота антенны, пересчитанная к торцу ВП, направление 2
	iAddr=iAddrRls4Base+23;						//87;
	b1 = unitReceive->basicSetting[iAddr];
	unn.shU[0] = b1;
	str = QString("%1").arg((short)unn.ubU[1]);
	if(!ui.liEdRls4HighAerialVPP2->hasFocus())
		ui.liEdRls4HighAerialVPP2->setText(str);
//88 удаление торца ВПП от антенны (нулевой километр), м, направление 1 
	iAddr=iAddrRls4Base+24;						//88;
	str = QString("%1").arg(unitReceive->basicSetting[iAddr]);
	if(!ui.liEdRls4EndFaceVPP1->hasFocus())
		ui.liEdRls4EndFaceVPP1->setText(str);
//89 удаление торца ВПП от антенны (нулевой километр), м, направление 1 
	iAddr=iAddrRls4Base+25;						//89;
	str = QString("%1").arg(unitReceive->basicSetting[iAddr]);
	if(!ui.liEdRls4EndFaceVPP2->hasFocus())
		ui.liEdRls4EndFaceVPP2->setText(str);
//90 удаление точки посадки от антенны, м, направление 1 
	iAddr=iAddrRls4Base+26;						//90;
	str = QString("%1").arg(unitReceive->basicSetting[iAddr]);
	if(!ui.liEdRls4PointPlanting1->hasFocus())
		ui.liEdRls4PointPlanting1->setText(str);
//91 удаление точки посадки от антенны, м, направление 2 
	iAddr=iAddrRls4Base+27;						//91;
	str = QString("%1").arg(unitReceive->basicSetting[iAddr]);
	if(!ui.liEdRls4PointPlanting2->hasFocus())
		ui.liEdRls4PointPlanting2->setText(str);
//end Rls4::::::::::::::РЛС4
//Rls5::::::::::::::РЛС5
//64...65 параметры источника
//		бит 15:	1 — порт разрешен
//	iAddrRls5Base=64;
	iAddr=iAddrRls5Base+0;						//64;
	ui.grBoRls5->setChecked(
		wrd.f(unitReceive->basicSetting[iAddr])->bit15);
//биты 1,0:	номер устройства
	wrd.f(unitReceive->basicSetting[iAddr]);
	a1 = wrd.s.bit2*4+wrd.s.bit1*2+wrd.s.bit0;
	ui.coBoRls5Num->setCurrentIndex(a1);	
//биты 6,3:	номер светодиода
	iAddr=iAddrRls5Base+0;						//64;
	wrd.f(unitReceive->basicSetting[iAddr]);
	a1 = wrd.s.bit6*8+wrd.s.bit5*4+wrd.s.bit4*2+wrd.s.bit3;
	ui.coBoRls5LedNum->setCurrentIndex(a1);	
//биты 11,7:	номер устройства
	wrd.f(unitReceive->basicSetting[iAddr]);
	a1 = wrd.s.bit11*16+wrd.s.bit10*8+wrd.s.bit9*4+wrd.s.bit8*2+wrd.s.bit7;
	ui.coBoRls5Prot->setCurrentIndex(a1);	
//64-бит 16:64+1-бит 0	склонение (0 — географическое (истинное), 1 — магнитное)
	iAddr=iAddrRls5Base+1;						//64+1;
	wrd.f(unitReceive->basicSetting[iAddr]);
	if(wrd.s.bit0)
		ui.raBuRls5GradMagnetic->setChecked(true);
	else
		ui.raBuRls5GradGeographic->setChecked(true);
//66 биты 7...0 SAC
	iAddr=iAddrRls5Base+2;						//66;
	a1=unitReceive->basicSetting[iAddr];
	a1&=0xFF;
	str = QString("%1").arg(a1);
	if(!ui.liEdRls5SAC->hasFocus())
		ui.liEdRls5SAC->setText(str);
//66 биты 7...0 SIC
	iAddr=iAddrRls5Base+2;						//66;
	a1=unitReceive->basicSetting[iAddr];
	unn.uShU[0]=a1;
	a2=unn.ubU[1];
	str = QString("%1").arg(a2);
	if(!ui.liEdRls5SIC->hasFocus())
		ui.liEdRls5SIC->setText(str);
//66 - биты 19...16 номер порта приема
	//66+1 - 3210
	wrd.f(unitReceive->basicSetting[iAddr+1]);
	a1 = wrd.s.bit3*8+wrd.s.bit2*4+wrd.s.bit1*2+wrd.s.bit0;
	ui.coBoRls5Port->setCurrentIndex(a1);	
	

//66-бит 20:66+1-бит 4	использовать SAC для идентификации
	iAddr=iAddrRls5Base+3;						//66+1;
	ui.chBoRls5UseSAC->setChecked(
		wrd.f(unitReceive->basicSetting[iAddr])->bit4);
//66-бит 21:66+1-бит 5	использовать SIC для идентификации
	iAddr=iAddrRls5Base+3;						//66+1;
	ui.chBoRls5UseSIC->setChecked(
		wrd.f(unitReceive->basicSetting[iAddr])->bit5);
//66-бит 22:66+1-бит 6	использовать номер порта для идентификации
	iAddr=iAddrRls5Base+3;						//66+1;
	ui.chBoRls5UsePort->setChecked(
		wrd.f(unitReceive->basicSetting[iAddr])->bit6);
//68…75  название источника
	iAddr=iAddrRls5Base+4;						//68;
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
	if(!ui.liEdRls5Name->hasFocus())
		ui.liEdRls5Name->setText(str2);
//76	дальность точки стояния, метры
	iAddr=iAddrRls5Base+12;						//76;
	a1 = unitReceive->basicSetting[iAddr];
	str = QString("%1").arg(a1);
	if(!ui.liEdRls5PntDistance->hasFocus())
		ui.liEdRls5PntDistance->setText(str);
//77 азимут точки стояния, минуты (градусы ? 60)
	iAddr=iAddrRls5Base+13;						//77;
	a0 = unitReceive->basicSetting[iAddr];
	a1 = a0/60;
	a2 = a0 - (a1*60);
	str = QString("%1").arg(a1);
	str.append(QString("°%1'").arg(a2,2,10,QLatin1Char( '0' )));
	if(!ui.liEdRls5PntAzimuth->hasFocus())
		ui.liEdRls5PntAzimuth->setText(str);
//78 смещение, метры
	iAddr=iAddrRls5Base+14;						//78;
	a1 = unitReceive->basicSetting[iAddr];
	str = QString("%1").arg(a1);
	if(!ui.liEdRls5DisPlace->hasFocus())
		ui.liEdRls5DisPlace->setText(str);
//79 доворот, минуты (градусы*60)
	iAddr=iAddrRls5Base+15;						//79;
	a0 = unitReceive->basicSetting[iAddr];
	a1 = a0/60;
	a2 = a0 - (a1*60);
	str = QString("%1").arg(a1);
	str.append(QString("°%1'").arg(a2,2,10,QLatin1Char( '0' )));
	if(!ui.liEdRls5Turn->hasFocus())
		ui.liEdRls5Turn->setText(str);
//86 удаление антенны от продольной оси ВПП (число знаковое), м
	iAddr=iAddrRls5Base+22;						//86;
	str = QString("%1").arg((short)unitReceive->basicSetting[iAddr]);
	if(!ui.liEdRls5DistanceAxisVPP->hasFocus())
		ui.liEdRls5DistanceAxisVPP->setText(str);
//87м высота антенны, пересчитанная к торцу ВП, направление 1
	iAddr=iAddrRls5Base+23;						//87;
	b1 = unitReceive->basicSetting[iAddr];
	unn.shU[0] = b1;
	str = QString("%1").arg((short)unn.ubU[0]);
	if(!ui.liEdRls5HighAerialVPP1->hasFocus())
		ui.liEdRls5HighAerialVPP1->setText(str);
//87c высота антенны, пересчитанная к торцу ВП, направление 2
	iAddr=iAddrRls5Base+23;						//87;
	b1 = unitReceive->basicSetting[iAddr];
	unn.shU[0] = b1;
	str = QString("%1").arg((short)unn.ubU[1]);
	if(!ui.liEdRls5HighAerialVPP2->hasFocus())
		ui.liEdRls5HighAerialVPP2->setText(str);
//88 удаление торца ВПП от антенны (нулевой километр), м, направление 1 
	iAddr=iAddrRls5Base+24;						//88;
	str = QString("%1").arg(unitReceive->basicSetting[iAddr]);
	if(!ui.liEdRls5EndFaceVPP1->hasFocus())
		ui.liEdRls5EndFaceVPP1->setText(str);
//89 удаление торца ВПП от антенны (нулевой километр), м, направление 1 
	iAddr=iAddrRls5Base+25;						//89;
	str = QString("%1").arg(unitReceive->basicSetting[iAddr]);
	if(!ui.liEdRls5EndFaceVPP2->hasFocus())
		ui.liEdRls5EndFaceVPP2->setText(str);
//90 удаление точки посадки от антенны, м, направление 1 
	iAddr=iAddrRls5Base+26;						//90;
	str = QString("%1").arg(unitReceive->basicSetting[iAddr]);
	if(!ui.liEdRls5PointPlanting1->hasFocus())
		ui.liEdRls5PointPlanting1->setText(str);
//91 удаление точки посадки от антенны, м, направление 2 
	iAddr=iAddrRls5Base+27;						//91;
	str = QString("%1").arg(unitReceive->basicSetting[iAddr]);
	if(!ui.liEdRls5PointPlanting2->hasFocus())
		ui.liEdRls5PointPlanting2->setText(str);
//end Rls5::::::::::::::РЛС5
//Rls6::::::::::::::РЛС6
//64...65 параметры источника
//		бит 15:	1 — порт разрешен
//	iAddrRls6Base=64;
	iAddr=iAddrRls6Base+0;						//64;
	ui.grBoRls6->setChecked(
		wrd.f(unitReceive->basicSetting[iAddr])->bit15);
//биты 1,0:	номер устройства
	wrd.f(unitReceive->basicSetting[iAddr]);
	a1 = wrd.s.bit2*4+wrd.s.bit1*2+wrd.s.bit0;
	ui.coBoRls6Num->setCurrentIndex(a1);	
//биты 6,3:	номер светодиода
	iAddr=iAddrRls6Base+0;						//64;
	wrd.f(unitReceive->basicSetting[iAddr]);
	a1 = wrd.s.bit6*8+wrd.s.bit5*4+wrd.s.bit4*2+wrd.s.bit3;
	ui.coBoRls6LedNum->setCurrentIndex(a1);	
//биты 11,7:	номер устройства
	wrd.f(unitReceive->basicSetting[iAddr]);
	a1 = wrd.s.bit11*16+wrd.s.bit10*8+wrd.s.bit9*4+wrd.s.bit8*2+wrd.s.bit7;
	ui.coBoRls6Prot->setCurrentIndex(a1);	
//64-бит 16:64+1-бит 0	склонение (0 — географическое (истинное), 1 — магнитное)
	iAddr=iAddrRls6Base+1;						//64+1;
	wrd.f(unitReceive->basicSetting[iAddr]);
	if(wrd.s.bit0)
		ui.raBuRls6GradMagnetic->setChecked(true);
	else
		ui.raBuRls6GradGeographic->setChecked(true);
//66 биты 7...0 SAC
	iAddr=iAddrRls6Base+2;						//66;
	a1=unitReceive->basicSetting[iAddr];
	a1&=0xFF;
	str = QString("%1").arg(a1);
	if(!ui.liEdRls6SAC->hasFocus())
		ui.liEdRls6SAC->setText(str);
//66 биты 7...0 SIC
	iAddr=iAddrRls6Base+2;						//66;
	a1=unitReceive->basicSetting[iAddr];
	unn.uShU[0]=a1;
	a2=unn.ubU[1];
	str = QString("%1").arg(a2);
	if(!ui.liEdRls6SIC->hasFocus())
		ui.liEdRls6SIC->setText(str);
//66 - биты 19...16 номер порта приема
	//66+1 - 3210
	wrd.f(unitReceive->basicSetting[iAddr+1]);
	a1 = wrd.s.bit3*8+wrd.s.bit2*4+wrd.s.bit1*2+wrd.s.bit0;
	ui.coBoRls6Port->setCurrentIndex(a1);	
	

//66-бит 20:66+1-бит 4	использовать SAC для идентификации
	iAddr=iAddrRls6Base+3;						//66+1;
	ui.chBoRls6UseSAC->setChecked(
		wrd.f(unitReceive->basicSetting[iAddr])->bit4);
//66-бит 21:66+1-бит 5	использовать SIC для идентификации
	iAddr=iAddrRls6Base+3;						//66+1;
	ui.chBoRls6UseSIC->setChecked(
		wrd.f(unitReceive->basicSetting[iAddr])->bit5);
//66-бит 22:66+1-бит 6	использовать номер порта для идентификации
	iAddr=iAddrRls6Base+3;						//66+1;
	ui.chBoRls6UsePort->setChecked(
		wrd.f(unitReceive->basicSetting[iAddr])->bit6);
//68…75  название источника
	iAddr=iAddrRls6Base+4;						//68;
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
	if(!ui.liEdRls6Name->hasFocus())
		ui.liEdRls6Name->setText(str2);
//76	дальность точки стояния, метры
	iAddr=iAddrRls6Base+12;						//76;
	a1 = unitReceive->basicSetting[iAddr];
	str = QString("%1").arg(a1);
	if(!ui.liEdRls6PntDistance->hasFocus())
		ui.liEdRls6PntDistance->setText(str);
//77 азимут точки стояния, минуты (градусы ? 60)
	iAddr=iAddrRls6Base+13;						//77;
	a0 = unitReceive->basicSetting[iAddr];
	a1 = a0/60;
	a2 = a0 - (a1*60);
	str = QString("%1").arg(a1);
	str.append(QString("°%1'").arg(a2,2,10,QLatin1Char( '0' )));
	if(!ui.liEdRls6PntAzimuth->hasFocus())
		ui.liEdRls6PntAzimuth->setText(str);
//78 смещение, метры
	iAddr=iAddrRls6Base+14;						//78;
	a1 = unitReceive->basicSetting[iAddr];
	str = QString("%1").arg(a1);
	if(!ui.liEdRls6DisPlace->hasFocus())
		ui.liEdRls6DisPlace->setText(str);
//79 доворот, минуты (градусы*60)
	iAddr=iAddrRls6Base+15;						//79;
	a0 = unitReceive->basicSetting[iAddr];
	a1 = a0/60;
	a2 = a0 - (a1*60);
	str = QString("%1").arg(a1);
	str.append(QString("°%1'").arg(a2,2,10,QLatin1Char( '0' )));
	if(!ui.liEdRls6Turn->hasFocus())
		ui.liEdRls6Turn->setText(str);
//86 удаление антенны от продольной оси ВПП (число знаковое), м
	iAddr=iAddrRls6Base+22;						//86;
	str = QString("%1").arg((short)unitReceive->basicSetting[iAddr]);
	if(!ui.liEdRls6DistanceAxisVPP->hasFocus())
		ui.liEdRls6DistanceAxisVPP->setText(str);
//87м высота антенны, пересчитанная к торцу ВП, направление 1
	iAddr=iAddrRls6Base+23;						//87;
	b1 = unitReceive->basicSetting[iAddr];
	unn.shU[0] = b1;
	str = QString("%1").arg((short)unn.ubU[0]);
	if(!ui.liEdRls6HighAerialVPP1->hasFocus())
		ui.liEdRls6HighAerialVPP1->setText(str);
//87c высота антенны, пересчитанная к торцу ВП, направление 2
	iAddr=iAddrRls6Base+23;						//87;
	b1 = unitReceive->basicSetting[iAddr];
	unn.shU[0] = b1;
	str = QString("%1").arg((short)unn.ubU[1]);
	if(!ui.liEdRls6HighAerialVPP2->hasFocus())
		ui.liEdRls6HighAerialVPP2->setText(str);
//88 удаление торца ВПП от антенны (нулевой километр), м, направление 1 
	iAddr=iAddrRls6Base+24;						//88;
	str = QString("%1").arg(unitReceive->basicSetting[iAddr]);
	if(!ui.liEdRls6EndFaceVPP1->hasFocus())
		ui.liEdRls6EndFaceVPP1->setText(str);
//89 удаление торца ВПП от антенны (нулевой километр), м, направление 1 
	iAddr=iAddrRls6Base+25;						//89;
	str = QString("%1").arg(unitReceive->basicSetting[iAddr]);
	if(!ui.liEdRls6EndFaceVPP2->hasFocus())
		ui.liEdRls6EndFaceVPP2->setText(str);
//90 удаление точки посадки от антенны, м, направление 1 
	iAddr=iAddrRls6Base+26;						//90;
	str = QString("%1").arg(unitReceive->basicSetting[iAddr]);
	if(!ui.liEdRls6PointPlanting1->hasFocus())
		ui.liEdRls6PointPlanting1->setText(str);
//91 удаление точки посадки от антенны, м, направление 2 
	iAddr=iAddrRls6Base+27;						//91;
	str = QString("%1").arg(unitReceive->basicSetting[iAddr]);
	if(!ui.liEdRls6PointPlanting2->hasFocus())
		ui.liEdRls6PointPlanting2->setText(str);
//end Rls6::::::::::::::РЛС6


//
	
}



