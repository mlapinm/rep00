#ifndef LIST_H
#define LIST_H

#include <QtGui/QWidget>
#include "dialog.h"
#include "netexchange.h"
#include "unit.h"

class List : public Dialog
{
	Q_OBJECT

public:
	List(QWidget *parent);
	~List();
	
	int iList;
	NetExchange* netExchange;
	void readNetCondition(uchar* byteUnitRead,int sz,int boardType=0);
	void copyUnits(int iNumberR);
	int sendNetCondition(uchar* byteSendExchange);
	int nextNumberUnit();

	void updateDialogList();
	void initList();
	void refreshBoard();
	Board retBoard(int row);
	void setBoard(int row,Board board);

	QString makeString(char* chStr,int iQuantity=18);
        int makeType(char* chStr);

	void conversionListWidget();

protected:
	void timerEvent(QTimerEvent* event);
	int timerId;
	int timerIdStart;
	int timerIdExist;
	void fExistTimer();

	void changeBoardCurrent(Board board);
	void currentStartIt();
private:
protected slots:

	void changeIt();
	void currentChangeIt(QListWidgetItem * current, QListWidgetItem * previous );
signals:
};

#endif // LIST_H
