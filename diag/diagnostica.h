#ifndef DIAGNOSTICA_H
#define DIAGNOSTICA_H

#include <QtCore/QObject>
#include <QtGui/QWidget>
#include "unn.h"
#include "glcu.h"
#include <QtGui/QTextEdit>

extern QTextEdit* tEd;

class Rastr;

class Diagnostica : public QObject
{
	Q_OBJECT

public:
	Diagnostica(QObject *parent);
	~Diagnostica();
	int numBoard;bool bChange;int culcChange;
	Rastr* rastr;		
	uchar dgnstc[396];
	QStringList toStrListPrl();
	QStringList toStrListKo();
	void initRastr(Rastr* rastr);
	void toRastr();
//-
	QString toTextEd();
	QStringList strList;
	QStringList toStringList();
	QString toTxt(QStringList sL,QStringList sLIn);

	Unn u;		////переменная
	QVector<GlCu> veGlCu50;
	void initVeMDiag();
	void fillVeGlCuPrl();
	void fillVeGlCuKo();
	QString toTxtVeGlCu();
	QString toTxtVeGlCu50();
	QString toTxtEd();

	int calculator;
	int next;
	int kMet;
	GlCuRr glCuRr;
	void initGlCuRr();
	void toVeCoAnglePrl();
	void toVeCoAngleKo();
//	void keyPressEvent(QKeyEvent* e);
public slots:
	void slGlSync(bool checked);
	void slCuSync(bool checked);

	void slChBoCur(bool checked);
	void slChBoLight(bool checked);
	void slChBoInp(bool checked);
	void slChBoOutp(bool checked);
	void slChBoMet(bool checked);
	void slChBoGrid(bool checked);
	void slChBoCode(bool checked);
	void fromNumBoardDialog(int);
signals:
	void signSetVisibleChBoLight(bool);
public:
	bool isVisibleCh1BoLight;
protected:
	void keyPressEvent ( QKeyEvent * event );
	
};

#endif // DIAGNOSTICA_H
