
//////////

	dlgCust->tabCust->unitReceive=unitReceive;
	if(numShow==2)
	{
		copyUnitsAll();
		dlgCust->updateDialog();
	}
tabCust0
liEdBytesInit
dlgCust->tabCust0->unitSend=unitSend;
dlgCust->tabCust0->unitSend=unitSend;

232		48 	fLiEdAzimuth								
вставил картинку для псп0
буду зажигать
Find all "#include "tabcust.h"", Subfolders, Find Results 1, "Current Project"
  D:\doc\prj\Diag\Diag27\Diag25tmp\Diag25\dlgcust.h(6):#include "tabcust.h"
  D:\doc\prj\Diag\Diag27\Diag25tmp\Diag25\tabcust.cpp(1):#include "tabcust.h"
  D:\doc\prj\Diag\Diag27\Diag25tmp\Diag25\tabcust00.cpp(1):#include "tabcust.h"
  D:\doc\prj\Diag\Diag27\Diag25tmp\Diag25\tabcustkors.cpp(1):#include "tabcust.h"
  D:\doc\prj\Diag\Diag27\Diag25tmp\Diag25\tabcustmvrl.cpp(2):#include "tabcust.h"
  Matching lines: 5    Matching files: 5    Total files searched: 82
	tabCust = new TabCust(this);
	tabCust0 = new TabCust0(this);

  
  tabcust0
TabCust
TabCust0
diag27+diag25
typeT
-номер платы 
13,3,5
вместо 3 надо 15
ui_tabcust - ПСП1 - новая
ui_tabcust0 - ПСП - старая
strPsp	1
strPsp0	4

	case 2:
		tabWidget->hide();			//ПСП1
		dlgCust->show();
		dlgCust->laGetBoard->hide();
		if(boardCurrent->typeT==4)
			showNum(5);
strPsp0
boardType
	if(chStr==strPsp)
		ret = 1;
	if(chStr==strPs5)
		ret = 2;
	if(chStr==strPsm)
		ret = 3;
	if(chStr==strPsp0)
		ret = 4;

void TabCust::createActionsSoPo()
{
//порты синхр информации
	QPoint pnt0;
	pnt0=ui.coBoPort1AsincrProt->pos();
	ui.coBoPort1SincrProt_2->move(pnt0);
	ui.coBoPort1SincrProt_2->setVisible(false);




void TabCust::slCoBoPort1SincrProt(int index)
{
	if((ui.coBoPort1SincrProt->hasFocus()||ui.coBoPort1SincrProt_2->hasFocus())&&index<8)
	{
		int iAddr =45;
		wrd.f(unitReceive->basicSetting[iAddr]);
		wrdWr.f(index);
		wrd.s.bit5=wrdWr.s.bit0;
		wrd.s.bit6=wrdWr.s.bit1;
		wrd.s.bit7=wrdWr.s.bit2;
		wrd.s.bit8=wrdWr.s.bit3;
		wrd.s.bit9=wrdWr.s.bit4;
		unitReceive->basicSetting[iAddr]=wrd.f();
		unitSend->basicSetting[iAddr]=wrd.f();
