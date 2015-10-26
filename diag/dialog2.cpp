//
#include"dialog.h"
#include<QMessageBox>

void Dialog::initSlots()
{

//common
	connect(lineEditIPInitial,SIGNAL(editingFinished()),this,SLOT(fLineEditIPInitial()));
	connect(lineEditBasicPort,SIGNAL(editingFinished()),this,SLOT(fLineEditBasicPort()));

	connect(lineEditPortBoard,SIGNAL(editingFinished()),this,SLOT(fLineEditPortBoard()));
	
	connect(comboBoxRankAngle,SIGNAL(currentIndexChanged ( int )),this,SLOT(fComboBoxRankAngle(int)));

	connect(comboBoxProtectMaKo,SIGNAL(currentIndexChanged ( int )),this,SLOT(fComboBoxProtectMaKo(int)));
	connect(comboBoxProtectMaPrl,SIGNAL(currentIndexChanged ( int )),this,SLOT(fComboBoxProtectMaPrl(int)));
	connect(comboBoxProtectMai,SIGNAL(currentIndexChanged ( int )),this,SLOT(fComboBoxProtectMai(int)));
	
	connect(comboBoxProtectNorthKo,SIGNAL(currentIndexChanged ( int )),this,SLOT(fComboBoxProtectNorthKo(int)));
	connect(comboBoxProtectNorthRsbn,SIGNAL(currentIndexChanged ( int )),this,SLOT(fComboBoxProtectNorthRsbn(int)));

	connect(lineEditMaxLengthUnit,SIGNAL(editingFinished()),this,SLOT(fLineEditMaxLengthUnit()));
	connect(lineEditMaxWaitRay,SIGNAL(editingFinished()),this,SLOT(fLineEditMaxWaitRay()));
	connect(lineEditGradient,SIGNAL(editingFinished()),this,SLOT(fLineEditGradient()));

	connect(lineEditSelectorMa10,SIGNAL(editingFinished()),this,SLOT(fLineEditSelectorMa10()));

	connect(lineEditIPInitial,SIGNAL(textChanged ( const QString&)),this,SLOT(fLineEditCommon(const QString&)));
	connect(lineEditBasicPort,SIGNAL(textChanged ( const QString&)),this,SLOT(fLineEditCommon(const QString&)));
	connect(lineEditPortBoard,SIGNAL(textChanged ( const QString&)),this,SLOT(fLineEditCommon(const QString&)));
	connect(lineEditMaxLengthUnit,SIGNAL(textChanged ( const QString&)),this,SLOT(fLineEditCommon(const QString&)));
	connect(lineEditMaxWaitRay,SIGNAL(textChanged ( const QString&)),this,SLOT(fLineEditCommon(const QString&)));
	connect(lineEditGradient,SIGNAL(textChanged ( const QString&)),this,SLOT(fLineEditCommon(const QString&)));
	connect(lineEditSelectorMa10,SIGNAL(textChanged ( const QString&)),this,SLOT(fLineEditCommon(const QString&)));
	connect(ui.liEdMaxTimeBlock,SIGNAL(editingFinished()),this,SLOT(slLiEdMaxTimeBlock()));
//РЛС тип
	connect(radioButtonGradientMagnetic,SIGNAL(clicked()),this,SLOT(fRadioButtonGradient()));
	connect(radioButtonGradientGeographic,SIGNAL(clicked()),this,SLOT(fRadioButtonGradient()));
	connect(radioButtonVideoActiveNPO,SIGNAL(clicked()),this,SLOT(fRadioButtonVideoActive()));
	connect(radioButtonVideoActiveDK,SIGNAL(clicked()),this,SLOT(fRadioButtonVideoActive()));
	connect(radioButtonVideoActiveOff,SIGNAL(clicked()),this,SLOT(fRadioButtonVideoActive()));
	connect(radioButtonZandVPassive,SIGNAL(clicked()),this,SLOT(fRadioButtonPassive()));
	connect(radioButtonZ,SIGNAL(clicked()),this,SLOT(fRadioButtonPassive()));
	connect(checkBoxVideoPassive,SIGNAL(clicked()),this,SLOT(fRadioButtonPassive()));
//	connect(radioButtonTypeRlsOff,SIGNAL(clicked()),this,SLOT(fRadioButtonTypeRls()));
//	connect(radioButtonTypeRlsKO,SIGNAL(clicked()),this,SLOT(fRadioButtonTypeRls()));
//	connect(radioButtonTypeRlsPRL,SIGNAL(clicked()),this,SLOT(fRadioButtonTypeRls()));
//	connect(radioButtonTypeRlsRSBN,SIGNAL(clicked()),this,SLOT(fRadioButtonTypeRls()));
	connect(comboBoxNumberRLS,SIGNAL(currentIndexChanged(int)),this,SLOT(fComboBoxNumberRLS(int)));
	connect(radioButtonVxH,SIGNAL(clicked()),this,SLOT(fRadioButtonScan()));
	connect(radioButtonMAIxNorth,SIGNAL(clicked()),this,SLOT(fRadioButtonScan()));
	connect(radioButtonSSP_GO,SIGNAL(clicked()),this,SLOT(fRadioButtonScan()));
	connect(radioButtonSSP_GOxTO,SIGNAL(clicked()),this,SLOT(fRadioButtonScan()));
	connect(radioButtonQuantityRLS1,SIGNAL(clicked()),this,SLOT(fRadioButtonQuantityRLS()));
	connect(radioButtonQuantityRLS2,SIGNAL(clicked()),this,SLOT(fRadioButtonQuantityRLS()));
//	connect(comboBoxDistance,SIGNAL(currentIndexChanged(int)),this,SLOT(fComboBoxDistance(int)));
	connect(comboBoxDistance,SIGNAL(activated ( const QString &  )),
		this,SLOT(fComboBoxDistanceText( const QString &  )));

	connect(ui.pushButton_27,SIGNAL(clicked()),this,SLOT(fPushButtonEipaMem()));
	connect(ui.pushButton_28,SIGNAL(clicked()),this,SLOT(fPushButtonEipaMemOff()));
	connect(ui.pushButton_35,SIGNAL(clicked()),this,SLOT(fPushButtonGArh()));
	connect(ui.pushButton_36,SIGNAL(clicked()),this,SLOT(fPushButtonGFix()));
	connect(ui.pushButton_37,SIGNAL(clicked()),this,SLOT(fPushButtonGFixOff()));
	connect(ui.pushButton_41,SIGNAL(clicked()),this,SLOT(fPushButtonGReset()));
	connect(ui.pushButton_39,SIGNAL(clicked()),this,SLOT(fPushButtonCArh()));
	connect(ui.pushButton_40,SIGNAL(clicked()),this,SLOT(fPushButtonCFix()));
	connect(ui.pushButton_43,SIGNAL(clicked()),this,SLOT(fPushButtonCFixOff()));
	connect(ui.pushButton_42,SIGNAL(clicked()),this,SLOT(fPushButtonCReset()));

	connect(ui.groupBox_70,SIGNAL(clicked()),this,SLOT(fGroupBox_70()));


	connect(lineEditCourseLanding1,SIGNAL(editingFinished()),this,SLOT(fLineEditCourseLanding1()));



	connect(lineEditCourseLanding1,SIGNAL(textChanged ( const QString&)),this,SLOT(fLineEditTypeRls(const QString&)));
	//порт
	connect(comboBoxProtocol,SIGNAL(currentIndexChanged(int)),this,SLOT(fComboBoxProtocol(int)));
	connect(comboBoxAPOI,SIGNAL(currentIndexChanged(int)),this,SLOT(fComboBoxAPOI(int)));
	connect(comboBoxTypeComPort,SIGNAL(currentIndexChanged(int)),this,SLOT(fComboBoxTypeComPort(int)));
	connect(comboBoxComSpeed,SIGNAL(currentIndexChanged(int)),this,SLOT(fComboBoxTypeComSpeed(int)));
	connect(radioButtonAPOIGradientMagnetic,SIGNAL(clicked()),this,SLOT(fRadioButtonAPOIGradient()));
	connect(radioButtonAPOIGradientGeographic,SIGNAL(clicked()),this,SLOT(fRadioButtonAPOIGradient()));
	connect(comboBoxComParity,SIGNAL(currentIndexChanged(int)),this,SLOT(fComboBoxComParity(int)));
	connect(lineEditPointStandingDistance,SIGNAL(editingFinished()),this,SLOT(fLineEditPointStandingDistance()));
	connect(lineEditPointStandingAzimuth,SIGNAL(editingFinished()),this,SLOT(fLineEditPointStandingAzimuth()));
	connect(lineEditPointStandingDistance,SIGNAL(textChanged ( const QString&)),this,SLOT(fLineEditPointStanding(const QString&)));
	connect(lineEditPointStandingAzimuth,SIGNAL(textChanged ( const QString&)),this,SLOT(fLineEditPointStanding(const QString&)));
	connect(radioButtonNoUsed,SIGNAL(clicked()),this,SLOT(fRadioButtonNoUsed()));
	connect(radioButtonApoi,SIGNAL(clicked()),this,SLOT(fRadioButtonNoUsed()));
//arguments(параметры)
	connect(ui.radioButton_18,SIGNAL(clicked()),this,SLOT(fRadioButtonRls0Type()));
	connect(ui.radioButton_19,SIGNAL(clicked()),this,SLOT(fRadioButtonRls0Type()));
	connect(ui.radioButton_104,SIGNAL(clicked()),this,SLOT(fRadioButtonRls1Type()));
	connect(ui.radioButton_105,SIGNAL(clicked()),this,SLOT(fRadioButtonRls1Type()));
	connect(ui.checkBox_2,SIGNAL(clicked()),this,SLOT(fCheckBoxRls0LabelAngleOn()));
	connect(ui.checkBox_3,SIGNAL(clicked()),this,SLOT(fCheckBoxRls0LabelAngleCorrection()));
	connect(ui.groupBox_57,SIGNAL(clicked()),this,SLOT(fCheckBoxAvto()));
	connect(checkBoxRls1LabelAngleOn,SIGNAL(clicked()),this,SLOT(fCheckBoxRls1LabelAngleOn()));
	connect(checkBoxRls1LabelAngleCorrection,SIGNAL(clicked()),this,SLOT(fCheckBoxRls1LabelAngleCorrection()));
//имена
	connect(lineEditNameRls0,SIGNAL(editingFinished()),this,SLOT(fLineEditNameRls0()));//
	connect(lineEditNameRls1,SIGNAL(editingFinished()),this,SLOT(fLineEditNameRls1()));//
	connect(lineEditRls0NameArp,SIGNAL(editingFinished()),this,SLOT(fLineEditRls0NameArp()));//
	connect(lineEditNameAPOI,SIGNAL(editingFinished()),this,SLOT(fLineEditNameAPOI()));//
	connect(lineEditNameBoard,SIGNAL(editingFinished()),this,SLOT(fLineEditNameBoard()));//
	connect(lineEditNameRls0,SIGNAL(textChanged ( const QString&)),this,SLOT(fLineEditName(const QString&)));
	connect(lineEditNameRls1,SIGNAL(textChanged ( const QString&)),this,SLOT(fLineEditName(const QString&)));
	connect(lineEditRls0NameArp,SIGNAL(textChanged ( const QString&)),this,SLOT(fLineEditName(const QString&)));
	connect(lineEditNameAPOI,SIGNAL(textChanged ( const QString&)),this,SLOT(fLineEditName(const QString&)));
	connect(lineEditNameBoard,SIGNAL(textChanged ( const QString&)),this,SLOT(fLineEditName(const QString&)));
							
	connect(lineEditRls0PointStandingDistance,SIGNAL(editingFinished()),this,SLOT(fLineEditRls0PointStandingDistance()));
	connect(lineEditRls0PointStandingAzimuth,SIGNAL(editingFinished()),this,SLOT(fLineEditRls0PointStandingAzimuth()));
	connect(lineEditRls0EndFaceVPP1,SIGNAL(editingFinished()),this,SLOT(fLineEditRls0EndFaceVPP1()));
	connect(lineEditRls0HighAerialVPP1,SIGNAL(editingFinished()),this,SLOT(fLineEditRls0HighAerialVPP1()));
	connect(lineEditRls0DistanceAxisVPP,SIGNAL(editingFinished()),this,SLOT(fLineEditRls0DistanceAxisVPP()));
	connect(lineEditRls0PointPlanting1,SIGNAL(editingFinished()),this,SLOT(fLineEditRls0PointPlanting1()));
	connect(lineEditRls0EndFaceVPP2,SIGNAL(editingFinished()),this,SLOT(fLineEditRls0EndFaceVPP2()));
	connect(lineEditRls0HighAerialVPP2,SIGNAL(editingFinished()),this,SLOT(fLineEditRls0HighAerialVPP2()));
	connect(lineEditRls0PointPlanting2,SIGNAL(editingFinished()),this,SLOT(fLineEditRls0PointPlanting2()));
	connect(lineEditRls0TurnKO,SIGNAL(editingFinished()),this,SLOT(fLineEditRls0TurnKO()));
	connect(lineEditRls0DisPlaceVPass,SIGNAL(editingFinished()),this,SLOT(fLineEditRls0DisPlaceVPass()));
	connect(lineEditRls0DisPlaceVAct,SIGNAL(editingFinished()),this,SLOT(fLineEditRls0DisPlaceVAct()));
	connect(lineEditRls0DisplaceNulG,SIGNAL(editingFinished()),this,SLOT(fLineEditRls0DisplaceNulG()));
	connect(lineEditRls0DisplaceNulK,SIGNAL(editingFinished()),this,SLOT(fLineEditRls0DisplaceNulK()));
	connect(lineEditRls0CombG,SIGNAL(editingFinished()),this,SLOT(fLineEditRls0CombG()));
	connect(lineEditRls0CombK,SIGNAL(editingFinished()),this,SLOT(fLineEditRls0CombK()));
	connect(lineEditRls0ScopeG,SIGNAL(editingFinished()),this,SLOT(fLineEditRls0ScopeG()));
	connect(lineEditRls0ScopeK,SIGNAL(editingFinished()),this,SLOT(fLineEditRls0ScopeK()));
	connect(lineEditRls0MuGMaxRift,SIGNAL(editingFinished()),this,SLOT(fLineEditRls0MuGMaxRift()));
	connect(lineEditRls0MuGMinRift,SIGNAL(editingFinished()),this,SLOT(fLineEditRls0MuGMinRift()));
	connect(lineEditRls0MuKMaxRift,SIGNAL(editingFinished()),this,SLOT(fLineEditRls0MuKMaxRift()));
	connect(lineEditRls0MuKMinRift,SIGNAL(editingFinished()),this,SLOT(fLineEditRls0MuKMinRift()));
	connect(lineEditRls0PointStandingDistance,SIGNAL(textChanged ( const QString&)),this,SLOT(fLineEditRls0Arguments(const QString&)));
	connect(lineEditRls0PointStandingAzimuth,SIGNAL(textChanged ( const QString&)),this,SLOT(fLineEditRls0Arguments(const QString&)));
	connect(lineEditRls0EndFaceVPP1,SIGNAL(textChanged ( const QString&)),this,SLOT(fLineEditRls0Arguments(const QString&)));
	connect(lineEditRls0HighAerialVPP1,SIGNAL(textChanged ( const QString&)),this,SLOT(fLineEditRls0Arguments(const QString&)));
	connect(lineEditRls0DistanceAxisVPP,SIGNAL(textChanged ( const QString&)),this,SLOT(fLineEditRls0Arguments(const QString&)));
	connect(lineEditRls0PointPlanting1,SIGNAL(textChanged ( const QString&)),this,SLOT(fLineEditRls0Arguments(const QString&)));
	connect(lineEditRls0EndFaceVPP2,SIGNAL(textChanged ( const QString&)),this,SLOT(fLineEditRls0Arguments(const QString&)));
	connect(lineEditRls0HighAerialVPP2,SIGNAL(textChanged ( const QString&)),this,SLOT(fLineEditRls0Arguments(const QString&)));
	connect(lineEditRls0PointPlanting2,SIGNAL(textChanged ( const QString&)),this,SLOT(fLineEditRls0Arguments(const QString&)));
	connect(lineEditRls0BlkVideo,SIGNAL(editingFinished()),this,SLOT(fLineEditRls0BlkVideo()));

	connect(lineEditRls0MuG7,SIGNAL(editingFinished()),this,SLOT(slLineEditRls0MuG7()));
	connect(lineEditRls0MuG0,SIGNAL(editingFinished()),this,SLOT(slLneEditRls0MuG0()));
	connect(lineEditRls0MuK_10,SIGNAL(editingFinished()),this,SLOT(slLineEditRls0MuK_10()));
	connect(lineEditRls0MuK0,SIGNAL(editingFinished()),this,SLOT(slLineEditRls0MuK0()));
	connect(lineEditRls0MuK10,SIGNAL(editingFinished()),this,SLOT(slLineEditRls0MuK10()));

	connect(lineEditRls0TurnKO,SIGNAL(textChanged ( const QString&)),this,SLOT(fLineEditRls0Arguments(const QString&)));
	connect(lineEditRls0DisPlaceVPass,SIGNAL(textChanged ( const QString&)),this,SLOT(fLineEditRls0Arguments(const QString&)));
	connect(lineEditRls0DisPlaceVAct,SIGNAL(textChanged ( const QString&)),this,SLOT(fLineEditRls0Arguments(const QString&)));
	connect(lineEditRls0DisplaceNulG,SIGNAL(textChanged ( const QString&)),this,SLOT(fLineEditRls0Arguments(const QString&)));
	connect(lineEditRls0DisplaceNulK,SIGNAL(textChanged ( const QString&)),this,SLOT(fLineEditRls0Arguments(const QString&)));
	connect(lineEditRls0CombG,SIGNAL(textChanged ( const QString&)),this,SLOT(fLineEditRls0Arguments(const QString&)));
	connect(lineEditRls0CombK,SIGNAL(textChanged ( const QString&)),this,SLOT(fLineEditRls0Arguments(const QString&)));
	connect(lineEditRls0ScopeG,SIGNAL(textChanged ( const QString&)),this,SLOT(fLineEditRls0Arguments(const QString&)));
	connect(lineEditRls0ScopeK,SIGNAL(textChanged ( const QString&)),this,SLOT(fLineEditRls0Arguments(const QString&)));
	connect(lineEditRls0MuGMaxRift,SIGNAL(textChanged ( const QString&)),this,SLOT(fLineEditRls0Arguments(const QString&)));
	connect(lineEditRls0MuGMinRift,SIGNAL(textChanged ( const QString&)),this,SLOT(fLineEditRls0Arguments(const QString&)));
	connect(lineEditRls0MuKMaxRift,SIGNAL(textChanged ( const QString&)),this,SLOT(fLineEditRls0Arguments(const QString&)));
	connect(lineEditRls0MuKMinRift,SIGNAL(textChanged ( const QString&)),this,SLOT(fLineEditRls0Arguments(const QString&)));
//rls1
	connect(lineEditRls1PointStandingDistance,SIGNAL(editingFinished()),this,SLOT(fLineEditRls1PointStandingDistance()));
	connect(lineEditRls1PointStandingAzimuth,SIGNAL(editingFinished()),this,SLOT(fLineEditRls1PointStandingAzimuth()));
	connect(lineEditRls1EndFaceVPP1,SIGNAL(editingFinished()),this,SLOT(fLineEditRls1EndFaceVPP1()));
	connect(lineEditRls1HighAerialVPP1,SIGNAL(editingFinished()),this,SLOT(fLineEditRls1HighAerialVPP1()));
	connect(lineEditRls1DistanceAxisVPP,SIGNAL(editingFinished()),this,SLOT(fLineEditRls1DistanceAxisVPP()));
	connect(lineEditRls1PointPlanting1,SIGNAL(editingFinished()),this,SLOT(fLineEditRls1PointPlanting1()));
	connect(lineEditRls1EndFaceVPP2,SIGNAL(editingFinished()),this,SLOT(fLineEditRls1EndFaceVPP2()));
	connect(lineEditRls1HighAerialVPP2,SIGNAL(editingFinished()),this,SLOT(fLineEditRls1HighAerialVPP2()));
	connect(lineEditRls1PointPlanting2,SIGNAL(editingFinished()),this,SLOT(fLineEditRls1PointPlanting2()));
	connect(lineEditRls1BlkVideo,SIGNAL(editingFinished()),this,SLOT(fLineEditRls1BlkVideo()));
	connect(lineEditRls1TurnKO,SIGNAL(editingFinished()),this,SLOT(fLineEditRls1TurnKO()));
	connect(lineEditRls1DisPlaceVPass,SIGNAL(editingFinished()),this,SLOT(fLineEditRls1DisPlaceVPass()));
	connect(lineEditRls1DisPlaceVAct,SIGNAL(editingFinished()),this,SLOT(fLineEditRls1DisPlaceVAct()));
	connect(lineEditRls1DisplaceNulG,SIGNAL(editingFinished()),this,SLOT(fLineEditRls1DisplaceNulG()));
	connect(lineEditRls1DisplaceNulK,SIGNAL(editingFinished()),this,SLOT(fLineEditRls1DisplaceNulK()));
	connect(lineEditRls1CombG,SIGNAL(editingFinished()),this,SLOT(fLineEditRls1CombG()));
	connect(lineEditRls1CombK,SIGNAL(editingFinished()),this,SLOT(fLineEditRls1CombK()));
	connect(lineEditRls1ScopeG,SIGNAL(editingFinished()),this,SLOT(fLineEditRls1ScopeG()));
	connect(lineEditRls1ScopeK,SIGNAL(editingFinished()),this,SLOT(fLineEditRls1ScopeK()));
	connect(lineEditRls1MuGMaxRift,SIGNAL(editingFinished()),this,SLOT(fLineEditRls1MuGMaxRift()));
	connect(lineEditRls1MuGMinRift,SIGNAL(editingFinished()),this,SLOT(fLineEditRls1MuGMinRift()));
	connect(lineEditRls1MuKMaxRift,SIGNAL(editingFinished()),this,SLOT(fLineEditRls1MuKMaxRift()));
	connect(lineEditRls1MuKMinRift,SIGNAL(editingFinished()),this,SLOT(fLineEditRls1MuKMinRift()));
	connect(lineEditRls1PointStandingDistance,SIGNAL(textChanged ( const QString&)),this,SLOT(fLineEditRls1Arguments(const QString&)));
	connect(lineEditRls1PointStandingAzimuth,SIGNAL(textChanged ( const QString&)),this,SLOT(fLineEditRls1Arguments(const QString&)));
	connect(lineEditRls1EndFaceVPP1,SIGNAL(textChanged ( const QString&)),this,SLOT(fLineEditRls1Arguments(const QString&)));
	connect(lineEditRls1HighAerialVPP1,SIGNAL(textChanged ( const QString&)),this,SLOT(fLineEditRls1Arguments(const QString&)));
	connect(lineEditRls1DistanceAxisVPP,SIGNAL(textChanged ( const QString&)),this,SLOT(fLineEditRls1Arguments(const QString&)));
	connect(lineEditRls1PointPlanting1,SIGNAL(textChanged ( const QString&)),this,SLOT(fLineEditRls1Arguments(const QString&)));
	connect(lineEditRls1EndFaceVPP2,SIGNAL(textChanged ( const QString&)),this,SLOT(fLineEditRls1Arguments(const QString&)));
	connect(lineEditRls1HighAerialVPP2,SIGNAL(textChanged ( const QString&)),this,SLOT(fLineEditRls1Arguments(const QString&)));
	connect(lineEditRls1PointPlanting2,SIGNAL(textChanged ( const QString&)),this,SLOT(fLineEditRls1Arguments(const QString&)));
	connect(lineEditRls1TurnKO,SIGNAL(textChanged ( const QString&)),this,SLOT(fLineEditRls1Arguments(const QString&)));
	connect(lineEditRls1DisPlaceVPass,SIGNAL(textChanged ( const QString&)),this,SLOT(fLineEditRls1Arguments(const QString&)));
	connect(lineEditRls1DisPlaceVAct,SIGNAL(textChanged ( const QString&)),this,SLOT(fLineEditRls1Arguments(const QString&)));
	connect(lineEditRls1DisplaceNulG,SIGNAL(textChanged ( const QString&)),this,SLOT(fLineEditRls1Arguments(const QString&)));
	connect(lineEditRls1DisplaceNulK,SIGNAL(textChanged ( const QString&)),this,SLOT(fLineEditRls1Arguments(const QString&)));
	connect(lineEditRls1CombG,SIGNAL(textChanged ( const QString&)),this,SLOT(fLineEditRls1Arguments(const QString&)));
	connect(lineEditRls1CombK,SIGNAL(textChanged ( const QString&)),this,SLOT(fLineEditRls1Arguments(const QString&)));
	connect(lineEditRls1ScopeG,SIGNAL(textChanged ( const QString&)),this,SLOT(fLineEditRls1Arguments(const QString&)));
	connect(lineEditRls1ScopeK,SIGNAL(textChanged ( const QString&)),this,SLOT(fLineEditRls1Arguments(const QString&)));
	connect(lineEditRls1MuGMaxRift,SIGNAL(textChanged ( const QString&)),this,SLOT(fLineEditRls1Arguments(const QString&)));
	connect(lineEditRls1MuGMinRift,SIGNAL(textChanged ( const QString&)),this,SLOT(fLineEditRls1Arguments(const QString&)));
	connect(lineEditRls1MuKMaxRift,SIGNAL(textChanged ( const QString&)),this,SLOT(fLineEditRls1Arguments(const QString&)));
	connect(lineEditRls1MuKMinRift,SIGNAL(textChanged ( const QString&)),this,SLOT(fLineEditRls1Arguments(const QString&)));
// осциллограф
	connect(buttonOsc11,SIGNAL(clicked()),this,SLOT(fPushButtonOsc()));
	connect(buttonOsc21,SIGNAL(clicked()),this,SLOT(fPushButtonOsc()));
	connect(buttonOsc31,SIGNAL(clicked()),this,SLOT(fPushButtonOsc()));
	connect(buttonOsc41,SIGNAL(clicked()),this,SLOT(fPushButtonOsc()));
	connect(buttonOsc51,SIGNAL(clicked()),this,SLOT(fPushButtonOsc()));
	connect(buttonOsc12,SIGNAL(clicked()),this,SLOT(fPushButtonOsc()));
	connect(buttonOsc22,SIGNAL(clicked()),this,SLOT(fPushButtonOsc()));
	connect(buttonOsc32,SIGNAL(clicked()),this,SLOT(fPushButtonOsc()));
	connect(buttonOsc42,SIGNAL(clicked()),this,SLOT(fPushButtonOsc()));
	connect(buttonOsc52,SIGNAL(clicked()),this,SLOT(fPushButtonOsc()));
	connect(buttonOscPZK,SIGNAL(clicked()),this,SLOT(fPushButtonOsc()));
	connect(buttonOscT1,SIGNAL(clicked()),this,SLOT(fPushButtonOsc()));
	connect(buttonOscT2,SIGNAL(clicked()),this,SLOT(fPushButtonOsc()));
	connect(buttonOscT3,SIGNAL(clicked()),this,SLOT(fPushButtonOsc()));
	connect(buttonOscOff1,SIGNAL(clicked()),this,SLOT(fPushButtonOsc()));
	connect(buttonOscK1,SIGNAL(clicked()),this,SLOT(fPushButtonOsc()));
	connect(buttonOscK2,SIGNAL(clicked()),this,SLOT(fPushButtonOsc()));
	connect(buttonOscK3,SIGNAL(clicked()),this,SLOT(fPushButtonOsc()));
	connect(buttonOscK4,SIGNAL(clicked()),this,SLOT(fPushButtonOsc()));
	connect(buttonOscK5,SIGNAL(clicked()),this,SLOT(fPushButtonOsc()));
	connect(buttonOscK6,SIGNAL(clicked()),this,SLOT(fPushButtonOsc()));
	connect(buttonOscK7,SIGNAL(clicked()),this,SLOT(fPushButtonOsc()));
	connect(buttonOscK8,SIGNAL(clicked()),this,SLOT(fPushButtonOsc()));
	connect(buttonOscK1,SIGNAL(clicked()),this,SLOT(fPushButtonOsc()));
	connect(buttonOscOff2,SIGNAL(clicked()),this,SLOT(fPushButtonOsc()));
//пороги
	connect(lineEditCompensZ,SIGNAL(editingFinished()),this,SLOT(fLineEditCompensZ()));
	connect(lineEditCompensPass,SIGNAL(editingFinished()),this,SLOT(fLineEditCompensPass()));
	connect(lineEditCompensAct,SIGNAL(editingFinished()),this,SLOT(fLineEditCompensAct()));
	connect(lineEditCompensInput1,SIGNAL(editingFinished()),this,SLOT(fLineEditCompensInput1()));
	connect(lineEditCompensInput2,SIGNAL(editingFinished()),this,SLOT(fLineEditCompensInput2()));

	connect(lineEditRiftZ,SIGNAL(editingFinished()),this,SLOT(fLineEditRiftZ()));
	connect(lineEditRiftPass1,SIGNAL(editingFinished()),this,SLOT(fLineEditRiftPass1()));
	connect(ui.lineEdit_46,SIGNAL(editingFinished()),this,SLOT(fLineEditRiftAvtoZ()));
	connect(ui.lineEdit_47,SIGNAL(editingFinished()),this,SLOT(fLineEditRiftAvtoV()));
	connect(ui.lineEdit_46,SIGNAL(textChanged(const QString&)),this,SLOT(fLineEditPressSpaceRiftAvtoZ(const QString&)));
	connect(ui.lineEdit_47,SIGNAL(textChanged(const QString&)),this,SLOT(fLineEditPressSpaceRiftAvtoV(const QString&)));
	connect(lineEditRiftAct1,SIGNAL(editingFinished()),this,SLOT(fLineEditRiftAct1()));
	connect(widgetRiftZ,SIGNAL(callMoveEdge()),this,SLOT(fMoveEdgeRiftZ()));
	connect(ui.widget_2,SIGNAL(callMoveEdge()),this,SLOT(fMoveEdgeRiftPass1()));
	connect(ui.widget_3,SIGNAL(callMoveEdge()),this,SLOT(fMoveEdgeRiftAct1()));

	connect(radioButtonFizPoz,SIGNAL(clicked()),this,SLOT(fRadioButtonFizPoz()));
	connect(radioButtonFizNeg,SIGNAL(clicked()),this,SLOT(fRadioButtonFizNeg()));
	connect(radioButtonLogPoz,SIGNAL(clicked()),this,SLOT(fRadioButtonLogPoz()));
	connect(radioButtonLogNeg,SIGNAL(clicked()),this,SLOT(fRadioButtonLogNeg()));

	connect(lineEditRiftMai,SIGNAL(editingFinished()),this,SLOT(fLineEditRiftMai()));
	connect(lineEditRiftNorth,SIGNAL(editingFinished()),this,SLOT(fLineEditRiftNorth()));

	connect(lineEditCompensZ,SIGNAL(textChanged ( const QString&)),this,SLOT(fLineEditPressSpaceRift(const QString&)));
	connect(lineEditCompensPass,SIGNAL(textChanged ( const QString&)),this,SLOT(fLineEditPressSpaceRift(const QString&)));
	connect(lineEditCompensAct,SIGNAL(textChanged ( const QString&)),this,SLOT(fLineEditPressSpaceRift(const QString&)));
	connect(lineEditCompensInput1,SIGNAL(textChanged ( const QString&)),this,SLOT(fLineEditPressSpaceRift(const QString&)));
	connect(lineEditCompensInput2,SIGNAL(textChanged ( const QString&)),this,SLOT(fLineEditPressSpaceRift(const QString&)));

	connect(lineEditRiftZ,SIGNAL(textChanged ( const QString&)),this,SLOT(fLineEditPressSpaceRift(const QString&)));
	connect(lineEditRiftPass1,SIGNAL(textChanged ( const QString&)),this,SLOT(fLineEditPressSpaceRift(const QString&)));
	connect(lineEditRiftAct1,SIGNAL(textChanged ( const QString&)),this,SLOT(fLineEditPressSpaceRift(const QString&)));
	connect(lineEditRiftMai,SIGNAL(textChanged ( const QString&)),this,SLOT(fLineEditPressSpaceRift(const QString&)));
	connect(lineEditRiftNorth,SIGNAL(textChanged ( const QString&)),this,SLOT(fLineEditPressSpaceRift(const QString&)));

	connect(comboBoxArpNumber,SIGNAL(currentIndexChanged(int)),this,SLOT(fComboBoxArpNumber(int)));
	connect(checkBoxARPUseRLS,SIGNAL(clicked()),this,SLOT(fCheckBoxARPUseRLS()));
	connect(radioButtonArpGradientMagnetic,SIGNAL(clicked()),this,SLOT(fRadioButtonArpGradient()));
	connect(radioButtonArpGradientGeographic,SIGNAL(clicked()),this,SLOT(fRadioButtonArpGradient()));
	connect(lineEditRls0ArpPointStandingDistance,SIGNAL(editingFinished()),this,SLOT(fLineEditRls0ArpPointStandingDistance()));
	connect(lineEditRls0ArpPointStandingAzimuth,SIGNAL(editingFinished()),this,SLOT(fLineEditRls0ArpPointStandingAzimuth()));
	connect(lineEditRls0ArpPointStandingDistance,SIGNAL(textChanged ( const QString&)),this,SLOT(fLineEditPressSpaceRift(const QString&)));
	connect(lineEditRls0ArpPointStandingAzimuth,SIGNAL(textChanged ( const QString&)),this,SLOT(fLineEditPressSpaceRift(const QString&)));


	connect(ui.grBoCh1,SIGNAL(clicked()),this,SLOT(fCheckBoxCh1_()));
	connect(ui.grBoCh2,SIGNAL(clicked()),this,SLOT(fCheckBoxCh2_()));
	connect(ui.grBoCh3,SIGNAL(clicked()),this,SLOT(fCheckBoxCh3_()));
	connect(ui.grBoCh4,SIGNAL(clicked()),this,SLOT(fCheckBoxCh4_()));
//	connect(checkBoxNoCorrectionCh1,SIGNAL(clicked()),this,SLOT(fcheckBoxNoCorrectionCh1()));
//	connect(checkBoxNoCorrectionCh2,SIGNAL(clicked()),this,SLOT(fcheckBoxNoCorrectionCh2()));
//	connect(checkBoxNoCorrectionCh3,SIGNAL(clicked()),this,SLOT(fcheckBoxNoCorrectionCh3()));
//	connect(checkBoxNoCorrectionCh4,SIGNAL(clicked()),this,SLOT(fcheckBoxNoCorrectionCh4()));

	connect(comboBoxMinTimeCh1,SIGNAL(currentIndexChanged(int)),this,SLOT(fComboBoxMinTimeCh1(int)));
	connect(comboBoxMinTimeCh2,SIGNAL(currentIndexChanged(int)),this,SLOT(fComboBoxMinTimeCh2(int)));
	connect(comboBoxMinTimeCh3,SIGNAL(currentIndexChanged(int)),this,SLOT(fComboBoxMinTimeCh3(int)));
	connect(comboBoxMinTimeCh4,SIGNAL(currentIndexChanged(int)),this,SLOT(fComboBoxMinTimeCh4(int)));
	connect(comboBoxMinTime2Ch1,SIGNAL(currentIndexChanged(int)),this,SLOT(fComboBoxMinTime2Ch1(int)));
	connect(comboBoxMinTime2Ch2,SIGNAL(currentIndexChanged(int)),this,SLOT(fComboBoxMinTime2Ch2(int)));
	connect(comboBoxMinTime2Ch3,SIGNAL(currentIndexChanged(int)),this,SLOT(fComboBoxMinTime2Ch3(int)));
	connect(comboBoxMinTime2Ch4,SIGNAL(currentIndexChanged(int)),this,SLOT(fComboBoxMinTime2Ch4(int)));
	connect(comboBoxDelayCh1,SIGNAL(currentIndexChanged(int)),this,SLOT(fComboBoxDelayCh1(int)));
	connect(comboBoxDelayCh2,SIGNAL(currentIndexChanged(int)),this,SLOT(fComboBoxDelayCh2(int)));
	connect(comboBoxDelayCh3,SIGNAL(currentIndexChanged(int)),this,SLOT(fComboBoxDelayCh3(int)));
	connect(comboBoxDelayCh4,SIGNAL(currentIndexChanged(int)),this,SLOT(fComboBoxDelayCh4(int)));

	connect(lineEditNumberCh1,SIGNAL(editingFinished()),this,SLOT(fLineEditNumberCh1()));
	connect(lineEditNumberCh2,SIGNAL(editingFinished()),this,SLOT(fLineEditNumberCh2()));
	connect(lineEditNumberCh3,SIGNAL(editingFinished()),this,SLOT(fLineEditNumberCh3()));
	connect(lineEditNumberCh4,SIGNAL(editingFinished()),this,SLOT(fLineEditNumberCh4()));
	connect(lineEditRiftCh1,SIGNAL(editingFinished()),this,SLOT(fLineEditRiftCh1()));
	connect(lineEditRiftCh2,SIGNAL(editingFinished()),this,SLOT(fLineEditRiftCh2()));
	connect(lineEditRiftCh3,SIGNAL(editingFinished()),this,SLOT(fLineEditRiftCh3()));
	connect(lineEditRiftCh4,SIGNAL(editingFinished()),this,SLOT(fLineEditRiftCh4()));
	connect(lineEditRiftCh1,SIGNAL(textChanged ( const QString&)),this,SLOT(fLineEditRift(const QString&)));
	connect(lineEditRiftCh2,SIGNAL(textChanged ( const QString&)),this,SLOT(fLineEditRift(const QString&)));
	connect(lineEditRiftCh3,SIGNAL(textChanged ( const QString&)),this,SLOT(fLineEditRift(const QString&)));
	connect(lineEditRiftCh4,SIGNAL(textChanged ( const QString&)),this,SLOT(fLineEditRift(const QString&)));
	connect(ui.liEdFreq1,SIGNAL(editingFinished()),this,SLOT(slLiEdFreq1()));
	connect(ui.liEdFreq2,SIGNAL(editingFinished()),this,SLOT(slLiEdFreq2()));
	connect(ui.liEdFreq3,SIGNAL(editingFinished()),this,SLOT(slLiEdFreq3()));
	connect(ui.liEdFreq4,SIGNAL(editingFinished()),this,SLOT(slLiEdFreq4()));

	connect(lineEditRift2Ch1,SIGNAL(editingFinished()),this,SLOT(fLineEditRift2Ch1()));
	connect(lineEditRift2Ch2,SIGNAL(editingFinished()),this,SLOT(fLineEditRift2Ch2()));
	connect(lineEditRift2Ch3,SIGNAL(editingFinished()),this,SLOT(fLineEditRift2Ch3()));
	connect(lineEditRift2Ch4,SIGNAL(editingFinished()),this,SLOT(fLineEditRift2Ch4()));
/*
	connect(lineEditMaxHeightScanCh1,SIGNAL(editingFinished()),this,SLOT(fLineEditMaxHeightScanCh1()));
	connect(lineEditMinHeightScanCh1,SIGNAL(editingFinished()),this,SLOT(fLineEditMinHeightScanCh1()));
	connect(lineEditLineNulHeightScanCh1,SIGNAL(editingFinished()),this,SLOT(fLineEditLineNulHeightScanCh1()));
	connect(lineEditMaxWidthScanCh1,SIGNAL(editingFinished()),this,SLOT(fLineEditMaxWidthScanCh1()));
	connect(lineEditMinWidthScanCh1,SIGNAL(editingFinished()),this,SLOT(fLineEditMinWidthScanCh1()));
	connect(lineEditLineNulWidthScanCh1,SIGNAL(editingFinished()),this,SLOT(fLineEditLineNulWidthScanCh1()));
	connect(lineEditMaxHeightScanCh2,SIGNAL(editingFinished()),this,SLOT(fLineEditMaxHeightScanCh2()));
	connect(lineEditMinHeightScanCh2,SIGNAL(editingFinished()),this,SLOT(fLineEditMinHeightScanCh2()));
	connect(lineEditLineNulHeightScanCh2,SIGNAL(editingFinished()),this,SLOT(fLineEditLineNulHeightScanCh2()));
	connect(lineEditMaxWidthScanCh2,SIGNAL(editingFinished()),this,SLOT(fLineEditMaxWidthScanCh2()));
	connect(lineEditMinWidthScanCh2,SIGNAL(editingFinished()),this,SLOT(fLineEditMinWidthScanCh2()));
	connect(lineEditLineNulWidthScanCh2,SIGNAL(editingFinished()),this,SLOT(fLineEditLineNulWidthScanCh2()));
	connect(lineEditMaxHeightScanCh3,SIGNAL(editingFinished()),this,SLOT(fLineEditMaxHeightScanCh3()));
	connect(lineEditMinHeightScanCh3,SIGNAL(editingFinished()),this,SLOT(fLineEditMinHeightScanCh3()));
	connect(lineEditLineNulHeightScanCh3,SIGNAL(editingFinished()),this,SLOT(fLineEditLineNulHeightScanCh3()));
	connect(lineEditMaxWidthScanCh3,SIGNAL(editingFinished()),this,SLOT(fLineEditMaxWidthScanCh3()));
	connect(lineEditMinWidthScanCh3,SIGNAL(editingFinished()),this,SLOT(fLineEditMinWidthScanCh3()));
	connect(lineEditLineNulWidthScanCh3,SIGNAL(editingFinished()),this,SLOT(fLineEditLineNulWidthScanCh3()));
	connect(lineEditMaxHeightScanCh4,SIGNAL(editingFinished()),this,SLOT(fLineEditMaxHeightScanCh4()));
	connect(lineEditMinHeightScanCh4,SIGNAL(editingFinished()),this,SLOT(fLineEditMinHeightScanCh4()));
	connect(lineEditLineNulHeightScanCh4,SIGNAL(editingFinished()),this,SLOT(fLineEditLineNulHeightScanCh4()));
	connect(lineEditMaxWidthScanCh4,SIGNAL(editingFinished()),this,SLOT(fLineEditMaxWidthScanCh4()));
	connect(lineEditMinWidthScanCh4,SIGNAL(editingFinished()),this,SLOT(fLineEditMinWidthScanCh4()));
	connect(lineEditLineNulWidthScanCh4,SIGNAL(editingFinished()),this,SLOT(fLineEditLineNulWidthScanCh4()));
	connect(lineEditMaxHeightScanCh1,SIGNAL(textChanged ( const QString&)),this,SLOT(fLineEditRift(const QString&)));
	connect(lineEditMinHeightScanCh1,SIGNAL(textChanged ( const QString&)),this,SLOT(fLineEditRift(const QString&)));
	connect(lineEditLineNulHeightScanCh1,SIGNAL(textChanged ( const QString&)),this,SLOT(fLineEditRift(const QString&)));
	connect(lineEditMaxWidthScanCh1,SIGNAL(textChanged ( const QString&)),this,SLOT(fLineEditRift(const QString&)));
	connect(lineEditMinWidthScanCh1,SIGNAL(textChanged ( const QString&)),this,SLOT(fLineEditRift(const QString&)));
	connect(lineEditLineNulWidthScanCh1,SIGNAL(textChanged ( const QString&)),this,SLOT(fLineEditRift(const QString&)));
	connect(lineEditMaxHeightScanCh2,SIGNAL(textChanged ( const QString&)),this,SLOT(fLineEditRift(const QString&)));
	connect(lineEditMinHeightScanCh2,SIGNAL(textChanged ( const QString&)),this,SLOT(fLineEditRift(const QString&)));
	connect(lineEditLineNulHeightScanCh2,SIGNAL(textChanged ( const QString&)),this,SLOT(fLineEditRift(const QString&)));
	connect(lineEditMaxWidthScanCh2,SIGNAL(textChanged ( const QString&)),this,SLOT(fLineEditRift(const QString&)));
	connect(lineEditMinWidthScanCh2,SIGNAL(textChanged ( const QString&)),this,SLOT(fLineEditRift(const QString&)));
	connect(lineEditLineNulWidthScanCh2,SIGNAL(textChanged ( const QString&)),this,SLOT(fLineEditRift(const QString&)));
	connect(lineEditMaxHeightScanCh3,SIGNAL(textChanged ( const QString&)),this,SLOT(fLineEditRift(const QString&)));
	connect(lineEditMinHeightScanCh3,SIGNAL(textChanged ( const QString&)),this,SLOT(fLineEditRift(const QString&)));
	connect(lineEditLineNulHeightScanCh3,SIGNAL(textChanged ( const QString&)),this,SLOT(fLineEditRift(const QString&)));
	connect(lineEditMaxWidthScanCh3,SIGNAL(textChanged ( const QString&)),this,SLOT(fLineEditRift(const QString&)));
	connect(lineEditMinWidthScanCh3,SIGNAL(textChanged ( const QString&)),this,SLOT(fLineEditRift(const QString&)));
	connect(lineEditLineNulWidthScanCh3,SIGNAL(textChanged ( const QString&)),this,SLOT(fLineEditRift(const QString&)));
	connect(lineEditMaxHeightScanCh4,SIGNAL(textChanged ( const QString&)),this,SLOT(fLineEditRift(const QString&)));
	connect(lineEditMinHeightScanCh4,SIGNAL(textChanged ( const QString&)),this,SLOT(fLineEditRift(const QString&)));
	connect(lineEditLineNulHeightScanCh4,SIGNAL(textChanged ( const QString&)),this,SLOT(fLineEditRift(const QString&)));
	connect(lineEditMaxWidthScanCh4,SIGNAL(textChanged ( const QString&)),this,SLOT(fLineEditRift(const QString&)));
	connect(lineEditMinWidthScanCh4,SIGNAL(textChanged ( const QString&)),this,SLOT(fLineEditRift(const QString&)));
	connect(lineEditLineNulWidthScanCh4,SIGNAL(textChanged ( const QString&)),this,SLOT(fLineEditRift(const QString&)));
*/
}
void Dialog::fLineEditIPInitial()
{
	int iAddr = 0;
	QString str0,str1,str2,str3,str4;
	str0=lineEditIPInitial->text();
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
	lineEditIPInitial->setText(str1);
	b2<<=8;
	b1|=b2;		//high
	b4<<=8;
	b3|=b4;		//low
	unitReceive->basicSetting[iAddr]=b1;
	unitSend->basicSetting[iAddr]=b1;
	unitReceive->basicSetting[iAddr+1]=b3;
	unitSend->basicSetting[iAddr+1]=b3;
	if(isSetPressEnter())
		lineEditIPInitial->selectAll();
}
void Dialog::fLineEditBasicPort()
{
	int iAddr = 2;
	bool ok;QChar char0 = '0';
	QString str0,str1,str2;
	str0=lineEditBasicPort->text();
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
	lineEditBasicPort->setText(str2);
	unitReceive->basicSetting[iAddr]=b1;
	unitSend->basicSetting[iAddr]=b1;
	if(isSetPressEnter())
		lineEditBasicPort->selectAll();

}
void Dialog::fLineEditPortBoard()
{
	int iAddr = 3;
	bool ok;QChar char0='0';
	QString str0,str1,str2;
	str0=lineEditPortBoard->text();
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
	lineEditPortBoard->setText(str2);

	unitReceive->basicSetting[iAddr]=b1;
	unitSend->basicSetting[iAddr]=b1;
	if(isSetPressEnter())
		lineEditPortBoard->selectAll();
}
void Dialog::fComboBoxRankAngle(int index )
{
	int iAddr = 10;
	int b1,b2;
	if(comboBoxRankAngle->hasFocus())
	{
//		comboBoxRankAngle->clearFocus();
		b1 = unitReceive->basicSetting[iAddr];
		fWordWr(b1);
		if(index==0) {wordWr.bit3=0;wordWr.bit2=1;}
		if(index==1) {wordWr.bit3=1;wordWr.bit2=0;}
		if(index==2) {wordWr.bit3=1;wordWr.bit2=1;}
		b2=fWordWr();
		unitReceive->basicSetting[iAddr]=b2;
	}
}
void Dialog::fComboBoxProtectMaKo(int index )
{
//65h
	int iAddr = 65;
	int b1,b2;
	if(comboBoxProtectMaKo->hasFocus())
	{
//		comboBoxProtectMaKo->clearFocus();
	b1=unitReceive->basicSetting[iAddr];
	b1 &= 0xff;
	b2 = index;
	b2 <<=8;
	b1 |= b2;
	unitReceive->basicSetting[iAddr]=b1;
	unitSend->basicSetting[iAddr]=b1;
	}
}
void Dialog::fComboBoxProtectMaPrl(int index )
{
//66l
	int iAddr = 66;
	int b1,b2;
	if(comboBoxProtectMaPrl->hasFocus())
	{
	b1=unitReceive->basicSetting[iAddr];
	b1 &= 0xff00;
	b2 = index;
	b1 |= b2;
	unitReceive->basicSetting[iAddr]=b1;
	unitSend->basicSetting[iAddr]=b1;
	}
}
void Dialog::fComboBoxProtectMai(int index )
{
//66h
	int iAddr = 66;
	int b1,b2;
	if(comboBoxProtectMai->hasFocus())
	{
	b1=unitReceive->basicSetting[iAddr];
	b1 &= 0xff;
	b2 = index;
	b2 <<=8;
	b1 |= b2;
	unitReceive->basicSetting[iAddr]=b1;
	unitSend->basicSetting[iAddr]=b1;
	}
}
void Dialog::fComboBoxProtectNorthKo(int index )
{
//67l
	int iAddr = 67;
	int b1,b2;
	if(comboBoxProtectNorthKo->hasFocus())
	{
	b1=unitReceive->basicSetting[iAddr];
	b1 &= 0xff00;
	b2 = index;
	b1 |= b2;
	unitReceive->basicSetting[iAddr]=b1;
	unitSend->basicSetting[iAddr]=b1;
	}
}
void Dialog::fComboBoxProtectNorthRsbn(int index )
{
//67h
	int iAddr = 67;
	int b1,b2;
	if(comboBoxProtectNorthRsbn->hasFocus())
	{
	b1=unitReceive->basicSetting[iAddr];
	b1 &= 0xff;
	b2 = index;
	b2 <<=8;
	b1 |= b2;
	unitReceive->basicSetting[iAddr]=b1;
	unitSend->basicSetting[iAddr]=b1;
	}
}

void Dialog::fLineEditMaxLengthUnit()
{
	int iAddr = 64;
	int b1;
	QString str=lineEditMaxLengthUnit->text();
	b1=str.toInt();

	lineEditMaxLengthUnit->setText(QString("%1").arg(b1));
	unitReceive->basicSetting[iAddr]=b1;
	unitSend->basicSetting[iAddr]=b1;
		if(isSetPressEnter())
			lineEditMaxLengthUnit->selectAll();
}
void Dialog::fLineEditMaxWaitRay()
{
	int iAddr = 65;
	int b1;
	QString str=lineEditMaxWaitRay->text();
	b1=str.toInt();

	lineEditMaxWaitRay->setText(QString("%1").arg(b1));
	unitReceive->basicSetting[iAddr]=b1;
	unitSend->basicSetting[iAddr]=b1;
		if(isSetPressEnter())
			lineEditMaxWaitRay->selectAll();
}

void Dialog::fLineEditGradient()
{
	int iAddr = 7;						//17.07.2015
	int b1,b2,b3;
	QString str1,str2,str3;
	str1=lineEditGradient->text();
	b1=str1.indexOf("°",0);
	str2 = str1.left(b1);
	b2 = str2.toInt();
	str3 = str1.mid(b1+1,str1.size()-b1);
	if(str3.contains("'"))
	{
		str3=str3.mid(0,str3.size()-1);
	}
	b3 = str3.toInt();
	if(b1>=0)
		b1 =b2*60 +b3;
	else
		b1 =b2*60 -b3;

	str1 = QString("%1").arg(b2);
	str1.append(QString("°%1'").arg(b3,2,10,QLatin1Char( '0' )));
	lineEditGradient->setText(str1);
	unitReceive->basicSetting[iAddr]=b1;
	unitSend->basicSetting[iAddr]=b1;
	if(isSetPressEnter())
		lineEditGradient->selectAll();
}
void Dialog::slLiEdMaxTimeBlock()
{
//64
	int iAddr =64;
	PLineEdit* lineEdit=ui.liEdMaxTimeBlock;
	QString str1,str2;
	ushort b1=0;
	str1=lineEdit->text();
	bool ok=true;
	b1=str1.toInt(&ok);
	b1 &= 0xffff;
	if(ok&&b1>0)
	{
		lineEdit->setText(QString("%1").arg(b1));
		unitReceive->basicSetting[iAddr]=b1;
		unitSend->basicSetting[iAddr]=b1;
	}
	return;
}
void Dialog::fLineEditSelectorMa10()
{
	int iAddr = 65;
	QLineEdit* lineEdit = lineEditSelectorMa10;
	int b1;
	QString str1,str2;
	str1=lineEdit->text();
	b1=str1.toInt();
	b1&=0xff;
	lineEdit->setText(QString("%1").arg(b1));
	unitReceive->basicSetting[iAddr]=b1;
	unitSend->basicSetting[iAddr]=b1;
	if(isSetPressEnter())
		lineEdit->selectAll();
}

void Dialog::fLineEditCommon(const QString& str)
{
	//spacebar
	QWidget* focus = focusWidget();
	QString str1,str2;
	str1=str.right(1);
	str2=tr(" ");
	if(str1!=str2)return;
	if(focus == lineEditIPInitial)
		fLineEditIPInitial();
	if(focus == lineEditBasicPort)
		fLineEditBasicPort();
	if(focus == lineEditPortBoard)
		fLineEditPortBoard();
	if(focus == lineEditMaxLengthUnit)
		fLineEditMaxLengthUnit();
	if(focus == lineEditMaxWaitRay)
		fLineEditMaxWaitRay();
	if(focus == lineEditGradient)
		fLineEditGradient();
	if(focus == lineEditSelectorMa10)
		fLineEditSelectorMa10();
}
void Dialog::fRadioButtonGradient()
{
	int iAddr = 10;
	int b1;
	b1 = unitReceive->basicSetting[iAddr];
	fWordWr(b1);
	if(radioButtonGradientMagnetic->isChecked())
	{
		wordWr.bit15=1;
	}
	if(radioButtonGradientGeographic->isChecked())
	{
		wordWr.bit15=0;
	}
	unitReceive->basicSetting[iAddr]=fWordWr();
	unitSend->basicSetting[iAddr]=fWordWr();
}
void Dialog::fRadioButtonVideoActive()
{
	int iAddr = 10;
	int b1;
	b1 = unitReceive->basicSetting[iAddr];
	fWordWr(b1);
	if(radioButtonVideoActiveNPO->isChecked())
	{
		wordWr.bit10=0;wordWr.bit9=1;
	}
	if(radioButtonVideoActiveDK->isChecked())
	{
		wordWr.bit10=1;wordWr.bit9=1;
	}
	if(radioButtonVideoActiveOff->isChecked())
	{
		;wordWr.bit9=0;
	}
	unitReceive->basicSetting[iAddr]=fWordWr();
	unitSend->basicSetting[iAddr]=fWordWr();
}
void Dialog::fRadioButtonPassive()
{
	int iAddr = 10;
	int b1;
	b1=unitReceive->basicSetting[iAddr];
	fWordWr(b1);
	if(radioButtonZandVPassive->isChecked())wordWr.bit7=1;
	if(radioButtonZ->isChecked())wordWr.bit7=0;
	if(checkBoxVideoPassive->isChecked())
	{
		if(wordWr.bit7 == 0)wordWr.bit8=1;
		else wordWr.bit8=0;
	}
	else wordWr.bit8=0;
	unitReceive->basicSetting[iAddr]=fWordWr();
	unitSend->basicSetting[iAddr]=fWordWr();
}
void Dialog::fRadioButtonTypeRls()
{
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
	comboBoxDistance->setCurrentIndex(0);
}
void Dialog::fComboBoxNumberRLS(int index)
{
	if(comboBoxNumberRLS->hasFocus())
	{
//		comboBoxNumberRLS->clearFocus();
	int iAddr = 10;
	int b1=index;
	b1<<=4;
	int b2=unitReceive->basicSetting[iAddr];
	fWordWr(0xffff);
	wordWr.bit6=0;wordWr.bit5=0;wordWr.bit4=0;
	b2&=fWordWr();
	b2|=b1;
	unitReceive->basicSetting[iAddr]=b2;
	unitSend->basicSetting[iAddr]=b2;
	}
}
void Dialog::fRadioButtonScan()
{
	int iAddr = 11;
	int b1;
	b1=unitReceive->basicSetting[iAddr];
	fWordWr(b1);
	if(radioButtonVxH->isChecked())			{wordWr.bit1=0;wordWr.bit0=0;}
	if(radioButtonMAIxNorth->isChecked())	{wordWr.bit1=0;wordWr.bit0=1;}
	if(radioButtonSSP_GO->isChecked())		{wordWr.bit1=1;wordWr.bit0=0;}
	if(radioButtonSSP_GOxTO->isChecked())	{wordWr.bit1=1;wordWr.bit0=1;}
	unitReceive->basicSetting[iAddr] = fWordWr();
	unitSend->basicSetting[iAddr] = fWordWr();
}
void Dialog::fRadioButtonQuantityRLS()
{
	int iAddr = 11;
	fWordWr(unitReceive->basicSetting[iAddr]);
	if(radioButtonQuantityRLS1->isChecked())	wordWr.bit8=0;
	if(radioButtonQuantityRLS2->isChecked())	wordWr.bit8=1;
	unitReceive->basicSetting[iAddr]=fWordWr();
	unitSend->basicSetting[iAddr]=fWordWr();
}
void Dialog::fComboBoxDistanceText(const QString& text)
{
	if(!comboBoxDistance->hasFocus())
		return;
	QString str;
	QStringList list=text.split(" ");
	int n=0;
	if(list.size()==2)
	{
		str=list.at(0);
		int k;bool ok;
		k=str.toInt(&ok);
		if(ok)
		{
			n=k;
		}
	}
	int iAddr = 11;
	int b1,b2;
	b1=unitReceive->basicSetting[iAddr];
	fWordWr(b1);
	switch ( n )
	{
	case 0:
		wordWr.bit13=0;wordWr.bit12=0;wordWr.bit11=0;
		break;
	case 20:
		wordWr.bit13=0;wordWr.bit12=0;wordWr.bit11=1;
		break;
	case 40:
		wordWr.bit13=0;wordWr.bit12=1;wordWr.bit11=0;
		break;
	case 60:
		wordWr.bit13=0;wordWr.bit12=1;wordWr.bit11=1;
		break;
	case 150:
		wordWr.bit13=1;wordWr.bit12=0;wordWr.bit11=0;
		break;
	case 200:
		wordWr.bit13=1;wordWr.bit12=0;wordWr.bit11=1;
		break;
	case 350:
		wordWr.bit13=1;wordWr.bit12=1;wordWr.bit11=0;
		break;
	case 400:
		wordWr.bit13=1;wordWr.bit12=1;wordWr.bit11=1;
		break;
	}
	b2=fWordWr();
	unitReceive->basicSetting[iAddr]=b2;
	unitSend->basicSetting[iAddr]=b2;
	return;
}
void Dialog::fComboBoxDistance(int index)
{
	if(comboBoxDistance->hasFocus())
	{
	int iAddr = 11;
	int b1,b2;
	b1=unitReceive->basicSetting[iAddr];
	b2=index;
	fWordWr(b1);
	wordWr.bit13=0;wordWr.bit12=0;wordWr.bit11=0;
	b1=fWordWr();
	if(index<8)
	{
		b2<<=11;
		b1|=b2;
		unitReceive->basicSetting[iAddr]=b1;
		unitSend->basicSetting[iAddr]=b1;
	}
	}
}
void Dialog::fPushButtonEipaMem()
{
	int iAddr = 58;	//59,61,62,63	-	7,0,10,0,-10
//58	7 глиссады на курсе
//59	0 глиссады на курсе
//61	10 курса на глиссаде
//62	0 курса на глиссаде
//63	-10 курса на глисса
//+ 29.09.2015
//50-55
	QString str;short a1;bool ok;
	QPalette palette;
	if(ui.radioButton_28->isChecked()&&blocMeas->bFix07==false)
	{
		str=ui.label_31->text();
		a1=str.toInt(&ok);
		if(ok)
		{
			blocMeas->bFix07=true;
			blocMeas->shFix07=a1;
			ui.lineEdit_56->setText(str);
			palette = ui.lineEdit_56->palette();
			palette.setColor(QPalette::Text,Qt::red);
			ui.lineEdit_56->setPalette(palette);
//
//			iAddr = 58;
//			unitReceive->setSelectedParameters(iChoiceRls,iAddr,33);
//			unitSend->setSelectedParameters(iChoiceRls,iAddr,33);
		}
	}
	if(ui.radioButton_29->isChecked()&&blocMeas->bFix00==false)
	{
		str=ui.label_31->text();
		a1=str.toInt(&ok);
		if(ok)
		{
			blocMeas->bFix00=true;
			blocMeas->shFix00=a1;
			ui.lineEdit_57->setText(str);
			palette = ui.lineEdit_57->palette();
			palette.setColor(QPalette::Text,Qt::red);
			ui.lineEdit_57->setPalette(palette);
		}
	}
	if(ui.radioButton_30->isChecked()&&blocMeas->bFix1_10==false)
	{
		str=ui.label_25->text();
		a1=str.toInt(&ok);
		if(ok)
		{
			blocMeas->bFix1_10=true;
			blocMeas->shFix1_10=a1;
			ui.lineEdit_58->setText(str);
			palette = ui.lineEdit_58->palette();
			palette.setColor(QPalette::Text,Qt::red);
			ui.lineEdit_58->setPalette(palette);
		}
	}
	if(ui.radioButton_31->isChecked()&&blocMeas->bFix10==false)
	{
		str=ui.label_25->text();
		a1=str.toInt(&ok);
		if(ok)
		{
			blocMeas->bFix10=true;
			blocMeas->shFix10=a1;
			ui.lineEdit_59->setText(str);
			palette = ui.lineEdit_59->palette();
			palette.setColor(QPalette::Text,Qt::red);
			ui.lineEdit_59->setPalette(palette);
		}
	}
	if(ui.radioButton_32->isChecked()&&blocMeas->bFix110==false)
	{
		str=ui.label_25->text();
		a1=str.toInt(&ok);
		if(ok)
		{
			blocMeas->bFix110=true;
			blocMeas->shFix110=a1;
			ui.lineEdit_60->setText(str);
			palette = ui.lineEdit_60->palette();
			palette.setColor(QPalette::Text,Qt::red);
			ui.lineEdit_60->setPalette(palette);
		}
	}
//58	7 глиссады на курсе
	if(blocMeas->bFix07==true)
	{
		iAddr = 58;
		unitReceive->setSelectedParameters(iChoiceRls,iAddr,blocMeas->shFix07);
		unitSend->setSelectedParameters(iChoiceRls,iAddr,blocMeas->shFix07);
		iAddr = 50;	//29.09.2015
//		unitReceive->selectedParameters0[iAddr]=blocMeas->shFix07;
//		unitSend->selectedParameters0[iAddr]=blocMeas->shFix07;
	}
//59	0 глиссады на курсе
	if(blocMeas->bFix00==true)
	{
		iAddr = 59;
		unitReceive->setSelectedParameters(iChoiceRls,iAddr,blocMeas->shFix00);
		unitSend->setSelectedParameters(iChoiceRls,iAddr,blocMeas->shFix00);
		iAddr = 51;	//29.09.2015
//		unitReceive->selectedParameters0[iAddr]=blocMeas->shFix00;
//		unitSend->selectedParameters0[iAddr]=blocMeas->shFix00;
	}
//61	10 курса на глиссаде
	if(blocMeas->bFix110==true)
	{
		iAddr = 61;
		unitReceive->setSelectedParameters(iChoiceRls,iAddr,blocMeas->shFix110);
		unitSend->setSelectedParameters(iChoiceRls,iAddr,blocMeas->shFix110);
		iAddr = 53;	//29.09.2015
//		unitReceive->selectedParameters0[iAddr]=blocMeas->shFix110;
//		unitSend->selectedParameters0[iAddr]=blocMeas->shFix110;
	}
//62	0 курса на глиссаде
	if(blocMeas->bFix10==true)
	{
		iAddr = 62;
		unitReceive->setSelectedParameters(iChoiceRls,iAddr,blocMeas->shFix10);
		unitSend->setSelectedParameters(iChoiceRls,iAddr,blocMeas->shFix10);
		iAddr = 54;	//29.09.2015
//		unitReceive->selectedParameters0[iAddr]=blocMeas->shFix10;
//		unitSend->selectedParameters0[iAddr]=blocMeas->shFix10;
	}
//63	-10 курса на глисса
	if(blocMeas->bFix1_10==true)
	{
		iAddr = 63;
		unitReceive->setSelectedParameters(iChoiceRls,iAddr,blocMeas->shFix1_10);
		unitSend->setSelectedParameters(iChoiceRls,iAddr,blocMeas->shFix1_10);
		iAddr = 55;	//29.09.2015
//		unitReceive->selectedParameters0[iAddr]=blocMeas->shFix1_10;
//		unitSend->selectedParameters0[iAddr]=blocMeas->shFix1_10;
	}
	return;
}
void Dialog::fPushButtonEipaMemOff()
{
	QPalette palette;
	if(ui.radioButton_28->isChecked()&&blocMeas->bFix07==true)
	{
		blocMeas->bFix07=false;
//
		palette = ui.lineEdit_56->palette();
		palette.setColor(QPalette::Text,Qt::black);
		ui.lineEdit_56->setPalette(palette);
	}
	if(ui.radioButton_29->isChecked()&&blocMeas->bFix00==true)
	{
		blocMeas->bFix00=false;
//
		palette = ui.lineEdit_57->palette();
		palette.setColor(QPalette::Text,Qt::black);
		ui.lineEdit_57->setPalette(palette);
	}
	if(ui.radioButton_30->isChecked()&&blocMeas->bFix1_10==true)
	{
		blocMeas->bFix1_10=false;
//
		palette = ui.lineEdit_58->palette();
		palette.setColor(QPalette::Text,Qt::black);
		ui.lineEdit_58->setPalette(palette);
	}
	if(ui.radioButton_31->isChecked()&&blocMeas->bFix10==true)
	{
		blocMeas->bFix10=false;
//
		palette = ui.lineEdit_59->palette();
		palette.setColor(QPalette::Text,Qt::black);
		ui.lineEdit_59->setPalette(palette);
	}
	if(ui.radioButton_32->isChecked()&&blocMeas->bFix110==true)
	{
		blocMeas->bFix110=false;
//
		palette = ui.lineEdit_60->palette();
		palette.setColor(QPalette::Text,Qt::black);
		ui.lineEdit_60->setPalette(palette);
	}
	return;
}
void Dialog::fPushButtonGArh()
{
	QString str;
	short a1;bool ok;
//
	str = ui.lineEdit_252->text();
	a1=str.toInt(&ok);
	if(	blocMeas->bArhG==false)
	{
		if(ok)
		{
//фиксация глиссады амплитуда - есть
			blocMeas->bArhG=true;
//фиксация глиссады амплитуда максимум - сохраняется
			blocMeas->maxG=a1;
//фиксация глиссады амплитуда минимум - сохраняется
			str = ui.lineEdit_253->text();
			a1=str.toInt(&ok);
			blocMeas->minG=a1;
//
			QPalette palette;
//фиксация глиссады амплитуда максимум - красный
			palette = ui.lineEdit_252->palette();
			palette.setColor(QPalette::Text,Qt::red);
			ui.lineEdit_252->setPalette(palette);
//фиксация глиссады амплитуда минимум - красный
			palette = ui.lineEdit_253->palette();
			palette.setColor(QPalette::Text,Qt::red);
			ui.lineEdit_253->setPalette(palette);
//фиксация глиссады амплитуда минимум - красный
		}
	}else
	{
		QMessageBox::warning(this,"для сохранения",
			"фиксация глиссады - Сбросить");
	}
	return;
}
void Dialog::fPushButtonGFix()
{
	int iAddr = 50;	//51	-	7,0
//
	QString str,str1;short a1,a2;bool ok;
	double d1;
	str=ui.label_156->text();
	a1=str.toInt(&ok);
	d1=a1;
	if(ok)
	{
		a2=(short)(d1*((double)(0x8000)/100.));
		if(blocMeas->bArhG)
		{
			if(ui.radioButton_106->isChecked() && blocMeas->bFixG7==false)
			{
				blocMeas->muG7=a2;
//
				blocMeas->bFixG7=true;
				ui.lineEdit_250->setText(str);
				QPalette palette =ui.lineEdit_250->palette();
				palette.setColor(QPalette::Text,Qt::red);
				ui.lineEdit_250->setPalette(palette);
			}
			if(ui.radioButton_107->isChecked() && blocMeas->bFixG0==false)
			{
				blocMeas->muG0=a2;
//
				blocMeas->bFixG0=true;
				ui.lineEdit_251->setText(str);
				QPalette palette =ui.lineEdit_250->palette();
				palette.setColor(QPalette::Text,Qt::red);
				ui.lineEdit_251->setPalette(palette);
			}
		}else
		{
			QMessageBox::warning(this,"необходимо",
				"фиксация глиссады - амплитуда - сохранить");
		}
	}
//процент МУ глиссады 7
	if(blocMeas->bFixG7==true)
	{
		iAddr = 50;
		unitReceive->setSelectedParameters(iChoiceRls,iAddr,blocMeas->muG7);
		unitSend->setSelectedParameters(iChoiceRls,iAddr,blocMeas->muG7);
	}
//процент МУ глиссады 0
	if(blocMeas->bFixG0==true)
	{
		iAddr = 51;
		unitReceive->setSelectedParameters(iChoiceRls,iAddr,blocMeas->muG0);
		unitSend->setSelectedParameters(iChoiceRls,iAddr,blocMeas->muG0);
	}
	return;
}
void Dialog::fPushButtonGFixOff()
{
	QPalette palette;
//
	if(ui.radioButton_106->isChecked())
	{
		blocMeas->bFixG7=false;
//
		palette = ui.lineEdit_250->palette();
		palette.setColor(QPalette::Text,Qt::black);
		ui.lineEdit_250->setPalette(palette);
//
	}
	if(ui.radioButton_107->isChecked())
	{
		blocMeas->bFixG0=false;
//
		palette = ui.lineEdit_251->palette();
		palette.setColor(QPalette::Text,Qt::black);
		ui.lineEdit_251->setPalette(palette);
//
	}
	return;
}
void Dialog::fPushButtonGReset()
{
	QPalette palette;
//
	blocMeas->bArhG=false;
	blocMeas->bFixG7=false;
	palette = ui.lineEdit_250->palette();
	palette.setColor(QPalette::Text,Qt::black);
	ui.lineEdit_250->setPalette(palette);
//
	blocMeas->bFixG0=false;
	palette = ui.lineEdit_251->palette();
	palette.setColor(QPalette::Text,Qt::black);
	ui.lineEdit_251->setPalette(palette);
//
	palette = ui.lineEdit_252->palette();
	palette.setColor(QPalette::Text,Qt::black);
	ui.lineEdit_252->setPalette(palette);
//
	palette = ui.lineEdit_253->palette();
	palette.setColor(QPalette::Text,Qt::black);
	ui.lineEdit_253->setPalette(palette);
	return;
}
void Dialog::fPushButtonCArh()
{
	QString str;
	short a1;bool ok;
//
	str = ui.lineEdit_266->text();
	a1=str.toInt(&ok);
	if(blocMeas->bArhC==false)
	{
		if(ok)
		{
//фиксация курса амплитуда - запомнен
			blocMeas->bArhC=true;
//фиксация курса амплитуда минимум - запомнен
			blocMeas->maxC=a1;
//фиксация курса амплитуда минимум - запомнен
			str = ui.lineEdit_267->text();
			a1=str.toInt(&ok);
			blocMeas->minC=a1;
//
			QPalette palette;
//фиксация курса амплитуда максимум - красный
			palette = ui.lineEdit_266->palette();
			palette.setColor(QPalette::Text,Qt::red);
			ui.lineEdit_266->setPalette(palette);
//фиксация курса амплитуда минимум - красный
			palette = ui.lineEdit_267->palette();
			palette.setColor(QPalette::Text,Qt::red);
			ui.lineEdit_267->setPalette(palette);
		}
	}else
	{
		QMessageBox::warning(this,"для сохранения",
			"фиксация курса - Сбросить");
	}
	return;
}
void Dialog::fPushButtonCFix()
{
	int iAddr = 53;//54,55	-	+10,0,-10
//
	QString str,str1;short a1,a2;bool ok;
	double d1;
	str=ui.label_168->text();
	a1=str.toInt(&ok);
	d1=a1;
	if(ok)
	{
		a2=(short)(d1*((double)(0x8000)/100.));
		if(blocMeas->bArhC)
		{
			if(ui.radioButton_114->isChecked() && blocMeas->bFixC_10==false)
			{
				blocMeas->muC_10=a2;
//
				blocMeas->bFixC_10=true;
				ui.lineEdit_268->setText(str);
				QPalette palette =ui.lineEdit_268->palette();
				palette.setColor(QPalette::Text,Qt::red);
				ui.lineEdit_268->setPalette(palette);
			}
			if(ui.radioButton_115->isChecked() && blocMeas->bFixC0==false)
			{
				blocMeas->muC0=a2;
//
				blocMeas->bFixC0=true;
				ui.lineEdit_269->setText(str);
				QPalette palette =ui.lineEdit_269->palette();
				palette.setColor(QPalette::Text,Qt::red);
				ui.lineEdit_269->setPalette(palette);
			}
			if(ui.radioButton_116->isChecked() && blocMeas->bFixC10==false)
			{
				blocMeas->muC10=a2;
//
				blocMeas->bFixC10=true;
				ui.lineEdit_270->setText(str);
				QPalette palette =ui.lineEdit_270->palette();
				palette.setColor(QPalette::Text,Qt::red);
				ui.lineEdit_270->setPalette(palette);
			}
		}else
		{
			QMessageBox::warning(this,"необходимо",
				"фиксация курса - амплитуда - сохранить");
		}
	}
//процент МУ курса +10
	if(blocMeas->bFixC10==true)
	{
		iAddr = 53;
		unitReceive->setSelectedParameters(iChoiceRls,iAddr,blocMeas->muC10);
		unitSend->setSelectedParameters(iChoiceRls,iAddr,blocMeas->muC10);
	}
//процент МУ курса 0
	if(blocMeas->bFixC0==true)
	{
		iAddr = 54;
		unitReceive->setSelectedParameters(iChoiceRls,iAddr,blocMeas->muC0);
		unitSend->setSelectedParameters(iChoiceRls,iAddr,blocMeas->muC0);
	}
//процент МУ курса -10
	if(blocMeas->bFixC_10==true)
	{
		iAddr = 55;
		unitReceive->setSelectedParameters(iChoiceRls,iAddr,blocMeas->muC_10);
		unitSend->setSelectedParameters(iChoiceRls,iAddr,blocMeas->muC_10);
	}

	return;
}
void Dialog::fPushButtonCFixOff()
{
	QPalette palette;
//
	if(ui.radioButton_114->isChecked())
	{
		blocMeas->bFixC_10=false;
//
		palette = ui.lineEdit_268->palette();
		palette.setColor(QPalette::Text,Qt::black);
		ui.lineEdit_268->setPalette(palette);
//
	}
	if(ui.radioButton_115->isChecked())
	{
		blocMeas->bFixC0=false;
//
		palette = ui.lineEdit_269->palette();
		palette.setColor(QPalette::Text,Qt::black);
		ui.lineEdit_269->setPalette(palette);
//
	}
	if(ui.radioButton_116->isChecked())
	{
		blocMeas->bFixC10=false;
//
		palette = ui.lineEdit_270->palette();
		palette.setColor(QPalette::Text,Qt::black);
		ui.lineEdit_270->setPalette(palette);
//
	}
	return;
}
void Dialog::fPushButtonCReset()
{
	QPalette palette;
//
	blocMeas->bArhC=false;
	blocMeas->bFixC_10=false;
	palette = ui.lineEdit_268->palette();
	palette.setColor(QPalette::Text,Qt::black);
	ui.lineEdit_268->setPalette(palette);
//
	blocMeas->bFixC0=false;
	palette = ui.lineEdit_269->palette();
	palette.setColor(QPalette::Text,Qt::black);
	ui.lineEdit_269->setPalette(palette);
//
	blocMeas->bFixC10=false;
	palette = ui.lineEdit_270->palette();
	palette.setColor(QPalette::Text,Qt::black);
	ui.lineEdit_270->setPalette(palette);
//
	palette = ui.lineEdit_266->palette();
	palette.setColor(QPalette::Text,Qt::black);
	ui.lineEdit_266->setPalette(palette);
//
	palette = ui.lineEdit_267->palette();
	palette.setColor(QPalette::Text,Qt::black);
	ui.lineEdit_267->setPalette(palette);
	return;
}


void Dialog::fGroupBox_70()
{
	int iAddr = 11;
	int b1;
	b1=unitReceive->basicSetting[iAddr];
	fWordWr(b1);
	if(ui.groupBox_70->isChecked())
	{
		wordWr.bit6 = 1;
	}
	else
	{
		wordWr.bit6 = 0;
	}
	unitReceive->basicSetting[iAddr]=fWordWr();
	unitSend->basicSetting[iAddr]=fWordWr();
}
void Dialog::fLineEditCourseLanding1()
{
	int iAddr = 32;
	int b1;QString str1,str2;
	str1=lineEditCourseLanding1->text();
	b1=str1.toInt();

	lineEditCourseLanding1->setText(QString("%1").arg(b1));
	unitReceive->basicSetting[iAddr]=b1;
	unitSend->basicSetting[iAddr]=b1;
		if(isSetPressEnter())
			lineEditCourseLanding1->selectAll();
}
void Dialog::fLineEditTypeRls(const QString& str)
{
	//spacebar
	QWidget* focus = focusWidget();
	QString str1,str2;
	str1=str.right(1);
	str2=tr(" ");
	if(str1!=str2)return;
	if(focus == lineEditCourseLanding1)
		fLineEditCourseLanding1();

}
//порт
void Dialog::fComboBoxProtocol(int index)
{
	int iAddr = 96;
	fWordWr(unitReceive->basicSetting[iAddr]);
	if(index==0)
	{
		wordWr.bit8=1;
		wordWr.bit9=0;
	}
	if(index==1)
	{
		wordWr.bit8=0;
		wordWr.bit9=1;
	}
	unitReceive->basicSetting[iAddr]=fWordWr();
	unitSend->basicSetting[iAddr]=fWordWr();
}
void Dialog::fComboBoxAPOI(int index)
{
	if(comboBoxAPOI->hasFocus())
	{
	int iAddr = 96;
	int b1;
	b1=unitReceive->basicSetting[iAddr];
	b1 &= 0xfffc;
	if(index<4)
	{
		b1 |= index;
	}
	unitReceive->basicSetting[iAddr]=b1;
	unitSend->basicSetting[iAddr]=b1;
	}
}
void Dialog::fComboBoxTypeComPort(int index)
{
	if(comboBoxTypeComPort->hasFocus())
	{
	int iAddr = 96;
	fWordWr(unitReceive->basicSetting[iAddr]);
	if(index<2)
	{
		wordWr.bit6=index;
	}
	unitReceive->basicSetting[iAddr]=fWordWr();
	unitSend->basicSetting[iAddr]=fWordWr();
	}
}
void Dialog::fComboBoxTypeComSpeed(int index)
{
	if(comboBoxComSpeed->hasFocus())
	{
	int iAddr = 97;
	fWordWr(unitReceive->basicSetting[iAddr]);
	wordWr.bit2=0;wordWr.bit1=0;wordWr.bit0=0;
	int b1=fWordWr();
	if(index<8)
	{
		b1|=index;
		unitReceive->basicSetting[iAddr]=b1;
		unitSend->basicSetting[iAddr]=b1;
	}
	}
}
void Dialog::fRadioButtonAPOIGradient()
{
	int iAddr = 96;
	fWordWr(unitReceive->basicSetting[iAddr]);
	if(radioButtonAPOIGradientMagnetic->isChecked())
	{
		wordWr.bit15 = 1;
	}
	if(radioButtonAPOIGradientGeographic->isChecked())
	{
		wordWr.bit15 = 0;
	}
	unitReceive->basicSetting[iAddr]=fWordWr();
	unitSend->basicSetting[iAddr]=fWordWr();
}
void Dialog::fComboBoxComParity(int index)
{
	if(comboBoxComParity->hasFocus())
	{
	int iAddr = 97;
	fWordWr(unitReceive->basicSetting[iAddr]);
	if(index==0)wordWr.bit4=0;
	if(index==1){wordWr.bit4=1;wordWr.bit5=0;}
	if(index==2){wordWr.bit4=1;wordWr.bit5=1;}
	unitReceive->basicSetting[iAddr]=fWordWr();
	unitSend->basicSetting[iAddr]=fWordWr();
	}
}
void Dialog::fLineEditPointStandingDistance()
{
	int iAddr = 106;
	int b1;QString str1,str2;
	str1=lineEditPointStandingDistance->text();
	b1=str1.toInt();

	lineEditPointStandingDistance->setText(QString("%1").arg(b1));
	unitReceive->basicSetting[iAddr]=b1;
	unitSend->basicSetting[iAddr]=b1;
		if(isSetPressEnter())
			lineEditPointStandingDistance->selectAll();
}
void Dialog::fLiEdAzimuth(void* l, ushort* pReceiveSePar, ushort* pSendSelPar)
{

	PLineEdit* lineEdit =(PLineEdit*)l;
	int b1,b2,b3,index,index1;bool ok1,ok2;
	int a0,a1,a2;QString str;
	QString str1,str2,str3;
	str1=lineEdit->text();
	index=str1.indexOf("°",0);
	if(index==-1)
	{
		str2=str1;
		str3="00";
	}else
	{
		str2 = str1.left(index);
		str3 = str1.mid(index+1,str1.size()-index);
	}
	b2 = str2.toInt(&ok1);
	index1 = str3.indexOf("'");
	if(index1>0)
	{
		str3.remove(index1,1);
	}
	b3 = str3.toInt(&ok2);
	b1 =b2*60 +b3;
////
	a0=b1;
	a1 = a0/60;
	a2 = a0 - (a1*60);
	str = QString("%1").arg(a1);
	str.append(QString("°%1'").arg(a2,2,10,QLatin1Char( '0' )));
//
	if(ok1&&ok2)
	{
		lineEdit->setText(str);
//
		*pReceiveSePar=b1;
		*pSendSelPar=b1;
	}else
	{
	a0=*pReceiveSePar;
	a1 = a0/60;
	a2 = a0 - (a1*60);
	str = QString("%1").arg(a1);
	str.append(QString("°%1'").arg(a2,2,10,QLatin1Char( '0' )));
		lineEdit->setText(str);
	}
	return;
}
void Dialog::fLineEditPointStandingAzimuth()
{
	int iAddr = 107;
	PLineEdit* lineEdit = lineEditPointStandingAzimuth;
	fLiEdAzimuth(	lineEdit,
		&unitReceive->basicSetting[iAddr],
		&unitSend->basicSetting[iAddr]	);
}
void Dialog::fLineEditPointStanding(const QString& str)
{
	//spacebar
	QWidget* focus = focusWidget();
	QString str1,str2;
	str1=str.right(1);
	str2=tr(" ");
	if(str1!=str2)return;
	if(focus == lineEditPointStandingDistance)
		fLineEditPointStandingDistance();
	if(focus == lineEditPointStandingAzimuth)
		fLineEditPointStandingAzimuth();
}
void Dialog::fRadioButtonNoUsed()
{
	int iAddr = 96;
	fWordWr(unitReceive->basicSetting[iAddr]);
	if(radioButtonNoUsed->isChecked())
	{
		wordWr.bit4=0;wordWr.bit3=0;wordWr.bit2=0;
		ui.groupBox_31->setEnabled(false);
		ui.groupBox_32->setEnabled(false);
		ui.groupBox_30->setEnabled(false);
		ui.groupBox_97->setEnabled(false);
		ui.groupBox_98->setEnabled(false);
		ui.groupBox_198->setEnabled(false);
	}
	if(radioButtonApoi->isChecked())
	{
		wordWr.bit4=1;wordWr.bit3=0;wordWr.bit2=1;
		ui.groupBox_31->setEnabled(true);
		ui.groupBox_32->setEnabled(true);
		ui.groupBox_30->setEnabled(true);
		ui.groupBox_97->setEnabled(true);
		ui.groupBox_98->setEnabled(true);
		ui.groupBox_198->setEnabled(true);
	}
	unitReceive->basicSetting[iAddr]=fWordWr();
	unitSend->basicSetting[iAddr]=fWordWr();
}
//arguments(параметры)
void Dialog::fRadioButtonRls0Type()
{
	int iAddr = 10;
	fWordWr(unitReceive->isSelectedParameters(0,iAddr));
	if(ui.radioButton_18->isChecked())	
		wordWr.bit1=0;
	if(ui.radioButton_19->isChecked())	
		wordWr.bit1=1;
	int b1=fWordWr();
	unitReceive->setSelectedParameters(0,iAddr,b1);
	unitSend->setSelectedParameters(0,iAddr,b1);
}
void Dialog::fRadioButtonRls1Type()
{
	int iAddr = 10;
	fWordWr(unitReceive->isSelectedParameters(1,iAddr));
	if(ui.radioButton_104->isChecked())	
		wordWr.bit1=0;
	if(ui.radioButton_105->isChecked())	
		wordWr.bit1=1;
	int b1=fWordWr();
	unitReceive->setSelectedParameters(1,iAddr,b1);
	unitSend->setSelectedParameters(1,iAddr,b1);
}
void Dialog::fCheckBoxRls0LabelAngleOn()
{
	int iAddr = 10;
	fWordWr(unitReceive->isSelectedParameters(0,iAddr));
	if(ui.checkBox_2->isChecked()) wordWr.bit0=1;
	else wordWr.bit0 = 0;
	unitReceive->setSelectedParameters(0,iAddr,fWordWr());
	unitSend->setSelectedParameters(0,iAddr,fWordWr());
}
void Dialog::fCheckBoxRls0LabelAngleCorrection()
{
	int iAddr = 10;
	fWordWr(unitReceive->isSelectedParameters(0,iAddr));
	if(ui.checkBox_3->isChecked()) wordWr.bit4=1;
	else wordWr.bit4 = 0;
	unitReceive->setSelectedParameters(0,iAddr,fWordWr());
	unitSend->setSelectedParameters(0,iAddr,fWordWr());
}
void Dialog::fCheckBoxRls1LabelAngleOn()
{
	int iAddr = 10;
	fWordWr(unitReceive->isSelectedParameters(1,iAddr));
	if(checkBoxRls1LabelAngleOn->isChecked()) wordWr.bit0=1;
	else wordWr.bit0 = 0;
	unitReceive->setSelectedParameters(1,iAddr,fWordWr());
	unitSend->setSelectedParameters(1,iAddr,fWordWr());
}
void Dialog::fCheckBoxRls1LabelAngleCorrection()
{
	int iAddr = 10;
	fWordWr(unitReceive->isSelectedParameters(1,iAddr));
	if(checkBoxRls1LabelAngleCorrection->isChecked()) wordWr.bit4=1;
	else wordWr.bit4 = 0;
	unitReceive->setSelectedParameters(1,iAddr,fWordWr());
	unitSend->setSelectedParameters(1,iAddr,fWordWr());
}
void Dialog::fCheckBoxAvto()
{
//10(8):автоматический порог запуска и видео+запуск включен,0-выкл.
	int iAddr = 10;
	fWordWr(unitReceive->isSelectedParameters(iChoiceRls,iAddr));
	if(ui.groupBox_57->isChecked()) wordWr.bit8=1;
	else wordWr.bit8 = 0;
	unitReceive->setSelectedParameters(iChoiceRls,iAddr,fWordWr());
	unitSend->setSelectedParameters(iChoiceRls,iAddr,fWordWr());
}
void Dialog::fLineEditNameRls0()
{
	int iAddr = 0;
	QLineEdit* lineEdit = lineEditNameRls0;
	QString str1,str2;
	ushort b1;
	QChar char1,char2;
	str1=lineEdit->text();
	b1=str1.size();
	QByteArray ba1,ba2;
	ba2.resize(1);
	ba2[0]=0x00;

	ba1 = str1.toAscii();
	str1 = str1.trimmed();

	lineEdit->setText(str1);

	b1=str1.size();

	QByteArray ba = str1.toAscii();

	b1 = b1 > 7 ? 8 : b1;	
	ushort ua[8];
	memset(ua, 0, sizeof(ua));
	memcpy(ua, str1.toAscii().constData(), b1);

	///*
	for(int i=0;i<4;i++)
	{
		unitReceive->setSelectedParameters(0,iAddr+i,ua[i]);
		unitSend->setSelectedParameters(0,iAddr+i,ua[i]);
	}
	//*/

	if(isSetPressEnter())
		lineEdit->selectAll();
}
void Dialog::fLineEditNameRls1()
{
	int iAddr = 0;
	QLineEdit* lineEdit = lineEditNameRls1;
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

	b1 = b1 > 7 ? 8 : b1;	
	ushort ua[8];
	memset(ua, 0, sizeof(ua));
	memcpy(ua, str1.toAscii().constData(), b1);

	///*
	for(int i=0;i<4;i++)
	{
		unitReceive->setSelectedParameters(1,iAddr+i,ua[i]);
		unitSend->setSelectedParameters(1,iAddr+i,ua[i]);
	}
	if(isSetPressEnter())
		lineEdit->selectAll();
}
void Dialog::fLineEditRls0NameArp()
{
	int iAddr = 84;
	QLineEdit* lineEdit = lineEditRls0NameArp;
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

	b1 = b1 > 7 ? 8 : b1;	
	ushort ua[8];
	memset(ua, 0, sizeof(ua));
	memcpy(ua, str1.toAscii().constData(), b1);

	///*
	for(int i=0;i<4;i++)
	{
		unitReceive->setSelectedParameters(iChoiceArp,iAddr+i,ua[i]);
		unitSend->setSelectedParameters(iChoiceArp,iAddr+i,ua[i]);
	}
	if(isSetPressEnter())
		lineEdit->selectAll();
}
void Dialog::fLineEditNameAPOI()
{
	int iAddr = 98;
	QLineEdit* lineEdit = lineEditNameAPOI;
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

	b1 = b1 > 7 ? 8 : b1;	
	ushort ua[8];
	memset(ua, 0, sizeof(ua));
	memcpy(ua, str1.toAscii().constData(), b1);

	///*
	for(int i=0;i<4;i++)
	{
		unitReceive->basicSetting[iAddr+i]=ua[i];
		unitSend->basicSetting[iAddr+i]=ua[i];
	}
	if(isSetPressEnter())
		lineEdit->selectAll();
}
void Dialog::fLineEditNameBoard()
{
	int iAddr = 12;
	QLineEdit* lineEdit = lineEditNameBoard;
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

	b1 = b1 > 7 ? 8 : b1;	
	ushort ua[8];
	memset(ua, 0, sizeof(ua));
	memcpy(ua, str1.toAscii().constData(), b1);

	///*
	for(int i=0;i<4;i++)
	{
		unitReceive->basicSetting[iAddr+i]=ua[i];
		unitSend->basicSetting[iAddr+i]=ua[i];
	}
	if(isSetPressEnter())
		lineEdit->selectAll();
}

void Dialog::fLineEditName(const QString& str)
{
	QString str1,str2;
	str1=str.right(1);
	str2=tr(" ");
	if(str1==str2||str1==tr(""))
	{
		if(lineEditNameRls0->hasFocus())
			fLineEditNameRls0();
		if(lineEditNameRls1->hasFocus())
			fLineEditNameRls1();
		if(lineEditRls0NameArp->hasFocus())
			fLineEditRls0NameArp();
		if(lineEditNameAPOI->hasFocus())
			fLineEditNameAPOI();
		if(lineEditNameBoard->hasFocus())
			fLineEditNameBoard();
	}
}

void Dialog::fLineEditRls0PointStandingDistance()
{
	int iAddr = 8;
	QLineEdit* lineEdit = lineEditRls0PointStandingDistance;
	int b1;
	QString str1,str2;
	str1=lineEdit->text();
	b1=str1.toInt();
	lineEdit->setText(QString("%1").arg(b1));
	unitReceive->setSelectedParameters(0,iAddr,b1);
	unitSend->setSelectedParameters(0,iAddr,b1);
	if(isSetPressEnter())
		lineEdit->selectAll();
}
void Dialog::fLineEditRls0PointStandingAzimuth()
{
	int iAddr = 9;
	PLineEdit* lineEdit = lineEditRls0PointStandingAzimuth;
	fLiEdAzimuth(	lineEdit,
		&unitReceive->selectedParameters0[iAddr],
		&unitSend->selectedParameters0[iAddr]	);
}



void Dialog::fLineEditRls0EndFaceVPP1()
{
	int iAddr = 36;
	QLineEdit* lineEdit = lineEditRls0EndFaceVPP1;
	int b1;
	QString str1,str2;
	str1=lineEdit->text();
	b1=str1.toInt();
	lineEdit->setText(QString("%1").arg(toShort(b1)));
	unitReceive->setSelectedParameters(0,iAddr,toShort(b1));
	unitSend->setSelectedParameters(0,iAddr,toShort(b1));
	if(isSetPressEnter())
		lineEdit->selectAll();
}
void Dialog::fLineEditRls0HighAerialVPP1()
{
	int iAddr = 35;
	QLineEdit* lineEdit = lineEditRls0HighAerialVPP1;
	int b1;
	QString str1,str2;
	str1=lineEdit->text();
	b1=str1.toInt();
	lineEdit->setText(QString("%1").arg(toShort(b1)));
	unitReceive->setSelectedParameters(0,iAddr,toShort(b1));
	unitSend->setSelectedParameters(0,iAddr,toShort(b1));
	if(isSetPressEnter())
		lineEdit->selectAll();
}
void Dialog::fLineEditRls0DistanceAxisVPP()
{
	int iAddr = 33;
	QLineEdit* lineEdit = lineEditRls0DistanceAxisVPP;
	int b1;
	QString str1,str2;
	str1=lineEdit->text();
	b1=str1.toInt();
	lineEdit->setText(QString("%1").arg(toShort(b1)));
	unitReceive->setSelectedParameters(0,iAddr,toShort(b1));
	unitSend->setSelectedParameters(0,iAddr,toShort(b1));
	if(isSetPressEnter())
		lineEdit->selectAll();
}
void Dialog::fLineEditRls0PointPlanting1()
{
	int iAddr = 37;
	QLineEdit* lineEdit = lineEditRls0PointPlanting1;
	int b1;
	QString str1,str2;
	str1=lineEdit->text();
	b1=str1.toInt();
	lineEdit->setText(QString("%1").arg(toShort(b1)));
	unitReceive->setSelectedParameters(0,iAddr,toShort(b1));
	unitSend->setSelectedParameters(0,iAddr,toShort(b1));
	if(isSetPressEnter())
		lineEdit->selectAll();
}
void Dialog::fLineEditRls0EndFaceVPP2()
{
	int iAddr = 41;
	QLineEdit* lineEdit = lineEditRls0EndFaceVPP2;
	int b1;
	QString str1,str2;
	str1=lineEdit->text();
	b1=str1.toInt();
	lineEdit->setText(QString("%1").arg(toShort(b1)));
	unitReceive->setSelectedParameters(0,iAddr,toShort(b1));
	unitSend->setSelectedParameters(0,iAddr,toShort(b1));
	if(isSetPressEnter())
		lineEdit->selectAll();
}
void Dialog::fLineEditRls0HighAerialVPP2()
{
	int iAddr = 40;
	QLineEdit* lineEdit = lineEditRls0HighAerialVPP2;
	int b1;
	QString str1,str2;
	str1=lineEdit->text();
	b1=str1.toInt();
	lineEdit->setText(QString("%1").arg(toShort(b1)));
	unitReceive->setSelectedParameters(0,iAddr,toShort(b1));
	unitSend->setSelectedParameters(0,iAddr,toShort(b1));
	if(isSetPressEnter())
		lineEdit->selectAll();
}
void Dialog::fLineEditRls0PointPlanting2()
{
	int iAddr = 42;
	QLineEdit* lineEdit = lineEditRls0PointPlanting2;
	int b1;
	QString str1,str2;
	str1=lineEdit->text();
	b1=str1.toInt();
	lineEdit->setText(QString("%1").arg(toShort(b1)));
	unitReceive->setSelectedParameters(0,iAddr,toShort(b1));
	unitSend->setSelectedParameters(0,iAddr,toShort(b1));
	if(isSetPressEnter())
		lineEdit->selectAll();
}


void Dialog::fLineEditRls0BlkVideo()
{
	int iAddr = 64;
	PLineEdit* lineEdit = lineEditRls0BlkVideo;
        QString str,str1;
        ushort b1;int b0=0;
	str = lineEdit->text();
	bool ok;
	b0 = str.toInt(&ok);
	if(ok && b0>=1 && b0<=100000)
	{
		str1 = QString("%1").arg(b0);
		b0 = str1.toInt();
		unitReceive->setSelectedParameters(0,iAddr,b0/25);
		unitSend->setSelectedParameters(0,iAddr,b0/25);
	}else
	{
		b1=unitReceive->isSelectedParameters(0,iAddr);
		str1 = QString("%1").arg((int)b1*25);
	}
	lineEdit->setSText(str1);

	return;
}
void Dialog::fLineEditRls0TurnKO()
{
	int iAddr = 47;
	QLineEdit* lineEdit = lineEditRls0TurnKO;
	int b1;
//	QString str1,str2;
//	str1=lineEdit->text();
	QString str,str2,str3,strend;
	str = lineEdit->text();
        uint ival=0;double deg=0;
	if(str.contains(QChar('.'))||str.contains(QChar(',')))
	{
		while(str.contains(QChar('°')))
		{
			str.chop(1);
		}
		deg=str.toDouble();
		ival = deg*4096/360+.5;
	}else
	{
		if(str.contains(QChar('/')))
		{
			str=str.right(str.indexOf(QChar('/')));
		}
		ival=str.toInt()&0xfff;
		deg = ival*360./4096.;
	}
	str2=QString("%1").arg(ival);
	str3=QString("%1").arg(deg,0,'f',1);
	str3.replace(str3.indexOf(QChar('.')),1,QChar(','));
	strend=str3+"°"+"/"+str2;
//	b1=str1.toInt();
	b1=ival;
//	lineEdit->setText(QString("%1").arg(to12bit(b1)));
	lineEdit->setText(strend);
	unitReceive->setSelectedParameters(0,iAddr,to12bit(b1));
	unitSend->setSelectedParameters(0,iAddr,to12bit(b1));
	if(isSetPressEnter())
		lineEdit->selectAll();
}
void Dialog::fLineEditRls0DisPlaceVPass()
{
	int iAddr = 45;
	QLineEdit* lineEdit = lineEditRls0DisPlaceVPass;
	int b1;
	QString str1,str2;
	str1=lineEdit->text();
	b1=str1.toInt();
	lineEdit->setText(QString("%1").arg(toShort(b1)));			//12.07.2015
	unitReceive->setSelectedParameters(0,iAddr,toShort(b1));			//12.07.2015
	unitSend->setSelectedParameters(0,iAddr,toShort(b1));			//12.07.2015
	if(isSetPressEnter())
		lineEdit->selectAll();
}
void Dialog::fLineEditRls0DisPlaceVAct()
{
	int iAddr = 46;
	QLineEdit* lineEdit = lineEditRls0DisPlaceVAct;
	int b1;
	QString str1,str2;
	str1=lineEdit->text();
	b1=str1.toInt();
	lineEdit->setText(QString("%1").arg(toShort(b1)));			//12.07.2015
	unitReceive->setSelectedParameters(0,iAddr,toShort(b1));			//12.07.2015
	unitSend->setSelectedParameters(0,iAddr,toShort(b1));			//12.07.2015
	if(isSetPressEnter())
		lineEdit->selectAll();
}
void Dialog::fLineEditRls0DisplaceNulG()
{
	int iAddr = 48;
	QLineEdit* lineEdit = lineEditRls0DisplaceNulG;
	int b1,b2;
	QString str1,str2;
	str1=lineEdit->text();
	b1=str1.toInt();
	b1&=0xff;
	lineEdit->setText(QString("%1").arg(toChar(b1)));
	b2=unitReceive->isSelectedParameters(0,iAddr);
	b2&=0xff00;
	b1|=b2;
	unitReceive->setSelectedParameters(0,iAddr,b1);
	unitSend->setSelectedParameters(0,iAddr,b1);
	if(isSetPressEnter())
		lineEdit->selectAll();
}
void Dialog::fLineEditRls0DisplaceNulK()
{
	int iAddr = 48;
	QLineEdit* lineEdit = lineEditRls0DisplaceNulK;
	int b1,b2;
	QString str1,str2;
	str1=lineEdit->text();
	b1=str1.toInt();
	b1&=0xff;
	lineEdit->setText(QString("%1").arg(toChar(b1)));
	b1<<=8;
	b2=unitReceive->isSelectedParameters(0,iAddr);
	b2&=0xff;
	b1|=b2;
	unitReceive->setSelectedParameters(0,iAddr,b1);
	unitSend->setSelectedParameters(0,iAddr,b1);
	if(isSetPressEnter())
		lineEdit->selectAll();
}
void Dialog::fLineEditRls0CombG()
{
	int iAddr = 49;
	QLineEdit* lineEdit = lineEditRls0CombG;
	int b1,b2;
	QString str1,str2;
	str1=lineEdit->text();
	b1=str1.toInt();
	b1&=0xff;
	lineEdit->setText(QString("%1").arg(toChar(b1)));
	b2=unitReceive->isSelectedParameters(0,iAddr);
	b2&=0xff00;
	b1|=b2;
	unitReceive->setSelectedParameters(0,iAddr,b1);
	unitSend->setSelectedParameters(0,iAddr,b1);
	if(isSetPressEnter())
		lineEdit->selectAll();
}
void Dialog::fLineEditRls0CombK()
{
	int iAddr = 49;
	QLineEdit* lineEdit = lineEditRls0CombK;
	int b1,b2;
	QString str1,str2;
	str1=lineEdit->text();
	b1=str1.toInt();
	b1&=0xff;
	lineEdit->setText(QString("%1").arg(toChar(b1)));
	b1<<=8;
	b2=unitReceive->isSelectedParameters(0,iAddr);
	b2&=0xff;
	b1|=b2;
	unitReceive->setSelectedParameters(0,iAddr,b1);
	unitSend->setSelectedParameters(0,iAddr,b1);
	if(isSetPressEnter())
		lineEdit->selectAll();
}
void Dialog::fLineEditRls0ScopeG()
{
	int iAddr = 44;
	QLineEdit* lineEdit = lineEditRls0ScopeG;
	int b1,b2;
	QString str1,str2;
	str1=lineEdit->text();
	b1=str1.toInt();
	b1&=0xff;
	lineEdit->setText(QString("%1").arg(toChar(b1)));
	b2=unitReceive->isSelectedParameters(0,iAddr);
	b2&=0xff00;
	b1|=b2;
	unitReceive->setSelectedParameters(0,iAddr,b1);
	unitSend->setSelectedParameters(0,iAddr,b1);
	if(isSetPressEnter())
		lineEdit->selectAll();
}
void Dialog::fLineEditRls0ScopeK()
{
	int iAddr = 44;
	QLineEdit* lineEdit = lineEditRls0ScopeK;
	int b1,b2;
	QString str1,str2;
	str1=lineEdit->text();
	b1=str1.toInt();
	b1&=0xff;
	lineEdit->setText(QString("%1").arg(toChar(b1)));
	b1<<=8;
	b2=unitReceive->isSelectedParameters(0,iAddr);
	b2&=0xff;
	b1|=b2;
	unitReceive->setSelectedParameters(0,iAddr,b1);
	unitSend->setSelectedParameters(0,iAddr,b1);
	if(isSetPressEnter())
		lineEdit->selectAll();
}
void Dialog::fLineEditRls0MuGMaxRift()
{
	int iAddr = 56;
	QLineEdit* lineEdit = lineEditRls0MuGMaxRift;
	int b1,b2;
	QString str1,str2;
	str1=lineEdit->text();
//	c1=str1.toDouble();
//	c2=c1*(double)0x80;
//	b1=c2;
	b1=(str1.toInt());
	b1&=0xff;
	lineEdit->setText(QString("%1").arg(b1));
	b2=unitReceive->isSelectedParameters(0,iAddr);
	b2&=0xff00;
	b1|=b2;
	unitReceive->setSelectedParameters(0,iAddr,b1);
	unitSend->setSelectedParameters(0,iAddr,b1);
	if(isSetPressEnter())
		lineEdit->selectAll();
}
void Dialog::fLineEditRls0MuGMinRift()
{
	int iAddr = 56;
	QLineEdit* lineEdit = lineEditRls0MuGMinRift;
	int b1,b2;
	QString str1,str2;
	str1=lineEdit->text();
	b1=(str1.toInt());	b1&=0xff;
	lineEdit->setText(QString("%1").arg(b1));
	b1<<=8;
	b2=unitReceive->isSelectedParameters(0,iAddr);
	b2&=0xff;
	b1|=b2;
	unitReceive->setSelectedParameters(0,iAddr,b1);
	unitSend->setSelectedParameters(0,iAddr,b1);
	if(isSetPressEnter())
		lineEdit->selectAll();
}
void Dialog::fLineEditRls0MuKMaxRift()
{
	int iAddr = 57;
	QLineEdit* lineEdit = lineEditRls0MuKMaxRift;
	int b1,b2;
	QString str1,str2;
	str1=lineEdit->text();
	b1=str1.toInt();
	b1&=0xff;
	lineEdit->setText(QString("%1").arg((b1)));
	b2=unitReceive->isSelectedParameters(0,iAddr);
	b2&=0xff00;
	b1|=b2;
	unitReceive->setSelectedParameters(0,iAddr,b1);
	unitSend->setSelectedParameters(0,iAddr,b1);
	if(isSetPressEnter())
		lineEdit->selectAll();
}
void Dialog::fLineEditRls0MuKMinRift()
{
	int iAddr = 57;
	QLineEdit* lineEdit = lineEditRls0MuKMinRift;
	int b1,b2;
	QString str1,str2;
	str1=lineEdit->text();
	b1=str1.toInt();
	b1&=0xff;
	lineEdit->setText(QString("%1").arg(b1));
	b1<<=8;
	b2=unitReceive->isSelectedParameters(0,iAddr);
	b2&=0xff;
	b1|=b2;
	unitReceive->setSelectedParameters(0,iAddr,b1);
	unitSend->setSelectedParameters(0,iAddr,b1);
	if(isSetPressEnter())
		lineEdit->selectAll();
}

void Dialog::fLineEditRls0Arguments(const QString& str)
{
	QString str1,str2;
	str1=str.right(1);
	str2=tr(" ");
	if(str1==str2)
	{
		if(lineEditRls0PointStandingDistance->hasFocus())
			fLineEditRls0PointStandingDistance();
		if(lineEditRls0PointStandingAzimuth->hasFocus())
			fLineEditRls0PointStandingAzimuth();


		if(lineEditRls0EndFaceVPP1->hasFocus())
			fLineEditRls0EndFaceVPP1();
		if(lineEditRls0HighAerialVPP1->hasFocus())
			fLineEditRls0HighAerialVPP1();
		if(lineEditRls0DistanceAxisVPP->hasFocus())
			fLineEditRls0DistanceAxisVPP();
		if(lineEditRls0PointPlanting1->hasFocus())
			fLineEditRls0PointPlanting1();
		if(lineEditRls0EndFaceVPP2->hasFocus())
			fLineEditRls0EndFaceVPP2();
		if(lineEditRls0HighAerialVPP2->hasFocus())
			fLineEditRls0HighAerialVPP2();
		if(lineEditRls0PointPlanting2->hasFocus())
			fLineEditRls0PointPlanting2();

		if(lineEditRls0TurnKO->hasFocus())
			fLineEditRls0TurnKO();
		if(lineEditRls0DisPlaceVPass->hasFocus())
			fLineEditRls0DisPlaceVPass();
		if(lineEditRls0DisPlaceVAct->hasFocus())
			fLineEditRls0DisPlaceVAct();

		if(lineEditRls0DisplaceNulG->hasFocus())
			fLineEditRls0DisplaceNulG();
		if(lineEditRls0DisplaceNulK->hasFocus())
			fLineEditRls0DisplaceNulK();
		if(lineEditRls0CombG->hasFocus())
			fLineEditRls0CombG();
		if(lineEditRls0CombK->hasFocus())
			fLineEditRls0CombK();
		if(lineEditRls0ScopeG->hasFocus())
			fLineEditRls0ScopeG();
		if(lineEditRls0ScopeK->hasFocus())
			fLineEditRls0ScopeK();
		if(lineEditRls0MuGMaxRift->hasFocus())
			fLineEditRls0MuGMaxRift();
		if(lineEditRls0MuGMinRift->hasFocus())
			fLineEditRls0MuGMinRift();
		if(lineEditRls0MuKMaxRift->hasFocus())
			fLineEditRls0MuKMaxRift();
		if(lineEditRls0MuKMinRift->hasFocus())
			fLineEditRls0MuKMinRift();

	}
}
//rls1
void Dialog::fLineEditRls1PointStandingDistance()
{
	int iAddr = 8;
	QLineEdit* lineEdit = lineEditRls1PointStandingDistance;
	int b1;
	QString str1,str2;
	str1=lineEdit->text();
	b1=str1.toInt();
	lineEdit->setText(QString("%1").arg(b1));
	unitReceive->setSelectedParameters(1,iAddr,b1);
	unitSend->setSelectedParameters(1,iAddr,b1);
	if(isSetPressEnter())
		lineEdit->selectAll();
}
void Dialog::fLineEditRls1PointStandingAzimuth()
{
	int iAddr = 9;
	PLineEdit* lineEdit = lineEditRls1PointStandingAzimuth;
	fLiEdAzimuth(	lineEdit,
		&unitReceive->selectedParameters1[iAddr],
		&unitSend->selectedParameters1[iAddr]	);

//	unitReceive->setSelectedParameters(1,iAddr,b1);
//	unitSend->setSelectedParameters(1,iAddr,b1);
}




void Dialog::fLineEditRls1EndFaceVPP1()
{
	int iAddr = 36;
	QLineEdit* lineEdit = lineEditRls1EndFaceVPP1;
	int b1;
	QString str1,str2;
	str1=lineEdit->text();
	b1=str1.toInt();
	lineEdit->setText(QString("%1").arg(toShort(b1)));
	unitReceive->setSelectedParameters(1,iAddr,toShort(b1));
	unitSend->setSelectedParameters(1,iAddr,toShort(b1));
	if(isSetPressEnter())
		lineEdit->selectAll();
}
void Dialog::fLineEditRls1HighAerialVPP1()
{
	int iAddr = 35;
	QLineEdit* lineEdit = lineEditRls1HighAerialVPP1;
	int b1;
	QString str1,str2;
	str1=lineEdit->text();
	b1=str1.toInt();
	lineEdit->setText(QString("%1").arg(toShort(b1)));
	unitReceive->setSelectedParameters(1,iAddr,toShort(b1));
	unitSend->setSelectedParameters(1,iAddr,toShort(b1));
	if(isSetPressEnter())
		lineEdit->selectAll();
}
void Dialog::fLineEditRls1DistanceAxisVPP()
{
	int iAddr = 33;
	QLineEdit* lineEdit = lineEditRls1DistanceAxisVPP;
	int b1;
	QString str1,str2;
	str1=lineEdit->text();
	b1=str1.toInt();
	lineEdit->setText(QString("%1").arg(toShort(b1)));
	unitReceive->setSelectedParameters(1,iAddr,toShort(b1));
	unitSend->setSelectedParameters(1,iAddr,toShort(b1));
	if(isSetPressEnter())
		lineEdit->selectAll();
}
void Dialog::fLineEditRls1PointPlanting1()
{
	int iAddr = 37;
	QLineEdit* lineEdit = lineEditRls1PointPlanting1;
	int b1;
	QString str1,str2;
	str1=lineEdit->text();
	b1=str1.toInt();
	lineEdit->setText(QString("%1").arg(toShort(b1)));
	unitReceive->setSelectedParameters(1,iAddr,toShort(b1));
	unitSend->setSelectedParameters(1,iAddr,toShort(b1));
	if(isSetPressEnter())
		lineEdit->selectAll();
}
void Dialog::fLineEditRls1EndFaceVPP2()
{
	int iAddr = 41;
	QLineEdit* lineEdit = lineEditRls1EndFaceVPP2;
	int b1;
	QString str1,str2;
	str1=lineEdit->text();
	b1=str1.toInt();
	lineEdit->setText(QString("%1").arg(toShort(b1)));
	unitReceive->setSelectedParameters(1,iAddr,toShort(b1));
	unitSend->setSelectedParameters(1,iAddr,toShort(b1));
	if(isSetPressEnter())
		lineEdit->selectAll();
}
void Dialog::fLineEditRls1HighAerialVPP2()
{
	int iAddr = 40;
	QLineEdit* lineEdit = lineEditRls1HighAerialVPP2;
	int b1;
	QString str1,str2;
	str1=lineEdit->text();
	b1=str1.toInt();
	lineEdit->setText(QString("%1").arg(toShort(b1)));
	unitReceive->setSelectedParameters(1,iAddr,toShort(b1));
	unitSend->setSelectedParameters(1,iAddr,toShort(b1));
	if(isSetPressEnter())
		lineEdit->selectAll();
}
void Dialog::fLineEditRls1PointPlanting2()
{
	int iAddr = 42;
	QLineEdit* lineEdit = lineEditRls1PointPlanting2;
	int b1;
	QString str1,str2;
	str1=lineEdit->text();
	b1=str1.toInt();
	lineEdit->setText(QString("%1").arg(toShort(b1)));
	unitReceive->setSelectedParameters(1,iAddr,toShort(b1));
	unitSend->setSelectedParameters(1,iAddr,toShort(b1));
	if(isSetPressEnter())
		lineEdit->selectAll();
}
void Dialog::fLineEditRls1BlkVideo()
{
	int iAddr = 64;
	PLineEdit* lineEdit = lineEditRls1BlkVideo;
        QString str,str1;
        ushort b1;int b0=0;
	str = lineEdit->text();
	bool ok;
	b0 = str.toInt(&ok);
	if(ok && b0>=1 && b0<=100000)
	{
		str1 = QString("%1").arg(b0);
		b0 = str1.toInt();
		unitReceive->setSelectedParameters(1,iAddr,b0/25);
		unitSend->setSelectedParameters(1,iAddr,b0/25);
	}else
	{
		b1=unitReceive->isSelectedParameters(1,iAddr);
		str1 = QString("%1").arg((int)b1*25);
	}
	lineEdit->setSText(str1);
	return;
}
void Dialog::fLineEditRls1TurnKO()
{
	int iAddr = 47;
	QLineEdit* lineEdit = lineEditRls1TurnKO;
	int b1;
//	QString str1,str2;
//	str1=lineEdit->text();
	QString str,str2,str3,strend;
	str = lineEdit->text();
        uint ival=0;double deg=0;
	if(str.contains(QChar('.'))||str.contains(QChar(',')))
	{
		while(str.contains(QChar('°')))
		{
			str.chop(1);
		}
		deg=str.toDouble();
		ival = deg*4096/360+.5;
	}else
	{
		if(str.contains(QChar('/')))
		{
			str=str.right(str.indexOf(QChar('/')));
		}
		ival=str.toInt()&0xfff;
		deg = ival*360./4096.;
	}
	str2=QString("%1").arg(ival);
	str3=QString("%1").arg(deg,0,'f',1);
	str3.replace(str3.indexOf(QChar('.')),1,QChar(','));
	strend=str2+"/"+str3+"°";
	strend=str3+"°"+"/"+str2;
//	b1=str1.toInt();
	b1=ival;
//	lineEdit->setText(QString("%1").arg(toShort(b1)));
	lineEdit->setText(strend);
	unitReceive->setSelectedParameters(1,iAddr,toShort(b1));
	unitSend->setSelectedParameters(1,iAddr,toShort(b1));
	if(isSetPressEnter())
		lineEdit->selectAll();
}
void Dialog::fLineEditRls1DisPlaceVPass()
{
	int iAddr = 45;
	QLineEdit* lineEdit = lineEditRls1DisPlaceVPass;
	int b1;
	QString str1,str2;
	str1=lineEdit->text();
	b1=str1.toInt();
	lineEdit->setText(QString("%1").arg(toShort(b1)));			//12.07.2015
	unitReceive->setSelectedParameters(1,iAddr,toShort(b1));			//12.07.2015
	unitSend->setSelectedParameters(1,iAddr,toShort(b1));			//12.07.2015
	if(isSetPressEnter())
		lineEdit->selectAll();
}
void Dialog::fLineEditRls1DisPlaceVAct()
{
	int iAddr = 46;
	QLineEdit* lineEdit = lineEditRls1DisPlaceVAct;
	int b1;
	QString str1,str2;
	str1=lineEdit->text();
	b1=str1.toInt();
	lineEdit->setText(QString("%1").arg(toShort(b1)));			//12.07.2015
	unitReceive->setSelectedParameters(1,iAddr,toShort(b1));			//12.07.2015
	unitSend->setSelectedParameters(1,iAddr,toShort(b1));			//12.07.2015
	if(isSetPressEnter())
		lineEdit->selectAll();
}
void Dialog::fLineEditRls1DisplaceNulG()
{
	int iAddr = 48;
	QLineEdit* lineEdit = lineEditRls1DisplaceNulG;
	int b1,b2;
	QString str1,str2;
	str1=lineEdit->text();
	b1=str1.toInt();
	b1&=0xff;
	lineEdit->setText(QString("%1").arg(toChar(b1)));
	b2=unitReceive->isSelectedParameters(1,iAddr);
	b2&=0xff00;
	b1|=b2;
	unitReceive->setSelectedParameters(1,iAddr,b1);
	unitSend->setSelectedParameters(1,iAddr,b1);
	if(isSetPressEnter())
		lineEdit->selectAll();
}
void Dialog::fLineEditRls1DisplaceNulK()
{
	int iAddr = 48;
	QLineEdit* lineEdit = lineEditRls1DisplaceNulK;
	int b1,b2;
	QString str1,str2;
	str1=lineEdit->text();
	b1=str1.toInt();
	b1&=0xff;
	lineEdit->setText(QString("%1").arg(toChar(b1)));
	b1<<=8;
	b2=unitReceive->isSelectedParameters(1,iAddr);
	b2&=0xff;
	b1|=b2;
	unitReceive->setSelectedParameters(1,iAddr,b1);
	unitSend->setSelectedParameters(1,iAddr,b1);
	if(isSetPressEnter())
		lineEdit->selectAll();
}
void Dialog::fLineEditRls1CombG()
{
	int iAddr = 49;
	QLineEdit* lineEdit = lineEditRls1CombG;
	int b1,b2;
	QString str1,str2;
	str1=lineEdit->text();
	b1=str1.toInt();
	b1&=0xff;
	lineEdit->setText(QString("%1").arg(toChar(b1)));
	b2=unitReceive->isSelectedParameters(1,iAddr);
	b2&=0xff00;
	b1|=b2;
	unitReceive->setSelectedParameters(1,iAddr,b1);
	unitSend->setSelectedParameters(1,iAddr,b1);
	if(isSetPressEnter())
		lineEdit->selectAll();
}
void Dialog::fLineEditRls1CombK()
{
	int iAddr = 49;
	QLineEdit* lineEdit = lineEditRls1CombK;
	int b1,b2;
	QString str1,str2;
	str1=lineEdit->text();
	b1=str1.toInt();
	b1&=0xff;
	lineEdit->setText(QString("%1").arg(toChar(b1)));
	b1<<=8;
	b2=unitReceive->isSelectedParameters(1,iAddr);
	b2&=0xff;
	b1|=b2;
	unitReceive->setSelectedParameters(1,iAddr,b1);
	unitSend->setSelectedParameters(1,iAddr,b1);
	if(isSetPressEnter())
		lineEdit->selectAll();
}
void Dialog::fLineEditRls1ScopeG()
{
	int iAddr = 44;
	QLineEdit* lineEdit = lineEditRls1ScopeG;
	int b1,b2;
	QString str1,str2;
	str1=lineEdit->text();
	b1=str1.toInt();
	b1&=0xff;
	lineEdit->setText(QString("%1").arg(toChar(b1)));
	b2=unitReceive->isSelectedParameters(1,iAddr);
	b2&=0xff00;
	b1|=b2;
	unitReceive->setSelectedParameters(1,iAddr,b1);
	unitSend->setSelectedParameters(1,iAddr,b1);
	if(isSetPressEnter())
		lineEdit->selectAll();
}
void Dialog::fLineEditRls1ScopeK()
{
	int iAddr = 44;
	QLineEdit* lineEdit = lineEditRls1ScopeK;
	int b1,b2;
	QString str1,str2;
	str1=lineEdit->text();
	b1=str1.toInt();
	b1&=0xff;
	lineEdit->setText(QString("%1").arg(toChar(b1)));
	b1<<=8;
	b2=unitReceive->isSelectedParameters(1,iAddr);
	b2&=0xff;
	b1|=b2;
	unitReceive->setSelectedParameters(1,iAddr,b1);
	unitSend->setSelectedParameters(1,iAddr,b1);
	if(isSetPressEnter())
		lineEdit->selectAll();
}
void Dialog::fLineEditRls1MuGMaxRift()
{
	int iAddr = 56;
	QLineEdit* lineEdit = lineEditRls1MuGMaxRift;
	int b1,b2;
	QString str1,str2;
	str1=lineEdit->text();
	b1=str1.toInt();
	b1&=0xff;
	lineEdit->setText(QString("%1").arg(b1));
	b2=unitReceive->isSelectedParameters(1,iAddr);
	b2&=0xff00;
	b1|=b2;
	unitReceive->setSelectedParameters(1,iAddr,b1);
	unitSend->setSelectedParameters(1,iAddr,b1);
	if(isSetPressEnter())
		lineEdit->selectAll();
}
void Dialog::fLineEditRls1MuGMinRift()
{
	int iAddr = 56;
	QLineEdit* lineEdit = lineEditRls1MuGMinRift;
	int b1,b2;
	QString str1,str2;
	str1=lineEdit->text();
	b1=str1.toInt();
	b1&=0xff;
	lineEdit->setText(QString("%1").arg(b1));
	b1<<=8;
	b2=unitReceive->isSelectedParameters(1,iAddr);
	b2&=0xff;
	b1|=b2;
	unitReceive->setSelectedParameters(1,iAddr,b1);
	unitSend->setSelectedParameters(1,iAddr,b1);
	if(isSetPressEnter())
		lineEdit->selectAll();
}
void Dialog::fLineEditRls1MuKMaxRift()
{
	int iAddr = 57;
	QLineEdit* lineEdit = lineEditRls1MuKMaxRift;
	int b1,b2;
	QString str1,str2;
	str1=lineEdit->text();
	b1=str1.toInt();
	b1&=0xff;
	lineEdit->setText(QString("%1").arg(b1));
	b2=unitReceive->isSelectedParameters(1,iAddr);
	b2&=0xff00;
	b1|=b2;
	unitReceive->setSelectedParameters(1,iAddr,b1);
	unitSend->setSelectedParameters(1,iAddr,b1);
	if(isSetPressEnter())
		lineEdit->selectAll();
}
void Dialog::fLineEditRls1MuKMinRift()
{
	int iAddr = 57;
	QLineEdit* lineEdit = lineEditRls1MuKMinRift;
	int b1,b2;
	QString str1,str2;
	str1=lineEdit->text();
	b1=str1.toInt();
	b1&=0xff;
	lineEdit->setText(QString("%1").arg(b1));
	b1<<=8;
	b2=unitReceive->isSelectedParameters(1,iAddr);
	b2&=0xff;
	b1|=b2;
	unitReceive->setSelectedParameters(1,iAddr,b1);
	unitSend->setSelectedParameters(1,iAddr,b1);
	if(isSetPressEnter())
		lineEdit->selectAll();
}
void Dialog::fLineEditRls1Arguments(const QString& str)
{
	QString str1,str2;
	str1=str.right(1);
	str2=tr(" ");
	if(str1==str2)
	{
		if(lineEditRls1PointStandingDistance->hasFocus())
			fLineEditRls1PointStandingDistance();
		if(lineEditRls1PointStandingAzimuth->hasFocus())
			fLineEditRls1PointStandingAzimuth();


		if(lineEditRls1EndFaceVPP1->hasFocus())
			fLineEditRls1EndFaceVPP1();
		if(lineEditRls1HighAerialVPP1->hasFocus())
			fLineEditRls1HighAerialVPP1();
		if(lineEditRls1DistanceAxisVPP->hasFocus())
			fLineEditRls1DistanceAxisVPP();
		if(lineEditRls1PointPlanting1->hasFocus())
			fLineEditRls1PointPlanting1();
		if(lineEditRls1EndFaceVPP2->hasFocus())
			fLineEditRls1EndFaceVPP2();
		if(lineEditRls1HighAerialVPP2->hasFocus())
			fLineEditRls1HighAerialVPP2();
		if(lineEditRls1PointPlanting2->hasFocus())
			fLineEditRls1PointPlanting2();
		if(lineEditRls1TurnKO->hasFocus())
			fLineEditRls1TurnKO();
		if(lineEditRls1DisPlaceVPass->hasFocus())
			fLineEditRls1DisPlaceVPass();
		if(lineEditRls1DisPlaceVAct->hasFocus())
			fLineEditRls1DisPlaceVAct();

		if(lineEditRls1DisplaceNulG->hasFocus())
			fLineEditRls1DisplaceNulG();
		if(lineEditRls1DisplaceNulK->hasFocus())
			fLineEditRls1DisplaceNulK();
		if(lineEditRls1CombG->hasFocus())
			fLineEditRls1CombG();
		if(lineEditRls1CombK->hasFocus())
			fLineEditRls1CombK();
		if(lineEditRls1ScopeG->hasFocus())
			fLineEditRls1ScopeG();
		if(lineEditRls1ScopeK->hasFocus())
			fLineEditRls1ScopeK();
		if(lineEditRls1MuGMaxRift->hasFocus())
			fLineEditRls1MuGMaxRift();
		if(lineEditRls1MuGMinRift->hasFocus())
			fLineEditRls1MuGMinRift();
		if(lineEditRls1MuKMaxRift->hasFocus())
			fLineEditRls1MuKMaxRift();
		if(lineEditRls1MuKMinRift->hasFocus())
			fLineEditRls1MuKMinRift();
	}
}

void Dialog::fComboBoxArpNumber(int index)
{
	if(comboBoxArpNumber->hasFocus())
	{
	int iAddr = 120;
	int b1;
	b1 = unitReceive->basicSetting[iAddr];
	b1 &= 0xfffc;
	if(index<4)
	{
		b1 |= index;
	}
	unitReceive->basicSetting[iAddr]=b1;
	unitSend->basicSetting[iAddr]=b1;
	}
}
void Dialog::fCheckBoxARPUseRLS()
{
	int iAddr = 120;
	fWordWr(unitReceive->basicSetting[iAddr]);
	if(checkBoxARPUseRLS->isChecked()) wordWr.bit14=1;
	else wordWr.bit14 = 0;
	unitReceive->basicSetting[iAddr]=fWordWr();
	unitSend->basicSetting[iAddr]=fWordWr();
}

void Dialog::fRadioButtonArpGradient()
{
	int iAddr = 120;
	int b1;
	b1 = unitReceive->basicSetting[iAddr];
	fWordWr(b1);
	if(radioButtonArpGradientMagnetic->isChecked())
	{
		wordWr.bit15=1;
	}
	if(radioButtonArpGradientGeographic->isChecked())
	{
		wordWr.bit15=0;
	}
	unitReceive->basicSetting[iAddr]=fWordWr();
	unitSend->basicSetting[iAddr]=fWordWr();

}
void Dialog::fLineEditRls0ArpPointStandingDistance()
{
//92
	int iAddr = 92;
	QLineEdit* lineEdit = lineEditRls0ArpPointStandingDistance;
	int b1;
	QString str1,str2;
	str1=lineEdit->text();
	b1=str1.toInt();
	b1 &= 0xffff;
	lineEdit->setText(QString("%1").arg(b1));
	unitReceive->setSelectedParameters(iChoiceArp,iAddr,b1);
	unitSend->setSelectedParameters(iChoiceArp,iAddr,b1);
	if(isSetPressEnter())
		lineEdit->selectAll();
}
void Dialog::fLineEditRls0ArpPointStandingAzimuth()
{
//93
	int iAddr = 93;
	QLineEdit* lineEdit = lineEditRls0ArpPointStandingAzimuth;
	if(iChoiceArp==0)
	{
		fLiEdAzimuth(	lineEdit,
			&unitReceive->selectedParameters0[iAddr],
			&unitSend->selectedParameters0[iAddr]	);
	}else
	{
		fLiEdAzimuth(	lineEdit,
			&unitReceive->selectedParameters1[iAddr],
			&unitSend->selectedParameters1[iAddr]	);
	}

}

void Dialog::slLineEditRls0MuG7()
{
	PLineEdit* lEd;
	int iAddr = 0;
	QString str1;
        ushort b1;int b0=0;
	bool ok;
//66    192     320 НП 1 процент МУ глиссады 7°
//72    198     326 НП 2 процент МУ глиссады 7°
        if(ui.rBuNp1->isChecked())
        {
            iAddr = 66;
        }
        else
        {
            iAddr = 72;
        }
        lEd = lineEditRls0MuG7;
	str1 = lEd->text();
	b0 = str1.toInt(&ok);
	if(ok && b0>=0 && b0<=100)
	{
		b1 = fr2byteP100(b0);
		unitReceive->setSelectedParameters(iChoiceRls,iAddr,b1);
		unitSend->setSelectedParameters(iChoiceRls,iAddr,b1);
		cp5066();
	}
}
void Dialog::slLneEditRls0MuG0()
{
	PLineEdit* lEd;
	int iAddr = 0;
	QString str1;
        ushort b1;int b0=0;
	bool ok;
        //67    193     321 НП 1	процент МУ глиссады 0°
        //73    199     327 НП 2	процент МУ глиссады 0°
        if(ui.rBuNp1->isChecked())
        {
            iAddr = 67;
        }
        else
        {
            iAddr = 73;
        }
	lEd = lineEditRls0MuG0;
	str1 = lEd->text();
	b0 = str1.toInt(&ok);
	if(ok && b0>=0 && b0<=100)
	{
		b1 = fr2byteP100(b0);
		unitReceive->setSelectedParameters(iChoiceRls,iAddr,b1);
		unitSend->setSelectedParameters(iChoiceRls,iAddr,b1);
		cp5066();
	}
}
void Dialog::slLineEditRls0MuK_10()
{
	PLineEdit* lEd;
	int iAddr = 0;
	QString str1;
        ushort b1;int b0=0;
	bool ok;
        //71    197     325 НП 1	процент МУ курса -10°
        //77    203     331 НП 2	процент МУ курса -10°
        if(ui.rBuNp1->isChecked())
        {
            iAddr = 71;
        }
        else
        {
            iAddr = 77;
        }
	lEd = lineEditRls0MuK_10;
	str1 = lEd->text();
	b0 = str1.toInt(&ok);
	if(ok && b0>=0 && b0<=100)
	{
		b1 = fr2byteP100(b0);
		unitReceive->setSelectedParameters(iChoiceRls,iAddr,b1);
		unitSend->setSelectedParameters(iChoiceRls,iAddr,b1);
		cp5066();
	}
}
void Dialog::slLineEditRls0MuK0()
{
	PLineEdit* lEd;
	int iAddr = 0;
	QString str1;
        ushort b1;int b0=0;
	bool ok;
        //70    196     324 НП 1	процент МУ курса 0°
        //76    202     330 НП 2	процент МУ курса 0°
        if(ui.rBuNp1->isChecked())
        {
            iAddr = 70;
        }
        else
        {
            iAddr = 76;
        }
	lEd = lineEditRls0MuK0;
	str1 = lEd->text();
	b0 = str1.toInt(&ok);
	if(ok && b0>=0 && b0<=100)
	{
		b1 = fr2byteP100(b0);
		unitReceive->setSelectedParameters(iChoiceRls,iAddr,b1);
		unitSend->setSelectedParameters(iChoiceRls,iAddr,b1);
		cp5066();
	}
}
void Dialog::slLineEditRls0MuK10()
{
	PLineEdit* lEd;
	int iAddr = 0;
	QString str1;
        ushort b1;int b0=0;
	bool ok;
        //69    195     323 НП 1	процент МУ курса +10°
        //75    201     329 НП 2	процент МУ курса +10°
        if(ui.rBuNp1->isChecked())
        {
            iAddr = 69;
        }
        else
        {
            iAddr = 75;
        }
	lEd = lineEditRls0MuK10;
	str1 = lEd->text();
	b0 = str1.toInt(&ok);
	if(ok && b0>=0 && b0<=100)
	{
		b1 = fr2byteP100(b0);
		unitReceive->setSelectedParameters(iChoiceRls,iAddr,b1);
		unitSend->setSelectedParameters(iChoiceRls,iAddr,b1);
		cp5066();
	}
}
void Dialog::fCheckBoxCh1_()
{
	int b1;
	b1 = unitReceive->isSelectedParameters(0,94);
	fWordWr(b1);
	bool bYes = ui.grBoCh1->isChecked();
	if(bYes) wordWr.bit0=1;
	else wordWr.bit0 = 0;
	unitReceive->setSelectedParameters(iChoiceArp,94,fWordWr());
	unitSend->setSelectedParameters(iChoiceArp,94,fWordWr());
//	netExchange->waiteCopyTwin(94,1,2);		////////////////////
}
void Dialog::fCheckBoxCh2_()
{
	int b1;
	b1 = unitReceive->isSelectedParameters(iChoiceArp,94);
	fWordWr(b1);
	bool bYes = ui.grBoCh2->isChecked();
	if(bYes) wordWr.bit1=1;
	else wordWr.bit1 = 0;
	unitReceive->setSelectedParameters(iChoiceArp,94,fWordWr());
	unitSend->setSelectedParameters(iChoiceArp,94,fWordWr());
//	netExchange->waiteCopyTwin(94,1,2);		////////////////////
}
void Dialog::fCheckBoxCh3_()
{
	int b1;
	b1 = unitReceive->isSelectedParameters(iChoiceArp,94);
	fWordWr(b1);
	bool bYes = ui.grBoCh3->isChecked();
	if(bYes) wordWr.bit2=1;
	else wordWr.bit2 = 0;
	unitReceive->setSelectedParameters(iChoiceArp,94,fWordWr());
	unitSend->setSelectedParameters(iChoiceArp,94,fWordWr());
//	netExchange->waiteCopyTwin(94,1,2);		////////////////////
}
void Dialog::fCheckBoxCh4_()
{
	int b1;
	b1 = unitReceive->isSelectedParameters(iChoiceArp,94);
	fWordWr(b1);
	bool bYes = ui.grBoCh4->isChecked();
	if(bYes) wordWr.bit3=1;
	else wordWr.bit3 = 0;
	unitReceive->setSelectedParameters(iChoiceArp,94,fWordWr());
	unitSend->setSelectedParameters(iChoiceArp,94,fWordWr());
//	netExchange->waiteCopyTwin(94,1,2);		////////////////////
}
void Dialog::fComboBoxMinTimeCh1(int index)
{
//96	432
	int iAddr = 97;
	int b1,b2;
	if(comboBoxMinTimeCh1->hasFocus() && index>=0 && index<25)
	{
		fWordWr(isUnit(iAddr));
		wordWr.bit4=0;wordWr.bit3=0;wordWr.bit2=0;
		wordWr.bit1=0;wordWr.bit0=0;
		b2=index;
		b1 = fWordWr() | b2;
		setUnit(iAddr,b1);
	}
}
void Dialog::fComboBoxMinTimeCh2(int index)
{
//104	432
	int iAddr = 105;
	int b1,b2;
	if(comboBoxMinTimeCh2->hasFocus() && index>=0 && index<25)
	{
		fWordWr(isUnit(iAddr));
		wordWr.bit4=0;wordWr.bit3=0;wordWr.bit2=0;
		wordWr.bit1=0;wordWr.bit0=0;
		b2=index;
		b1 = fWordWr() | b2;
		setUnit(iAddr,b1);
	}
}
void Dialog::fComboBoxMinTimeCh3(int index)
{
//112	432
	int iAddr = 113;
	int b1,b2;
	if(comboBoxMinTimeCh3->hasFocus() && index>=0 && index<25)
	{
		fWordWr(isUnit(iAddr));
		wordWr.bit4=0;wordWr.bit3=0;wordWr.bit2=0;
		wordWr.bit1=0;wordWr.bit0=0;
		b2=index;
		b1 = fWordWr() | b2;
		setUnit(iAddr,b1);
	}
}
void Dialog::fComboBoxMinTimeCh4(int index)
{
//120	432
	int iAddr = 121;
	int b1,b2;
	if(comboBoxMinTimeCh4->hasFocus() && index>=0 && index<25)
	{
		fWordWr(isUnit(iAddr));
		wordWr.bit4=0;wordWr.bit3=0;wordWr.bit2=0;
		wordWr.bit1=0;wordWr.bit0=0;
		b2=index;
		b1 = fWordWr() | b2;
		setUnit(iAddr,b1);
	}
}
void Dialog::fComboBoxMinTime2Ch1(int index)
{
//96	432
	int iAddr = 97;
	int b1,b2;
	if(comboBoxMinTime2Ch1->hasFocus() && index>=0 && index<25)
	{
		fWordWr(isUnit(iAddr));
		wordWr.bit9=0;wordWr.bit8=0;wordWr.bit7=0;
		wordWr.bit6=0;wordWr.bit5=0;
		b2=index;
		b2<<=5;
		b1 = fWordWr() | b2;
		setUnit(iAddr,b1);
	}
}
void Dialog::fComboBoxMinTime2Ch2(int index)
{
//104	432
	int iAddr = 105;
	int b1,b2;
	if(comboBoxMinTime2Ch2->hasFocus() && index>=0 && index<25)
	{
		fWordWr(isUnit(iAddr));
		wordWr.bit9=0;wordWr.bit8=0;wordWr.bit7=0;
		wordWr.bit6=0;wordWr.bit5=0;
		b2=index;
		b2<<=5;
		b1 = fWordWr() | b2;
		setUnit(iAddr,b1);
	}
}
void Dialog::fComboBoxMinTime2Ch3(int index)
{
//112	432
	int iAddr = 113;
	int b1,b2;
	if(comboBoxMinTime2Ch3->hasFocus() && index>=0 && index<25)
	{
		fWordWr(isUnit(iAddr));
		wordWr.bit9=0;wordWr.bit8=0;wordWr.bit7=0;
		wordWr.bit6=0;wordWr.bit5=0;
		b2=index;
		b2<<=5;
		b1 = fWordWr() | b2;
		setUnit(iAddr,b1);
	}
}
void Dialog::fComboBoxMinTime2Ch4(int index)
{
//120	432
	int iAddr = 121;
	int b1,b2;
	if(comboBoxMinTime2Ch4->hasFocus() && index>=0 && index<25)
	{
		fWordWr(isUnit(iAddr));
		wordWr.bit9=0;wordWr.bit8=0;wordWr.bit7=0;
		wordWr.bit6=0;wordWr.bit5=0;
		b2=index;
		b2<<=5;
		b1 = fWordWr() | b2;
		setUnit(iAddr,b1);
	}
}
QStringList Dialog::makeList(int step,int max)
{
	QStringList list;
	QString str;
	for( int i=0; i<=max;i+=step)
	{
		str=QString("%1").arg(i);
		list.append(str);
	}
	return list;
}
void Dialog::fComboBoxDelayCh1(int index)
{
//96	765
	int iAddr = 97;
	int b1,b2;
	if(comboBoxDelayCh1->hasFocus() && index>=0 && index<8)
	{
		fWordWr(unitReceive->isSelectedParameters(0,iAddr));
		wordWr.bit12=0;wordWr.bit11=0;wordWr.bit10=0;
		b2=index;
		b2<<=10;
		b1 = fWordWr() | b2;
		setUnit(iAddr,b1);
	}
}
void Dialog::fComboBoxDelayCh2(int index)
{
//104	765
	int iAddr = 105;
	int b1,b2;
	if(comboBoxDelayCh2->hasFocus() && index>=0 && index<8)
	{
		fWordWr(unitReceive->isSelectedParameters(0,iAddr));
		wordWr.bit12=0;wordWr.bit11=0;wordWr.bit10=0;
		b2=index;
		b2<<=10;
		b1 = fWordWr() | b2;
		setUnit(iAddr,b1);
	}
}
void Dialog::fComboBoxDelayCh3(int index)
{
//112	765
	int iAddr = 113;
	int b1,b2;
	if(comboBoxDelayCh3->hasFocus() && index>=0 && index<8)
	{
		fWordWr(unitReceive->isSelectedParameters(0,iAddr));
		wordWr.bit12=0;wordWr.bit11=0;wordWr.bit10=0;
		b2=index;
		b2<<=10;
		b1 = fWordWr() | b2;
		setUnit(iAddr,b1);
	}
}
void Dialog::fComboBoxDelayCh4(int index)
{
//120	765
	int iAddr = 121;
	int b1,b2;
	if(comboBoxDelayCh4->hasFocus() && index>=0 && index<8)
	{
		fWordWr(unitReceive->isSelectedParameters(0,iAddr));
		wordWr.bit12=0;wordWr.bit11=0;wordWr.bit10=0;
		b2=index;
		b2<<=10;
		b1 = fWordWr() | b2;
		setUnit(iAddr,b1);
	}
}

void Dialog::fLineEditRift(const QString& str)
{
	QWidget* focus = focusWidget();
	QString str1,str2;
		str1=str.right(1);
		str2=tr(" ");
	if(str1==str2)
	{
		if(focus == lineEditRiftCh1)
			fLineEditRiftCh1();
		if(focus == lineEditRiftCh2)
			fLineEditRiftCh2();
		if(focus == lineEditRiftCh3)
			fLineEditRiftCh3();
		if(focus == lineEditRiftCh4)
			fLineEditRiftCh4();
	}
}
void Dialog::fLineEditNumberCh1()
{
	int iAddr = 96;
	PLineEdit* lineEdit = lineEditNumberCh1;
	QString str;
	ushort b1;
	str=lineEdit->text();
	b1=(ushort)str.toInt();
	if( b1>0 && b1<65 )
	{
		b1--;
		setUnit(iAddr,b1);
	}else
	{
		b1=unitReceive->isSelectedParameters(0,iAddr);
		b1=isUnit(iAddr);
		b1++;
		str=QString("%1").arg(b1);
		lineEdit->setSText(str);
	}
}
void Dialog::fLineEditNumberCh2()
{
	int iAddr = 104;
	PLineEdit* lineEdit = lineEditNumberCh2;
	QString str;
	ushort b1;
	str=lineEdit->text();
	b1=(ushort)str.toInt();
	if( b1>0 && b1<65 )
	{
		b1--;
		setUnit(iAddr,b1);
	}else
	{
		b1=isUnit(iAddr);
		b1++;
		str=QString("%1").arg(b1);
		lineEdit->setSText(str);
	}
}
void Dialog::fLineEditNumberCh3()
{
	int iAddr = 112;
	PLineEdit* lineEdit = lineEditNumberCh3;
	QString str;
	ushort b1;
	str=lineEdit->text();
	b1=(ushort)str.toInt();
	if( b1>0 && b1<65 )
	{
		b1--;
		setUnit(iAddr,b1);
	}else
	{
		b1=isUnit(iAddr);
		b1++;
		str=QString("%1").arg(b1);
		lineEdit->setSText(str);
	}
}
void Dialog::fLineEditNumberCh4()
{
	int iAddr = 120;
	PLineEdit* lineEdit = lineEditNumberCh4;
	QString str;
	ushort b1;
	str=lineEdit->text();
	b1=(ushort)str.toInt();
	if( b1>0 && b1<65 )
	{
		b1--;
		setUnit(iAddr,b1);
	}else
	{
		b1=isUnit(iAddr);
		b1++;
		str=QString("%1").arg(b1);
		lineEdit->setSText(str);
	}
}
void Dialog::fLineEditRiftCh1()
{
	int iAddr = 98;
	PLineEdit* lineEdit = lineEditRiftCh1;
	QString str,str1,str2;
	ushort b1,b2;
	double d0,d1;
	str = lineEdit->text();
	bool ok;int size;
	size=str.size();
	d0 = str.toDouble(&ok);
	if(ok)
	{
		str1 = QString("%1").arg(d0,4,'f',1);
		d0 = str1.toDouble();
		d1 = d0*100.0;
		b1 = (ushort)d1;
//        if(b1>5000)        {            b1=5000;        }
        if(b1>=0 && b1<=5000)
		{
			setUnit(iAddr,b1);
		}
	}
		b2=isUnit(iAddr);
		str2 = ch110to1_1(b2);
		lineEdit->setSText(str2);
}
void Dialog::fLineEditRiftCh2()
{
	int iAddr = 106;
	PLineEdit* lineEdit = lineEditRiftCh2;
	QString str,str1,str2;
	ushort b1,b2;
	double d0,d1;
	str = lineEdit->text();
	bool ok;int size;
	size=str.size();
	d0 = str.toDouble(&ok);
	if(ok)
	{
		str1 = QString("%1").arg(d0,4,'f',1);
		d0 = str1.toDouble();
		d1 = d0*100.0;
		b1 = (ushort)d1;
		if(b1>=0 && b1<=5000)
		{
			setUnit(iAddr,b1);
		}
	}
		b2=isUnit(iAddr);
		str2 = ch110to1_1(b2);
		lineEdit->setSText(str2);
}
void Dialog::fLineEditRiftCh3()
{
	int iAddr = 114;
	PLineEdit* lineEdit = lineEditRiftCh3;
	QString str,str1,str2;
	ushort b1,b2;
	double d0,d1;
	str = lineEdit->text();
	bool ok;int size;
	size=str.size();
	d0 = str.toDouble(&ok);
	if(ok)
	{
		str1 = QString("%1").arg(d0,4,'f',1);
		d0 = str1.toDouble();
		d1 = d0*100.0;
		b1 = (ushort)d1;
		if(b1>=0 && b1<=5000)
		{
			setUnit(iAddr,b1);
		}
	}
		b2=isUnit(iAddr);
		str2 = ch110to1_1(b2);
		lineEdit->setSText(str2);
}
void Dialog::fLineEditRiftCh4()
{
	int iAddr = 122;
	PLineEdit* lineEdit = lineEditRiftCh4;
	QString str,str1,str2;
	ushort b1,b2;
	double d0,d1;
	str = lineEdit->text();
	bool ok;int size;
	size=str.size();
	d0 = str.toDouble(&ok);
	if(ok)
	{
		str1 = QString("%1").arg(d0,4,'f',1);
		d0 = str1.toDouble();
		d1 = d0*100.0;
		b1 = (ushort)d1;
		if(b1>=0 && b1<=5000)
		{
			setUnit(iAddr,b1);
		}
	}
		b2=isUnit(iAddr);
		str2 = ch110to1_1(b2);
		lineEdit->setSText(str2);
}
void Dialog::fLineEditRift2Ch1()
{
	int iAddr = 99;
	PLineEdit* lineEdit = lineEditRift2Ch1;
	QString str,str1,str2;
	ushort b1,b2;
	double d0,d1;
	str = lineEdit->text();
	bool ok;int size;
	size=str.size();
	d0 = str.toDouble(&ok);
	if(ok)
	{
		str1 = QString("%1").arg(d0,4,'f',1);
		d0 = str1.toDouble();
		d1 = d0*100.0;
		b1 = (ushort)d1;
		if(b1>=0 && b1<=5000)
		{
			setUnit(iAddr,b1);
		}
	}
		b2=isUnit(iAddr);
		str2 = ch110to1_1(b2);
		lineEdit->setSText(str2);
}
void Dialog::fLineEditRift2Ch2()
{
	int iAddr = 107;
	PLineEdit* lineEdit = lineEditRift2Ch2;
	QString str,str1,str2;
	ushort b1,b2;
	double d0,d1;
	str = lineEdit->text();
	bool ok;int size;
	size=str.size();
	d0 = str.toDouble(&ok);
	if(ok)
	{
		str1 = QString("%1").arg(d0,4,'f',1);
		d0 = str1.toDouble();
		d1 = d0*100.0;
		b1 = (ushort)d1;
		if(b1>=0 && b1<=5000)
		{
			setUnit(iAddr,b1);
		}
	}
		b2=isUnit(iAddr);
		str2 = ch110to1_1(b2);
		lineEdit->setSText(str2);
}
void Dialog::fLineEditRift2Ch3()
{
	int iAddr = 115;
	PLineEdit* lineEdit = lineEditRift2Ch3;
	QString str,str1,str2;
	ushort b1,b2;
	double d0,d1;
	str = lineEdit->text();
	bool ok;int size;
	size=str.size();
	d0 = str.toDouble(&ok);
	if(ok)
	{
		str1 = QString("%1").arg(d0,4,'f',1);
		d0 = str1.toDouble();
		d1 = d0*100.0;
		b1 = (ushort)d1;
		if(b1>=0 && b1<=5000)
		{
			setUnit(iAddr,b1);
		}
	}
		b2=isUnit(iAddr);
		str2 = ch110to1_1(b2);
		lineEdit->setSText(str2);
}
void Dialog::fLineEditRift2Ch4()
{
	int iAddr = 123;
	PLineEdit* lineEdit = lineEditRift2Ch4;
	QString str,str1,str2;
	ushort b1,b2;
	double d0,d1;
	str = lineEdit->text();
	bool ok;int size;
	size=str.size();
	d0 = str.toDouble(&ok);
	if(ok)
	{
		str1 = QString("%1").arg(d0,4,'f',1);
		d0 = str1.toDouble();
		d1 = d0*100.0;
		b1 = (ushort)d1;
		if(b1>=0 && b1<=5000)
		{
			setUnit(iAddr,b1);
		}
	}
		b2=isUnit(iAddr);
		str2 = ch110to1_1(b2);
		lineEdit->setSText(str2);
}
void Dialog::slLiEdFreq1()
{
	int iAddr = 100;
	PLineEdit* lineEdit = ui.liEdFreq1;
	QString str,str1,str2;
	ushort b1,b2,a1,a2;
	uint uk,uk0;bool ok;
	str = lineEdit->text();
	uk=str.toUInt(&ok);
	b1=uk;
	b2=uk>>16;
	if(ok)
	{
		setUnit(iAddr,b1);
		setUnit(iAddr+1,b2);
		a1 = isUnit(iAddr);
		a2 = isUnit(iAddr+1);
		uk0 = a2;
		uk0<<=16;
		uk0|=a1;
		str1=QString("%1").arg(uk0);
		lineEdit->setSText(str1);
	}
}
void Dialog::slLiEdFreq2()
{
	int iAddr = 108;
	PLineEdit* lineEdit = ui.liEdFreq2;
	QString str,str1,str2;
	ushort b1,b2,a1,a2;
	uint uk,uk0;bool ok;
	str = lineEdit->text();
	uk=str.toUInt(&ok);
	b1=uk;
	b2=uk>>16;
	if(ok)
	{
		setUnit(iAddr,b1);
		setUnit(iAddr+1,b2);
		a1 = isUnit(iAddr);
		a2 = isUnit(iAddr+1);
		uk0 = a2;
		uk0<<=16;
		uk0|=a1;
		str1=QString("%1").arg(uk0);
		lineEdit->setSText(str1);
	}
}
void Dialog::slLiEdFreq3()
{
	int iAddr = 116;
	PLineEdit* lineEdit = ui.liEdFreq3;
	QString str,str1,str2;
	ushort b1,b2,a1,a2;
	uint uk,uk0;bool ok;
	str = lineEdit->text();
	uk=str.toUInt(&ok);
	b1=uk;
	b2=uk>>16;
	if(ok)
	{
		setUnit(iAddr,b1);
		setUnit(iAddr+1,b2);
		a1 = isUnit(iAddr);
		a2 = isUnit(iAddr+1);
		uk0 = a2;
		uk0<<=16;
		uk0|=a1;
		str1=QString("%1").arg(uk0);
		lineEdit->setSText(str1);
	}
}
void Dialog::slLiEdFreq4()
{
	int iAddr = 124;
	PLineEdit* lineEdit = ui.liEdFreq4;
	QString str,str1,str2;
	ushort b1,b2,a1,a2;
	uint uk,uk0;bool ok;
	str = lineEdit->text();
	uk=str.toUInt(&ok);
	b1=uk;
	b2=uk>>16;
	if(ok)
	{
		setUnit(iAddr,b1);
		setUnit(iAddr+1,b2);
		a1 = isUnit(iAddr);
		a2 = isUnit(iAddr+1);
		uk0 = a2;
		uk0<<=16;
		uk0|=a1;
		str1=QString("%1").arg(uk0);
		lineEdit->setSText(str1);
	}
}
/*
void Dialog::fLineEditMaxHeightScanCh1()
{
	int iAddr = 98;
	QString str=lineEditMaxHeightScanCh1->text();
	QLineEdit* lineEdit = lineEditMaxHeightScanCh1;
	fLineEditArpScanCh(str,iAddr,lineEdit);
}
void Dialog::fLineEditMinHeightScanCh1()
{
	int iAddr = 99;
	QString str=lineEditMinHeightScanCh1->text();
	QLineEdit* lineEdit = lineEditMinHeightScanCh1;
	fLineEditArpScanCh(str,iAddr,lineEdit);
}
void Dialog::fLineEditLineNulHeightScanCh1()
{
	int iAddr = 100;
	QString str=lineEditLineNulHeightScanCh1->text();
	QLineEdit* lineEdit = lineEditLineNulHeightScanCh1;
	fLineEditArpScanCh(str,iAddr,lineEdit);
}
void Dialog::fLineEditMaxWidthScanCh1()
{
	int iAddr = 101;
	QString str=lineEditMaxWidthScanCh1->text();
	QLineEdit* lineEdit = lineEditMaxWidthScanCh1;
	fLineEditArpScanCh(str,iAddr,lineEdit);
}
void Dialog::fLineEditMinWidthScanCh1()
{
	int iAddr = 102;
	QString str=lineEditMinWidthScanCh1->text();
	QLineEdit* lineEdit = lineEditMinWidthScanCh1;
	fLineEditArpScanCh(str,iAddr,lineEdit);
}
void Dialog::fLineEditLineNulWidthScanCh1()
{
	int iAddr = 103;
	QString str=lineEditLineNulWidthScanCh1->text();
	QLineEdit* lineEdit = lineEditLineNulWidthScanCh1;
	fLineEditArpScanCh(str,iAddr,lineEdit);
}

void Dialog::fLineEditMaxHeightScanCh2()
{
	int iAddr = 106;
	QString str=lineEditMaxHeightScanCh2->text();
	QLineEdit* lineEdit = lineEditMaxHeightScanCh2;
	fLineEditArpScanCh(str,iAddr,lineEdit);
}
void Dialog::fLineEditMinHeightScanCh2()
{
	int iAddr = 107;
	QString str=lineEditMinHeightScanCh2->text();
	QLineEdit* lineEdit = lineEditMinHeightScanCh2;
	fLineEditArpScanCh(str,iAddr,lineEdit);
}
void Dialog::fLineEditLineNulHeightScanCh2()
{
	int iAddr = 108;
	QString str=lineEditLineNulHeightScanCh2->text();
	QLineEdit* lineEdit = lineEditLineNulHeightScanCh2;
	fLineEditArpScanCh(str,iAddr,lineEdit);
}
void Dialog::fLineEditMaxWidthScanCh2()
{
	int iAddr = 109;
	QString str=lineEditMaxWidthScanCh2->text();
	QLineEdit* lineEdit = lineEditMaxWidthScanCh2;
	fLineEditArpScanCh(str,iAddr,lineEdit);
}
void Dialog::fLineEditMinWidthScanCh2()
{
	int iAddr = 110;
	QString str=lineEditMinWidthScanCh2->text();
	QLineEdit* lineEdit = lineEditMinWidthScanCh2;
	fLineEditArpScanCh(str,iAddr,lineEdit);
}
void Dialog::fLineEditLineNulWidthScanCh2()
{
	int iAddr = 111;
	QString str=lineEditLineNulWidthScanCh2->text();
	QLineEdit* lineEdit = lineEditLineNulWidthScanCh2;
	fLineEditArpScanCh(str,iAddr,lineEdit);
}

void Dialog::fLineEditMaxHeightScanCh3()
{
	int iAddr = 114;
	QString str=lineEditMaxHeightScanCh3->text();
	QLineEdit* lineEdit = lineEditMaxHeightScanCh3;
	fLineEditArpScanCh(str,iAddr,lineEdit);
}
void Dialog::fLineEditMinHeightScanCh3()
{
	int iAddr = 115;
	QString str=lineEditMinHeightScanCh3->text();
	QLineEdit* lineEdit = lineEditMinHeightScanCh3;
	fLineEditArpScanCh(str,iAddr,lineEdit);
}
void Dialog::fLineEditLineNulHeightScanCh3()
{
	int iAddr = 116;
	QString str=lineEditLineNulHeightScanCh3->text();
	QLineEdit* lineEdit = lineEditLineNulHeightScanCh3;
	fLineEditArpScanCh(str,iAddr,lineEdit);
}
void Dialog::fLineEditMaxWidthScanCh3()
{
	int iAddr = 117;
	QString str=lineEditMaxWidthScanCh3->text();
	QLineEdit* lineEdit = lineEditMaxWidthScanCh3;
	fLineEditArpScanCh(str,iAddr,lineEdit);
}
void Dialog::fLineEditMinWidthScanCh3()
{
	int iAddr = 118;
	QString str=lineEditMinWidthScanCh3->text();
	QLineEdit* lineEdit = lineEditMinWidthScanCh3;
	fLineEditArpScanCh(str,iAddr,lineEdit);
}
void Dialog::fLineEditLineNulWidthScanCh3()
{
	int iAddr = 119;
	QString str=lineEditLineNulWidthScanCh3->text();
	QLineEdit* lineEdit = lineEditLineNulWidthScanCh3;
	fLineEditArpScanCh(str,iAddr,lineEdit);
}

void Dialog::fLineEditMaxHeightScanCh4()
{
	int iAddr = 122;
	QString str=lineEditMaxHeightScanCh4->text();
	QLineEdit* lineEdit = lineEditMaxHeightScanCh4;
	fLineEditArpScanCh(str,iAddr,lineEdit);
}
void Dialog::fLineEditMinHeightScanCh4()
{
	int iAddr = 123;
	QString str=lineEditMinHeightScanCh4->text();
	QLineEdit* lineEdit = lineEditMinHeightScanCh4;
	fLineEditArpScanCh(str,iAddr,lineEdit);
}
void Dialog::fLineEditLineNulHeightScanCh4()
{
	int iAddr = 124;
	QString str=lineEditLineNulHeightScanCh4->text();
	QLineEdit* lineEdit = lineEditLineNulHeightScanCh4;
	fLineEditArpScanCh(str,iAddr,lineEdit);
}
void Dialog::fLineEditMaxWidthScanCh4()
{
	int iAddr = 125;
	QString str=lineEditMaxWidthScanCh4->text();
	QLineEdit* lineEdit = lineEditMaxWidthScanCh4;
	fLineEditArpScanCh(str,iAddr,lineEdit);
}
void Dialog::fLineEditMinWidthScanCh4()
{
	int iAddr = 126;
	QString str=lineEditMinWidthScanCh4->text();
	QLineEdit* lineEdit = lineEditMinWidthScanCh4;
	fLineEditArpScanCh(str,iAddr,lineEdit);
}
void Dialog::fLineEditLineNulWidthScanCh4()
{
	int iAddr = 127;
	QString str=lineEditLineNulWidthScanCh4->text();
	QLineEdit* lineEdit = lineEditLineNulWidthScanCh4;
	fLineEditArpScanCh(str,iAddr,lineEdit);
}
*/
void Dialog::fLineEditArpScanCh(QString str1,int iAddr1,QLineEdit* lineEdit)
{
//	if(lineEdit->hasFocus())
	{
	int iAddr = iAddr1;
	QString str=str1;
	int b1;
	b1=fr12bit5v(str.toDouble());
//	if(b1<1000 && b1>=0)
	{
		lineEdit->setText(QString("%1").arg(to12bit5v(b1),0, 'F', 2));
		unitReceive->setSelectedParameters(0,iAddr,b1);
		unitSend->setSelectedParameters(0,iAddr,b1);
//		netExchange->waiteCopyTwin(iAddr,1,2);		////////////////////
		if(isSetPressEnter())
			lineEdit->selectAll();

	}
	}
}

/////////////////////////////////////////////////////
//пороги
void Dialog::setPressEnter()
{
	intPressEnter=1;
}
int Dialog::isSetPressEnter()
{
	int iPrEnter=intPressEnter;
	intPressEnter=0;
	return iPrEnter;
}
void Dialog::fLineEditCompensZ()
{
//24l
	int iAddr = 24;
	QLineEdit* lineEdit = lineEditCompensZ;
	int b1,b2;
	QString str1,str2;
	str1=lineEdit->text();
	b1=str1.toInt();
	b1 &= 0xff;
	b2=unitReceive->isSelectedParameters(iChoiceRls,iAddr);
	b2 &= 0xff00;
	lineEdit->setText(QString("%1").arg(b1));
	b1 |= b2;
	unitReceive->setSelectedParameters(iChoiceRls,iAddr,b1);
	unitSend->setSelectedParameters(iChoiceRls,iAddr,b1);
	if(isSetPressEnter())
		lineEdit->selectAll();
}
void Dialog::fLineEditCompensPass()
{
//24h
	int iAddr = 24;
	QLineEdit* lineEdit = lineEditCompensPass;
	int b1,b2;
	QString str1,str2;
	str1=lineEdit->text();
	b1=str1.toInt();
	b1 &= 0xff;
	b2=unitReceive->isSelectedParameters(iChoiceRls,iAddr);
	b2 &= 0xff;
	lineEdit->setText(QString("%1").arg(b1));
	b1 <<= 8;
	b1 |= b2;
	unitReceive->setSelectedParameters(iChoiceRls,iAddr,b1);
	unitSend->setSelectedParameters(iChoiceRls,iAddr,b1);
	if(isSetPressEnter())
		lineEdit->selectAll();
}
void Dialog::fLineEditCompensAct()
{
//25l
	int iAddr = 25;
	QLineEdit* lineEdit = lineEditCompensAct;
	int b1,b2;
	QString str1,str2;
	str1=lineEdit->text();
	b1=str1.toInt();
	b1 &= 0xff;
	b2=unitReceive->isSelectedParameters(iChoiceRls,iAddr);
	b2 &= 0xff00;
	lineEdit->setText(QString("%1").arg(b1));
	b1 |= b2;
	unitReceive->setSelectedParameters(iChoiceRls,iAddr,b1);
	unitSend->setSelectedParameters(iChoiceRls,iAddr,b1);
	if(isSetPressEnter())
		lineEdit->selectAll();
}
void Dialog::fLineEditCompensInput1()
{
//25h
	int iAddr = 25;
	QLineEdit* lineEdit = lineEditCompensInput1;
	int b1,b2;
	QString str1,str2;
	str1=lineEdit->text();
	b1=str1.toInt();
	b1 &= 0xff;
	b2=unitReceive->isSelectedParameters(iChoiceRls,iAddr);
	b2 &= 0xff;
	lineEdit->setText(QString("%1").arg(b1));
	b1 <<= 8;
	b1 |= b2;
	unitReceive->setSelectedParameters(iChoiceRls,iAddr,b1);
	unitSend->setSelectedParameters(iChoiceRls,iAddr,b1);
	if(isSetPressEnter())
		lineEdit->selectAll();
}
void Dialog::fLineEditCompensInput2()
{
//26l
	int iAddr = 26;
	QLineEdit* lineEdit = lineEditCompensInput2;
	int b1,b2;
	QString str1,str2;
	str1=lineEdit->text();
	b1=str1.toInt();
	b1 &= 0xff;
	b2=unitReceive->isSelectedParameters(iChoiceRls,iAddr);
	b2 &= 0xff00;
	lineEdit->setText(QString("%1").arg(b1));
	b1 |= b2;
	unitReceive->setSelectedParameters(iChoiceRls,iAddr,b1);
	unitSend->setSelectedParameters(iChoiceRls,iAddr,b1);
	if(isSetPressEnter())
		lineEdit->selectAll();
}

void Dialog::fLineEditRiftZ()
{
	int iAddr = 14;
	int b1,b2;
	QString str=lineEditRiftZ->text();
	b1=str.toInt();
	if(b1<1024 && b1>=0)
	{
		lineEditRiftZ->setText(QString("%1").arg(b1));
		unitReceive->setSelectedParameters(iChoiceRls,iAddr,b1);
		unitSend->setSelectedParameters(iChoiceRls,iAddr,b1);
		if(isSetPressEnter())
			lineEditRiftZ->selectAll();
		widgetRiftZ->setLevelEdgeValue(0,b1);
//		netExchange->waiteCopyTwin(iAddr,1,2);		////////////////////
	}
	else
	{
		if(b1<0)b2=0; 
		if(b1>1023)b2=1023;
		lineEditRiftZ->setText(QString("%1").arg(b2));
		lineEditRiftZ->setText(QString("%1").arg(b2));
		widgetRiftZ->setLevelEdgeValue(0,b2);
	}
}
void Dialog::fLineEditRiftPass1()
{
	int iAddr = 15;
	int b1,b2;
	QString str=lineEditRiftPass1->text();
	b1=str.toInt();
	if(b1<1024 && b1>=0)
	{
		lineEditRiftPass1->setText(QString("%1").arg(b1));
		unitReceive->setSelectedParameters(iChoiceRls,iAddr,b1);
		unitSend->setSelectedParameters(iChoiceRls,iAddr,b1);
		if(isSetPressEnter())
			lineEditRiftPass1->selectAll();
		ui.widget_2->setLevelEdgeValue(0,b1);
//		netExchange->waiteCopyTwin(iAddr,1,2);		////////////////////
	}
	else
	{
		if(b1<0)b2=0; 
		if(b1>1023)b2=1023;
		lineEditRiftPass1->setText(QString("%1").arg(b2));
		lineEditRiftPass1->setText(QString("%1").arg(b2));
		ui.widget_2->setLevelEdgeValue(0,b2);
	}
}
void Dialog::fLineEditRiftAvtoZ()
{
	int iAddr = 28;
	PLineEdit* lineEdit = lineEditAvtoRiftZ;
	QString str,str1,str2;
	ushort b1,b2;
	str = lineEdit->text();
	bool ok;
	b1 = str.toInt(&ok);
	if(ok)
	{
		str1 = QString("%1").arg(b1);
		b1 = str1.toInt();
		if(b1>=1 && b1<=99)
		{
			b2 = ushort((double)b1*(double)0x10000/(double)100+.5);
			unitReceive->setSelectedParameters(0,iAddr,b2);
			unitSend->setSelectedParameters(0,iAddr,b2);
		}
	}
	lineEdit->setSText(str1);
	return;
}
void Dialog::fLineEditPressSpaceRiftAvtoZ(const QString& str)
{
	QWidget* focus = focusWidget();
	QString str1,str2;
		str1=str.right(1);
		str2=" ";
	if(str1==str2)
	{
		if(focus == lineEditAvtoRiftZ)
			fLineEditRiftAvtoZ();
	}
	return;
}
void Dialog::fLineEditRiftAvtoV()
{
	int iAddr = 29;
	PLineEdit* lineEdit = lineEditAvtoRiftV;
	QString str,str1,str2;
	ushort b1,b2;
	str = lineEdit->text();
	bool ok;
	b1 = str.toInt(&ok);
	if(ok)
	{
		str1 = QString("%1").arg(b1);
		b1 = str1.toInt();
		if(b1>=1 && b1<=99)
		{
			b2 = ushort((double)b1*(double)0x10000/(double)100+.5);
			unitReceive->setSelectedParameters(0,iAddr,b2);
			unitSend->setSelectedParameters(0,iAddr,b2);
		}
	}
	lineEdit->setSText(str1);
	return;
}
void Dialog::fLineEditPressSpaceRiftAvtoV(const QString& str)
{
	QWidget* focus = focusWidget();
	QString str1,str2;
		str1=str.right(1);
		str2=" ";
	if(str1==str2)
	{
		if(focus == lineEditAvtoRiftV)
			fLineEditRiftAvtoV();
	}
	return;
}
void Dialog::fLineEditRiftAct1()
{
	int iAddr = 18;
	int b1,b2;
	QString str=lineEditRiftAct1->text();
	b1=str.toInt();
	if(b1<1024 && b1>=0)
	{
		lineEditRiftAct1->setText(QString("%1").arg(b1));
		unitReceive->setSelectedParameters(iChoiceRls,iAddr,b1);
		unitSend->setSelectedParameters(iChoiceRls,iAddr,b1);
		if(isSetPressEnter())
			lineEditRiftAct1->selectAll();
		ui.widget_3->setLevelEdgeValue(0,b1);
//		netExchange->waiteCopyTwin(iAddr,1,2);		////////////////////
	}
	else
	{
		if(b1<0)b2=0; 
		if(b1>1023)b2=1023;
		lineEditRiftAct1->setText(QString("%1").arg(b2));
		lineEditRiftAct1->setText(QString("%1").arg(b2));
		ui.widget_3->setLevelEdgeValue(0,b2);
	}
}
void Dialog::fMoveEdgeRiftZ()
{
	int a1;QString str;
	a1=widgetRiftZ->levelEdgeValue(0);
	str = QString("%1").arg(a1);
	lineEditRiftZ->setText(str);
	unitReceive->setSelectedParameters(0,14,a1);
	unitSend->setSelectedParameters(0,14,a1);

}
void Dialog::fMoveEdgeRiftPass1()
{
	int a1;QString str;
	a1=ui.widget_2->levelEdgeValue(0);
	str = QString("%1").arg(a1);
	lineEditRiftPass1->setText(str);
	unitReceive->setSelectedParameters(0,15,a1);
	unitSend->setSelectedParameters(0,15,a1);
}
void Dialog::fMoveEdgeRiftAct1()
{
	int a1;QString str;
	a1=ui.widget_3->levelEdgeValue(0);
	str = QString("%1").arg(a1);
	lineEditRiftAct1->setText(str);
	unitReceive->setSelectedParameters(0,18,a1);
	unitSend->setSelectedParameters(0,18,a1);
}
void Dialog::fRadioButtonFizPoz()
{
	int iAddr = 10;
	int b1;
	b1 = unitReceive->isSelectedParameters(iChoiceRls,iAddr);
	fWordWr(b1);
	if(radioButtonFizPoz->isChecked())wordWr.bit2=0;
	if(radioButtonFizNeg->isChecked())wordWr.bit2=1;
	if(radioButtonLogPoz->isChecked())wordWr.bit3=0;
	if(radioButtonLogNeg->isChecked())wordWr.bit3=1;
	unitReceive->setSelectedParameters(iChoiceRls,iAddr,fWordWr());
	unitSend->setSelectedParameters(iChoiceRls,iAddr,fWordWr());

}
void Dialog::fRadioButtonFizNeg()
{
	int iAddr = 10;
	int b1;
	b1 = unitReceive->isSelectedParameters(iChoiceRls,iAddr);
	fWordWr(b1);
	if(radioButtonFizPoz->isChecked())wordWr.bit2=0;
	if(radioButtonFizNeg->isChecked())wordWr.bit2=1;
	if(radioButtonLogPoz->isChecked())wordWr.bit3=0;
	if(radioButtonLogNeg->isChecked())wordWr.bit3=1;
	unitReceive->setSelectedParameters(iChoiceRls,iAddr,fWordWr());
	unitSend->setSelectedParameters(iChoiceRls,iAddr,fWordWr());
}
void Dialog::fRadioButtonLogPoz()
{
	int iAddr = 10;
	int b1;
	b1 = unitReceive->isSelectedParameters(iChoiceRls,iAddr);
	fWordWr(b1);
	if(radioButtonFizPoz->isChecked())wordWr.bit2=0;
	if(radioButtonFizNeg->isChecked())wordWr.bit2=1;
	if(radioButtonLogPoz->isChecked())wordWr.bit3=0;
	if(radioButtonLogNeg->isChecked())wordWr.bit3=1;
	unitReceive->setSelectedParameters(iChoiceRls,iAddr,fWordWr());
	unitSend->setSelectedParameters(iChoiceRls,iAddr,fWordWr());
}
void Dialog::fRadioButtonLogNeg()
{
	int iAddr = 10;
	int b1;
	b1 = unitReceive->isSelectedParameters(iChoiceRls,iAddr);
	fWordWr(b1);
	if(radioButtonFizPoz->isChecked())wordWr.bit2=0;
	if(radioButtonFizNeg->isChecked())wordWr.bit2=1;
	if(radioButtonLogPoz->isChecked())wordWr.bit3=0;
	if(radioButtonLogNeg->isChecked())wordWr.bit3=1;
	unitReceive->setSelectedParameters(iChoiceRls,iAddr,fWordWr());
	unitSend->setSelectedParameters(iChoiceRls,iAddr,fWordWr());
}
void Dialog::fLineEditRiftMai()
{
	int iAddr = 22;
	int b1,b2;
	QString str=lineEditRiftMai->text();
	b1=str.toInt();
	if(b1<1024 && b1>=0)
	{
		lineEditRiftMai->setText(QString("%1").arg(b1));
		unitReceive->setSelectedParameters(0,iAddr,b1);
		unitSend->setSelectedParameters(0,iAddr,b1);
		if(isSetPressEnter())
			lineEditRiftMai->selectAll();
//		netExchange->waiteCopyTwin(iAddr,1,2);		////////////////////
	}
	else
	{
		if(b1<0)b2=0; 
		if(b1>1023)b2=1023;
		lineEditRiftMai->setText(QString("%1").arg(b2));
	}
}
void Dialog::fLineEditRiftNorth()
{
	int iAddr = 21;
	int b1,b2;
	QString str=lineEditRiftNorth->text();
	b1=str.toInt();
	if(b1<1024 && b1>=0)
	{
		lineEditRiftNorth->setText(QString("%1").arg(b1));
		unitReceive->setSelectedParameters(0,iAddr,b1);
		unitSend->setSelectedParameters(0,iAddr,b1);
		if(isSetPressEnter())
			lineEditRiftNorth->selectAll();
//		netExchange->waiteCopyTwin(iAddr,1,2);		////////////////////
	}
	else
	{
		if(b1<0)b2=0; 
		if(b1>1023)b2=1023;
		lineEditRiftNorth->setText(QString("%1").arg(b2));
	}
}




void Dialog::fLineEditPressSpaceRift(const QString& str)
{
	QWidget* focus = focusWidget();
	QString str1,str2;
		str1=str.right(1);
		str2=tr(" ");
	if(str1==str2)
	{
		if(focus == lineEditRls0ArpPointStandingDistance)
			fLineEditRls0ArpPointStandingDistance();
		if(focus == lineEditRls0ArpPointStandingAzimuth)
			fLineEditRls0ArpPointStandingAzimuth();
		if(focus == lineEditCompensZ)
			fLineEditCompensZ();
		if(focus == lineEditCompensPass)
			fLineEditCompensPass();
		if(focus == lineEditCompensAct)
			fLineEditCompensAct();
		if(focus == lineEditCompensInput1)
			fLineEditCompensInput1();
		if(focus == lineEditCompensInput2)
			fLineEditCompensInput2();
		if(focus == lineEditRiftZ)
		{
			fLineEditRiftZ();
		}
		if(focus == lineEditRiftPass1)
		{
			fLineEditRiftPass1();
		}
		if(focus == lineEditRiftAct1)
		{
			fLineEditRiftAct1();
		}
		if(focus == lineEditRiftMai)
		{
			fLineEditRiftMai();
		}
		if(focus == lineEditRiftNorth)
		{
			fLineEditRiftNorth();
		}
	}
}
void Dialog::keyPressEvent(QKeyEvent* e)
{

//???????????????
	if(e->key() != Qt::Key_Return) return;
	QWidget* focus1 = focusWidget();
	QLineEdit* lineEdit=(QLineEdit*)focus1;
	int priznakFocus=0;
	if(e->key() == Qt::Key_Return)
	{
		if(lineEdit==lineEditNameRls0)	priznakFocus=1;
		if(lineEdit==lineEditNameRls1)	priznakFocus=1;
		if(lineEdit==lineEditRls0NameArp)	priznakFocus=1;
		if(lineEdit==lineEditNameAPOI)	priznakFocus=1;
		if(lineEdit==lineEditNameBoard)	priznakFocus=1;

		if(lineEdit==lineEditPointStandingDistance)	priznakFocus=1;
		if(lineEdit==lineEditPointStandingAzimuth)	priznakFocus=1;
		if(lineEdit==lineEditSelectorMa10)	priznakFocus=1;
		if(lineEdit==lineEditRls0ArpPointStandingDistance)	priznakFocus=1;
		if(lineEdit==lineEditRls0ArpPointStandingAzimuth)	priznakFocus=1;
		if(lineEdit==lineEditRiftCh1)	priznakFocus=1;
		if(lineEdit==lineEditRiftCh2)	priznakFocus=1;
		if(lineEdit==lineEditRiftCh3)	priznakFocus=1;
		if(lineEdit==lineEditRiftCh4)	priznakFocus=1;

		if(lineEdit==lineEditRls0MuG7)	priznakFocus=1;
		if(lineEdit==lineEditRls0MuG0)	priznakFocus=1;
		if(lineEdit==lineEditRls0MuK_10)	priznakFocus=1;
		if(lineEdit==lineEditRls0MuK0)	priznakFocus=1;
		if(lineEdit==lineEditRls0MuK10)	priznakFocus=1;
		if(lineEdit==lineEditRls0UEipa7GonK)	priznakFocus=1;
		if(lineEdit==lineEditRls0UEipa0GonK)	priznakFocus=1;
		if(lineEdit==lineEditRls0UEipa10KonG)	priznakFocus=1;
		if(lineEdit==lineEditRls0UEipa0KonG)	priznakFocus=1;
		if(lineEdit==lineEditRls0UEipa_10KonG)	priznakFocus=1;


		if(lineEdit==lineEditRls0PointStandingDistance)	priznakFocus=1;
		if(lineEdit==lineEditRls0PointStandingAzimuth)	priznakFocus=1;
		if(lineEdit==lineEditRls0EndFaceVPP1)	priznakFocus=1;
		if(lineEdit == lineEditRls0EndFaceVPP1 )	priznakFocus=1;
		if(lineEdit == lineEditRls0HighAerialVPP1 )	priznakFocus=1;
		if(lineEdit == lineEditRls0DistanceAxisVPP )	priznakFocus=1;
		if(lineEdit == lineEditRls0PointPlanting1 )	priznakFocus=1;
		if(lineEdit == lineEditRls0EndFaceVPP2 )	priznakFocus=1;
		if(lineEdit == lineEditRls0HighAerialVPP2 )	priznakFocus=1;
		if(lineEdit == lineEditRls0PointPlanting2 )	priznakFocus=1;

		if(lineEdit == lineEditRls0TurnKO )	priznakFocus=1;
		if(lineEdit == lineEditRls0DisPlaceVPass )	priznakFocus=1;
		if(lineEdit == lineEditRls0DisPlaceVAct )	priznakFocus=1;

		if(lineEdit == lineEditRls0DisplaceNulG )	priznakFocus=1;
		if(lineEdit == lineEditRls0DisplaceNulK )	priznakFocus=1;
		if(lineEdit == lineEditRls0CombG )	priznakFocus=1;
		if(lineEdit == lineEditRls0CombK )	priznakFocus=1;
		if(lineEdit == lineEditRls0ScopeG )	priznakFocus=1;
		if(lineEdit == lineEditRls0ScopeK )	priznakFocus=1;
		if(lineEdit == lineEditRls0MuGMaxRift )	priznakFocus=1;
		if(lineEdit == lineEditRls0MuGMinRift )	priznakFocus=1;
		if(lineEdit == lineEditRls0MuKMaxRift )	priznakFocus=1;
		if(lineEdit == lineEditRls0MuKMinRift )	priznakFocus=1;


		if(lineEdit == lineEditRls1PointStandingDistance )	priznakFocus=1;
		if(lineEdit == lineEditRls1PointStandingAzimuth )	priznakFocus=1;
		if(lineEdit == lineEditRls1EndFaceVPP1 )		priznakFocus=1;
		if(lineEdit == lineEditRls1HighAerialVPP1 )				priznakFocus=1;
		if(lineEdit == lineEditRls1DistanceAxisVPP )				priznakFocus=1;
		if(lineEdit == lineEditRls1PointPlanting1 )				priznakFocus=1;
		if(lineEdit == lineEditRls1EndFaceVPP2 )				priznakFocus=1;
		if(lineEdit == lineEditRls1HighAerialVPP2 )				priznakFocus=1;
		if(lineEdit == lineEditRls1PointPlanting2 )				priznakFocus=1;

		if(lineEdit == lineEditRls1TurnKO )	priznakFocus=1;
		if(lineEdit == lineEditRls1DisPlaceVPass )	priznakFocus=1;
		if(lineEdit == lineEditRls1DisPlaceVAct )	priznakFocus=1;

		if(lineEdit == lineEditRls1DisplaceNulG )	priznakFocus=1;
		if(lineEdit == lineEditRls1DisplaceNulK )	priznakFocus=1;
		if(lineEdit == lineEditRls1CombG )	priznakFocus=1;
		if(lineEdit == lineEditRls1CombK )	priznakFocus=1;
		if(lineEdit == lineEditRls1ScopeG )	priznakFocus=1;
		if(lineEdit == lineEditRls1ScopeK )	priznakFocus=1;
		if(lineEdit == lineEditRls1MuGMaxRift )	priznakFocus=1;
		if(lineEdit == lineEditRls1MuGMinRift )	priznakFocus=1;
		if(lineEdit == lineEditRls1MuKMaxRift )	priznakFocus=1;
		if(lineEdit == lineEditRls1MuKMinRift )	priznakFocus=1;


		if(lineEdit == lineEditCourseLanding1 )				priznakFocus=1;

		if(lineEdit == lineEditIPInitial )				priznakFocus=1;
		if(lineEdit == lineEditBasicPort )				priznakFocus=1;
		if(lineEdit == lineEditPortBoard )				priznakFocus=1;
		if(lineEdit == lineEditMaxLengthUnit )				priznakFocus=1;
		if(lineEdit == lineEditMaxWaitRay )				priznakFocus=1;
		if(lineEdit == lineEditGradient )				priznakFocus=1;
		if(lineEdit == lineEditRiftZ )				priznakFocus=1;
		if(lineEdit == lineEditRiftPass1 )				priznakFocus=1;
		if(lineEdit == lineEditRiftAct1 )				priznakFocus=1;
		if(lineEdit == lineEditRiftMai )				priznakFocus=1;
		if(lineEdit == lineEditRiftNorth )				priznakFocus=1;

		if(lineEdit == lineEditCompensZ )				priznakFocus=1;
		if(lineEdit == lineEditCompensPass )				priznakFocus=1;
		if(lineEdit == lineEditCompensAct )				priznakFocus=1;
		if(lineEdit == lineEditCompensInput1 )				priznakFocus=1;
		if(lineEdit == lineEditCompensInput2 )				priznakFocus=1;

		if(priznakFocus)
		{
			setPressEnter();
			lineEdit->selectAll();
		}
	}

}
void Dialog::wheelEvent(QWheelEvent *e)
{
	QWidget* focus = focusWidget();

	if(focus == ui.lineEdit_11)
	{
		int num = ui.lineEdit_11->text().toInt();
		ui.lineEdit_11->setText(e->delta() > 0 ? QString::number(num+1) : QString::number(num-1));
		fLineEditRiftZ();
	}

	if(focus == ui.lineEdit_32)
	{
		int num = ui.lineEdit_32->text().toInt();
		ui.lineEdit_32->setText(e->delta() > 0 ? QString::number(num+1) : QString::number(num-1));
		fLineEditRiftPass1();
	}

	if(focus == ui.lineEdit_40)
	{
		int num = ui.lineEdit_40->text().toInt();
		ui.lineEdit_40->setText(e->delta() > 0 ? QString::number(num+1) : QString::number(num-1));
		fLineEditRiftAct1();
	}
	if(focus == lineEditRiftMai)
	{
		int num = lineEditRiftMai->text().toInt();
		lineEditRiftMai->setText(e->delta() > 0 ? QString::number(num+1) : QString::number(num-1));
		fLineEditRiftMai();
	}
	if(focus == lineEditRiftNorth)
	{
		int num = lineEditRiftNorth->text().toInt();
		lineEditRiftNorth->setText(e->delta() > 0 ? QString::number(num+1) : QString::number(num-1));
		fLineEditRiftNorth();
	}
}
void Dialog::fPushButtonOsc()
{
	QWidget* focus = focusWidget();
	int a1,a2,a3,a4; int numOsc=0;
	if(focus == buttonOsc11)	{a1=1;numOsc=1;}
	if(focus == buttonOsc21)	{a1=2;numOsc=1;}
	if(focus == buttonOsc31)	{a1=3;numOsc=1;}
	if(focus == buttonOsc41)	{a1=4;numOsc=1;}
	if(focus == buttonOsc51)	{a1=5;numOsc=1;}
	if(focus == buttonOsc12)	{a1=6;numOsc=1;}
	if(focus == buttonOsc22)	{a1=7;numOsc=1;}
	if(focus == buttonOsc32)	{a1=8;numOsc=1;}
	if(focus == buttonOsc42)	{a1=9;numOsc=1;}
	if(focus == buttonOsc52)	{a1=10;numOsc=1;}
	if(focus == buttonOscPZK)	{a1=11;numOsc=1;}
	if(focus == buttonOscT1)	{a1=12;numOsc=1;}
	if(focus == buttonOscT2)	{a1=13;numOsc=1;}
	if(focus == buttonOscT3)	{a1=14;numOsc=1;}
	if(focus == buttonOscOff1)	{a1=0;numOsc=1;}

	if(focus == buttonOscK1)	{a2=1;numOsc=2;}
	if(focus == buttonOscK2)	{a2=2;numOsc=2;}
	if(focus == buttonOscK3)	{a2=3;numOsc=2;}
	if(focus == buttonOscK4)	{a2=4;numOsc=2;}
	if(focus == buttonOscK5)	{a2=5;numOsc=2;}
	if(focus == buttonOscK6)	{a2=6;numOsc=2;}
	if(focus == buttonOscK7)	{a2=7;numOsc=2;}
	if(focus == buttonOscK8)	{a2=8;numOsc=2;}
	if(focus == buttonOscOff2)	{a2=0;numOsc=2;}
	if(numOsc==1)
	{
		a3=unitReceive->basicSetting[127];
		a3&=0xff00;
		unitReceive->basicSetting[127]=a1|a3;
		unitSend->basicSetting[127]=a1|a3;
		if(a1<6 && a1<0)
		{


		}
	}
	if(numOsc==2)
	{
		a2<<=8;
		a4=unitReceive->basicSetting[127];
		a4&=0xff;
		a2|=a4;
		unitReceive->basicSetting[127]=a2;
		unitSend->basicSetting[127]=a2;
	}
}
