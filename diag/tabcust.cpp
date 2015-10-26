#include "tabcust.h"
#include <QDebug>
#include <QtGui/QStandardItemModel>

TabCust::TabCust(QWidget *parent)
	: QWidget(parent)
{
	ui.setupUi(this);

//
	diagnosticaPsp=new DiagnosticaPsp(this);
	QStringList lAsPort,lSincrPort,lCoBoRlsProt;
	lAsPort+="ВИСП";	//
	lAsPort+="без преобр.";	//
	lAsPort+="Астерикс";	//
	lAsPort+="Лира";	//
	lAsPort+="4";	//4
	lAsPort+="5";	//5
	lAsPort+="6";	//6
	lAsPort+="7";	//7
	lAsPort+="КОРС";	//8

	lSincrPort+="ВИСП";	//0
	lSincrPort+="без преобр.";	//1
	lSincrPort+="Aircat500";	//2
	lSincrPort+="Астерикс";	//3
	lSincrPort+="4";	//4
	lSincrPort+="5";	//5
	lSincrPort+="6";	//6
	lSincrPort+="7";	//7
	lSincrPort+="Aircat";	//8


	lCoBoRlsProt+="Aircat";	//0
	lCoBoRlsProt+="без преобр.";	//1
	lCoBoRlsProt+="2";	//2
	lCoBoRlsProt+="МВРЛ";	//3
	lCoBoRlsProt+="4";	//4
	lCoBoRlsProt+="5";	//5
	lCoBoRlsProt+="КОРС";	//6
	lCoBoRlsProt+="Лира";	//7
	lCoBoRlsProt+="8";	//8
	lCoBoRlsProt+="9";	//9
	lCoBoRlsProt+="Star-2000";	//10
	lCoBoRlsProt+="Морава";	//11


	ui.coBoPort1AsincrProt->clear();
	ui.coBoPort1AsincrProt->addItems(lAsPort);
	ui.coBoPort2AsincrProt->clear();
	ui.coBoPort2AsincrProt->addItems(lAsPort);
	ui.coBoPort3AsincrProt->clear();
	ui.coBoPort3AsincrProt->addItems(lAsPort);
	ui.coBoPort4AsincrProt->clear();
	ui.coBoPort4AsincrProt->addItems(lAsPort);
	ui.coBoPort5AsincrProt->clear();
	ui.coBoPort5AsincrProt->addItems(lAsPort);
	ui.coBoPort6AsincrProt->clear();
	ui.coBoPort6AsincrProt->addItems(lAsPort);
	ui.coBoPort7AsincrProt->clear();
	ui.coBoPort7AsincrProt->addItems(lAsPort);
	ui.coBoPort8AsincrProt->clear();
	ui.coBoPort8AsincrProt->addItems(lAsPort);
	ui.coBoPort9AsincrProt->clear();
	ui.coBoPort9AsincrProt->addItems(lAsPort);
	ui.coBoPort10AsincrProt->clear();
	ui.coBoPort10AsincrProt->addItems(lAsPort);

	ui.coBoPort1SincrProt->clear();
	ui.coBoPort1SincrProt->addItems(lSincrPort);
	ui.coBoPort2SincrProt->clear();
	ui.coBoPort2SincrProt->addItems(lSincrPort);
	ui.coBoPort3SincrProt->clear();
	ui.coBoPort3SincrProt->addItems(lSincrPort);
	ui.coBoPort4SincrProt->clear();
	ui.coBoPort4SincrProt->addItems(lSincrPort);
	ui.coBoPort5SincrProt->clear();
	ui.coBoPort5SincrProt->addItems(lSincrPort);
	ui.coBoPort6SincrProt->clear();
	ui.coBoPort6SincrProt->addItems(lSincrPort);
	ui.coBoPort7SincrProt->clear();
	ui.coBoPort7SincrProt->addItems(lSincrPort);
	ui.coBoPort8SincrProt->clear();
	ui.coBoPort8SincrProt->addItems(lSincrPort);
	ui.coBoPort9SincrProt->clear();
	ui.coBoPort9SincrProt->addItems(lSincrPort);
//	ui.coBoPort10SincrProt->clear();
//	ui.coBoPort10SincrProt->addItems(lSincrPort);

	ui.coBoRls1Prot->clear();
	ui.coBoRls1Prot->addItems(lCoBoRlsProt);
	ui.coBoRls2Prot->clear();
	ui.coBoRls2Prot->addItems(lCoBoRlsProt);
	ui.coBoRls3Prot->clear();
	ui.coBoRls3Prot->addItems(lCoBoRlsProt);
	ui.coBoRls4Prot->clear();
	ui.coBoRls4Prot->addItems(lCoBoRlsProt);
	ui.coBoRls5Prot->clear();
	ui.coBoRls5Prot->addItems(lCoBoRlsProt);
	ui.coBoRls6Prot->clear();
	ui.coBoRls6Prot->addItems(lCoBoRlsProt);

	createActions();
//	ui.tabWidget->setTabEnabled(0,false);		//..........
}

TabCust::~TabCust()
{

}
void TabCust::createActions()
{
//При использовании порта 1 в синхронном режиме
//настройки на данной вкладке не используются
	QPalette pal = ui.label_41->palette();
	pal.setBrush(QPalette::Foreground,Qt::red);
	ui.label_41->setPalette(pal);
	ui.label_42->setPalette(pal);
	ui.label_43->setPalette(pal);
	ui.label_44->setPalette(pal);
	ui.label_111->setPalette(pal);
	ui.label_112->setPalette(pal);
	ui.label_105->setPalette(pal);
	ui.label_106->setPalette(pal);
	ui.label_107->setPalette(pal);
	ui.label_108->setPalette(pal);
	ui.label_109->setPalette(pal);
	ui.label_110->setPalette(pal);
//
	st10Port6Rls =		"0000000000000000";
	st10Port6RlsPrev =	"0000000000000000";
	createActionsSoPo();
	createActionsArpMetSev();

	return;
}
void TabCust::setEnabledThe(bool b)
{
	ui.grBoPort1->setEnabled(b);
	ui.grBoPort2->setEnabled(b);
	ui.grBoPort3->setEnabled(b);
	ui.grBoPort4->setEnabled(b);
	ui.grBoPort5->setEnabled(b);
	ui.grBoPort6->setEnabled(b);
	ui.grBoPort7->setEnabled(b);
	ui.grBoPort8->setEnabled(b);
	ui.grBoPort9->setEnabled(b);
	ui.grBoPort10->setEnabled(b);
	ui.grBoRls1->setEnabled(b);
	ui.grBoRls2->setEnabled(b);
	ui.grBoRls3->setEnabled(b);
	ui.grBoRls4->setEnabled(b);
	ui.grBoRls5->setEnabled(b);
	ui.grBoRls6->setEnabled(b);
	ui.grBoArp1->setEnabled(b);
	ui.grBoArp2->setEnabled(b);
	ui.grBoMet0->setEnabled(b);
	ui.grBoSev1->setEnabled(b);
	ui.grBoSev2->setEnabled(b);

}
//////////////////////////////////////////////

//////////////////////////////////////////////
//////////////////////////////////////////////
//////////////////////////////////////////////
////////////////////////////////////
////////////////////////////////////
void TabCust::toTabCust(uchar* pch,int sz)
{
	uchar header[4];
	int szHeader;
	szHeader = sz>4 ? 4:0;
	if(!szHeader)return;
	memcpy(header,pch,szHeader);
	int typeBlock=header[1];
	int szBlock = *((ushort*)(header+2));
	if(sz!=szBlock+4)
		return;
	int tBlock,nBlock;	//тип блока, номер источника(порта)
	tBlock=typeBlock & 0xF0;
	nBlock=typeBlock & 0x0F;
	bool ok=false;
	if(tBlock==0x30&&nBlock<5)
	{
		ok=true;
	}
	if(tBlock==0x20&&nBlock<10)
	{
		ok=true;
	}
	if(!ok)
		return;
	int pBegin=4,pEnd=4;
	int numStrPort=0,numStrRls=0;
	QString str;
	bool bClear=false;
//	qDebug()<<sz<<szBlock<< tBlock <<nBlock;
////////////////////////////////////////////////////////////
	QByteArray ba;
	char chrow[2000];
					int sz0=0;
					memset(chrow,0,2000);
////////////////////////////////////////////////////////////
	for(int i=4;i<sz;i++)
	{
		if( pch[i] == 0x00 )
		{
			pEnd=i;
			str = QString::fromAscii((char*)pch+pBegin,pEnd-pBegin);
			pBegin=pEnd+1;
			if(!str.isEmpty())
			{
				if(tBlock==0x30)
				{
					if(!bClear)
					{
						bClear=true;
						stLiRls[nBlock].clear();
					}
				stLiRls[nBlock]+=str;
				numStrRls++;
				}
				if(tBlock==0x20)
				{
					if(!bClear)
					{
						bClear=true;
						stLiPort[nBlock].clear();
					}
					stLiPort[nBlock]+=str;
					numStrPort++;
					ba=str.toAscii();
					sz0=ba.size();
					memset(chrow,0,2000);
					memcpy(chrow,ba.data(),ba.size());
//					qDebug()<<str;
				}
			}
		}
	}
if(tBlock==0x20)
{
//	memcpy(chrow,ba.data(),ba.size());
}
//

}
void TabCust::updDiagRlsPorts()
{
//	QStringList stLiRls[6],stLiPort[10];
	QLabel* la1,*la2;
	QString str1,str2;
//Rls
	for(int i=0;i<6;i++)
	{
		if(!stLiRls[i].isEmpty())
		{
			switch(i)
			{
			case 0:
				la1=ui.la1Rls1;
				la2=ui.la2Rls1;
				break;
			case 1:
				la1=ui.la1Rls2;
				la2=ui.la2Rls2;
				break;
			case 2:
				la1=ui.la1Rls3;
				la2=ui.la2Rls3;
				break;
			case 3:
				la1=ui.la1Rls4;
				la2=ui.la2Rls4;
				break;
			case 4:
				la1=ui.la1Rls5;
				la2=ui.la2Rls5;
				break;
			case 5:
				la1=ui.la1Rls6;
				la2=ui.la2Rls6;
				break;
			}
			str1.clear();
			str2.clear();
			for(int j=0;j<stLiRls[i].size();j++)
			{
				if(j<10)
				{
					str1+=stLiRls[i][j];
					str1+="\n";
				}else
				{
					str2+=stLiRls[i][j];
					str2+="\n";
				}
			}
			str1=str1.trimmed();
			str2=str2.trimmed();
			la1->setText(str1);
			la2->setText(str2);
		}
	}
//Port
	for(int i=0;i<10;i++)
	{
		if(!stLiPort[i].isEmpty())
		{
			switch(i)
			{
			case 0:
				la1=ui.la1Port1;
				la2=ui.la2Port1;
				break;
			case 1:
				la1=ui.la1Port2;
				la2=ui.la2Port2;
				break;
			case 2:
				la1=ui.la1Port3;
				la2=ui.la2Port3;
				break;
			case 3:
				la1=ui.la1Port4;
				la2=ui.la2Port4;
				break;
			case 4:
				la1=ui.la1Port5;
				la2=ui.la2Port5;
				break;
			case 5:
				la1=ui.la1Port6;
				la2=ui.la2Port6;
				break;
			case 6:
				la1=ui.la1Port7;
				la2=ui.la2Port7;
				break;
			case 7:
				la1=ui.la1Port8;
				la2=ui.la2Port8;
				break;
			case 8:
				la1=ui.la1Port9;
				la2=ui.la2Port9;
				break;
			case 9:
				la1=ui.la1Port10;
				la2=ui.la2Port10;
				break;
			}
			str1.clear();
			str2.clear();
			for(int j=0;j<stLiPort[i].size();j++)
			{
				if(j<10)
				{
					str1+=stLiPort[i][j];
					str1+="\n";
				}else
				{
					str2+=stLiPort[i][j];
					str2+="\n";
				}
			}
			la1->setText(str1);
			la2->setText(str2);
		}
	}
}
void TabCust::updateDialog()
{
////////////////////////////////////////////////////////////////////////////////////
	updDiagRlsPorts();
	updateDialogSoPo();
	updateDialogArpMetSev();
	updateDialogArp1Ch();
	updateDialogArp2Ch();

	return;
}
void TabCust::fLiEdAzimuth(void* l, ushort* pReceiveSePar, ushort* pSendSelPar)
{

	PLineEdit* lineEdit =(PLineEdit*)l;
	int b1,b2,b3,index,index1;bool ok1,ok2;
	int a0,a1,a2;QString str;
	QString str1,str2,str3;
	str1=lineEdit->text();
	index=str1.indexOf("°",0);
	if(index==-1)
	{
		str2=str1;
		str3="00";
	}else
	{
		str2 = str1.left(index);
		str3 = str1.mid(index+1,str1.size()-index);
	}
	b2 = str2.toInt(&ok1);
	index1 = str3.indexOf("'");
	if(index1>0)
	{
		str3.remove(index1,1);
	}
	b3 = str3.toInt(&ok2);
	b1 =b2*60 +b3;
////
	a0=b1;
	a1 = a0/60;
	a2 = a0 - (a1*60);
	str = QString("%1").arg(a1);
	str.append(QString("°%1'").arg(a2,2,10,QLatin1Char( '0' )));
//
	if(ok1&&ok2)
	{
		lineEdit->setText(str);
//
		*pReceiveSePar=b1;
		*pSendSelPar=b1;
	}
	return;
}


