#include "dlgcust.h"
#include <QGridLayout>

DlgCust::DlgCust(QWidget *parent)
	: QWidget(parent)
{
	ui.setupUi(this);
	widCust=ui.widCust;
	laGetBoard=ui.laGetBoard;
	tabCust = new TabCust(this);
	tabCust0 = new TabCust0(this);
	tabPs5 = new TabPs5(this);
	tabPcm = new TabPcm(this);

	QGridLayout* layout = new QGridLayout;
	layout->addWidget(tabCust);
	layout->addWidget(tabPs5);
	layout->addWidget(tabPcm);
	widCust->setLayout(layout);
	tabCust->hide();
	tabPs5->hide();
	tabPcm->hide();
}

DlgCust::~DlgCust()
{

}
void DlgCust::setText(QString s)
{
	ui.laGetBoard->setText(s);
	return;
}
void DlgCust::updateDialog()
{
	tabCust->updateDialog();
	return;
}
void DlgCust::setEnabledThe(bool b)
{
	tabCust->setEnabledThe(b);
	tabPs5->setEnabledThe(b);
	tabPcm->setEnabledThe(b);
}
