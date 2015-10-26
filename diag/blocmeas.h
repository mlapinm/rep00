#ifndef BLOCMEAS_H
#define BLOCMEAS_H

#include <QtCore/QObject>

class BlocMeas : public QObject
{
	Q_OBJECT

public:
	BlocMeas(QObject *parent);
	~BlocMeas();
	uchar uchBloc[32];
//ехою
	bool bFix07,bFix00,bFix1_10,bFix10,bFix110;
	short shFix07,shFix00,shFix1_10,shFix10,shFix110;
	double dFix07,dFix00,dFix1_10,dFix10,dFix110;
//-
	bool bFixG7,bFixG0,bArhG;
	short minG,maxG;
	bool bFixC_10,bFixC0,bFixC10,bArhC;
	short minC,maxC;
	short muG7,muG0,muC_10,muC0,muC10;
private:
	
};

#endif // BLOCMEAS_H
