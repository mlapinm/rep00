#ifndef LISTDLG_H
#define LISTDLG_H

#include <QtGui/QDialog>
#include "ui_listdlg.h"

class ListDlg : public QDialog
{
	Q_OBJECT

public:
	ListDlg(QWidget *parent = 0);
	~ListDlg();

private:
	Ui::listDlgClass ui;
};

#endif // LISTDLG_H
