#include "listdlg.h"

ListDlg::ListDlg(QWidget *parent)
	: QDialog(parent)
{
	ui.setupUi(this);
	QSize size=frameSize();
	setFixedSize(size);
}

ListDlg::~ListDlg()
{

}
