#ifndef DIALOG_H
#define DIALOG_H

#include <QtGui/QWidget>
#include "ui_dialog.h"
#include "unit.h"
#include "levels.h"
#include <QtCore/QTimer>
#include "rastr.h"
#include "diagnostica.h"
#include "blocmeas.h"
#include "dlgcust.h"
#include "board.h"

struct Word
{
	ushort bit0 : 1;
	ushort bit1 : 1;
	ushort bit2 : 1;
	ushort bit3 : 1;
	ushort bit4 : 1;
	ushort bit5 : 1;
	ushort bit6 : 1;
	ushort bit7 : 1;
	ushort bit8 : 1;
	ushort bit9 : 1;
	ushort bit10: 1;
	ushort bit11: 1;
	ushort bit12: 1;
	ushort bit13: 1;
	ushort bit14: 1;
	ushort bit15: 1;
};

class Dialog : public QWidget
{
	Q_OBJECT

public:
	Dialog(QWidget *parent = 0);
	~Dialog();
	Board* boardCurrent;
	void setEnabledThe(bool b);
	DlgCust* dlgCust;
	QWidget* widDlg;
	void showNum(int v);//0-надпись,1-диагн,2-след
	void cp5066();
	int numShow;
//////rastr.begin

	QWidget* widRastr0,*widRastr1,*widRastrText;
	Rastr* rastr;
	Diagnostica* diagnostica;
//////rastr.end
//////blocmeas.begin	- блок измерений
	BlocMeas* blocMeas;
//////blocmeas.end
	QListWidget* listWidget;
//	Unit* unitSend,*unitReceive;
private:
	Ui::DialogClass ui;
public:
	void updateDialog();
//dialog3
	Word word,wordWr;
	void fWord(ushort a1);
	void fWordWr(ushort a1);
	void fWordWrSetBit(int a1);
	int fWordReturnBit(int a1);		//0- 0-14,1 - 0-7, 2 - 8-15
	ushort fWordWr();
	short toShort(int a);
	short toChar(int a);
	short to12bit(int a);
	short to12bitB(int a);
	short to13bit(int a);
	short to13bitB(int a);
	double to1byteP(int a);
	short fr1byteP(double a);
	double to2byteP(int a);
	short fr2byteP(double a);
	int to2byteP100(int a);
	short fr2byteP100(double a);
	double to1byte5v(int a);
	short fr1byte5v(double a);
	double to12bit5v(int a);
	short fr12bit5v(double a);
	double to12bit5(int a);
	short fr12bit5(double a);
	QString ch110to1_1(int a0);

//

public:
	void fCurrentBoard(bool yes, QString str);
	void fCurrentBoard1(bool yes, QString str);
	int iCurrentIndex;
	bool bCurrentIndex0;	//true - нулевая страница, iCurrentIndex не меняется.
	QTabWidget* tabWidget,*tabWidget_2;
public:
	int iChoiceRls,iChoiceArp;
	void fChoice();
	void setUnit(int iAddr,ushort b0);
	ushort isUnit(int iAddr);
	Unit* unitReceive,*unitSend;
	Unit* unitReceive0;
	bool bReadOnly;
	void copyUnitsAll();
//	Board* board[16];
//	Board* currentBoard,*currentOldBoard;
//	NetExchange* netExchange;
//	void deleteItem();
//	int iDeleteItemComp;
//	int instantTimer;
//	uchar byte[772];/////////////////////////////////////////////////////////

public:
//	void fRefreshBoard();
//	QListWidget* listWidgetNameBoard;
public:
	QPushButton* buttonWriteRpzu,*buttonRegain;
	QString strNameBoard;
	QString makeString(char* chStr,int iQuantity=18);
	LevelDrawPane *widgetRiftZ,*widgetRiftPass1,*widgetRiftAct1;
	QPushButton *buttonOscPZK,*buttonOscT1,*buttonOscT2,*buttonOscT3,
		*buttonOscOff1;
	QPushButton *buttonOsc11,*buttonOsc21,*buttonOsc31,*buttonOsc41,
		*buttonOsc51,*buttonOsc12,*buttonOsc22,*buttonOsc32,
		*buttonOsc42,*buttonOsc52;
	QPushButton *buttonOscK1,*buttonOscK2,*buttonOscK3,*buttonOscK4,
		*buttonOscK5,*buttonOscK6,*buttonOscK7,*buttonOscK8,*buttonOscOff2;
	QButtonGroup *buttonGroupOsc1,*buttonGroupOsc2;
	QRadioButton* radioButtonQuantityRLS1,*radioButtonQuantityRLS2;
	QGroupBox* groupBoxQuantityRLS;
	QGroupBox* groupBoxRLS1,*groupBoxRLS2;
	QGroupBox* groupBoxPRL1,*groupBoxPRL2;
	QRadioButton* radioButtonTypeRlsOff,*radioButtonTypeRlsKO,
		*radioButtonTypeRlsPRL,*radioButtonTypeRlsRSBN;
	QGroupBox* groupBoxRazvertka;
	QGroupBox* groupBoxNumberRLS,*groupBoxDistance,*groupBoxGradient,
		*groupBoxZandVPassiv,*groupBoxVActiv,*groupBoxCourseLanding;
	QLabel* labelCurrentValue;
	QLineEdit* lineEditIPInitial,*lineEditBasicPort,*lineEditPortBoard;
	QLineEdit* lineEditGradient;
	QComboBox* comboBoxRankAngle;
	QComboBox* comboBoxNumberRLS;
	QRadioButton* radioButtonZ,*radioButtonZandVPassive;
	QCheckBox* checkBoxVideoPassive;
	QRadioButton* radioButtonVideoActiveNPO,*radioButtonVideoActiveDK,
		*radioButtonVideoActiveOff;
	QRadioButton* radioButtonGradientMagnetic,*radioButtonGradientGeographic;
	QRadioButton* radioButton7degree,*radioButton0degree;
	QRadioButton* radioButton_10degree,*radioButton0Degree,*radioButton10degree;
	QButtonGroup* buttonGroupEIPA;
	QRadioButton* radioButtonVxH,*radioButtonMAIxNorth,
		*radioButtonSSP_GO,*radioButtonSSP_GOxTO;
	QCheckBox* checkBoxEIPAOn;
	QComboBox* comboBoxDistance;
	QLineEdit* lineEditNameBoard;
	uchar firstChar(ushort a1);
	uchar secondChar(ushort a1);
	void initDialog(); int initPriznak;
	QLineEdit* lineEditCourseLanding1; 
	QLineEdit* lineEditMaxLengthUnit,*lineEditMaxWaitRay,*lineEditSelectorMa10;
	QComboBox* comboBoxProtectMaKo,*comboBoxProtectMaPrl,*comboBoxProtectMai,
		*comboBoxProtectNorthKo,*comboBoxProtectNorthRsbn;
	QComboBox* comboBoxAPOI,*comboBoxProtocol;
	QRadioButton* radioButtonAPOIGradientMagnetic,*radioButtonAPOIGradientGeographic;

	QComboBox* comboBoxTypeComPort,*comboBoxComSpeed,*comboBoxComParity;
	QLineEdit* lineEditNameAPOI;
	QRadioButton* radioButtonNoUsed,*radioButtonApoi;
	PLineEdit* lineEditPointStandingDistance,*lineEditPointStandingAzimuth;
	QCheckBox* checkBoxARPUseRLS;
	QComboBox* comboBoxArpNumber;
	QRadioButton* radioButtonArpGradientMagnetic,*radioButtonArpGradientGeographic;
//Переключаемые параметры
	QLineEdit* lineEditNameRls0,*lineEditNameRls1;
	PLineEdit* lineEditRls0PointStandingDistance,*lineEditRls0PointStandingAzimuth;
	PLineEdit* lineEditRls1PointStandingDistance,*lineEditRls1PointStandingAzimuth;
	QRadioButton* radioButtonFizPoz,*radioButtonFizNeg,
		*radioButtonLogPoz,*radioButtonLogNeg;
	QRadioButton* radioButtonRls0TypeDrl6,* radioButtonRls0TypeDrl10;
	QRadioButton* radioButtonRls1TypeDrl6,* radioButtonRls1TypeDrl10;
	QCheckBox* checkBoxRls0LabelAngleOn,*checkBoxRls0LabelAngleCorrection;
	QCheckBox* checkBoxRls1LabelAngleOn,*checkBoxRls1LabelAngleCorrection;
	QLineEdit* lineEditRls0EndFaceVPP1,*lineEditRls1EndFaceVPP1;
	QLineEdit* lineEditRls0HighAerialVPP1,*lineEditRls1HighAerialVPP1;
	QLineEdit* lineEditRls0DistanceAxisVPP,*lineEditRls1DistanceAxisVPP;
	QLineEdit* lineEditRls0PointPlanting1,*lineEditRls1PointPlanting1;
	QLineEdit* lineEditRls0EndFaceVPP2,*lineEditRls1EndFaceVPP2;
	QLineEdit* lineEditRls0HighAerialVPP2,*lineEditRls1HighAerialVPP2;
	QLineEdit* lineEditRls0PointPlanting2,*lineEditRls1PointPlanting2;
	QLineEdit* lineEditRls0ScopeG,*lineEditRls0ScopeK;
	QLineEdit* lineEditRls1ScopeG,*lineEditRls1ScopeK;
	OLineEdit* lineEditRls0BlkVideo,*lineEditRls1BlkVideo;

	QLineEdit* lineEditRls0TurnKO,*lineEditRls1TurnKO;
	QLineEdit* lineEditRls0DisPlaceVPass,*lineEditRls1DisPlaceVPass;
	QLineEdit* lineEditRls0DisPlaceVAct,*lineEditRls1DisPlaceVAct;

	QLineEdit* lineEditRiftMai;
	QLineEdit* lineEditRiftZ,*lineEditRiftNorth;
	PLineEdit* lineEditAvtoRiftZ,*lineEditAvtoRiftV;
	QLineEdit* lineEditCompensZ,*lineEditCompensPass,*lineEditCompensAct;
	QLineEdit* lineEditCompensInput1,*lineEditCompensInput2;
	QLineEdit* lineEditRiftPass1,*lineEditRiftAct1;
	
	QLineEdit* lineEditRls0MuGMaxRift,*lineEditRls0MuGMinRift;
	QLineEdit* lineEditRls1MuGMaxRift,*lineEditRls1MuGMinRift;
	QLineEdit* lineEditRls0MuKMaxRift,*lineEditRls0MuKMinRift;
	QLineEdit* lineEditRls1MuKMaxRift,*lineEditRls1MuKMinRift;

	QLineEdit* lineEditRls0DisplaceNulG ,*lineEditRls0DisplaceNulK;
	QLineEdit* lineEditRls1DisplaceNulG ,*lineEditRls1DisplaceNulK;
	QLineEdit* lineEditRls0CombG ,*lineEditRls0CombK;
	QLineEdit* lineEditRls1CombG ,*lineEditRls1CombK;

	QLineEdit* lineEditRls0UEipa7GonK,*lineEditRls0UEipa0GonK;
	QLineEdit* lineEditRls1UEipa7GonK,*lineEditRls1UEipa0GonK;
	QLineEdit* lineEditRls0UEipa10KonG,*lineEditRls0UEipa0KonG,*lineEditRls0UEipa_10KonG;
	QLineEdit* lineEditRls1UEipa10KonG,*lineEditRls1UEipa0KonG,*lineEditRls1UEipa_10KonG;
	QStringList listEipa;		//10-шт,5-рлс0,5-рлс1
	PLineEdit* lineEditRls0MuG7,*lineEditRls0MuG0;
	PLineEdit* lineEditRls0MuK_10,*lineEditRls0MuK0,*lineEditRls0MuK10;
	QLineEdit* lineEditRls0NameArp;
	PLineEdit* lineEditRls0ArpPointStandingDistance,* lineEditRls0ArpPointStandingAzimuth;

//	QCheckBox* checkBoxNoCorrectionCh1,* checkBoxNoCorrectionCh2,
//		* checkBoxNoCorrectionCh3,* checkBoxNoCorrectionCh4;
	QComboBox *comboBoxMinTimeCh1, *comboBoxMinTimeCh2,
		 *comboBoxMinTimeCh3, *comboBoxMinTimeCh4;
	QComboBox *comboBoxMinTime2Ch1, *comboBoxMinTime2Ch2,
		 *comboBoxMinTime2Ch3, *comboBoxMinTime2Ch4;
	QStringList makeList(int,int);
	QComboBox *comboBoxDelayCh1, *comboBoxDelayCh2,
		*comboBoxDelayCh3, *comboBoxDelayCh4;
	PLineEdit *lineEditNumberCh1, *lineEditNumberCh2, *lineEditNumberCh3, *lineEditNumberCh4;
	PLineEdit *lineEditRiftCh1, *lineEditRiftCh2, *lineEditRiftCh3, *lineEditRiftCh4;
	PLineEdit *lineEditRift2Ch1, *lineEditRift2Ch2, *lineEditRift2Ch3, *lineEditRift2Ch4;
//	QRadioButton *raBuGl,*raBuCu;
/*
	QLineEdit *lineEditMaxHeightScanCh1,*lineEditMinHeightScanCh1,*lineEditLineNulHeightScanCh1,
		*lineEditMaxWidthScanCh1,*lineEditMinWidthScanCh1,*lineEditLineNulWidthScanCh1;
	QLineEdit *lineEditMaxHeightScanCh2,*lineEditMinHeightScanCh2,*lineEditLineNulHeightScanCh2,
		*lineEditMaxWidthScanCh2,*lineEditMinWidthScanCh2,*lineEditLineNulWidthScanCh2;
	QLineEdit *lineEditMaxHeightScanCh3,*lineEditMinHeightScanCh3,*lineEditLineNulHeightScanCh3,
		*lineEditMaxWidthScanCh3,*lineEditMinWidthScanCh3,*lineEditLineNulWidthScanCh3;
	QLineEdit *lineEditMaxHeightScanCh4,*lineEditMinHeightScanCh4,*lineEditLineNulHeightScanCh4,
		*lineEditMaxWidthScanCh4,*lineEditMinWidthScanCh4,*lineEditLineNulWidthScanCh4;
*/
	int timerId;
	int timerIdRpzu;
	int iStartTimerIdRpzu;
	int iStopTimerIdRpzu;
	int timerIdRegain;
	int iStartTimerIdRegain;
	int iStopTimerIdRegain;

protected:
	void wheelEvent(QWheelEvent *e);
	void keyPressEvent(QKeyEvent* e);
	int intPressEnter;
	void setPressEnter();
	int isSetPressEnter();
		
protected slots:
//	void updateDialog();
	void clickGroupOsc1(int id);
	void clickGroupOsc2(int id);
	void toggleRadioButtonQuantityRLS(bool checked);
	void toggleRadioButtonTypeRls(bool checked);
	void slChBoInp(bool);
	void slChBoOutp(bool);
//запись РПЗУ, восстановление
	void fWriteRpzu();
	void fRegain();
	void fTimerWriteStop();
	void fTimerRegainStop();
protected:
	QTimer timerWrite,timerRegain;
	void showWriteRpzu();
	void showRegain();
	void initTimers();		//запись РПЗУ, восстановление
protected slots:
//Экранные слоты:
	void fLineEditIPInitial();
	void fLineEditBasicPort();
	void fLineEditPortBoard();
	void fComboBoxRankAngle(int index );

	void fComboBoxProtectMaKo(int index );
	void fComboBoxProtectMaPrl(int index );
	void fComboBoxProtectMai(int index );
	void fComboBoxProtectNorthKo(int index );
	void fComboBoxProtectNorthRsbn(int index );


	void fLineEditMaxLengthUnit();
	void fLineEditMaxWaitRay();
	void fLineEditGradient();
	void fLineEditSelectorMa10();
	void slLiEdMaxTimeBlock();

	void fLineEditCommon(const QString& str);
	void fRadioButtonGradient();
	void fRadioButtonVideoActive();
	void fRadioButtonPassive();
	void fRadioButtonTypeRls();
	void fComboBoxNumberRLS(int index);
	void fRadioButtonScan();
	void fRadioButtonQuantityRLS();
	void fComboBoxDistance(int index);
	void fComboBoxDistanceText(const QString& text);
//ЭИПА
	void fPushButtonEipaMem();
	void fPushButtonEipaMemOff();

	void fPushButtonGArh();
	void fPushButtonGFix();
	void fPushButtonGFixOff();
	void fPushButtonGReset();
	void fPushButtonCArh();
	void fPushButtonCFix();
	void fPushButtonCFixOff();
	void fPushButtonCReset();

	void fGroupBox_70();


	void fLineEditCourseLanding1();

	void fLineEditTypeRls(const QString& str);
//порт
	void fComboBoxProtocol(int index);
	void fComboBoxAPOI(int index);
	void fComboBoxTypeComPort(int index);
	void fComboBoxTypeComSpeed(int index);
	void fRadioButtonAPOIGradient();
	void fComboBoxComParity(int index);
	void fLineEditPointStandingDistance();
	void fLineEditPointStandingAzimuth();
public:
	void fLiEdAzimuth(void* l, ushort* pReceiveSePar, ushort* pSendSelPar);
protected slots:

	void fLineEditPointStanding(const QString& str);
	void fRadioButtonNoUsed();
//arguments(параметры)
	void fLineEditNameRls0();
	void fLineEditNameRls1();
	void fLineEditRls0NameArp();
	void fLineEditNameAPOI();
	void fLineEditNameBoard();

	void fLineEditName(const QString& str);

	void fRadioButtonRls0Type();
	void fRadioButtonRls1Type();
	void fCheckBoxRls0LabelAngleOn();
	void fCheckBoxRls0LabelAngleCorrection();
	void fCheckBoxRls1LabelAngleOn();
	void fCheckBoxRls1LabelAngleCorrection();
	void fCheckBoxAvto();
	void fLineEditRls0PointStandingDistance();
	void fLineEditRls0PointStandingAzimuth();
	void fLineEditRls0EndFaceVPP1();
	void fLineEditRls0HighAerialVPP1();
	void fLineEditRls0DistanceAxisVPP();
	void fLineEditRls0PointPlanting1();
	void fLineEditRls0EndFaceVPP2();
	void fLineEditRls0HighAerialVPP2();
	void fLineEditRls0PointPlanting2();
	void fLineEditRls0BlkVideo();
	void fLineEditRls0TurnKO();
	void fLineEditRls0DisPlaceVPass();
	void fLineEditRls0DisPlaceVAct();

	void fLineEditRls0DisplaceNulG();
	void fLineEditRls0DisplaceNulK();
	void fLineEditRls0CombG();
	void fLineEditRls0CombK();
	void fLineEditRls0ScopeG();
	void fLineEditRls0ScopeK();
	void fLineEditRls0MuGMaxRift();
	void fLineEditRls0MuGMinRift();
	void fLineEditRls0MuKMaxRift();
	void fLineEditRls0MuKMinRift();
//	PLineEdit* lineEditRls0MuG7,*lineEditRls0MuG0;
//	PLineEdit* lineEditRls0MuK_10,*lineEditRls0MuK0,*lineEditRls0MuK10;
	void slLineEditRls0MuG7();
	void slLneEditRls0MuG0();
	void slLineEditRls0MuK_10();
	void slLineEditRls0MuK0();
	void slLineEditRls0MuK10();

	void fLineEditRls0Arguments(const QString& str);
//rls1
	void fLineEditRls1PointStandingDistance();
	void fLineEditRls1PointStandingAzimuth();

	void fLineEditRls1EndFaceVPP1();
	void fLineEditRls1HighAerialVPP1();
	void fLineEditRls1DistanceAxisVPP();
	void fLineEditRls1PointPlanting1();
	void fLineEditRls1EndFaceVPP2();
	void fLineEditRls1HighAerialVPP2();
	void fLineEditRls1PointPlanting2();

	void fLineEditRls1TurnKO();
	void fLineEditRls1BlkVideo();
	void fLineEditRls1DisPlaceVPass();
	void fLineEditRls1DisPlaceVAct();

	void fLineEditRls1DisplaceNulG();
	void fLineEditRls1DisplaceNulK();
	void fLineEditRls1CombG();
	void fLineEditRls1CombK();
	void fLineEditRls1ScopeG();
	void fLineEditRls1ScopeK();
	void fLineEditRls1MuGMaxRift();
	void fLineEditRls1MuGMinRift();
	void fLineEditRls1MuKMaxRift();
	void fLineEditRls1MuKMinRift();

	void fLineEditRls1Arguments(const QString& str);

//пороги
	void fLineEditCompensZ();
	void fLineEditCompensPass();
	void fLineEditCompensAct();
	void fLineEditCompensInput1();
	void fLineEditCompensInput2();

	void fLineEditRiftZ();
	void fLineEditRiftPass1();
	void fLineEditRiftAct1();
	void fMoveEdgeRiftZ();
	void fMoveEdgeRiftPass1();
	void fMoveEdgeRiftAct1();
	void fLineEditRiftAvtoZ();
	void fLineEditPressSpaceRiftAvtoZ(const QString&);
	void fLineEditRiftAvtoV();
	void fLineEditPressSpaceRiftAvtoV(const QString&);

	void fRadioButtonFizPoz();
	void fRadioButtonFizNeg();
	void fRadioButtonLogPoz();
	void fRadioButtonLogNeg();


	void fLineEditRiftMai();
	void fLineEditRiftNorth();
	void fLineEditPressSpaceRift(const QString& str);
//	void retrySlot();	//повторят вызов экранного слота

	void fComboBoxArpNumber(int index);
	void fCheckBoxARPUseRLS();
	void fRadioButtonArpGradient();
	void fLineEditRls0ArpPointStandingDistance();
	void fLineEditRls0ArpPointStandingAzimuth();

	void fCheckBoxCh1_();	//2,94
	void fCheckBoxCh2_();void fCheckBoxCh3_();void fCheckBoxCh4_();
//	void fcheckBoxNoCorrectionCh1();void fcheckBoxNoCorrectionCh2();
//	void fcheckBoxNoCorrectionCh3();void fcheckBoxNoCorrectionCh4();
	void fComboBoxMinTimeCh1(int index);	
	void fComboBoxMinTimeCh2(int index);	
	void fComboBoxMinTimeCh3(int index);	
	void fComboBoxMinTimeCh4(int index);	
	void fComboBoxMinTime2Ch1(int index);	
	void fComboBoxMinTime2Ch2(int index);	
	void fComboBoxMinTime2Ch3(int index);	
	void fComboBoxMinTime2Ch4(int index);	
	void fComboBoxDelayCh1(int index);	
	void fComboBoxDelayCh2(int index);	
	void fComboBoxDelayCh3(int index);	
	void fComboBoxDelayCh4(int index);	
	void fLineEditNumberCh1();
	void fLineEditNumberCh2();
	void fLineEditNumberCh3();
	void fLineEditNumberCh4();
	void fLineEditRiftCh1();
	void fLineEditRiftCh2();
	void fLineEditRiftCh3();
	void fLineEditRiftCh4();
	void fLineEditRift2Ch1();
	void fLineEditRift2Ch2();
	void fLineEditRift2Ch3();
	void fLineEditRift2Ch4();
	void slLiEdFreq1();
	void slLiEdFreq2();
	void slLiEdFreq3();
	void slLiEdFreq4();
	void fLineEditRift(const QString& str);
/*
	void fLineEditMaxHeightScanCh1();
	void fLineEditMinHeightScanCh1();
	void fLineEditLineNulHeightScanCh1();
	void fLineEditMaxWidthScanCh1();
	void fLineEditMinWidthScanCh1();
	void fLineEditLineNulWidthScanCh1();

	void fLineEditMaxHeightScanCh2();
	void fLineEditMinHeightScanCh2();
	void fLineEditLineNulHeightScanCh2();
	void fLineEditMaxWidthScanCh2();
	void fLineEditMinWidthScanCh2();
	void fLineEditLineNulWidthScanCh2();

	void fLineEditMaxHeightScanCh3();
	void fLineEditMinHeightScanCh3();
	void fLineEditLineNulHeightScanCh3();
	void fLineEditMaxWidthScanCh3();
	void fLineEditMinWidthScanCh3();
	void fLineEditLineNulWidthScanCh3();

	void fLineEditMaxHeightScanCh4();
	void fLineEditMinHeightScanCh4();
	void fLineEditLineNulHeightScanCh4();
	void fLineEditMaxWidthScanCh4();
	void fLineEditMinWidthScanCh4();
	void fLineEditLineNulWidthScanCh4();
*/
	void fPushButtonOsc();
//	void listBoardEntered(QListWidgetItem* item);
//	void listBoardEntered();
//	void refreshBoard();
protected:
	void fLineEditArpScanCh(QString str1,int iAddr1,QLineEdit* lineEdit);
	void initSlots();
//	void closeEvent(QCloseEvent* event);
//	void paintEvent(QPaintEvent* event);
//	void timerEvent(QTimerEvent* event);
signals:
	void closeDialogAlready();
	void toNumBoardDiagnostica(int);
private slots:
	void on_lineEdit_115_textChanged(const QString &);
	void on_comboBox_10_textChanged(const QString &);
	void on_pushButton_39_clicked();
	void on_comboBox_3_textChanged(const QString &);
	void on_comboBox_5_textChanged(const QString &);
//	void on_lineEdit_100_textChanged(const QString &);
	void on_lineEdit_58_textChanged(const QString &);
	void on_lineEdit_34_textChanged(const QString &);
public:
};

#endif // DIALOG_H
