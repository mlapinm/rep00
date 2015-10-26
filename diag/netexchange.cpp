#include "netexchange.h"
#include "list.h"

NetExchange::NetExchange(QWidget *parent) : QWidget(parent)
{

	parent1 = parent;
	List* list=(List*)parent1;
	int a=list->iList;


	a=((List*)parent1)->iList;
	iNumberUnit=0;
	initSocketIni();

	iStartExchange=0;
	initSocketExchange();
	initTimerNetExchange();
	initTimerReceive();
	for(int i=0;i<128;i++)
	{
		byteSendExchange[i]=0;
	}
	byteSendExchange[0]=1;
}

NetExchange::~NetExchange()
{
}
void* NetExchange::retNetExchThis()
{
		

	return this;
}
void NetExchange::initSocketIni()
{

	udpSocketRInit = new QUdpSocket(parent1);
	receiveInitPort = 5248;		//5248
	udpSocketRInit->bind(receiveInitPort,QUdpSocket::ReuseAddressHint);			//5248
	connect(udpSocketRInit, SIGNAL(readyRead()),this, SLOT(readNetInit()));

}
void NetExchange::initSocketExchange()
{
	int addrPort;
	addrPort = 5249;		//5250//5249
	udpSocketExchange = new QUdpSocket(parent1);
	udpSocketExchange->bind(addrPort,QUdpSocket::ReuseAddressHint);			//5249
	connect(udpSocketExchange, SIGNAL(readyRead()),	this, SLOT(readNetUnit()));

}

void NetExchange::initTimerNetExchange()
{
	timerNetExchange = new QTimer(this);
	connect(timerNetExchange,SIGNAL(timeout()),this,SLOT(fTimerNetExchange()));
//	timerNetExchange->start(300);

}
void NetExchange::initTimerReceive()
{
	timerReceive = new QTimer(this);
	timerReceive->setSingleShot(true);
	connect(timerReceive,SIGNAL(timeout()),this,SLOT(fTimerReceive()));

}

int NetExchange::addStrInitUn()			//в port
{
	return 0;
}

void NetExchange::readNetInit()
{
	List* list=(List*)parent1;
 //   do {
	if(udpSocketRInit->hasPendingDatagrams())
	{
        byteArray.resize(udpSocketRInit->pendingDatagramSize());
       udpSocketRInit->readDatagram(byteArray.data(), byteArray.size(),
		    &senderIni,&senderIniPort);
	}
 //   } while (udpSocketRInit->hasPendingDatagrams());
	QString	strSenderIni = senderIni.toString();
	iSenderIni = senderIni.toIPv4Address();	

	QDataStream in(&byteArray, QIODevice::ReadOnly);

//	int intSize = byteArray.size();
		for(int i=0;i<18;i++)
		{
			in>>byteIni[i];
		}
	list->conversionListWidget();
}
void NetExchange::readNetUnit()
{
	timerReceive->stop();
	QHostAddress hostAddressExchangeTmp;
	quint16 receiveExchangePortTmp;		//
//	int size = udpSocketExchange->pendingDatagramSize();
/*
	QByteArray ba;			//byteArrayReceive
	byteArrayReceive.clear();
	char charr[1000000];char* pcharr=charr;
	int k=0;
	while (udpSocketExchange->hasPendingDatagrams()&&udpSocketExchange->pendingDatagramSize()>0)
	{
		int size=udpSocketExchange->pendingDatagramSize();
		if(k+size<1000000)
		{
//			ba.resize(size);
			udpSocketExchange->readDatagram(pcharr+k, size,
			&hostAddressExchangeTmp,&receiveExchangePortTmp);
			k+=size;
			//pcharr+=size;
		}
	}
	byteArrayReceive.resize(k);
	memcpy(byteArrayReceive.data(),pcharr,k);
*/
///*
	while (udpSocketExchange->hasPendingDatagrams())
	{
		byteArrayReceive.resize(udpSocketExchange->pendingDatagramSize());
		udpSocketExchange->readDatagram(byteArrayReceive.data(), byteArrayReceive.size(),
		&hostAddressExchangeTmp,&receiveExchangePortTmp);
//*/

	if(hostAddressExchangeTmp.toIPv4Address()!=hostAddressExchange.toIPv4Address())
		return;

	QString	strSenderUnit = senderIni.toString();
	iHostExchangeSender = hostAddressExchange.toIPv4Address();	

	QDataStream in(&byteArrayReceive, QIODevice::ReadOnly);
	int intSize = byteArrayReceive.size();
	if(intSize>szPack1500)intSize=szPack1500;			////////////////intSize
		for(int i=0;i<intSize;i++)
		{
			in>>byteReceiveExchange[i];
		}
	uchar ch;
	ch = byteReceiveExchange[0];
		char* point = byteArrayReceive.data();
		char chAr[12];
		for(int i=0;i<12;i++)
		{
			chAr[i] = *(point+i);
		}
	((List*)parent())->readNetCondition(byteReceiveExchange,intSize,boardCurrent->typeT);


	}

}

void NetExchange::fTimerNetExchange()
{
	sendNetUnit();

}
void NetExchange::fTimerReceive()
{
	iStartExchange=0;
	boardCurrent->iValid=0;
}
void NetExchange::sendNetUnit()
{
	if(((List*)parent())->sendNetCondition(byteSendExchange))
	{
		QDataStream out(&byteArrayExchange, QIODevice::WriteOnly);
		for(int i=0;i<260;i++)
		{
			out<<byteSendExchange[i];
		}
//	iHostExchangeSender = 0xc0a80092;	//currentBoard->iSender
//	iExchangeSenderPort = 5824;			//currentBoard->senderPort
		hostAddressExchange.setAddress(iHostExchangeSender);
		udpSocketExchange->writeDatagram(byteArrayExchange, 
		hostAddressExchange,iExchangeSenderPort);	// work too
//		int iHSender= hostAddressExchange.toIPv4Address();
		timerReceive->start(250);
	}
}
void NetExchange::changeBoardCurrent(Board boardPrev)
{
	iStartExchange = 1;
	iNumberUnit = 0;
	boardCurrent=((List*)parent())->boardCurrent;
	if(!timerNetExchange->isActive()) timerNetExchange->start(50);//300
	iExchangeSenderPort = boardCurrent->senderIniPort;
	iHostExchangeSender = boardCurrent->iSenderIni;
	hostAddressExchange.setAddress(iHostExchangeSender);


}
void NetExchange::setChop()
{
	iChop=1;
}
void NetExchange::offChop()
{
	iChop=0;
}
//не используется - есть List::nextNumberUnit()
int NetExchange::nextNumberUnit()
{
	if( iNumberUnit>=4) iNumberUnit=1;
	return iNumberUnit++;
}

