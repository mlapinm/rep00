#ifndef WRD_H
#define WRD_H

#include <QObject>


struct S
{
	ushort bit0 : 1;
	ushort bit1 : 1;
	ushort bit2 : 1;
	ushort bit3 : 1;
	ushort bit4 : 1;
	ushort bit5 : 1;
	ushort bit6 : 1;
	ushort bit7 : 1;
	ushort bit8 : 1;
	ushort bit9 : 1;
	ushort bit10: 1;
	ushort bit11: 1;
	ushort bit12: 1;
	ushort bit13: 1;
	ushort bit14: 1;
	ushort bit15: 1;
};
class Wrd : public QObject
{
	Q_OBJECT

public:
	Wrd(QObject *parent=0);
	~Wrd();
	S s;

	S* f(ushort a1);
	ushort f();


private:
	
};

#endif // WRD_H
