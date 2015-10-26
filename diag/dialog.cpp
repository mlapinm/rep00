//dialog.cpp
#include "dialog.h"
#include "dlgfault.h"
#include <QGridLayout>

Dialog::Dialog(QWidget *parent)
	: QWidget(parent)
{
	ui.setupUi(this);

	tabWidget = ui.tabWidget;
	widDlg=ui.widdlg;
        ui.rBuNp1->setChecked(true);

	dlgCust = new DlgCust(this);
	QGridLayout* layout = new QGridLayout;
	layout->addWidget(dlgCust);
	widDlg->setLayout(layout);
	numShow = 0;
	dlgCust->hide();		//
//	dlgCust->tabCust->unitReceive=unitReceive;
//	dlgCust->tabCust->unitSend=unitSend;
//////rastr.begin
	diagnostica = new Diagnostica(this);
//-	
	connect(this,SIGNAL(toNumBoardDiagnostica(int)),diagnostica,SLOT(fromNumBoardDialog(int)));
	widRastr0=ui.wRastr;
	widRastr1=ui.wRastr_2;
	widRastrText=ui.widText;
	rastr=new Rastr(this,widRastr0,widRastr1,widRastrText);
	rastr->glCuRr=&diagnostica->glCuRr;
//	rastr->glCuRr=diagnostica->glCuRr;
	rastr->widRastr0->setSize(ui.wRastr->size().width(),
		ui.wRastr->size().height());
	rastr->widRastr1->setSize(ui.wRastr_2->size().width(),
		ui.wRastr_2->size().height());
	rastr->setPixmaps();
/////!!!!!!!
	int x,y;
	x=ui.wRastr->size().width();
	y=ui.wRastr->size().height();
	QString str;
	str+=QString("%1 ").arg(x);
	str+=QString("%1 ").arg(y);
	x=ui.wRastr_2->size().width();
	y=ui.wRastr_2->size().height();
	str+=QString("%1 ").arg(x);
	str+=QString("%1 ").arg(y);
//	ui.laRastrSize->setText(str);
/////!!!!!!!
	diagnostica->initRastr(rastr);
	rastr->refreshPixmap();	
//////rastr.end
//////blocmeas.begin	- блок измерений
	blocMeas = new BlocMeas(this);
//////blocmeas.end
	
	iChoiceRls=0;iChoiceArp=0;
	listWidget=ui.listWidget;
	listWidget->setSortingEnabled(true);
	buttonWriteRpzu = ui.pushButton_25;
	buttonRegain = ui.pushButton_26;
	buttonRegain->setVisible(false);
	ui.tabWidget->setTabEnabled(0,false);
	iCurrentIndex = ui.tabWidget->currentIndex();
	bCurrentIndex0=false;
	tabWidget_2 = ui.tabWidget_2;
//пороги
	intPressEnter=0;
	widgetRiftZ=ui.widget;
	widgetRiftPass1=ui.widget_2;
	widgetRiftAct1=ui.widget_3;
//
	widgetRiftZ->setLevelCount(4);
	widgetRiftZ->setMaxValue(1023);
	widgetRiftZ->setMinValue(0);
	widgetRiftZ->setGridStep(100);
//
	widgetRiftZ->setLevelEdgeColor(1,QColor(Qt::red));	//изм.зн.ампл.
	widgetRiftZ->setLevelEdgeColor(2,QColor(Qt::blue));	//уст.пор.зап.
	widgetRiftZ->setLevelEdgeColor(3,QColor(Qt::cyan));	//уст.пор.вид.


	ui.widget_2->setLevelMaxValue(0,0);
	ui.widget_2->setLevelCount(1);
	ui.widget_2->setMaxValue(1023);
	ui.widget_2->setMinValue(0);
	ui.widget_2->setGridStep(100);

	ui.widget_3->setLevelMaxValue(0,0);
	ui.widget_3->setLevelCount(1);
	ui.widget_3->setMaxValue(1023);
	ui.widget_3->setMinValue(0);
	ui.widget_3->setGridStep(100);

//	netExchange = new NetExchange(this);
	unitReceive = new Unit(this);
	unitReceive0 = new Unit(this);
bReadOnly=false;
//	unitReceive->i18byteReceived=0;
//	unitReceive->function();
	unitSend =new Unit(this);
	dlgCust->tabCust->unitReceive=unitReceive;
	dlgCust->tabCust->unitSend=unitSend;
	dlgCust->tabCust0->unitReceive=unitReceive;
	dlgCust->tabCust0->unitSend=unitSend;
	dlgCust->tabPs5->unitReceive=unitReceive;
	dlgCust->tabPs5->unitSend=unitSend;
	dlgCust->tabPcm->unitReceive=unitReceive;
	dlgCust->tabPcm->unitSend=unitSend;

//	for (int i=0;i<16;i++)
//	{
//		board[i]=new Board(this);
//		board[i]->nBoard=i;
//	}
//	currentBoard = NULL;
//	netExchange->currentBoard = currentBoard;
//	board[0]->iActive=1;///////////////////////////////////////
//	board[1]->iActive=1;///////////////////////////////////////
//	netExchange->unitReceive = unitReceive;
//	netExchange->unitSend = unitSend;
//	connect(netExchange,SIGNAL(callRetrySlot()),this,SLOT(retrySlot()));

//Запись в РПЗУ
	connect(buttonWriteRpzu,SIGNAL(clicked()),this,SLOT(fWriteRpzu()));
	connect(buttonRegain,SIGNAL(clicked()),this,SLOT(fRegain()));



//	listWidget->setSortingEnabled(true);
//	connect(listWidget,SIGNAL(itemPressed(QListWidgetItem*)),
//		this,SLOT(listBoardEntered(QListWidgetItem*)));
//	connect(listWidget,SIGNAL(itemSelectionChanged()),
//		this,SLOT(listBoardEntered()));
//	connect(netExchange,SIGNAL(callRefreshBoard()),this,SLOT(refreshBoard()));
	buttonOsc11 = ui.pushButton;
	buttonOsc21 = ui.pushButton_2;
	buttonOsc31 = ui.pushButton_3;
	buttonOsc41 = ui.pushButton_4;
	buttonOsc51 = ui.pushButton_5;
	buttonOsc12 = ui.pushButton_6;
	buttonOsc22 = ui.pushButton_7;
	buttonOsc32 = ui.pushButton_8;
	buttonOsc42 = ui.pushButton_9;
	buttonOsc52 = ui.pushButton_10;
	buttonOscPZK = ui.pushButton_11;
	buttonOscT1 = ui.pushButton_12;
	buttonOscT2 = ui.pushButton_13;
	buttonOscT3 = ui.pushButton_14;
	buttonOscOff1 =ui.pushButton_23;

	buttonOscOff1->setChecked(true);//////////////////////////////////////////
	
	buttonOscK1 = ui.pushButton_15;
	buttonOscK2 = ui.pushButton_16;
	buttonOscK3 = ui.pushButton_17;
	buttonOscK4 = ui.pushButton_18;
	buttonOscK5 = ui.pushButton_19;
	buttonOscK6 = ui.pushButton_20;
	buttonOscK7 = ui.pushButton_21;
	buttonOscK8= ui.pushButton_22;
	buttonOscOff2 = ui.pushButton_24;
	buttonGroupOsc1 = new QButtonGroup(this);
	buttonGroupOsc1->addButton(buttonOsc11,1);
	buttonGroupOsc1->addButton(buttonOsc21,2);
	buttonGroupOsc1->addButton(buttonOsc31,3);
	buttonGroupOsc1->addButton(buttonOsc41,4);
	buttonGroupOsc1->addButton(buttonOsc51,5);
	buttonGroupOsc1->addButton(buttonOsc12,6);
	buttonGroupOsc1->addButton(buttonOsc22,7);
	buttonGroupOsc1->addButton(buttonOsc32,8);
	buttonGroupOsc1->addButton(buttonOsc42,9);
	buttonGroupOsc1->addButton(buttonOsc52,10);
	buttonGroupOsc1->addButton(buttonOscPZK,11);
	buttonGroupOsc1->addButton(buttonOscT1,12);
	buttonGroupOsc1->addButton(buttonOscT2,13);
	buttonGroupOsc1->addButton(buttonOscT3,14);
	buttonGroupOsc1->addButton(buttonOscOff1,23);
	for(int i=1;i<15;i++)
		buttonGroupOsc1->button(i)->setCheckable(true);
		buttonGroupOsc1->button(23)->setCheckable(true);
	connect(buttonGroupOsc1,SIGNAL(buttonPressed(int)),this,SLOT(clickGroupOsc1(int)));
	buttonGroupOsc2 = new QButtonGroup(this);
	buttonGroupOsc2->addButton(buttonOscK1,1);
	buttonGroupOsc2->addButton(buttonOscK2,2);
	buttonGroupOsc2->addButton(buttonOscK3,3);
	buttonGroupOsc2->addButton(buttonOscK4,4);
	buttonGroupOsc2->addButton(buttonOscK5,5);
	buttonGroupOsc2->addButton(buttonOscK6,6);
	buttonGroupOsc2->addButton(buttonOscK7,7);
	buttonGroupOsc2->addButton(buttonOscK8,8);
	buttonGroupOsc2->addButton(buttonOscOff2,0);
	for(int i=0;i<9;i++)
		buttonGroupOsc2->button(i)->setCheckable(true);
	connect(buttonGroupOsc2,SIGNAL(buttonClicked(int)),this,SLOT(clickGroupOsc2(int)));
	radioButtonQuantityRLS1 = ui.radioButton_14;
	radioButtonQuantityRLS2 = ui.radioButton_15;
	connect(radioButtonQuantityRLS1,SIGNAL(toggled(bool)),
		this,SLOT(toggleRadioButtonQuantityRLS(bool)));
	connect(radioButtonQuantityRLS2,SIGNAL(toggled(bool)),
		this,SLOT(toggleRadioButtonQuantityRLS(bool)));
	groupBoxRLS1 = ui.groupBox_26;
	groupBoxRLS2 = ui.groupBox_27;
	groupBoxPRL1 = ui.groupBox_210;
	groupBoxPRL2 = ui.groupBox_211;
	radioButtonTypeRlsOff = ui.radioButton_6;
	radioButtonTypeRlsKO = ui.radioButton_7;
	radioButtonTypeRlsPRL = ui.radioButton_8;
	radioButtonTypeRlsRSBN = ui.radioButton_9;
	connect(radioButtonTypeRlsOff,SIGNAL(toggled(bool)),this,
		SLOT(toggleRadioButtonTypeRls(bool)));
	connect(radioButtonTypeRlsKO,SIGNAL(toggled(bool)),this,
		SLOT(toggleRadioButtonTypeRls(bool)));
	connect(radioButtonTypeRlsPRL,SIGNAL(toggled(bool)),this,
		SLOT(toggleRadioButtonTypeRls(bool)));
	connect(radioButtonTypeRlsRSBN,SIGNAL(toggled(bool)),this,
		SLOT(toggleRadioButtonTypeRls(bool)));
	connect(ui.raBuGl,SIGNAL(toggled(bool)),diagnostica,SLOT(slGlSync(bool)));
	connect(ui.raBuCu,SIGNAL(toggled(bool)),diagnostica,SLOT(slCuSync(bool)));
	connect(ui.chBoCur,SIGNAL(toggled(bool)),diagnostica,SLOT(slChBoCur(bool)));
	connect(ui.chBoLight,SIGNAL(toggled(bool)),diagnostica,SLOT(slChBoLight(bool)));
	connect(diagnostica,SIGNAL(signSetVisibleChBoLight(bool)),ui.chBoLight,SLOT(setVisible(bool)));
	connect(ui.chBoInp,SIGNAL(toggled(bool)),diagnostica,SLOT(slChBoInp(bool)));
	connect(ui.chBoOutp,SIGNAL(toggled(bool)),diagnostica,SLOT(slChBoOutp(bool)));
	connect(ui.chBoInp,SIGNAL(toggled(bool)),this,SLOT(slChBoInp(bool)));
	connect(ui.chBoOutp,SIGNAL(toggled(bool)),this,SLOT(slChBoOutp(bool)));
	connect(ui.chBoMet,SIGNAL(toggled(bool)),diagnostica,SLOT(slChBoMet(bool)));
	connect(ui.chBoGrid,SIGNAL(toggled(bool)),diagnostica,SLOT(slChBoGrid(bool)));
	connect(ui.chBoCode,SIGNAL(toggled(bool)),diagnostica,SLOT(slChBoCode(bool)));
	
	groupBoxRazvertka = ui.groupBox_7;
	groupBoxQuantityRLS = ui.groupBox_8;
	groupBoxNumberRLS = ui.groupBox_5;
	groupBoxDistance = ui.groupBox_10;
	groupBoxGradient = ui.groupBox_9;
	groupBoxZandVPassiv = ui.groupBox;
	groupBoxVActiv = ui.groupBox_2;
	groupBoxCourseLanding = ui.groupBox_22;
	labelCurrentValue = ui.label_155;
	initPriznak = 0;
	lineEditIPInitial = ui.lineEdit_51;
	lineEditBasicPort = ui.lineEdit_52;
	lineEditPortBoard = ui.lineEdit_53;
	lineEditGradient = ui.lineEdit_114;
	comboBoxRankAngle = ui.comboBox_8;
	comboBoxNumberRLS = ui.comboBox;
	radioButtonZandVPassive = ui.radioButton;
	radioButtonZ = ui.radioButton_2;
	checkBoxVideoPassive = ui.checkBox;
	radioButtonVideoActiveNPO  = ui.radioButton_3;
	radioButtonVideoActiveDK  = ui.radioButton_4;
	radioButtonVideoActiveOff  = ui.radioButton_5;
	radioButtonGradientMagnetic = ui.radioButton_16;
	radioButtonGradientGeographic = ui.radioButton_17;
	radioButton7degree = ui.radioButton_28;
	radioButton0degree = ui.radioButton_29;
	radioButton_10degree = ui.radioButton_30;
	radioButton0Degree = ui.radioButton_31;
	radioButton10degree = ui.radioButton_32;
	buttonGroupEIPA = new QButtonGroup(this);
	buttonGroupEIPA->addButton(radioButton7degree); 
	buttonGroupEIPA->addButton(radioButton0degree); 
	buttonGroupEIPA->addButton(radioButton_10degree); 
	buttonGroupEIPA->addButton(radioButton0Degree); 
	buttonGroupEIPA->addButton(radioButton10degree); 
	radioButtonVxH = ui.radioButton_10;
	radioButtonMAIxNorth = ui.radioButton_11;
	radioButtonSSP_GO = ui.radioButton_12;
	radioButtonSSP_GOxTO = ui.radioButton_13;
	checkBoxEIPAOn = ui.checkBox_4;
	comboBoxDistance = ui.comboBox_2;
	if(radioButtonTypeRlsPRL->isChecked())	
	{
		comboBoxDistance->addItem("20 км");
		comboBoxDistance->addItem("40 км");
		comboBoxDistance->addItem("60 км");
		comboBoxDistance->addItem("резерв");
	}else
	{
		if(radioButtonTypeRlsKO->isChecked())	
		{
			comboBoxDistance->addItem("150 км");
			comboBoxDistance->addItem("200 км");
			comboBoxDistance->addItem("350 км");
			comboBoxDistance->addItem("400 км");
			comboBoxDistance->addItem("резерв");
		}
		if(radioButtonTypeRlsRSBN->isChecked())	
		{
			comboBoxDistance->addItem("400 км");
			comboBoxDistance->addItem("резерв");
		}
	}
	lineEditNameBoard = ui.lineEdit_2;
	lineEditCourseLanding1 = ui.lineEdit_41;
	lineEditMaxLengthUnit = ui.lineEdit_54;
	lineEditMaxWaitRay = ui.lineEdit_55;
	lineEditSelectorMa10 = ui.lineEdit_65;
	comboBoxProtectMaKo = ui.comboBox_18;
	comboBoxProtectMaPrl = ui.comboBox_19;
	comboBoxProtectMai = ui.comboBox_20;
	comboBoxProtectNorthKo = ui.comboBox_21;
	comboBoxProtectNorthRsbn = ui.comboBox_22;
//-
	int count;
	count = comboBoxProtectMai->count();
	comboBoxProtectMai->clear();
	count = comboBoxProtectMai->count();
//-
	QStringList slMai,slMaKo,slMaPrl;
	double d0,d1;
	int a;
	d0=85.+1./3.;
	for(int i=0;i<16;i++)
	{
		a=(double)(i+1)*d0+.5;
		str=QString("%1").arg(a);
		slMai.append(str);
	}
	comboBoxProtectMai->addItems(slMai);
//-
	d0=1365.+1./3.;
	for(int i=0;i<16;i++)
	{
		d1=(int)((double)(i+1)*d0/100.+.5);
		str=QString("%1").arg(d1/10.);
		slMaPrl.append(str);
	}
	comboBoxProtectMaPrl->clear();
	comboBoxProtectMaPrl->addItems(slMaPrl);
//-
	d0=1365.+1./3.;
	for(int i=0;i<16;i++)
	{
		d1=(int)((double)(i+1)*d0/100.+.5);
		str=QString("%1").arg(d1/10.);
		slMaKo.append(str);
	}
	comboBoxProtectMaKo->clear();
	comboBoxProtectMaKo->addItems(slMaKo);
//-
/*
85.3333	85.3
170.667	170.7
256	256
341.333	341.3
426.667	426.7
512	512
597.333	597.3
682.667	682.7
768	768
853.333	853.3
938.667	938.7
1024	1024
1109.33	1109.3
1194.67	1194.7
1280	1280
1365.33	1365.3

1365.33	1.4
2730.67	2.7
4096	4.1
5461.33	5.5
6826.67	6.8
8192	8.2
9557.33	9.6
10922.7	10.9
12288	12.3
13653.3	13.7
15018.7	15
16384	16.4
17749.3	17.7
19114.7	19.1
20480	20.5
21845.3	21.8
*/
//-

//-
	comboBoxProtocol = ui.comboBox_3;
	comboBoxAPOI = ui.comboBox_4;
	comboBoxTypeComPort = ui.comboBox_5;
	comboBoxComSpeed = ui.comboBox_7;
	comboBoxComParity = ui.comboBox_6;
	lineEditNameAPOI = ui.lineEdit_111;
	radioButtonNoUsed  = ui.radioButton_20;
	radioButtonApoi = ui.radioButton_21;
	QButtonGroup* buttonGroupApoi;
	buttonGroupApoi = new QButtonGroup(this);
	buttonGroupApoi->addButton(radioButtonNoUsed);
	buttonGroupApoi->addButton(radioButtonApoi);

	lineEditPointStandingDistance = ui.lineEdit_112;
	lineEditPointStandingAzimuth = ui.lineEdit_113;
	radioButtonAPOIGradientMagnetic = ui.radioButton_49;
	radioButtonAPOIGradientGeographic = ui.radioButton_99;
	checkBoxARPUseRLS = ui.checkBox_37;
	comboBoxArpNumber = ui.comboBox_17;
	radioButtonArpGradientMagnetic = ui.radioButton_102;
	radioButtonArpGradientGeographic = ui.radioButton_103;
//Переключаемые параметры
	lineEditNameRls0 = ui.lineEdit;
	lineEditNameRls1 = ui.lineEdit_78;
	lineEditRls0PointStandingDistance = ui.lineEdit_6;
	lineEditRls0PointStandingAzimuth = ui.lineEdit_7;
	lineEditRls1PointStandingDistance = ui.lineEdit_234;
	lineEditRls1PointStandingAzimuth = ui.lineEdit_235;
	radioButtonFizPoz = ui.radioButton_24;
	radioButtonFizNeg = ui.radioButton_25;
	radioButtonLogPoz = ui.radioButton_26;
	radioButtonLogNeg = ui.radioButton_27;
//10	138	266	переключаемые параметры РЛС
	checkBoxRls0LabelAngleOn = ui.checkBox_2;
	checkBoxRls0LabelAngleCorrection = ui.checkBox_3;
	checkBoxRls1LabelAngleOn = ui.checkBox_38;
	checkBoxRls1LabelAngleCorrection = ui.checkBox_39;
	lineEditRls0EndFaceVPP1 = ui.lineEdit_236;
	lineEditRls1EndFaceVPP1 = ui.lineEdit_245;
	lineEditRls0HighAerialVPP1 =ui.lineEdit_238;
	lineEditRls1HighAerialVPP1 = ui.lineEdit_243;
	lineEditRls0DistanceAxisVPP= ui.lineEdit_239;
	lineEditRls1DistanceAxisVPP= ui.lineEdit_249;
	lineEditRls0PointPlanting1 = ui.lineEdit_237;
	lineEditRls1PointPlanting1 = ui.lineEdit_244;

	lineEditRls0EndFaceVPP2 = ui.lineEdit_240;
	lineEditRls1EndFaceVPP2 = ui.lineEdit_246;
	lineEditRls0HighAerialVPP2 =ui.lineEdit_242;
	lineEditRls1HighAerialVPP2 = ui.lineEdit_248;
	lineEditRls0PointPlanting2 = ui.lineEdit_241;
	lineEditRls1PointPlanting2 = ui.lineEdit_247;
	lineEditRls0ScopeG =ui.lineEdit_21;
	lineEditRls1ScopeG =ui.lineEdit_85;
	lineEditRls0ScopeK =ui.lineEdit_22;
	lineEditRls1ScopeK =ui.lineEdit_231;
	lineEditRls0BlkVideo=ui.lineEdit_3;
	lineEditRls0BlkVideo->setMaxValue(100000);
	lineEditRls1BlkVideo=ui.lineEdit_17;
	lineEditRls1BlkVideo->setMaxValue(100000);
	lineEditRls0TurnKO =ui.lineEdit_8;
	lineEditRls1TurnKO =ui.lineEdit_77;
	lineEditRls0DisPlaceVPass =ui.lineEdit_4;
	lineEditRls1DisPlaceVPass =ui.lineEdit_75;
	lineEditRls0DisPlaceVAct =ui.lineEdit_5;
	lineEditRls1DisPlaceVAct =ui.lineEdit_76;

	lineEditRiftZ = ui.lineEdit_11;
	lineEditRiftNorth = ui.lineEdit_48;
	lineEditRiftMai = ui.lineEdit_45;
	lineEditCompensZ = ui.lineEdit_23;
	lineEditCompensPass = ui.lineEdit_28;
	lineEditCompensAct = ui.lineEdit_36;
	lineEditAvtoRiftZ = ui.lineEdit_46;
	lineEditAvtoRiftV = ui.lineEdit_47;

	lineEditCompensInput1 = ui.lineEdit_49;
	lineEditCompensInput2 = ui.lineEdit_50;
	lineEditRiftPass1 = ui.lineEdit_32;
	lineEditRiftAct1 = ui.lineEdit_40;

	lineEditRls0MuGMaxRift = ui.lineEdit_12;
	lineEditRls0MuGMinRift = ui.lineEdit_13;
	lineEditRls1MuGMaxRift = ui.lineEdit_83;
	lineEditRls1MuGMinRift = ui.lineEdit_81;
	lineEditRls0MuKMaxRift = ui.lineEdit_15;
	lineEditRls0MuKMinRift = ui.lineEdit_14;
	lineEditRls1MuKMaxRift = ui.lineEdit_84;
	lineEditRls1MuKMinRift = ui.lineEdit_82;

	lineEditRls0DisplaceNulG = ui.lineEdit_9;
	lineEditRls0DisplaceNulK = ui.lineEdit_10;
	lineEditRls1DisplaceNulG = ui.lineEdit_79;
	lineEditRls1DisplaceNulK = ui.lineEdit_80;
	lineEditRls0CombG = ui.lineEdit_34;
	lineEditRls0CombK = ui.lineEdit_35;
	lineEditRls1CombG = ui.lineEdit_232;
	lineEditRls1CombK = ui.lineEdit_233;
	ui.groupBox_70->setCheckable(true);
	lineEditRls0UEipa7GonK = ui.lineEdit_56;
	lineEditRls0UEipa0GonK = ui.lineEdit_57;
	lineEditRls0UEipa_10KonG = ui.lineEdit_58;
	lineEditRls0UEipa0KonG = ui.lineEdit_59;
	lineEditRls0UEipa10KonG = ui.lineEdit_60;
	lineEditRls0MuG7=ui.lineEdit_250;
	lineEditRls0MuG0=ui.lineEdit_251;
	lineEditRls0MuK_10=ui.lineEdit_268;
	lineEditRls0MuK0=ui.lineEdit_269;
	lineEditRls0MuK10=ui.lineEdit_270;
	for(int i=0;i<10;i++)
		listEipa+="0";
	
	lineEditRls0NameArp=ui.lineEdit_230;
	lineEditRls0ArpPointStandingDistance=ui.lineEdit_228;
	lineEditRls0ArpPointStandingAzimuth=ui.lineEdit_229;

		comboBoxMinTimeCh1=ui.comboBox_9;
		comboBoxMinTimeCh2=ui.comboBox_13;
		comboBoxMinTimeCh3=ui.comboBox_11;
		comboBoxMinTimeCh4=ui.comboBox_15;
		comboBoxMinTime2Ch1=ui.comboBox_23;
		comboBoxMinTime2Ch2=ui.comboBox_24;
		comboBoxMinTime2Ch3=ui.comboBox_25;
		comboBoxMinTime2Ch4=ui.comboBox_26;
		comboBoxMinTimeCh1->insertItems(0,makeList(25,500));
		comboBoxMinTimeCh2->insertItems(0,makeList(25,500));
		comboBoxMinTimeCh3->insertItems(0,makeList(25,500));
		comboBoxMinTimeCh4->insertItems(0,makeList(25,500));
		comboBoxMinTime2Ch1->insertItems(0,makeList(25,500));
		comboBoxMinTime2Ch2->insertItems(0,makeList(25,500));
		comboBoxMinTime2Ch3->insertItems(0,makeList(25,500));
		comboBoxMinTime2Ch4->insertItems(0,makeList(25,500));
		comboBoxDelayCh1=ui.comboBox_10;
		comboBoxDelayCh2=ui.comboBox_14;
		comboBoxDelayCh3=ui.comboBox_12;
		comboBoxDelayCh4=ui.comboBox_16;
		lineEditNumberCh1=ui.lineEdit_118;
		lineEditNumberCh2=ui.lineEdit_119;
		lineEditNumberCh3=ui.lineEdit_121;
		lineEditNumberCh4=ui.lineEdit_122;
		lineEditRiftCh1=ui.lineEdit_108;
		lineEditRiftCh2=ui.lineEdit_106;
		lineEditRiftCh3=ui.lineEdit_109;
		lineEditRiftCh4=ui.lineEdit_107;
		lineEditRift2Ch1=ui.lineEdit_110;
		lineEditRift2Ch2=ui.lineEdit_115;
		lineEditRift2Ch3=ui.lineEdit_116;
		lineEditRift2Ch4=ui.lineEdit_117;
/*
		lineEditMaxHeightScanCh1=ui.lineEdit_61;
		lineEditMinHeightScanCh1=ui.lineEdit_62;
		lineEditLineNulHeightScanCh1=ui.lineEdit_63;
		lineEditMaxWidthScanCh1=ui.lineEdit_64;
		lineEditMinWidthScanCh1=ui.lineEdit_86;
		lineEditLineNulWidthScanCh1=ui.lineEdit_87;
		lineEditMaxHeightScanCh2=ui.lineEdit_94;
		lineEditMinHeightScanCh2=ui.lineEdit_95;
		lineEditLineNulHeightScanCh2=ui.lineEdit_96;
		lineEditMaxWidthScanCh2=ui.lineEdit_97;
		lineEditMinWidthScanCh2=ui.lineEdit_98;
		lineEditLineNulWidthScanCh2=ui.lineEdit_99;
		lineEditMaxHeightScanCh3=ui.lineEdit_88;
		lineEditMinHeightScanCh3=ui.lineEdit_89;
		lineEditLineNulHeightScanCh3=ui.lineEdit_90;
		lineEditMaxWidthScanCh3=ui.lineEdit_91;
		lineEditMinWidthScanCh3=ui.lineEdit_92;
		lineEditLineNulWidthScanCh3=ui.lineEdit_93;
		lineEditMaxHeightScanCh4=ui.lineEdit_100;
		lineEditMinHeightScanCh4=ui.lineEdit_101;
		lineEditLineNulHeightScanCh4=ui.lineEdit_102;
		lineEditMaxWidthScanCh4=ui.lineEdit_103;
		lineEditMinWidthScanCh4=ui.lineEdit_104;
		lineEditLineNulWidthScanCh4=ui.lineEdit_105;
*/



	initSlots(); //dialog2.cpp экранные слоты
	timerId = startTimer(200);
	initTimers();
	ui.widget_4->setVisible(false);
	initDialog();
}

Dialog::~Dialog()
{

}
void Dialog::setEnabledThe(bool b)
{
	ui.groupBox_25->setEnabled(b);
	buttonWriteRpzu->setEnabled(b);
	ui.frType->setEnabled(b);
	ui.frPar->setEnabled(b);
	ui.frNastr->setEnabled(b);
	ui.frArp->setEnabled(b);
	ui.frPort->setEnabled(b);
	ui.frObsch->setEnabled(b);
//
	dlgCust->setEnabledThe(b);
		
}
void Dialog::showNum(int v)//0-надпись,1-диагн,2-PSP1,3-PS5,4-PSM,5-PSP
{
	if(v>5)v=0;
	switch(v)
	{
	case 0:
		dlgCust->show();
		dlgCust->laGetBoard->show();
		tabWidget->hide();			//
		dlgCust->tabCust->hide();
		dlgCust->tabCust0->hide();
		dlgCust->tabPs5->hide();
		dlgCust->tabPcm->hide();
		break;
	case 1:
		dlgCust->hide();
		tabWidget->show();			//
		ui.groupBox_25->show();
		break;
	case 2:
		tabWidget->hide();			//ПСП1
		dlgCust->show();
		dlgCust->laGetBoard->hide();
		dlgCust->tabCust->show();
		dlgCust->tabCust0->hide();
		dlgCust->tabPs5->hide();
		ui.groupBox_25->hide();
		dlgCust->tabPcm->hide();
		break;
	case 3:
		tabWidget->hide();			//
		dlgCust->show();
		dlgCust->laGetBoard->hide();
		dlgCust->tabCust->hide();
		dlgCust->tabCust0->hide();
		dlgCust->tabPs5->show();
		ui.groupBox_25->hide();
		dlgCust->tabPcm->hide();
		break;
	case 4:
		tabWidget->hide();			//
		dlgCust->show();
		dlgCust->laGetBoard->hide();
		dlgCust->tabCust->hide();
		dlgCust->tabCust0->hide();
		dlgCust->tabPs5->hide();
		dlgCust->tabPcm->show();
		ui.groupBox_25->hide();
		break;
	case 5:
		tabWidget->hide();			//ПСП1
		dlgCust->show();
		dlgCust->laGetBoard->hide();
		dlgCust->tabCust->hide();
		dlgCust->tabCust0->show();
		dlgCust->tabPs5->hide();
		ui.groupBox_25->hide();
		dlgCust->tabPcm->hide();
		break;
	}
	numShow = v;
	return;
}

void Dialog::initDialog()
{
	initPriznak = 1;
			updateDialog();
	QString st ;
	st = "Выберите свободную плату из списка";
	fCurrentBoard(false,st);
}
void Dialog::initTimers()
{
	timerWrite.setSingleShot(true);	
	timerRegain.setSingleShot(true);
	connect(&timerWrite,SIGNAL(timeout()),this,SLOT(fTimerWriteStop()));
	connect(&timerRegain,SIGNAL(timeout()),this,SLOT(fTimerRegainStop()));
}
void Dialog::fWriteRpzu()
{
	int iSend;
	iSend = unitSend->headWrite[1];
	fWordWr(iSend);
	wordWr.bit0=1;
	iSend = fWordWr();
	unitSend->headWrite[1] = iSend ;
	timerWrite.start(5000);
}
void Dialog::showWriteRpzu()
{
	QString str;
	if(timerWrite.isActive())
	{
		str="Идет запись.";
		fCurrentBoard(false,str);
		fWordWr(unitReceive->headRead[1]);
		if(wordWr.bit1)
		{
			timerWrite.stop();
			fWordWr(unitSend->headWrite[1]);
			wordWr.bit0=0;
			unitSend->headWrite[1]=fWordWr();
			fCurrentBoard(true,str);
		}
	}
}
void Dialog::fRegain()
{
	int iSend;
	iSend = unitSend->headWrite[1];
	fWordWr(iSend);
	wordWr.bit5=1;
	iSend = fWordWr();
	unitSend->headWrite[1] = iSend ;
	timerRegain.start(5000);
}
void Dialog::showRegain()
{
	QString str;
	if(timerRegain.isActive())
	{
		str="Идет восстановление.";
		fCurrentBoard(false,str);
		fWordWr(unitReceive->headRead[1]);
		if(wordWr.bit5)
		{
			timerRegain.stop();
			fWordWr(unitSend->headWrite[1]);
			wordWr.bit5=0;
			unitSend->headWrite[1]=fWordWr();
			fCurrentBoard(true,str);
		}
	}
}
void Dialog::fTimerWriteStop()
{
	QString str;
	fWordWr(unitReceive->headRead[1]);
	if(!wordWr.bit1)
	{
		DlgFault* dlgFault;
		dlgFault = new DlgFault(this);
		dlgFault->show();
	}
//bit-0 = 0
	fWordWr(unitSend->headWrite[1]);
	wordWr.bit0=0;
	unitSend->headWrite[1]=fWordWr();
//восстановление экрана
	fCurrentBoard(true,str);
}
void Dialog::fTimerRegainStop()
{
	QString str;
	fWordWr(unitReceive->headRead[1]);
	if(!wordWr.bit1)
	{
		DlgFault* dlgFault;
		str="Не получен ответ от платы.\
			\nО выполнении восстановления";
		dlgFault = new DlgFault(this,str);
		dlgFault->show();
	}
//bit-5 = 0
	fWordWr(unitSend->headWrite[1]);
	wordWr.bit5=0;
	unitSend->headWrite[1]=fWordWr();
//восстановление экрана
	fCurrentBoard(true,str);
}
void Dialog::fCurrentBoard(bool yes, QString str=0)	
{
//
	int iSend;
	iSend = unitSend->headWrite[1];
	fWordWr(iSend);
	if(wordWr.bit0)
	{
		str="Запись";
		yes=false;
	}
	if(wordWr.bit5)
	{
		str="Восстановление настроек";
		yes=false;
	}
//
//	if(str.size())
//		ui.label_12->setText( str );
//        int tmpCurrent;
	if(!yes)
	{
		
		showNum(0);
		ui.groupBox_25->setEnabled(false);
		ui.pushButton_25->setEnabled(false);
		ui.pushButton_26->setEnabled(false);
	}
	else
	{
		if(boardCurrent->typeT==0)
			showNum(1);
		if(boardCurrent->typeT==1)
			showNum(2);
		if(boardCurrent->typeT==2)
			showNum(3);
		if(boardCurrent->typeT==3)
			showNum(4);
		if(boardCurrent->typeT==4)
			showNum(5);
		ui.groupBox_25->setEnabled(true);
		ui.pushButton_25->setEnabled(true);
		ui.pushButton_26->setEnabled(true);
	}
}


void Dialog::fCurrentBoard1(bool yes, QString str=0)	
{
/*
	int iSend;
	iSend = unitSend->headWrite[1];
	fWordWr(iSend);
	if(wordWr.bit0)
	{
		str="Запись";
		yes=false;
	}
	if(wordWr.bit5)
	{
		str="Восстановление настроек";
		yes=false;
	}
*/
	if(str.size())ui.label_12->setText( str );
	int tmpCurrent;
	if(!yes)
	{
		tmpCurrent = ui.tabWidget->currentIndex();
		if(tmpCurrent)iCurrentIndex = tmpCurrent;
		ui.tabWidget->setTabEnabled(1,false);
		ui.tabWidget->setTabEnabled(2,false);
		ui.tabWidget->setTabEnabled(3,false);
		ui.tabWidget->setTabEnabled(4,false);
		ui.tabWidget->setTabEnabled(5,false);
		ui.tabWidget->setTabEnabled(0,true);

		ui.groupBox_25->setEnabled(false);
		ui.pushButton_25->setEnabled(false);
		ui.pushButton_26->setEnabled(false);
	}
	else
	{
		if(!ui.tabWidget->isTabEnabled(1))
		{
		ui.tabWidget->setTabEnabled(0,false);
		ui.tabWidget->setTabEnabled(1,true);
		ui.tabWidget->setTabEnabled(2,true);
		ui.tabWidget->setTabEnabled(3,true);
		ui.tabWidget->setTabEnabled(4,true);
		ui.tabWidget->setTabEnabled(5,true);
		ui.groupBox_25->setEnabled(true);
		ui.pushButton_25->setEnabled(true);
		ui.pushButton_26->setEnabled(true);

		ui.tabWidget->setCurrentIndex(iCurrentIndex);
		}
	}
}

QString Dialog::makeString(char* chStr,int iQuantity)
{
	iQuantity=0;
	QString str,strWhole;
	char chName[6];
	int k=0;
//	a1 = unitReceive->i18byteReceived;
		for(int i=0;i<6;i++)
		{
			chName[i] = chStr[i];
			if(!chName[i])
			{
				k=i;
				break;
			}
		}
		str = QString::fromAscii(chName,k);
		strWhole =str;
		strWhole.append('/');
		for(int i=6;i<12;i++)
		{
			chName[i-6] = chStr[i];
			if(!chName[i-6])
			{
				k=i-6;
				break;
			}
		}
		str = QString::fromAscii(chName,k);
		strWhole.append(str);
		strWhole.append('/');
		chName[0]='К';
		str = QString::fromAscii(chName,1);
		strWhole.append(str);
		short shA1,shA2;
		shA1=chStr[12];
		shA2=shA1;
		shA2&=0x20;		//номер комплекта
		shA1&=0x1f;		//номер платы
//		shA1<<=1;
		if(shA2) shA2=0x01;
		else shA2=0x00;
		str=QString("%1").arg(shA1);
		str.append(tr("."));
//		strWhole.append(str);
		str.append(strWhole);
		strWhole = str;
		str=QString("%1").arg(shA2);
		strWhole.append(str);
		return strWhole;
}

//begin //Dialog::updateDialog()//////////////////////////////////////
void Dialog::updateDialog()
{
	
	ushort a0,a1,a2,a3;
	uint uk0=0;
	double d1,d2;
	QString str,strWhole,str0,str1,str2;
	showWriteRpzu();
	showRegain();
//Выбор РЛС
//	fChoice();

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
	if(!lineEditIPInitial->hasFocus())
		lineEditIPInitial->setText(strWhole);
	QChar char0='0';
	str = QString("0x%1").arg(unitReceive->basicSetting[2],4,16,char0);
	strWhole = str;
	str = QString("/%1").arg(unitReceive->basicSetting[2]);
	strWhole.append(str);
	if(!lineEditBasicPort->hasFocus())
		lineEditBasicPort->setText(strWhole);
	str = QString("0x%1").arg(unitReceive->basicSetting[3],4,16,char0);
	strWhole = str;
	str = QString("/%1").arg(unitReceive->basicSetting[3]);
	strWhole.append(str);
	if(!lineEditPortBoard->hasFocus())
		lineEditPortBoard->setText(strWhole);
//склонение
	a0 = unitReceive->basicSetting[7];
	a1 = a0/60;
	a2 = a0 - (a1*60);
	str = QString("%1").arg(a1);
	str.append(QString("°%1'").arg(a2,2,10,QLatin1Char( '0' )));
	if(!lineEditGradient->hasFocus())
		lineEditGradient->setText(str);

//ПРЛ
//10
	a1 = unitReceive->basicSetting[10];
	fWordWr(a1);
	if(wordWr.bit1==0&&wordWr.bit0==0)
	{
		radioButtonTypeRlsOff->setChecked(true);
	}
	if(wordWr.bit1==0&&wordWr.bit0==1)
	{
		radioButtonTypeRlsPRL->setChecked(true);
	}
	if(wordWr.bit1==1&&wordWr.bit0==0)
	{
		radioButtonTypeRlsKO->setChecked(true);
	}
	if(wordWr.bit1==1&&wordWr.bit0==1)
	{
		radioButtonTypeRlsRSBN->setChecked(true);
	}
//разрядность угла
	a1 = unitReceive->basicSetting[10];
	a1&=0xc;
	a1>>=2;
	if(!comboBoxRankAngle->hasFocus())
	{
	if(a1==0)								//10
	comboBoxRankAngle->setCurrentIndex(0);
	if(a1==1)								//12
	comboBoxRankAngle->setCurrentIndex(2);
	if(a1==2)								//11
	comboBoxRankAngle->setCurrentIndex(1);
	if(a1==3)								//10
	comboBoxRankAngle->setCurrentIndex(0);
	}
//64m максимальная длительность одного блока с несколькими лучами
	a1 = unitReceive->basicSetting[64];
	a1 &= 0xff;
	str = QString("%1").arg(a1);
	if(!ui.liEdMaxTimeBlock->hasFocus())
		ui.liEdMaxTimeBlock->setText(str);
//65 значение селектора длительности
	a1 = unitReceive->basicSetting[65];
	a1 &= 0xff;
	str = QString("%1").arg(a1);
	if(!lineEditSelectorMa10->hasFocus())
		lineEditSelectorMa10->setText(str);
//65c
	a1 = unitReceive->basicSetting[65];
	a1 &= 0xff00;
	a1 >>=8;
	a1 &=0xf;
	if(!comboBoxProtectMaKo->hasFocus())
		comboBoxProtectMaKo->setCurrentIndex(a1);
//66m
	a1 = unitReceive->basicSetting[66];
	a1 &= 0xff;
	a1 &=0xf;
	if(!comboBoxProtectMaPrl->hasFocus())
		comboBoxProtectMaPrl->setCurrentIndex(a1);
//66h
	a1 = unitReceive->basicSetting[66];
	a1 &= 0xff00;
	a1 >>=8;
	a1 &=0xf;
	if(!comboBoxProtectMai->hasFocus())
		comboBoxProtectMai->setCurrentIndex(a1);
//67l
	a1 = unitReceive->basicSetting[67];
	a1 &= 0xff;
	a1 &=0x7;
	if(!comboBoxProtectNorthKo->hasFocus())
		comboBoxProtectNorthKo->setCurrentIndex(a1);
//67h
	a1 = unitReceive->basicSetting[67];
	a1 &= 0xff00;
	a1 >>=8;
	a1 &=0x7;
	if(!comboBoxProtectNorthRsbn->hasFocus())
		comboBoxProtectNorthRsbn->setCurrentIndex(a1);

//10 номер РЛС
	a1=unitReceive->basicSetting[10];
	a1&=0x70;
	a1>>=4;
	comboBoxNumberRLS->setCurrentIndex(a1);
//Запуск и видео пассив
	a1=unitReceive->basicSetting[10];
	a1&=0x80;
	a1>>=7;
	if(a1==0) radioButtonZ->setChecked(true);
	if(a1==1) radioButtonZandVPassive->setChecked(true);
//выбор пассива
	a1=unitReceive->basicSetting[10];
	a1&=0x80;
	a1>>=7;
	a2=unitReceive->basicSetting[10];
	a2&=0x100;
	a2>>=8;
	if(a2 == 1)
	{
		if(a1 == 0)
			checkBoxVideoPassive->setChecked(true);
		else
			checkBoxVideoPassive->setChecked(false);
	}
	else
		checkBoxVideoPassive->setChecked(false);
//Видео Актив
	a1=unitReceive->basicSetting[10];
	a1&=0x600;
	a1>>=9;
	if(a1==0||a1==2)
		radioButtonVideoActiveOff->setChecked(true);
	if(a1==1)
		radioButtonVideoActiveNPO->setChecked(true);
	if(a1==3)
		radioButtonVideoActiveDK->setChecked(true);
//Склонение
	a1=unitReceive->basicSetting[10];
	a1&=0x8000;
	a1>>=15;
	if(a1==0) radioButtonGradientGeographic->setChecked(true);
	else radioButtonGradientMagnetic->setChecked(true);
//Режим РЛС
	a1=unitReceive->basicSetting[11];
	word = *((Word*)&a1);
	a1=word.bit1*2+word.bit0;
	if(a1 == 0)	radioButtonVxH->setChecked(true);
	if(a1 == 1) radioButtonMAIxNorth->setChecked(true);
	if(a1 == 2) radioButtonSSP_GO->setChecked(true);
	if(a1 == 3) radioButtonSSP_GOxTO->setChecked(true);
//ЭИПА используется
	if(word.bit6) 
	{
		checkBoxEIPAOn->setChecked(true);
		ui.groupBox_70->setChecked(true);
	}
	else 
	{
		checkBoxEIPAOn->setChecked(false);
		ui.groupBox_70->setChecked(false);
	}
//только РЛС1..
	if(word.bit8) radioButtonQuantityRLS2->setChecked(true);
	else radioButtonQuantityRLS1->setChecked(true);
//рабочая дальность
	a1 = word.bit13*4+word.bit12*2+word.bit11;
	if(radioButtonTypeRlsPRL->isChecked())
	{
		if(a1 == 1) comboBoxDistance->setCurrentIndex(0);
		if(a1 == 2) comboBoxDistance->setCurrentIndex(1);
		if(a1 == 3) comboBoxDistance->setCurrentIndex(2);
		if(a1 == 0) comboBoxDistance->setCurrentIndex(3);
	}else
	{
		if(radioButtonTypeRlsKO->isChecked())
		{
			if(a1 == 4) comboBoxDistance->setCurrentIndex(0);
			if(a1 == 5) comboBoxDistance->setCurrentIndex(1);
			if(a1 == 6) comboBoxDistance->setCurrentIndex(2);
			if(a1 == 7) comboBoxDistance->setCurrentIndex(3);
			if(a1 == 0) comboBoxDistance->setCurrentIndex(4);
		}
		if(radioButtonTypeRlsRSBN->isChecked())
		{
			if(a1 == 7) comboBoxDistance->setCurrentIndex(0);
			if(a1 == 0) comboBoxDistance->setCurrentIndex(1);
		}
	}
//функциональное название платы
	char nameBoard[6];
	char ch;int k0,k1;
	for (int i=0;i<8;i++)
	{
		k0=i;
		if(i/2*2==i)
		{
			ch = firstChar(unitReceive->basicSetting[i/2+12]);
			if(ch == 0x00) break;
			nameBoard[i]=ch;
		}
		else
		{
			ch  = secondChar(unitReceive->basicSetting[i/2+12]);
			if(ch == 0x0)break;
			nameBoard[i] = ch;
		}
	}
/*
	nameBoard[0]=firstChar(unitReceive->basicSetting[12]);
	nameBoard[1]=secondChar(unitReceive->basicSetting[12]);
	nameBoard[2]=firstChar(unitReceive->basicSetting[13]);
	nameBoard[3]=secondChar(unitReceive->basicSetting[13]);
	nameBoard[4]=firstChar(unitReceive->basicSetting[14]);
	nameBoard[5]=secondChar(unitReceive->basicSetting[14]);
*/
	str = QString::fromAscii(nameBoard,k0);
	if(!lineEditNameBoard->hasFocus())
		lineEditNameBoard->setText(str);
//курс посадки 1(в градусах)
	str = QString("%1").arg(unitReceive->basicSetting[32]);
	if(!lineEditCourseLanding1->hasFocus())
		lineEditCourseLanding1->setText(str);
//максимальная длительность одного блока с несколькими лучами
	str = QString("%1").arg(unitReceive->basicSetting[64]);
	if(!lineEditMaxLengthUnit->hasFocus())
		lineEditMaxLengthUnit->setText(str);
//время ожидания открытого блока
	str = QString("%1").arg(unitReceive->basicSetting[65]);
	if(!lineEditMaxWaitRay->hasFocus())
		lineEditMaxWaitRay->setText(str);
//96 назначение порта UART
	//номер устройства
	fWord(unitReceive->basicSetting[96]);
	a2 =word.bit1*2+word.bit0;
	if(a2 == 0) comboBoxAPOI->setCurrentIndex(0);
	if(a2 == 1) comboBoxAPOI->setCurrentIndex(1);
	if(a2 == 2) comboBoxAPOI->setCurrentIndex(2);
	if(a2 == 3) comboBoxAPOI->setCurrentIndex(3);

	//биты 4..2 ????????????????????????????????????????????????
	a2 = word.bit4*4+(word.bit3*2)+word.bit2;
	if(a2 == 5) 
	{
		radioButtonApoi->setChecked(true);
		ui.groupBox_31->setEnabled(true);
		ui.groupBox_32->setEnabled(true);
		ui.groupBox_30->setEnabled(true);
		ui.groupBox_97->setEnabled(true);
		ui.groupBox_98->setEnabled(true);
		ui.groupBox_198->setEnabled(true);
	}

	else
	{
		radioButtonNoUsed->setChecked(true);
		ui.groupBox_31->setEnabled(false);
		ui.groupBox_32->setEnabled(false);
		ui.groupBox_30->setEnabled(false);
		ui.groupBox_97->setEnabled(false);
		ui.groupBox_98->setEnabled(false);
		ui.groupBox_198->setEnabled(false);
	}
	//биты 6 - RS232,RS485
	if(word.bit6) comboBoxTypeComPort->setCurrentIndex(1);
	else comboBoxTypeComPort->setCurrentIndex(0);
	//биты8-11 протокол порта UART при его истользовании?????????????????

	a2 =word.bit9*2+word.bit8;
	if(a2 == 2) comboBoxProtocol->setCurrentIndex(1);
	if(a2 != 2) comboBoxProtocol->setCurrentIndex(0);
//склонение
	if(word.bit15) radioButtonAPOIGradientMagnetic->setChecked(true);
	else radioButtonAPOIGradientGeographic->setChecked(true);
//назначения порта UART старшее слово
	//биты 2-0 - скорость
	fWord(unitReceive->basicSetting[97]);
	a1 = word.bit2*4+(word.bit1*2)+word.bit0;
	comboBoxComSpeed->setCurrentIndex(a1);
	//бит4 четности- отсутстувует0
	if(	word.bit4==0 )comboBoxComParity->setCurrentIndex(0);
	else
	{
		if(	word.bit5==0 ) comboBoxComParity->setCurrentIndex(1);
		else comboBoxComParity->setCurrentIndex(2);
	}
	//бит5 0-четность,1-нечетность???????????????????????????????????????
//98..105 название источника UART
	lineEditNameAPOI;
	char nameSource[16];
//	char ch;int k0,k1;
	for (int i=0;i<8;i++)
	{
		k0=i;
		if(i/2*2==i)
		{
			ch = firstChar(unitReceive->basicSetting[i/2+98]);
			if(ch == 0x00) break;
			nameSource[i]=ch;
		}
		else
		{
			ch  = secondChar(unitReceive->basicSetting[i/2+98]);
			if(ch == 0x0)break;
			nameSource[i] = ch;
		}
	}

/*
	nameSource[0] = firstChar(unitReceive->basicSetting[98]);
	nameSource[1] = secondChar(unitReceive->basicSetting[98]);
	nameSource[2] = firstChar(unitReceive->basicSetting[99]);
	nameSource[3] = secondChar(unitReceive->basicSetting[99]);
	nameSource[4] = firstChar(unitReceive->basicSetting[100]);
	nameSource[5] = secondChar(unitReceive->basicSetting[100]);
	nameSource[6] = firstChar(unitReceive->basicSetting[101]);
	nameSource[7] = secondChar(unitReceive->basicSetting[101]);
	nameSource[8] = firstChar(unitReceive->basicSetting[102]);
	nameSource[9] = secondChar(unitReceive->basicSetting[102]);
	nameSource[10] = firstChar(unitReceive->basicSetting[103]);
	nameSource[11] = secondChar(unitReceive->basicSetting[103]);
	nameSource[12] = firstChar(unitReceive->basicSetting[104]);
	nameSource[13] = secondChar(unitReceive->basicSetting[104]);
	nameSource[14] = firstChar(unitReceive->basicSetting[105]);
	nameSource[15] = secondChar(unitReceive->basicSetting[105]);
*/
	str2 = QString::fromAscii(nameSource,k0);
	if(!lineEditNameAPOI->hasFocus())
		lineEditNameAPOI->setText(str2);
//точка стояния
	str = QString("%1").arg(unitReceive->basicSetting[106]);
	if(!lineEditPointStandingDistance->hasFocus())
		lineEditPointStandingDistance->setText(str);
	a0 = unitReceive->basicSetting[107];
	a1 = a0/60;
	a2 = a0 - (a1*60);
	str = QString("%1").arg(a1);
	str.append(QString("°%1'").arg(a2,2,10,QLatin1Char( '0' )));
	if(!lineEditPointStandingAzimuth->hasFocus())
		lineEditPointStandingAzimuth->setText(str);
//120	параметры АРП
//		бит 14:	1 — использовать «выбор РЛС»
	fWord(unitReceive->basicSetting[120]);
	if(word.bit14) checkBoxARPUseRLS->setChecked(true);
	else checkBoxARPUseRLS->setChecked(false);
//		бит 15:	склонение (0 — географическое (истинное), 1 — магнитное)
	if(word.bit15)	radioButtonArpGradientMagnetic->setChecked(true);
	else radioButtonArpGradientGeographic->setChecked(true);
//биты 1,0:	номер АРП
	a1 = word.bit1*2+word.bit0; 
	comboBoxArpNumber->setCurrentIndex(a1);
//127	порт выхода на осциллограф
//	младший байт: канал 1
//	0: выключен		-	23
//	1: >ВЗ			-	1
//	2: >П			-	2
//	3: >А
//	4: >М
//	5: >С
//	6: З>
//	7: П>
//	8: А>
//	9: М>
//	10: С>
//	11: ПЗК
//	12: Т1
//	13: Т2
//	14: Т3
	a1 = unitReceive->basicSetting[127];
	a1&=0xff;
	if(a1==0)buttonGroupOsc1->button(23)->setChecked(true);
	else
	{
		if(a1<15 )
			buttonGroupOsc1->button(a1)->setChecked(true);
	}
//	старший байт: канал2
//	0: выключен
//	1: К1
//	2: К1
//	3: К1
//	4: К1
//	5: К1
//	6: К1
//	7: К1
//	8: К1
	a2 = unitReceive->basicSetting[127];
	a2&=0xff00;
	a2>>=8;
	if(a2<9)
	{
		if(a1>5 || a1==0)
		{
			buttonGroupOsc2->button(a2)->setChecked(true);
			for(int i=1;i<9;i++)
				buttonGroupOsc2->button(i)->setEnabled(true);
		}
		if(a1>0 && a1<6)
		{
			buttonGroupOsc2->button(0)->setChecked(true);
			for(int i=1;i<9;i++)
				buttonGroupOsc2->button(i)->setEnabled(false);
		}
	}
//все
//Переключаемые параметры
	char nRls0[8],nRls1[8];
//	char ch;int k0,k1;
	for (int i=0;i<8;i++)
	{
		k0=i;
		if(i/2*2==i)
		{
			ch = firstChar(unitReceive->isSelectedParameters(0,i/2));
			if(ch == 0x00) break;
			nRls0[i]=ch;
		}
		else
		{
			ch  = secondChar(unitReceive->isSelectedParameters(0,i/2));
			if(ch == 0x0)break;
			nRls0[i] = ch;
		}
	}
	for (int i=0;i<8;i++)
	{
		k1=i;
		if(i/2*2==i)
		{
			ch = firstChar(unitReceive->isSelectedParameters(1,i/2));
			if(ch == 0x00) break;
			nRls1[i]=ch;
		}
		else
		{
			ch  = secondChar(unitReceive->isSelectedParameters(1,i/2));
			if(ch == 0x0)break;
			nRls1[i] = ch;
		}
	}

	str2 = QString::fromAscii(nRls0,k0);
	while(str2.right(1)==tr(" ")||str2.right(1) == tr(""))
	{
		str2=str2.mid(0,str2.size()-1);
		if(str2.size()==0)break;
//		str1=str2;
	}

	if(!lineEditNameRls0->hasFocus())
		lineEditNameRls0->setText(str2);
	str2 = QString::fromAscii(nRls1,k1);
	if(!lineEditNameRls1->hasFocus())
		lineEditNameRls1->setText(str2);
//точка стояния
	a0=unitReceive->isSelectedParameters(0,8);
	str=QString("%1").arg(a0);
	if(!lineEditRls0PointStandingDistance->hasFocus())
		lineEditRls0PointStandingDistance->setText(str);
	a0=unitReceive->isSelectedParameters(0,9);
	a1 = a0/60;
	a2 = a0 - (a1*60);
	str = QString("%1").arg(a1);
	str.append(QString("°%1'").arg(a2,2,10,QLatin1Char( '0' )));
	if(!lineEditRls0PointStandingAzimuth->hasFocus())
		lineEditRls0PointStandingAzimuth->setText(str);
	a0=unitReceive->isSelectedParameters(1,8);
	str=QString("%1").arg(a0);
	if(!lineEditRls1PointStandingDistance->hasFocus())
		lineEditRls1PointStandingDistance->setText(str);
	a0=unitReceive->isSelectedParameters(1,9);
	a1 = a0/60;
	a2 = a0 - (a1*60);
	str = QString("%1").arg(a1);
	str.append(QString("°%1'").arg(a2,2,10,QLatin1Char( '0' )));
	if(!lineEditRls1PointStandingAzimuth->hasFocus())
		lineEditRls1PointStandingAzimuth->setText(str);
	a1=unitReceive->isSelectedParameters(0,10);
	fWord(a1);
	if(word.bit2 == 0) radioButtonFizPoz->setChecked(true);
	else radioButtonFizNeg->setChecked(true);
	if(word.bit3 == 0) radioButtonLogPoz->setChecked(true);
	else radioButtonLogNeg->setChecked(true);
	radioButtonRls0TypeDrl6 = ui.radioButton_18;
//	radioButtonRls0TypeDrl6->setCheckable(true);
	radioButtonRls0TypeDrl10 = ui.radioButton_19;
//	radioButtonRls0TypeDrl10->setCheckable(true);
	radioButtonRls1TypeDrl6 = ui.radioButton_104;
	radioButtonRls1TypeDrl10 = ui.radioButton_105;

//10	138	266	переключаемые параметры РЛС
	fWord(unitReceive->isSelectedParameters(0,10));
	if(!word.bit1) radioButtonRls0TypeDrl6->setChecked(true);
	else radioButtonRls0TypeDrl10->setChecked(true) ;
	if(word.bit0) checkBoxRls0LabelAngleOn->setChecked(true);
	else checkBoxRls0LabelAngleOn->setChecked(false);
	if(word.bit4) ui.checkBox_3->setChecked(true);
	else ui.checkBox_3->setChecked(false);
//
	fWord(unitReceive->isSelectedParameters(1,10));
	if(!word.bit1) radioButtonRls1TypeDrl6->setChecked(true);
	else radioButtonRls1TypeDrl10->setChecked(true) ;
	if(word.bit0) checkBoxRls1LabelAngleOn->setChecked(true);
	else checkBoxRls1LabelAngleOn->setChecked(false);
	if(word.bit4) checkBoxRls1LabelAngleCorrection->setChecked(true);
	else checkBoxRls1LabelAngleCorrection->setChecked(false);
//
	fWord(unitReceive->isSelectedParameters(iChoiceRls,10));
	if(word.bit8) ui.groupBox_57->setChecked(true);
	else ui.groupBox_57->setChecked(false);


//36	164	292	удаление торца ВПП от антенны (нулевой километр), м 
	str = QString("%1").arg(toShort(unitReceive->isSelectedParameters(0,36)));
	str2 = QString("%1").arg(toShort(unitReceive->isSelectedParameters(1,36)));
	if(!lineEditRls0EndFaceVPP1->hasFocus())
		lineEditRls0EndFaceVPP1->setText(str);
	if(!lineEditRls1EndFaceVPP1->hasFocus())
		lineEditRls1EndFaceVPP1->setText(str2);
//35	163	291	высота антенны, пересчитанная к торцу ВП36	164	292
	str = QString("%1").arg(toShort(unitReceive->isSelectedParameters(0,35)));
	str2 = QString("%1").arg(toShort(unitReceive->isSelectedParameters(1,35)));
	if(!lineEditRls0HighAerialVPP1->hasFocus())
		lineEditRls0HighAerialVPP1->setText(str);
	if(!lineEditRls1HighAerialVPP1->hasFocus())
		lineEditRls1HighAerialVPP1->setText(str2);
//33	161	289	удаление антенны от продольной оси ВПП (число знаковое), м
	str = QString("%1").arg((short)unitReceive->isSelectedParameters(0,33));
	str2 = QString("%1").arg((short)unitReceive->isSelectedParameters(1,33));
	if(!lineEditRls0DistanceAxisVPP->hasFocus())
		lineEditRls0DistanceAxisVPP->setText(str);
	if(!lineEditRls1DistanceAxisVPP->hasFocus())
		lineEditRls1DistanceAxisVPP->setText(str2);
//37	165	293	удаление точки посадки от антенны, м (напр.1)
	str = QString("%1").arg(toShort(unitReceive->isSelectedParameters(0,37)));
	str2 = QString("%1").arg(toShort(unitReceive->isSelectedParameters(1,37)));
	if(!lineEditRls0PointPlanting1->hasFocus())
		lineEditRls0PointPlanting1->setText(str);
	if(!lineEditRls1PointPlanting1->hasFocus())
		lineEditRls1PointPlanting1->setText(str2);

//41	164	292	удаление торца ВПП от антенны (нулевой километр), м 
	str = QString("%1").arg(toShort(unitReceive->isSelectedParameters(0,41)));
	str2 = QString("%1").arg(toShort(unitReceive->isSelectedParameters(1,41)));
	if(!lineEditRls0EndFaceVPP2->hasFocus())
		lineEditRls0EndFaceVPP2->setText(str);
	if(!lineEditRls1EndFaceVPP2->hasFocus())
		lineEditRls1EndFaceVPP2->setText(str2);
//40	163	291	высота антенны, пересчитанная к торцу ВП36	164	292
	str = QString("%1").arg(toShort(unitReceive->isSelectedParameters(0,40)));
	str2 = QString("%1").arg(toShort(unitReceive->isSelectedParameters(1,40)));
	if(!lineEditRls0HighAerialVPP2->hasFocus())
		lineEditRls0HighAerialVPP2->setText(str);
	if(!lineEditRls1HighAerialVPP2->hasFocus())
		lineEditRls1HighAerialVPP2->setText(str2);
//42	165	293	удаление точки посадки от антенны, м (напр.1)
	str = QString("%1").arg(toShort(unitReceive->isSelectedParameters(0,42)));
	str2 = QString("%1").arg(toShort(unitReceive->isSelectedParameters(1,42)));
	if(!lineEditRls0PointPlanting2->hasFocus())
		lineEditRls0PointPlanting2->setText(str);
	if(!lineEditRls1PointPlanting2->hasFocus())
		lineEditRls1PointPlanting2->setText(str2);
//44	172	300	младший байт: размах глиссады в градусах от 0є до указанного значения
	a1=unitReceive->isSelectedParameters(0,44);
	a2=a1;
	a1&=0xff;
	a2&=0xff00;
	a2>>=8;
	str=QString("%1").arg(toChar(a1));
	str2=QString("%1").arg(toChar(a2));
	if(!lineEditRls0ScopeG->hasFocus())
		lineEditRls0ScopeG->setText(str);
	if(!lineEditRls0ScopeK->hasFocus())
		lineEditRls0ScopeK->setText(str2);
	a1=unitReceive->isSelectedParameters(1,44);
	a2=a1;
	a1&=0xff;
	a2&=0xff00;
	a2>>=8;
	str=QString("%1").arg(toChar(a1));
	str2=QString("%1").arg(toChar(a2));
	if(!lineEditRls1ScopeG->hasFocus())
		lineEditRls1ScopeG->setText(str);
	if(!lineEditRls1ScopeK->hasFocus())
		lineEditRls1ScopeK->setText(str2);
//47	175	303	доворот КО
	a1 = unitReceive->isSelectedParameters(0,47);
	a3=to12bit(a1);
	a3&=0xfff;
	d1=a3*360./4096.;
//	str = QString("%1/").arg(a3)+QString("%1°").arg(d1,0,'f',1);
	str = QString("%1°/").arg(d1,0,'f',1)+QString("%1").arg(a3);
	str.replace(str.indexOf(QChar('.')),1,QChar(','));
//	str = QString("%1").arg(to12bit(a1));
	if(!lineEditRls0TurnKO->hasFocus())
		lineEditRls0TurnKO->setText(str);
	a2 = unitReceive->isSelectedParameters(1,47);
	a3=to12bit(a2);
	a3&=0xfff;
	d1=a3*360./4096.;
//	str2 = QString("%1/").arg(a3)+QString("%1°").arg(d1,0,'f',1);
	str2 = QString("%1°/").arg(d1,0,'f',1)+QString("%1").arg(a3);
	str2.replace(str2.indexOf(QChar('.')),1,QChar(','));
//	str2 = QString("%1").arg(to12bit(a2));
	if(!lineEditRls1TurnKO->hasFocus())
		lineEditRls1TurnKO->setText(str2);
//45	173	301	смещение видео пассива
	a1 = unitReceive->isSelectedParameters(0,45);
	str = QString("%1").arg(toShort(a1));			//12.07.2015
	if(!lineEditRls0DisPlaceVPass->hasFocus())
		lineEditRls0DisPlaceVPass->setText(str);

	a2 = unitReceive->isSelectedParameters(1,45);
	str2 = QString("%1").arg(toShort(a2));			//12.07.2015
	if(!lineEditRls1DisPlaceVPass->hasFocus())
		lineEditRls1DisPlaceVPass->setText(str2);
//46	174	302	смещение видео актив
	a1 = unitReceive->isSelectedParameters(0,46);
	a2 = unitReceive->isSelectedParameters(1,46);
	str = QString("%1").arg(toShort(a1));			//12.07.2015
	str2 = QString("%1").arg(toShort(a2));			//12.07.2015
	if(!lineEditRls0DisPlaceVAct->hasFocus())
		lineEditRls0DisPlaceVAct->setText(str);
	if(!lineEditRls1DisPlaceVAct->hasFocus())
		lineEditRls1DisPlaceVAct->setText(str2);

//14	142	270	порог запуска		THR9		CHK32	ЦАП2 канал 1	3
	a1 = unitReceive->isSelectedParameters(iChoiceRls,14);
	str = QString("%1").arg(a1);
	if(!lineEditRiftZ->hasFocus())
	{
		if(a1<1024&&a1>=0)
		{
			lineEditRiftZ->setText(str);
			widgetRiftZ->setLevelEdgeValue(0,a1);
		}
		else
		{
			a1=0;
			str = QString("%1").arg(a1,1,10,char0);
			lineEditRiftZ->setText(str);
			widgetRiftZ->setLevelEdgeValue(0,a1);
		}
	}
//21	149	277	порог севера			THR11	CHK30	ЦАП2 канал 3	23
	a1 = unitReceive->isSelectedParameters(iChoiceRls,21);
	str = QString("%1").arg(a1);
	if(!lineEditRiftNorth->hasFocus())
	{
		if(a1<1024&&a1>=0)
		{
			lineEditRiftNorth->setText(str);
		}
		else
		{
			a1=0;
			str = QString("%1").arg(a1,1,10,char0);
			lineEditRiftNorth->setText(str);
		}
	}
//22	150	278	порог МАИ / МУ полож. 	THR15	CHK26	ЦАП2 канал 7	18
	a1 = unitReceive->isSelectedParameters(iChoiceRls,22);
	str = QString("%1").arg(a1);
	if(!lineEditRiftMai->hasFocus())
	{
		if(a1<1024&&a1>=0)
		{
			lineEditRiftMai->setText(str);
		}
		else
		{
			a1=0;
			str = QString("%1").arg(a1,1,10,char0);
			lineEditRiftMai->setText(str);
		}
	}
//24	152	280	младший байт: компенсация запуска	POT1 канал 1
//старший байт: компенсация пасс		POT1 канал 2
	a1 = unitReceive->isSelectedParameters(iChoiceRls,24);
	a2 = a1;
	a1 &= 0xff;
	a2 &=0xff00;
	a2 >>= 8;
	str = QString("%1").arg(a1);
	if(!lineEditCompensZ->hasFocus())
		lineEditCompensZ->setText(str);
	str = QString("%1").arg(a2);
	if(!lineEditCompensPass->hasFocus())
		lineEditCompensPass->setText(str);
//25	153	281	младший байт: компенсация акт		POT2 канал 1
//		старший байт: компенсация входа 1	POT3 канал 2
//26	154	282	младший байт: компенсация входа 2	POT3 канал 1
	a1 = unitReceive->isSelectedParameters(iChoiceRls,25);
	a2 = a1;
	a1 &= 0xff;
	a2 &= 0xff00;
	a2 >>= 8;
	str = QString("%1").arg(a1);
	if(!lineEditCompensAct->hasFocus())
		lineEditCompensAct->setText(str);
	str = QString("%1").arg(a2);
	if(!lineEditCompensInput1->hasFocus())
		lineEditCompensInput1->setText(str);
	a3 = unitReceive->isSelectedParameters(iChoiceRls,26);
	a3 &= 0xff;
	str = QString("%1").arg(a3);
	if(!lineEditCompensInput2->hasFocus())
		lineEditCompensInput2->setText(str);
//28	156	284	процент порога запуска от измеренного запуска в формате 0.16
//(0x8000=50)
	a1 = unitReceive->isSelectedParameters(iChoiceRls,28);
	a2 = (ushort)((double)a1*(double)100/(double)0x10000+.5);
	str = QString("%1").arg(a2);//	str = QString("%1").arg(a1,0,16);
	if(!lineEditAvtoRiftZ->hasFocus())
		lineEditAvtoRiftZ->setText(str);
//29	157	285	процент порога видео от измеренного запуска в формате 0.16
//(0x8000=50)
	a1 = unitReceive->isSelectedParameters(iChoiceRls,29);
	a2 = (ushort)((double)a1*(double)100/(double)0x10000+.5);
	str = QString("%1").arg(a2);//	str = QString("%1").arg(a1,0,16);
	if(!lineEditAvtoRiftV->hasFocus())
		lineEditAvtoRiftV->setText(str);
//15	143	271	порог видео пасс 1		THR3		CHK22	ЦАП1 канал 3	23
	a1 = unitReceive->isSelectedParameters(iChoiceRls,15);
	str = QString("%1").arg(a1);
	if(!lineEditRiftPass1->hasFocus())
	{
		if(a1<1024&&a1>=0)
		{
			lineEditRiftPass1->setText(str);
			ui.widget_2->setLevelEdgeValue(0,a1);
		}
		else
		{
			a1=0;
			str = QString("%1").arg(a1,1,10,char0);
			lineEditRiftPass1->setText(str);
			ui.widget_2->setLevelEdgeValue(0,a1);
		}
	}
//18	146	274	порог видео акт 1		THR6		CHK24	ЦАП1 канал 6	7
	a1 = unitReceive->isSelectedParameters(iChoiceRls,18);
	str = QString("%1").arg(a1);
	if(!lineEditRiftAct1->hasFocus())
	{
		if(a1<1024&&a1>=0)
		{
			lineEditRiftAct1->setText(str);
			ui.widget_3->setLevelEdgeValue(0,a1);
		}
		else
		{
			a1=0;
			str = QString("%1").arg(a1,1,10,char0);
			lineEditRiftAct1->setText(str);
			ui.widget_3->setLevelEdgeValue(0,a1);
		}
	}

//56	184	312	младший байт: подсвет глиссады — верхний порог
//старший байт: подсвет глиссады — нижний порог
	a1 = unitReceive->isSelectedParameters(0,56);
	a2 = a1;
	a1 &= 0xff;
	a2 &= 0xff00;
	a2 >>= 8;
	str = QString("%1").arg(a1);
	str2 = QString("%1").arg(a2);
	if(!lineEditRls0MuGMaxRift->hasFocus())
		lineEditRls0MuGMaxRift->setText(str);
	if(!lineEditRls0MuGMinRift->hasFocus())
		lineEditRls0MuGMinRift->setText(str2);
	a1 = unitReceive->isSelectedParameters(1,56);
	a2 = a1;
	a1 &= 0xff;
	a2 &= 0xff00;
	a2 >>= 8;
	str = QString("%1").arg(a1);
	str2 = QString("%1").arg(a2);
	if(!lineEditRls1MuGMaxRift->hasFocus())
		lineEditRls1MuGMaxRift->setText(str);
	if(!lineEditRls1MuGMinRift->hasFocus())
		lineEditRls1MuGMinRift->setText(str2);
//57	185	313	младший байт: подсвет курса — верхний порог
//старший байт: подсвет курса — нижний порог
	a1 = unitReceive->isSelectedParameters(0,57);
	a2 = a1;
	a1 &= 0xff;
	a2 &= 0xff00;
	a2 >>= 8;
	str = QString("%1").arg(a1);
	str2 = QString("%1").arg(a2);
	if(!lineEditRls0MuKMaxRift->hasFocus())
		lineEditRls0MuKMaxRift->setText(str);
	if(!lineEditRls0MuKMinRift->hasFocus())
		lineEditRls0MuKMinRift->setText(str2);
	a1 = unitReceive->isSelectedParameters(1,57);
	a2 = a1;
	a1 &= 0xff;
	a2 &= 0xff00;
	a2 >>= 8;
	str = QString("%1").arg(a1);
	str2 = QString("%1").arg(a2);
	if(!lineEditRls1MuKMaxRift->hasFocus())
		lineEditRls1MuKMaxRift->setText(str);
	if(!lineEditRls1MuKMinRift->hasFocus())
		lineEditRls1MuKMinRift->setText(str2);
//48	176	304	младший байт: смещение 0 глиссады
//старший байт: смещение 0 курса
	a1 = unitReceive->isSelectedParameters(0,48);
	a2 = a1;
	a1 &= 0xff;
	a2 &= 0xff00;
	a2 >>= 8;
	str = QString("%1").arg(toChar(a1),1,10,char0);
	str2 = QString("%1").arg(toChar(a2),1,10,char0);
	if(!lineEditRls0DisplaceNulG->hasFocus())
		lineEditRls0DisplaceNulG->setText(str);
	if(!lineEditRls0DisplaceNulK->hasFocus())
		lineEditRls0DisplaceNulK->setText(str2);
	a1 = unitReceive->isSelectedParameters(1,48);
	a2 = a1;
	a1 &= 0xff;
	a2 &= 0xff00;
	a2 >>= 8;
	str = QString("%1").arg(toChar(a1),1,10,char0);
	str2 = QString("%1").arg(toChar(a2),1,10,char0);
	if(!lineEditRls1DisplaceNulG->hasFocus())
		lineEditRls1DisplaceNulG->setText(str);
	if(!lineEditRls1DisplaceNulK->hasFocus())
		lineEditRls1DisplaceNulK->setText(str2);

//49	177	305	младший байт: совмещение глиссады
//старший байт: совмещение курса
	a1 = unitReceive->isSelectedParameters(0,49);
	a2 = a1;
	a1 &= 0xff;
	a2 &= 0xff00;
	a2 >>= 8;
	str = QString("%1").arg(toChar(a1),1,10,char0);
	str2 = QString("%1").arg(toChar(a2),1,10,char0);
	if(!lineEditRls0CombG->hasFocus())
		lineEditRls0CombG->setText(str);
	if(!lineEditRls0CombK->hasFocus())
		lineEditRls0CombK->setText(str2);
	a1 = unitReceive->isSelectedParameters(1,49);
	a2 = a1;
	a1 &= 0xff;
	a2 &= 0xff00;
	a2 >>= 8;
	str = QString("%1").arg(toChar(a1),1,10,char0);
	str2 = QString("%1").arg(toChar(a2),1,10,char0);
	if(!lineEditRls1CombG->hasFocus())
		lineEditRls1CombG->setText(str);
	if(!lineEditRls1CombK->hasFocus())
		lineEditRls1CombK->setText(str2);
//58	186	314	напряжение ЭИПА 7? глиссады на курсе
	a1 = unitReceive->isSelectedParameters(iChoiceRls,58);
	str = QString("%1").arg(to12bit5v(a1),0, 'F', 2);
	str = QString("%1").arg((short)a1);
	if(!lineEditRls0UEipa7GonK->hasFocus())
		lineEditRls0UEipa7GonK->setText(str);
//59	187	315	напряжение ЭИПА 0? глиссады на курсе
	a1 = unitReceive->isSelectedParameters(iChoiceRls,59);
	str = QString("%1").arg(to12bit5v(a1),0, 'F', 2);
	str = QString("%1").arg((short)a1);
	if(!lineEditRls0UEipa0GonK->hasFocus())
		lineEditRls0UEipa0GonK->setText(str);
//61	189	317	напряжение ЭИПА 10? курса на глиссаде
	a1 = unitReceive->isSelectedParameters(iChoiceRls,61);
	str = QString("%1").arg(to12bit5v(a1),0, 'F', 2);
	str = QString("%1").arg((short)a1);
	if(!lineEditRls0UEipa10KonG->hasFocus())
		lineEditRls0UEipa10KonG->setText(str);
//62	190	318	напряжение ЭИПА 0? курса на глиссаде
	a1 = unitReceive->isSelectedParameters(iChoiceRls,62);
	str = QString("%1").arg(to12bit5v(a1),0, 'F', 2);
	str = QString("%1").arg((short)a1);
	if(!lineEditRls0UEipa0KonG->hasFocus())
		lineEditRls0UEipa0KonG->setText(str);
//63	191	319	напряжение ЭИПА -10? курса на глиссаде
	a1 = unitReceive->isSelectedParameters(iChoiceRls,63);
	str = QString("%1").arg(to12bit5v(a1),0, 'F', 2);
	str = QString("%1").arg((short)a1);
	if(!lineEditRls0UEipa_10KonG->hasFocus())
		lineEditRls0UEipa_10KonG->setText(str);
//64	192	320	блокировка видео 0...4000 (25м)
	a1 = unitReceive->isSelectedParameters(0,64);
	str = QString("%1").arg((int)toShort(a1)*25);
	if(!lineEditRls0BlkVideo->hasFocus())
		lineEditRls0BlkVideo->setText(str);
	a2 = unitReceive->isSelectedParameters(1,64);
	str2 = QString("%1").arg((int)toShort(a2)*25);
	if(!lineEditRls1BlkVideo->hasFocus())
		lineEditRls1BlkVideo->setText(str2);
        if(ui.rBuNp1->isChecked())
        {
//66	194	322	процент МУ глиссады 7°
        a1 = unitReceive->isSelectedParameters(iChoiceRls,66);
	str = QString("%1").arg(to2byteP(a1),0, 'F', 2);
	str = QString("%1").arg((int)(to2byteP100(a1)));
	if(!lineEditRls0MuG7->hasFocus())		
		lineEditRls0MuG7->setText(str);
//67	195	323	процент МУ глиссады 0°
        a1 = unitReceive->isSelectedParameters(iChoiceRls,67);
	str = QString("%1").arg(to2byteP(a1),0, 'F', 2);
	str = QString("%1").arg((int)(to2byteP100(a1)));
	if(!lineEditRls0MuG0->hasFocus()) 		
		lineEditRls0MuG0->setText(str);
//71	199	327	процент МУ курса -10°
        a1 = unitReceive->isSelectedParameters(iChoiceRls,71);
	str = QString("%1").arg(to2byteP(a1),0, 'F', 2);
	str = QString("%1").arg((int)(to2byteP100(a1)));
	if(!lineEditRls0MuK_10->hasFocus()) 		
		lineEditRls0MuK_10->setText(str);
//70	198	326	процент МУ курса 0°
        a1 = unitReceive->isSelectedParameters(iChoiceRls,70);
	str = QString("%1").arg(to2byteP(a1),0, 'F', 2);
	str = QString("%1").arg((int)(to2byteP100(a1)));
	if(!lineEditRls0MuK0->hasFocus())		
		lineEditRls0MuK0->setText(str);
//69	197	325	процент МУ курса +10°
        a1 = unitReceive->isSelectedParameters(iChoiceRls,69);
	str = QString("%1").arg(to2byteP(a1),0, 'F', 2);
	str = QString("%1").arg((int)(to2byteP100(a1)));
	if(!lineEditRls0MuK10->hasFocus())		
		lineEditRls0MuK10->setText(str);
        }else if(ui.rBuNp2->isChecked())
        {
            //72	200	328	процент МУ глиссады 7°
                    a1 = unitReceive->isSelectedParameters(iChoiceRls,72);
                    str = QString("%1").arg(to2byteP(a1),0, 'F', 2);
                    str = QString("%1").arg((int)(to2byteP100(a1)));
                    if(!lineEditRls0MuG7->hasFocus())
                            lineEditRls0MuG7->setText(str);
            //73	201	329	процент МУ глиссады 0°
                    a1 = unitReceive->isSelectedParameters(iChoiceRls,73);
                    str = QString("%1").arg(to2byteP(a1),0, 'F', 2);
                    str = QString("%1").arg((int)(to2byteP100(a1)));
                    if(!lineEditRls0MuG0->hasFocus())
                            lineEditRls0MuG0->setText(str);
            //77	205	333	процент МУ курса -10°
                    a1 = unitReceive->isSelectedParameters(iChoiceRls,77);
                    str = QString("%1").arg(to2byteP(a1),0, 'F', 2);
                    str = QString("%1").arg((int)(to2byteP100(a1)));
                    if(!lineEditRls0MuK_10->hasFocus())
                            lineEditRls0MuK_10->setText(str);
            //76	204	332	процент МУ курса 0°
                    a1 = unitReceive->isSelectedParameters(iChoiceRls,76);
                    str = QString("%1").arg(to2byteP(a1),0, 'F', 2);
                    str = QString("%1").arg((int)(to2byteP100(a1)));
                    if(!lineEditRls0MuK0->hasFocus())
                            lineEditRls0MuK0->setText(str);
            //75	203	331	процент МУ курса +10°
                    a1 = unitReceive->isSelectedParameters(iChoiceRls,75);
                    str = QString("%1").arg(to2byteP(a1),0, 'F', 2);
                    str = QString("%1").arg((int)(to2byteP100(a1)));
                    if(!lineEditRls0MuK10->hasFocus())
                            lineEditRls0MuK10->setText(str);
        }
//84…91  212…219  340…347  название АРП 16
//	ch;int k0,k1;
	for (int i=0;i<8;i++)
	{
		k0=i;
		if(i/2*2==i)
		{
			ch = firstChar(unitReceive->isSelectedParameters(iChoiceArp,i/2+84));
			if(ch == 0x00) break;
			nameSource[i]=ch;
		}
		else
		{
			ch  = secondChar(unitReceive->isSelectedParameters(iChoiceArp,i/2+84));
			if(ch == 0x0)break;
			nameSource[i] = ch;
		}
	}
	str2 = QString::fromAscii(nameSource,k0);
	if(!lineEditRls0NameArp->hasFocus())
		lineEditRls0NameArp->setText(str2);

//92	220	348	дальность точки стояния, метры
	a1 = unitReceive->isSelectedParameters(iChoiceArp,92);
	str = QString("%1").arg(a1);
	if(!lineEditRls0ArpPointStandingDistance->hasFocus())
		lineEditRls0ArpPointStandingDistance->setText(str);
//93	221	349	азимут точки стояния, минуты (градусы ? 60)
	a0 = unitReceive->isSelectedParameters(iChoiceArp,93);
	a1 = a0/60;
	a2 = a0 - (a1*60);
	str = QString("%1").arg(a1);
	str.append(QString("°%1'").arg(a2,2,10,QLatin1Char( '0' )));
	if(!lineEditRls0ArpPointStandingAzimuth->hasFocus())
		lineEditRls0ArpPointStandingAzimuth->setText(str);
//94	222	350	разрешение каналов
	fWord(unitReceive->isSelectedParameters(iChoiceArp,94));
	if(word.bit0)
	{
		ui.grBoCh1->setChecked(true);
	}
	else
	{
		ui.grBoCh1->setChecked(false);
	}
	if(word.bit1)
	{
		ui.grBoCh2->setChecked(true);
	}
	else
	{
		ui.grBoCh2->setChecked(false);
	}
	if(word.bit2)
	{
		ui.grBoCh3->setChecked(true);
	}
	else
	{
		ui.grBoCh3->setChecked(false);
	}
	if(word.bit3)
	{
		ui.grBoCh4->setChecked(true);
	}
	else
	{
		ui.grBoCh4->setChecked(false);
	}
//96	224	352	настройки АРП1 1
//			бит 1: 0 — без коррекции, 1 — флаг «без коррекции» сброшен
//			биты 4…2: минимальная длительность (0?0, 1?0,1, 2?0,2 и т.д.)
//			биты 7…5: задержка в секундах
//			биты 14…8: порог в процентах
	a1 = isUnit(97);
	fWord(a1);
	a2 = word.bit4*16+(word.bit3*8)+(word.bit2*4)+(word.bit1*2)+word.bit0;
	if(a2<25) comboBoxMinTimeCh1->setCurrentIndex(a2);
	a2 = word.bit9*16+(word.bit8*8)+(word.bit7*4)+(word.bit6*2)+word.bit5;
	if(a2<25) comboBoxMinTime2Ch1->setCurrentIndex(a2);
	a2 = word.bit12*4+(word.bit11*2)+word.bit10;
	if(a2<8) comboBoxDelayCh1->setCurrentIndex(a2);
//96
	a1 = isUnit(96);
	if( a1 > 63 ) a1 = 63;
	a1++;
	str=QString("%1").arg(a1);
	if(!lineEditNumberCh1->hasFocus())
		lineEditNumberCh1->setText(str);
//98
	a1 = unitReceive->isSelectedParameters(0,98);
	a1 = isUnit(98);
	if(a1>5000)a1=5000;
	str = ch110to1_1(a1);
	if(!lineEditRiftCh1->hasFocus())
		lineEditRiftCh1->setText(str);
//99
	a1 = unitReceive->isSelectedParameters(0,99);
	a1 = isUnit(99);
	if(a1>5000)a1=5000;
	str = ch110to1_1(a1);
	if(!lineEditRift2Ch1->hasFocus())
		lineEditRift2Ch1->setText(str);
//100
	a1 = unitReceive->isSelectedParameters(0,100);
	a1 = isUnit(100);
	a2 = unitReceive->isSelectedParameters(0,101);
	a2 = isUnit(101);
	uk0 = a2;
	uk0<<=16;
	uk0|=a1;
	str=QString("%1").arg(uk0);
	if(!ui.liEdFreq1->hasFocus())
		ui.liEdFreq1->setText(str);
//*******************************************************
//104	224	352	настройки АРП2 1
//			бит 1: 0 — без коррекции, 1 — флаг «без коррекции» сброшен
//			биты 4…2: минимальная длительность (0?0, 1?0,1, 2?0,2 и т.д.)
//			биты 7…5: задержка в секундах
//			биты 14…8: порог в процентах
	a1 = unitReceive->isSelectedParameters(0,105);
	a1 = isUnit(105);
	fWord(a1);
	a2 = word.bit4*16+(word.bit3*8)+(word.bit2*4)+(word.bit1*2)+word.bit0;
	if(a2<25) comboBoxMinTimeCh2->setCurrentIndex(a2);
	a2 = word.bit9*16+(word.bit8*8)+(word.bit7*4)+(word.bit6*2)+word.bit5;
	if(a2<25) comboBoxMinTime2Ch2->setCurrentIndex(a2);
	a2 = word.bit12*4+(word.bit11*2)+word.bit10;
	if(a2<8) comboBoxDelayCh2->setCurrentIndex(a2);
//104
	a1 = unitReceive->isSelectedParameters(0,104);
	a1 = isUnit(104);
	if( a1 > 63 ) a1 = 63;
	a1++;
	str=QString("%1").arg(a1);
	if(!lineEditNumberCh2->hasFocus())
		lineEditNumberCh2->setText(str);
//106
	a1 = unitReceive->isSelectedParameters(0,106);
	a1 = isUnit(106);
	if(a1>5000)a1=5000;
	str = ch110to1_1(a1);
	if(!lineEditRiftCh2->hasFocus())
		lineEditRiftCh2->setText(str);
//107
	a1 = unitReceive->isSelectedParameters(0,107);
	a1 = isUnit(107);
	if(a1>5000)a1=5000;
	str = ch110to1_1(a1);
	if(!lineEditRift2Ch2->hasFocus())
		lineEditRift2Ch2->setText(str);
//108
	a1 = unitReceive->isSelectedParameters(0,108);
	a1 = isUnit(108);
	a2 = unitReceive->isSelectedParameters(0,109);
	a2 = isUnit(109);
	uk0 = a2;
	uk0<<=16;
	uk0|=a1;
	str=QString("%1").arg(uk0);
	if(!ui.liEdFreq2->hasFocus())
		ui.liEdFreq2->setText(str);
//*******************************************************
//112	224	352	настройки АРП3 1
//			бит 1: 0 — без коррекции, 1 — флаг «без коррекции» сброшен
//			биты 4…2: минимальная длительность (0?0, 1?0,1, 2?0,2 и т.д.)
//			биты 7…5: задержка в секундах
//			биты 14…8: порог в процентах
	a1 = unitReceive->isSelectedParameters(0,113);
	a1 = isUnit(113);
	fWord(a1);
//	if(word.bit1)checkBoxNoCorrectionCh3->setChecked(false);
//	else checkBoxNoCorrectionCh3->setChecked(true);
	a2 = word.bit4*16+(word.bit3*8)+(word.bit2*4)+(word.bit1*2)+word.bit0;
	if(a2<25) comboBoxMinTimeCh3->setCurrentIndex(a2);
	a2 = word.bit9*16+(word.bit8*8)+(word.bit7*4)+(word.bit6*2)+word.bit5;
	if(a2<25) comboBoxMinTime2Ch3->setCurrentIndex(a2);
	a2 = word.bit12*4+(word.bit11*2)+word.bit10;
	if(a2<8) comboBoxDelayCh3->setCurrentIndex(a2);
//112
	a1 = unitReceive->isSelectedParameters(0,112);
	a1 = isUnit(112);
	if( a1 > 63 ) a1 = 63;
	a1++;
	str=QString("%1").arg(a1);
	if(!lineEditNumberCh3->hasFocus())
		lineEditNumberCh3->setText(str);
//114
	a1 = unitReceive->isSelectedParameters(0,114);
	a1 = isUnit(114);
	if(a1>5000)a1=5000;
	str = ch110to1_1(a1);
	if(!lineEditRiftCh3->hasFocus())
		lineEditRiftCh3->setText(str);
//115
	a1 = unitReceive->isSelectedParameters(0,115);
	a1 = isUnit(115);
	if(a1>5000)a1=5000;
	str = ch110to1_1(a1);
	if(!lineEditRift2Ch3->hasFocus())
		lineEditRift2Ch3->setText(str);
//116
	a1 = unitReceive->isSelectedParameters(0,116);
	a1 = isUnit(116);
	a2 = unitReceive->isSelectedParameters(0,117);
	a2 = isUnit(117);
	uk0 = a2;
	uk0<<=16;
	uk0|=a1;
	str=QString("%1").arg(uk0);
	if(!ui.liEdFreq3->hasFocus())
		ui.liEdFreq3->setText(str);
//*******************************************************
//120	224	352	настройки АРП4 1
//			бит 1: 0 — без коррекции, 1 — флаг «без коррекции» сброшен
//			биты 4…2: минимальная длительность (0?0, 1?0,1, 2?0,2 и т.д.)
//			биты 7…5: задержка в секундах
//			биты 14…8: порог в процентах
	a1 = unitReceive->isSelectedParameters(0,121);
	a1 = isUnit(121);
	fWord(a1);
//	if(word.bit1)checkBoxNoCorrectionCh4->setChecked(false);
//	else checkBoxNoCorrectionCh4->setChecked(true);
	a2 = word.bit4*16+(word.bit3*8)+(word.bit2*4)+(word.bit1*2)+word.bit0;
	if(a2<25) comboBoxMinTimeCh4->setCurrentIndex(a2);
	a2 = word.bit9*16+(word.bit8*8)+(word.bit7*4)+(word.bit6*2)+word.bit5;
	if(a2<25) comboBoxMinTime2Ch4->setCurrentIndex(a2);
	a2 = word.bit12*4+(word.bit11*2)+word.bit10;
	if(a2<8) comboBoxDelayCh4->setCurrentIndex(a2);
//120
	a1 = unitReceive->isSelectedParameters(0,120);
	a1 = isUnit(120);
	if( a1 > 63 ) a1 = 63;
	a1++;
	str=QString("%1").arg(a1);
	if(!lineEditNumberCh4->hasFocus())
		lineEditNumberCh4->setText(str);
//122
	a1 = unitReceive->isSelectedParameters(0,122);
	a1 = isUnit(122);
	if(a1>5000)a1=5000;
	str = ch110to1_1(a1);
	if(!lineEditRiftCh4->hasFocus())
		lineEditRiftCh4->setText(str);
//123
	a1 = unitReceive->isSelectedParameters(0,123);
	a1 = isUnit(123);
	if(a1>5000)a1=5000;
	str = ch110to1_1(a1);
	if(!lineEditRift2Ch4->hasFocus())
		lineEditRift2Ch4->setText(str);
//124
	a1 = unitReceive->isSelectedParameters(0,124);
	a1 = isUnit(124);
	a2 = unitReceive->isSelectedParameters(0,125);
	a2 = isUnit(125);
	uk0 = a2;
	uk0<<=16;
	uk0|=a1;
	str=QString("%1").arg(uk0);
	if(!ui.liEdFreq4->hasFocus())
		ui.liEdFreq4->setText(str);
//*******************************************************
	uchar ch0,ch1;
	Unn u;
//
	u.bU[0]=blocMeas->uchBloc[6];
	u.bU[1]=blocMeas->uchBloc[7];
	a1=u.uShU[0];
	widgetRiftZ->setLevelEdgeValue(1,a1);
//
	u.bU[0]=blocMeas->uchBloc[8];
	u.bU[1]=blocMeas->uchBloc[9];
	a1=u.uShU[0];
	widgetRiftZ->setLevelEdgeValue(2,a1);
//
	u.bU[0]=blocMeas->uchBloc[10];
	u.bU[1]=blocMeas->uchBloc[11];
	a1=u.uShU[0];
	widgetRiftZ->setLevelEdgeValue(3,a1);
//
	ch0 = blocMeas->uchBloc[16];
	ch1 = blocMeas->uchBloc[17];
	str = QString("0x%1").arg((int)ch0,2,16,QChar('0'));
	ui.label_31->setText(str);
	str = QString("0x%1").arg((int)ch1,2,16,QChar('0'));
	ui.label_25->setText(str);
//16,17 напряжение ЭИПА курса на глиссаде	- Блок измерений
	u.bU[0]=blocMeas->uchBloc[16];
	u.bU[1]=blocMeas->uchBloc[17];
	a1=u.uShU[0];
	str = QString("0x%1").arg(a1,4,16,QChar('0'));
	str = QString("%1").arg((short)a1);
	ui.label_31->setText(str);
//18,19 напряжение ЭИПА глиссады на курсе	- Блок измерений
	u.bU[0]=blocMeas->uchBloc[18];
	u.bU[1]=blocMeas->uchBloc[19];
	a1=u.uShU[0];
	str = QString("0x%1").arg(a1,4,16,QChar('0'));
	str = QString("%1").arg((short)a1);
	ui.label_25->setText(str);
//20,21 развертка глиссады
	u.bU[0]=blocMeas->uchBloc[20];
	u.bU[1]=blocMeas->uchBloc[21];
	a1=u.uShU[0];
	str = QString("0x%1").arg(a1,4,16,QChar('0'));
	str = QString("%1").arg((short)a1,4);
	ui.label_155->setText(str);
	str = QString("%1").arg((short)a1,4);
	ui.label_156->setText(str);
//24,25 минимум развертки глиссады
	u.bU[0]=blocMeas->uchBloc[24];
	u.bU[1]=blocMeas->uchBloc[25];
	a2=u.uShU[0];
	str = QString("%1").arg((short)a2,4);
	if(blocMeas->bArhG)
	{
		str = QString("%1").arg((short)blocMeas->minG,4);
	}
	ui.lineEdit_253->setText(str);
//26,27 максимум развертки глиссады
	u.bU[0]=blocMeas->uchBloc[26];
	u.bU[1]=blocMeas->uchBloc[27];
	a3=u.uShU[0];
	str = QString("%1").arg((short)a3,4);
	if(blocMeas->bArhG)
	{
		str = QString("%1").arg((short)blocMeas->maxG,4);
	}
	ui.lineEdit_252->setText(str);
	short s1,s2,s3,s4=0;
//% фиксация глиссады тек.знач.
	s1=(short)a1;
	s2=(short)a2;
	s3=(short)a3;
	d1 = s1-s2;
	d2 = s3-s2;
	if(d2>0&&d1>=0&&d2>=d1)
	{
		s4=d1/d2*100.;
		s4 = s4==0 ? 1: s4;
		s4 = s4==100 ? 99: s4;
		str = QString("%1").arg(s4,4);
	}else str="";
	ui.label_156->setText(str);

//22,23 развертка курса
	u.bU[0]=blocMeas->uchBloc[22];
	u.bU[1]=blocMeas->uchBloc[23];
	a1=u.uShU[0];
	str = QString("%1").arg((short)a1,4);
	ui.label_167->setText(str);
	str = QString("%1").arg((short)a1,4);
	ui.label_168->setText(str);
//28,29 минимум развертки курса
	u.bU[0]=blocMeas->uchBloc[28];
	u.bU[1]=blocMeas->uchBloc[29];
	a2=u.uShU[0];
	str = QString("%1").arg((short)a2,4);
	if(blocMeas->bArhC)
	{
		str = QString("%1").arg((short)blocMeas->minC,4);
	}
	ui.lineEdit_267->setText(str);
//30,31 максимум развертки курса
	u.bU[0]=blocMeas->uchBloc[30];
	u.bU[1]=blocMeas->uchBloc[31];
	a3=u.uShU[0];
	if(blocMeas->bArhC)
	{
		str = QString("%1").arg((short)blocMeas->maxC);
	}
	str = QString("%1").arg((short)a3,4);
	ui.lineEdit_266->setText(str);
//%
	s1=(short)a1;
	s2=(short)a2;
	s3=(short)a3;
	d1 = s1-s2;
	d2 = s3-s2;
	if(d2>0&&d1>=0&&d2>=d1)
	{
		s4=d1/d2*100.;
		s4 = s4==0 ? 1: s4;
		s4 = s4==100 ? 99: s4;
		str = QString("%1").arg(s4,4);
	}else str="";
	ui.label_168->setText(str);
	cp5066();
}
void Dialog::cp5066()
{
//50-55 64-69 70-75
//29.09.2015
	if(1)
	{
	if(iChoiceRls==0)
	{
		if(ui.rBuNp1->isChecked())
		{
			memcpy(&unitReceive->selectedParameters0[50],
				&unitReceive->selectedParameters0[66],12);
			memcpy(&unitSend->selectedParameters0[50],
				&unitSend->selectedParameters0[66],12);
		}
		else
		{
			memcpy(&unitReceive->selectedParameters0[50],
				&unitReceive->selectedParameters0[72],12);
			memcpy(&unitSend->selectedParameters0[50],
				&unitSend->selectedParameters0[72],12);
		}
	}else
	{
		if(ui.rBuNp1->isChecked())
		{
			memcpy(&unitReceive->selectedParameters1[50],
				&unitReceive->selectedParameters1[66],12);
			memcpy(&unitSend->selectedParameters1[50],
				&unitSend->selectedParameters1[66],12);
		}
		else
		{
			memcpy(&unitReceive->selectedParameters1[50],
				&unitReceive->selectedParameters1[72],12);
			memcpy(&unitSend->selectedParameters1[50],
				&unitSend->selectedParameters1[72],12);
		}
	}
	}
}

//end //Dialog::updateDialog()//////////////////////////////////////

uchar Dialog::firstChar(ushort a1)
{
	uchar ch1;

	a1 = a1;
	a1&=0xff;
	ch1 = a1;
	return ch1;
}
uchar Dialog::secondChar(ushort a1)
{
	uchar ch1;
	a1&=0xff00;
	a1>>=8;
	ch1 = a1;
	return ch1;
}
void Dialog::clickGroupOsc1(int id)
{
    QList<QAbstractButton *> buttons = buttonGroupOsc1->buttons();
    foreach (QAbstractButton *button, buttons) 
	{
    if (buttonGroupOsc1->button(id) != button)
        button->setChecked(false);
    }
}
void Dialog::clickGroupOsc2(int id)
{
    QList<QAbstractButton *> buttons = buttonGroupOsc2->buttons();
    foreach (QAbstractButton *button, buttons) 
	{
    if (buttonGroupOsc2->button(id) != button)
        button->setChecked(false);
    }
}
void Dialog::toggleRadioButtonQuantityRLS(bool checked)
{
	if(checked == false) return;
	if(radioButtonQuantityRLS1->isChecked())
	{
		groupBoxRLS2->setEnabled(false);
		groupBoxPRL2->setEnabled(false);

	}
	if(radioButtonQuantityRLS2->isChecked())
	{
		groupBoxRLS2->setEnabled(true);
		groupBoxPRL2->setEnabled(true);
	}
}
void Dialog::slChBoInp(bool checked)
{
	if(!checked)
	{
		if(!ui.chBoOutp->isChecked())
		{
			ui.chBoOutp->setChecked(true);
		}
	}
	return;
}
void Dialog::slChBoOutp(bool checked)
{
	if(!checked)
	{
		if(!ui.chBoInp->isChecked())
		{
			ui.chBoInp->setChecked(true);
		}
	}
	return;
}
void Dialog::toggleRadioButtonTypeRls(bool checked)
{
	if(checked == false) return;
	if(radioButtonTypeRlsOff->isChecked())
	{
		groupBoxQuantityRLS->setEnabled(false);
		groupBoxRLS1->setEnabled(false);
		groupBoxRLS2->setEnabled(false);
		groupBoxPRL1->setEnabled(false);
		groupBoxPRL2->setEnabled(false);
		groupBoxRazvertka->setEnabled(false);

		groupBoxNumberRLS->setEnabled(false);
		groupBoxDistance->setEnabled(false);
		groupBoxGradient->setEnabled(false);
		groupBoxZandVPassiv->setEnabled(false);
		groupBoxVActiv->setEnabled(false);
		groupBoxCourseLanding->setEnabled(false);
		labelCurrentValue->setText(tr("2"));
	}
	if(radioButtonTypeRlsKO->isChecked())
	{
		groupBoxQuantityRLS->setEnabled(true);
		groupBoxRazvertka->setEnabled(true);
		if(radioButtonQuantityRLS2->isChecked())
		{
			groupBoxRLS1->setEnabled(true);
			groupBoxRLS2->setEnabled(true);
			groupBoxPRL1->setEnabled(true);
			groupBoxPRL2->setEnabled(true);
		}
		else
		{
			groupBoxRLS1->setEnabled(true);
			groupBoxPRL1->setEnabled(true);
		}

		groupBoxNumberRLS->setEnabled(true);
		groupBoxDistance->setEnabled(true);
		groupBoxGradient->setEnabled(true);
		groupBoxZandVPassiv->setEnabled(true);
		groupBoxVActiv->setEnabled(true);
		groupBoxCourseLanding->setEnabled(true);
		labelCurrentValue->setText(tr("3"));


	}
	if(radioButtonTypeRlsPRL->isChecked())
	{
		groupBoxQuantityRLS->setEnabled(true);
		groupBoxRazvertka->setEnabled(false);
		if(radioButtonQuantityRLS2->isChecked())
		{
			groupBoxRLS1->setEnabled(true);
			groupBoxRLS2->setEnabled(true);
			groupBoxPRL1->setEnabled(true);
			groupBoxPRL2->setEnabled(true);
		}
		else
		{
			groupBoxRLS1->setEnabled(true);
			groupBoxPRL1->setEnabled(true);
		}

		groupBoxNumberRLS->setEnabled(true);
		groupBoxDistance->setEnabled(true);
		groupBoxGradient->setEnabled(true);
		groupBoxZandVPassiv->setEnabled(true);
		groupBoxVActiv->setEnabled(true);
		groupBoxCourseLanding->setEnabled(true);
		labelCurrentValue->setText(tr("4"));
	}
	if(radioButtonTypeRlsRSBN->isChecked())
	{
		groupBoxQuantityRLS->setEnabled(true);
		groupBoxRazvertka->setEnabled(false);
		if(radioButtonQuantityRLS2->isChecked())
		{
			groupBoxRLS1->setEnabled(true);
			groupBoxRLS2->setEnabled(true);
			groupBoxPRL1->setEnabled(true);
			groupBoxPRL2->setEnabled(true);
		}
		else
		{
			groupBoxRLS1->setEnabled(true);
			groupBoxPRL1->setEnabled(true);
		}

		groupBoxNumberRLS->setEnabled(true);
		groupBoxDistance->setEnabled(true);
		groupBoxGradient->setEnabled(true);
		groupBoxZandVPassiv->setEnabled(true);
		groupBoxVActiv->setEnabled(true);
		groupBoxCourseLanding->setEnabled(true);
		labelCurrentValue->setText(tr("5"));
	}
//
	int iAddr = 10;
	int b1;
	b1=unitReceive->basicSetting[iAddr];
	fWordWr(b1);
	if(radioButtonTypeRlsOff->isChecked()){wordWr.bit1=0;wordWr.bit0=0;}
	if(radioButtonTypeRlsKO->isChecked()){wordWr.bit1=1;wordWr.bit0=0;}
	if(radioButtonTypeRlsPRL->isChecked()){wordWr.bit1=0;wordWr.bit0=1;}
	if(radioButtonTypeRlsRSBN->isChecked()){wordWr.bit1=1;wordWr.bit0=1;}
	unitReceive->basicSetting[iAddr]=fWordWr();
	unitSend->basicSetting[iAddr]=fWordWr();
//
	comboBoxDistance->clear();
	QString str;
	if(radioButtonTypeRlsPRL->isChecked())
	{
		str="20 км";
		comboBoxDistance->addItem("20 км");
		comboBoxDistance->addItem("40 км");
		comboBoxDistance->addItem("60 км");
		comboBoxDistance->addItem("резерв");
	}else
	{
		if(radioButtonTypeRlsKO->isChecked())
		{
			str="150 км";
			comboBoxDistance->addItem("150 км");
			comboBoxDistance->addItem("200 км");
			comboBoxDistance->addItem("350 км");
			comboBoxDistance->addItem("400 км");
			comboBoxDistance->addItem("резерв");
		}
		if(radioButtonTypeRlsRSBN->isChecked())
		{
			str="400 км";
			comboBoxDistance->addItem("400 км");
			comboBoxDistance->addItem("резерв");
		}
	}
	comboBoxDistance->setCurrentIndex(0);
	fComboBoxDistanceText(str);

}
void Dialog::copyUnitsAll()
{

	for(int i=0;i<128;i++)
	{
		unitSend->basicSetting[i]=unitReceive->basicSetting[i];
		unitSend->selectedParameters0[i]=unitReceive->selectedParameters0[i];
		unitSend->selectedParameters1[i]=unitReceive->selectedParameters1[i];
		unitSend->selectedParameters2[i]=unitReceive->selectedParameters2[i];
	}

//	memcpy(unitSend->basicSetting, unitReceive->basicSetting, sizeof(unitReceive->basicSetting)); 

}
void Dialog::setUnit(int iAddr,ushort b1)
{
//только для АРП
	if(!iChoiceArp)
	{
		unitReceive->selectedParameters0[iAddr]=b1;
		unitSend->selectedParameters0[iAddr]=b1;
	}
	else
	{
		unitReceive->selectedParameters1[iAddr]=b1;
		unitSend->selectedParameters1[iAddr]=b1;
	}
	return;
}
ushort Dialog::isUnit(int iAddr)
{
//только для АРП
	ushort b0;
	if(!iChoiceArp)
		b0 = unitReceive->selectedParameters0[iAddr];
	else
		b0 = unitReceive->selectedParameters1[iAddr];
	return b0;
}
void Dialog::fChoice()
{
//Если количество РЛС 1(одна):	РЛС:1,АРП:1
//Если количество РЛС 2(две):
//По "Выбор РЛС"	или РЛС:1, или РЛС:2
//Для АРП не "использовать выбор РЛС": АРП:1
//Для АРП "использовать выбор РЛС":РЛС:x = АРП:x.
	ushort a0;QString str,st0;
	int iUseChoiceRls;
	int iQuantityRls;
//
	a0=unitReceive->basicSetting[11];
	fWord(a0);
	iQuantityRls = word.bit8;
//
	a0=unitReceive->basicSetting[120];
	fWord(a0);
	iUseChoiceRls = word.bit14;
//
//
	a0=unitReceive->headRead[0];
//	a0=0x8000;
	fWord(a0);
	if(iQuantityRls)
		iChoiceRls=word.bit15;
	else
		iChoiceRls=0;
//
	if(iUseChoiceRls) iChoiceArp=iChoiceRls;
	else iChoiceArp=0;
//
	str="РЛС:";
	str+=QString("%1").arg(iChoiceRls+1);
	str+=", АРП:";
	str+=QString("%1").arg(iChoiceArp+1);
	ui.laRlsArp->setText(str);
//	a1=fWordWr();

	return;
}

void Dialog::on_lineEdit_34_textChanged(const QString &)
{

}

void Dialog::on_lineEdit_58_textChanged(const QString &)
{

}
/*
void Dialog::on_lineEdit_100_textChanged(const QString &)
{

}
*/

void Dialog::on_comboBox_5_textChanged(const QString &)
{

}

void Dialog::on_comboBox_3_textChanged(const QString &)
{

}

void Dialog::on_pushButton_39_clicked()
{

}

void Dialog::on_comboBox_10_textChanged(const QString &)
{

}

void Dialog::on_lineEdit_115_textChanged(const QString &)
{

}

