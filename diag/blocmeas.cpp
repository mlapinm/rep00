#include "blocmeas.h"

BlocMeas::BlocMeas(QObject *parent)
	: QObject(parent)
{
//ехою
	bFix07 = false; bFix00 = false; 

	bFix1_10 = false; bFix10 = false; bFix110 = false;
	shFix07 = 0; shFix00 = 0; 
	shFix1_10 = 0; shFix10 = 0; shFix110 = 0;
//
	bFixG7 = false; bFixG0 = false; bArhG = false;
	minG = 0; maxG = 0;
	bFixC_10 = false; bFixC0 = false; bFixC10 = false; bArhC = false;
	minC = 0; maxC = 0;
	muG7 = 0; muG0 = 0;
	muC_10 = 0; muC0 = 0;	muC10 = 0;

}

BlocMeas::~BlocMeas()
{

}
