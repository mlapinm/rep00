#ifndef DLGCUST_H
#define DLGCUST_H

#include <QWidget>
#include "ui_dlgcust.h"
#include "tabcust.h"
#include "tabcust0.h"
#include "tabpcm.h"
//#include "tabps5.h"
#include "tabps5.h"

class DlgCust : public QWidget
{
	Q_OBJECT

public:
	DlgCust(QWidget *parent = 0);
	~DlgCust();

	TabCust* tabCust;
	TabCust0* tabCust0;
	TabPs5* tabPs5;
	TabPcm* tabPcm;
	void setEnabledThe(bool b); 

	QWidget* widCust;
	QLabel* laGetBoard;
	void setText(QString s);
	void updateDialog();
private:
	Ui::DlgCustClass ui;
};

#endif // DLGCUST_H
