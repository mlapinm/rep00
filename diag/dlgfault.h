#ifndef DLGFAULT_H
#define DLGFAULT_H

#include <QtGui/QDialog>
#include "ui_dlgfault.h"

class DlgFault : public QDialog
{
	Q_OBJECT

public:
	DlgFault(QWidget *parent = 0,QString str=0);
	~DlgFault();

private:
	Ui::DlgFaultClass ui;
};

#endif // DLGFAULT_H
