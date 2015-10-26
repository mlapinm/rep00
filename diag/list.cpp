#include "list.h"

List::List(QWidget *parent)
	: Dialog(parent)
{
//	unitSend = new Unit(this);
//	unitReceive = new Unit(this);
	iList = 33;

	timerIdStart = startTimer(3000);
//	netExchange = new NetExchange(this);
	timerIdExist= startTimer(2000);
	timerId=startTimer(300);
	boardCurrent=new Board(this);	//этот элемент создается только для инициализации
}

List::~List()
{

}


void List::timerEvent(QTimerEvent *event)
{
	if(timerIdStart == event->timerId())
	{
		initList();
		killTimer(timerIdStart);
	}
	if(timerId == event->timerId())
	{
		updateDialogList();
	}
	if(timerIdExist == event->timerId())
	{
		fExistTimer();
	}

}
void List::updateDialogList()
{
	bReadOnly =	boardCurrent->bReadOnly;
	setEnabledThe(!bReadOnly);
//
	if(numShow==1)
	{
		copyUnitsAll();
		updateDialog();
	}
	if(numShow==2)
	{
		copyUnitsAll();
		dlgCust->updateDialog();
	}
	if(numShow==3)
	{
		copyUnitsAll();
		dlgCust->tabPs5->updateDialog();
	}
	if(numShow==4)
	{
		copyUnitsAll();
		dlgCust->tabPcm->updateDialog();
	}
	if(numShow==5)
	{
		copyUnitsAll();
		dlgCust->tabCust0->updateDialog();
	}
	QString str="111";
//	fCurrentBoard(false,str);
	refreshBoard();
}
void List::initList()
{
	netExchange = new NetExchange(this);
//	connect(listWidget,SIGNAL(itemSelectionChanged()),this,SLOT(changeIt()));
	connect(listWidget,SIGNAL(currentItemChanged(QListWidgetItem *, QListWidgetItem *  )),
		this,SLOT(currentChangeIt(QListWidgetItem * , QListWidgetItem *  )));

//	timerId=startTimer(300);
}
Board List::retBoard(int row)
{
	QListWidgetItem* listWidgetItem;
	Board board;
	QVariant variant;
	if( listWidget->item(row) )
	{
		listWidgetItem = listWidget->item(row); 
		variant = listWidgetItem->data(Qt::UserRole);
		board =variant.value<Board>();
	}
	else
		return NULL;
	return board;
}
void List::setBoard(int row,Board board)
{
//	Board boardOld;
	QListWidgetItem* listWidgetItem;
	QVariant variant;
	listWidgetItem=listWidget->item(row);
	variant = listWidgetItem->data(Qt::UserRole);
//	boardOld = variant.value<Board>();
	variant.setValue<Board>(board);
	listWidgetItem->setData(Qt::UserRole,variant);
}
void List::refreshBoard()
{
}
QString List::makeString(char* chStr,int iQuantity)
{
	iQuantity=0;
	QString str,strWhole;
	char chName[6];
	int k=0;
//	a1 = unit->i18byteReceived;
		for(int i=0;i<6;i++)
		{
			chName[i] = chStr[i];
			if(!chName[i])
			{
				k=i;
				break;
			}
		}
		str = QString::fromAscii(chName,k);
		strWhole =str;
		strWhole.append('/');
/////////
		for(int i=6;i<12;i++)
		{
			chName[i-6] = chStr[i];
			if(!chName[i-6])
			{
				k=i-6;
				break;
			}
		}
		str = QString::fromAscii(chName,k);
		strWhole.append(str);
		strWhole.append('/');
		chName[0]='К';
		str = QString::fromAscii(chName,1);
		strWhole.append(str);
	//////////
		short shA1,shA2;
		shA1=chStr[12];
//		shA1&=0xEF;
		shA2=shA1;
		shA2&=0x20;		//номер комплекта
		shA1&=0x07;		//номер платы
		shA1<<=1;
		shA1+=((shA2>>5)&0x1);
		shA1+=1;
		if(shA2) shA2=0x01;
		else shA2=0x00;
//		str=QString("%1").arg(shA1);
		str=QString("%1").arg(shA1,2,10,QChar(' '));
		str.append(tr("."));
//		strWhole.append(str);
		str.append(strWhole);
		strWhole = str;
		str=QString("%1").arg(shA2+1);
		strWhole.append(str);
/////////
	return strWhole;
}
int List::makeType(char* chStr)
{
	int ret=0;
	QString strPsp,strPsp0,strPs5,strPsm;

	strPsp="ПСП1";
	strPsp0="ПСП";
	strPs5="ПС5";
	strPsm="ПСМ";
	if(chStr==strPsp)
		ret = 1;
	if(chStr==strPs5)
		ret = 2;
	if(chStr==strPsm)
		ret = 3;
	if(chStr==strPsp0)
		ret = 4;
	return ret;
}

void List::conversionListWidget()
{
////
	Board board;
	QListWidgetItem* listWidgetItem;
	QVariant variant;
	int iDelIni;
	for(int i=0;i<listWidget->count();i++)
	{
		listWidgetItem=listWidget->item(i);
		variant = listWidgetItem->data(Qt::UserRole);
		board = variant.value<Board>();
		iDelIni=board.iDelIni;
		if(iDelIni == 1)
		{
//если был признак удаления то удаляется
			listWidget->removeItemWidget(listWidgetItem);
			listWidget->takeItem(i);
		}
	}
//устанавливает признак наличия iReceiveIni
	int senderIniPort = netExchange->senderIniPort;
	int iSenderIni = netExchange->iSenderIni;
	int iExist = 0;
	for(int i=0;i<listWidget->count();i++)
	{
		if(listWidget->item(i))
		{
			listWidgetItem=listWidget->item(i);
			variant = listWidgetItem->data(Qt::UserRole);
			board = variant.value<Board>();
			if(board.iSenderIni==iSenderIni)
			{
				board.iReceiveIni=1;
				if(boardCurrent->iSenderIni==iSenderIni)
				{
//разрешение, запрет редактирования
//					board->bReadOnly=!(netExchange->byteIni[13]&1);
					boardCurrent->bReadOnly=!(netExchange->byteIni[13]&1);
//////////////////////////////////////////////////////////////
//					boardCurrent->bReadOnly=false;					
				}

				iExist = 1;

				variant.setValue<Board>(board);
				listWidgetItem->setData(Qt::UserRole,variant);

			listWidgetItem=listWidget->item(i);				/////
			variant = listWidgetItem->data(Qt::UserRole);	/////
			board = variant.value<Board>();				/////


				break;
			}
		}
	}
//порта нет в list widget - он добавляется...
	if(!iExist)
	{
		board=Board(this);
		board.iDelIni=0;
		board.iReceiveIni=1;
		board.iSenderIni=iSenderIni;
		board.senderIniPort=senderIniPort;
		for(int i = 0; i<18; i++)
			board.initUnit[i]=netExchange->byteIni[i];
		board.strInit=makeString(board.initUnit);
		board.typeT=makeType(board.initUnit);
		variant.setValue<Board>(board);
		listWidgetItem = new QListWidgetItem(listWidget);
		QString str;QChar qch0='0';
		str=QString("%1").arg((uint)senderIniPort,8,16,qch0);

		listWidgetItem->setText(board.strInit);			
		listWidgetItem->setData(Qt::UserRole,variant);		
		listWidget->addItem(listWidgetItem);				
	}
}
void List::fExistTimer()
{
	QListWidgetItem* listWidgetItem;
	Board board;
	QVariant variant;
	int iDelIni;
	for(int i=0;i<listWidget->count();i++)
	{
		if(listWidget->item(i))
		{
			listWidgetItem=listWidget->item(i);
			variant = listWidgetItem->data(Qt::UserRole);
			board = variant.value<Board>();
			iDelIni=board.iDelIni;
			if(board.iReceiveIni)
				board.iReceiveIni=0;
			else 
				board.iDelIni=1;
			//если элемент не удалился удаляем его
			if(iDelIni)
			{
				listWidget->removeItemWidget(listWidgetItem);
				listWidget->takeItem(i);
				break;
			}
			variant.setValue<Board>(board);
			listWidgetItem->setData(Qt::UserRole,variant);

			listWidgetItem=listWidget->item(i);				////
			variant = listWidgetItem->data(Qt::UserRole);	////	
			board = variant.value<Board>();				////

		}
	}
}

void List::copyUnits(int iNumberR)
{
	if(iNumberR==1)
	{
		for(int i=0;i<128;i++)
		{
			unitSend->basicSetting[i] = unitReceive->basicSetting[i];
		}
	}
	if(iNumberR==2)
	{
		for(int i=0;i<128;i++)
		{
			unitSend->selectedParameters0[i] = unitReceive->selectedParameters0[i];
		}
	}
	if(iNumberR==3)
	{
		for(int i=0;i<128;i++)
		{
			unitSend->selectedParameters1[i] = unitReceive->selectedParameters1[i];
		}
	}
	if(iNumberR==4)
	{
		for(int i=0;i<128;i++)
		{
			unitSend->selectedParameters2[i] = unitReceive->selectedParameters2[i];
		}

unitSend->selectedParameters2[128]=0xffff;

	}
}
void List::readNetCondition(uchar* byteReceiveExchange,int sz,int boardType)
{
	int iNumberUnitReceive=1;
	unitReceive->calculator++;
//	boardCurrent->iValid=1;
//	setBoard(listWidget->currentRow(),*boardCurrent);
	for(int i=0;i<2;i++)
	{
		unitReceive->headRead[i] = 0;
		unitReceive->headRead[i] = byteReceiveExchange[i*2+1];
		unitReceive->headRead[i]<<=8;
		unitReceive->headRead[i] |= byteReceiveExchange[i*2];
	}
	iNumberUnitReceive = byteReceiveExchange[0]&0xf;
	if(iNumberUnitReceive>0 && iNumberUnitReceive<5)
	{
		

	if(boardCurrent->nCycle>0 && boardCurrent->nCycle<9)boardCurrent->nCycle++;
	else boardCurrent->nCycle=0;
	bool bReceive=false;
		if(iNumberUnitReceive==1)
		{
			bReceive=true;
			for(int i=0;i<128;i++)
			{
				unitReceive->basicSetting[i] = 0;
				unitReceive->basicSetting[i] = byteReceiveExchange[i*2+1+4];
				unitReceive->basicSetting[i]<<=8;
				unitReceive->basicSetting[i] |= byteReceiveExchange[i*2+4];
				unitReceive0->basicSetting[i] = 0;
				unitReceive0->basicSetting[i] = byteReceiveExchange[i*2+1+4];
				unitReceive0->basicSetting[i]<<=8;
				unitReceive0->basicSetting[i] |= byteReceiveExchange[i*2+4];
			}
			if(unitReceive->basicSetting[0]&0x8000)
				bReceive=true;
			else
				bReceive=true;
		}
		if(iNumberUnitReceive==2)
		{
			bReceive=false;
		for(int i=0;i<128;i++)
			{
				unitReceive->selectedParameters0[i] = 0;
				unitReceive->selectedParameters0[i] = byteReceiveExchange[i*2+1+4];
				unitReceive->selectedParameters0[i]<<=8;
				unitReceive->selectedParameters0[i] |= byteReceiveExchange[i*2+4];
				unitReceive0->selectedParameters0[i] = 0;
				unitReceive0->selectedParameters0[i] = byteReceiveExchange[i*2+1+4];
				unitReceive0->selectedParameters0[i]<<=8;
				unitReceive0->selectedParameters0[i] |= byteReceiveExchange[i*2+4];
			}
		}
		if(iNumberUnitReceive==3)
		{
			bReceive=false;
		for(int i=0;i<128;i++)
			{
				unitReceive->selectedParameters1[i] = 0;
				unitReceive->selectedParameters1[i] = byteReceiveExchange[i*2+1+4];
				unitReceive->selectedParameters1[i]<<=8;
				unitReceive->selectedParameters1[i] |= byteReceiveExchange[i*2+4];
				unitReceive0->selectedParameters1[i] = 0;
				unitReceive0->selectedParameters1[i] = byteReceiveExchange[i*2+1+4];
				unitReceive0->selectedParameters1[i]<<=8;
				unitReceive0->selectedParameters1[i] |= byteReceiveExchange[i*2+4];
			}
		}
		if(iNumberUnitReceive==4)
		{
			bReceive=false;
		for(int i=0;i<128;i++)
			{
				unitReceive->selectedParameters2[i] = 0;
				unitReceive->selectedParameters2[i] = byteReceiveExchange[i*2+1+4];
				unitReceive->selectedParameters2[i]<<=8;
				unitReceive->selectedParameters2[i] |= byteReceiveExchange[i*2+4];
				unitReceive0->selectedParameters2[i] = 0;
				unitReceive0->selectedParameters2[i] = byteReceiveExchange[i*2+1+4];
				unitReceive0->selectedParameters2[i]<<=8;
				unitReceive0->selectedParameters2[i] |= byteReceiveExchange[i*2+4];
			}
		}
		if(bReceive)
		{
			bReceive=false;
			fChoice();		//????
		}


			copyUnits(iNumberUnitReceive);

	}
///*
		if(iNumberUnitReceive==8)
		{
//надо передать данные в "blocMeas"....
			for(int i=0;i<32;i++)
			{
				blocMeas->uchBloc[i]=byteReceiveExchange[i];
			}
		}
//диагностика 		
//ПЛС
		if(boardType == 0 && iNumberUnitReceive==9)
		{
//надо передать данные в "rastr"....
			for(int i=0;i<396;i++)
			{
//				rastr->dgnstc[i]=byteReceiveExchange[i];
				diagnostica->dgnstc[i]=byteReceiveExchange[i];
			}

//				rastr->refreshPixmap();	//в	paintEvent()
			diagnostica->toRastr();		//здесь все преобразуется
		}
//ПСП
		if(boardType == 1 && iNumberUnitReceive==9)
		{

			dlgCust->tabCust->toTabCust(byteReceiveExchange,sz);
//
//
			dlgCust->tabCust->baDiagnosticaPsp;
			sz;
			for(int i=0;i<sz;i++)
			{
			//	rc[i]=byteReceiveExchange[i];
			}
		}
//		qDebug()<<iNumberUnitReceive;
//*/
}
int List::sendNetCondition(uchar* byteSendExchange)
{
	QString str;ushort uA;
	if(netExchange->iStartExchange == 0)
	{
		if(boardCurrent->iValid == 0)
		{
			netExchange->timerNetExchange->stop();
		str="Выберите свободную плату из списка";
		fCurrentBoard(false,str);
		}
	}
	else
	{
		uA = unitReceive->headRead[0];
		uA&=0xff;	//Плата не занята
		if(boardCurrent->nCycle == 0 && uA)
		{
			netExchange->iStartExchange = 0;
			boardCurrent->iValid = 1;
			fCurrentBoard(true,str);
		}
	}
		int iNumUnit = nextNumberUnit();

		for(int i=0;i<2;i++)
		{
			byteSendExchange[2*i]=unitSend->headWrite[i];
			byteSendExchange[2*i+1]=unitSend->headWrite[i]>>8;

		}
		byteSendExchange[0]= iNumUnit;
		if(boardCurrent->iValid)	
			byteSendExchange[1]=1;
		else
			byteSendExchange[1]=0;
		if(!bReadOnly)
		{
			if( iNumUnit == 1 )
			{
				for(int i=0;i<128;i++)
				{
					byteSendExchange[i*2+4]=unitSend->basicSetting[i];
					byteSendExchange[i*2+1+4]=unitSend->basicSetting[i]>>8;
				}
			}
			if( iNumUnit == 2 )
			{
				for(int i=0;i<128;i++)
				{
					byteSendExchange[i*2+4]=unitSend->selectedParameters0[i];
					byteSendExchange[i*2+1+4]=unitSend->selectedParameters0[i]>>8;
				}
			}
			if( iNumUnit == 3 )
			{
				for(int i=0;i<128;i++)
				{
					byteSendExchange[i*2+4]=unitSend->selectedParameters1[i];
					byteSendExchange[i*2+1+4]=unitSend->selectedParameters1[i]>>8;
				}
			}
			if( iNumUnit == 4 )
			{
				for(int i=0;i<128;i++)
				{
					byteSendExchange[i*2+4]=unitSend->selectedParameters2[i];
					byteSendExchange[i*2+1+4]=unitSend->selectedParameters2[i]>>8;
				}
			}
		}else
		{
			if( iNumUnit == 1 )
			{
				for(int i=0;i<128;i++)
				{
					byteSendExchange[i*2+4]=unitReceive0->basicSetting[i];
					byteSendExchange[i*2+1+4]=unitReceive0->basicSetting[i]>>8;
				}
			}
			if( iNumUnit == 2 )
			{
				for(int i=0;i<128;i++)
				{
					byteSendExchange[i*2+4]=unitReceive0->selectedParameters0[i];
					byteSendExchange[i*2+1+4]=unitReceive0->selectedParameters0[i]>>8;
				}
			}
			if( iNumUnit == 3 )
			{
				for(int i=0;i<128;i++)
				{
					byteSendExchange[i*2+4]=unitReceive0->selectedParameters1[i];
					byteSendExchange[i*2+1+4]=unitReceive0->selectedParameters1[i]>>8;
				}
			}
			if( iNumUnit == 4 )
			{
				for(int i=0;i<128;i++)
				{
					byteSendExchange[i*2+4]=unitReceive0->selectedParameters2[i];
					byteSendExchange[i*2+1+4]=unitReceive0->selectedParameters2[i]>>8;
				}
			}
		}
		return 1;
}
void List::changeIt()
{
//инициализируется boardCurrent, прекращается,начинается обмен
	int iRow=0;
	Board boardPrevious=*boardCurrent;
	QListWidgetItem* listWidgetItem;
	iRow = listWidget->count();
	if(listWidget->currentRow() != -1)
	{
		iRow=listWidget->currentRow();
		listWidgetItem=(QListWidgetItem*)listWidget->item(iRow);
		Board board;
		QVariant variant;
		variant = listWidgetItem->data(Qt::UserRole);
		board=variant.value<Board>();
		*boardCurrent = board; 

			board = retBoard(0);
			board = retBoard(1);

		boardPrevious.iValid=0;
//		netExchange->boardCurrent=retBoard(1);
//		boardCurrent=board;
///////////
			board = retBoard(0);
			board = retBoard(1);
		QString str;
		QChar qch0='0';
		str=QString("%1").arg((uint)board.iSenderIni,8,16,qch0);
	}
	else
	{
		boardCurrent->iValid=0;
	}
	changeBoardCurrent(boardPrevious);

//	lineEditTest->setText(str);
}
void List::currentChangeIt(QListWidgetItem * current, QListWidgetItem * previous )
{
		QString	str="Выберите свободную плату.";
		fCurrentBoard(false,str);


	if(!current)
	{
		netExchange->timerNetExchange->stop();
		return;
	}
	listWidget->setSortingEnabled(false);
	int iRowCurr,iRowPrev;
	Board boardPrev, boardCurr;
	if(previous)
	{
		iRowCurr=listWidget->row(current);
		iRowPrev=listWidget->row(previous);
		boardCurr = retBoard(iRowCurr);
		boardPrev = retBoard(iRowPrev);
	}
	else
	{
		iRowCurr=listWidget->row(current);
		boardCurr = retBoard(iRowCurr);
	}
	//обнуление бывшей выбранной платы
	if(previous)
	{
		boardPrev.iValid=0;
		boardPrev.nCycle=1;
	}
	//инициализация новой выбранной платы
	boardCurr.iValid=0;
	boardCurr.nCycle=1;
	if(previous)
		setBoard(iRowPrev,boardPrev);
	setBoard(iRowCurr,boardCurr);
	listWidget->setSortingEnabled(true);
	*boardCurrent = boardCurr;
	changeBoardCurrent(boardPrev);
	toNumBoardDiagnostica(0);
}
void List::currentStartIt()
{
	listWidget->setSortingEnabled(false);
	int iRowCurr;
	Board boardCurr,boardPrev;
	iRowCurr=listWidget->currentRow();
	boardCurr = retBoard(iRowCurr);
	*boardCurrent = boardCurr;
	changeBoardCurrent(boardPrev);
	listWidget->setSortingEnabled(true);
}
void List::changeBoardCurrent(Board boardPrev)
{
	netExchange->changeBoardCurrent(boardPrev);
}
int List::nextNumberUnit()
{
//увеличил число блоков с 3 до 4
	if(netExchange->iNumberUnit<5)	//4 было
			netExchange->iNumberUnit++;
	if(netExchange->iNumberUnit>4)	//3 было
		netExchange->iNumberUnit = 1;

	return netExchange->iNumberUnit;
}


