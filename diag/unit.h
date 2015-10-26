#ifndef UNIT_H
#define UNIT_H

#include <QtCore/QObject>

class Unit : public QObject
{
	Q_OBJECT

public:
	Unit(QObject *parent);
	~Unit();
	ushort headWrite[2];
	ushort headRead[2];
	ushort basicSetting[128];
	ushort selectedParameters0[128];
	ushort selectedParameters1[128];
	ushort selectedParameters2[128];	//добавил еще 1 блок
	ushort dgnstc[396];
	uint calculator;
	void setSelectedParameters(int iRls,int num,ushort val);
	ushort isSelectedParameters(int iRls,int num);
private:
	
};

#endif // UNIT_H
