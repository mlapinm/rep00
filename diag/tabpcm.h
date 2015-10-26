#ifndef TABPCM_H
#define TABPCM_H

#include <QWidget>
#include "ui_tabpcm.h"
#include "unit.h"
#include "wrd.h"

class TabPcm : public QWidget
{
	Q_OBJECT

public:
	TabPcm(QWidget *parent = 0);
	~TabPcm();

	Unit* unitReceive,*unitSend;
	Wrd wrd,wrdWr;
	void createActions();
	void setEnabledThe(bool b); 
	void updateDialog();
	void fLiEdAzimuth(void* l, ushort* pReceiveSePar, ushort* pSendSelPar);
protected slots:
	void slLiEdNameBoard();
	void fLineEditIPInitial();
	void fLineEditBasicPort();
	void fLineEditPortBoard();
	void fLineEditGradient();
	void slRaBuPcmMetr();
private:
	Ui::TabPcm ui;
public:
	uchar firstChar(ushort a1);
	uchar secondChar(ushort a1);
};

#endif // TABPCM_H
