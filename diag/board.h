#ifndef BOARD_H
#define BOARD_H

#include <QtCore/QObject>
#include <QtCore/QMetaType>

class Board
{
//	Q_OBJECT

public:
	Board(QObject *parent=0);
	~Board();
	
	QString nameBoard;
	int iDelIni;		//пора удалять
	int iReceiveIni;	//есть иниц. пакет
	int iSenderIni;
	int senderIniPort;
	char initUnit[18];
	QString strInit;
	int iValid;			//для boardCurrent
	int nCycle;			//1,to9->0
	int typeT;			//0-пср,1-псп
	bool bReadOnly;
private:
	
};
Q_DECLARE_METATYPE(Board) 
#endif // BOARD_H
