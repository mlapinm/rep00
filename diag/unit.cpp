#include "unit.h"

Unit::Unit(QObject *parent)
	: QObject(parent)
{
	calculator=0;
	for(int i=0;i<2;i++)
	{
		headWrite[i]=0;
		headRead[i]=0;
	}

}

Unit::~Unit()
{

}
void Unit::setSelectedParameters(int iRls,int num,ushort val)
{
	if(iRls==0)
		selectedParameters0[num]=val;
	if(iRls==1)
		selectedParameters1[num]=val;
	return;
}
ushort Unit::isSelectedParameters(int iRls,int num)
{
	ushort ush=0;
	if(iRls==0)
		ush=selectedParameters0[num];
	if(iRls==1)
		ush=selectedParameters1[num];
	return ush;
}
