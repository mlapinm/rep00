#ifndef NETEXCHANGE_H
#define NETEXCHANGE_H

#include <QtGui/QWidget>
#include <QtNetwork/QUdpSocket>
#include <QtCore/QTimer>
#include "board.h"
class NetExchange : public QWidget 
{
	Q_OBJECT

public:
	NetExchange(QWidget *parent);
	~NetExchange();
	void* retNetExchThis();
	QObject* parent1;

	void initSocketIni();
	void initSocketExchange();
	void initTimerNetExchange();
	void initTimerReceive();
	QUdpSocket* udpSocketRInit;
	quint16 receiveInitPort;		//5248
	quint16 senderIniPort;//адрес port порт
	int iSenderIni;		//адрес host
	QHostAddress senderIni;
    QByteArray byteArray,byteArraySend,byteArrayReceive;
	uchar byteIni[260];
//	uchar byteUnitRead[260];
	int addStrInitUn();			//в port
	QUdpSocket* udpSocketExchange;
	quint16 receiveExchangePort;		//
	quint16 senderExchangePort;
	QHostAddress hostAddressExchange;
	int iHostExchangeSender;	
	int iExchangeSenderPort;	

    QByteArray byteArrayExchange;
	uchar byteSendExchange[280];
	const static int szPack1500=1500;
	uchar byteReceiveExchange[szPack1500];			///396

	int iStartExchange;
	int iNumberUnit;
	int nextNumberUnit();
	QTimer* timerNetExchange, *timerReceive;
	void sendNetUnit();
	void changeBoardCurrent(Board boardPrev);
	Board* boardCurrent;
	int iChop;
	void setChop();
	void offChop();
protected:
	void* list;
private:
protected slots:
	void readNetInit();
	void readNetUnit();
	void fTimerNetExchange();	
	void fTimerReceive();	
};

#endif // NETEXCHANGE_H
