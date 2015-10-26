#include"dialog.h"

void Dialog::fWord(ushort a1)
{
	word = *((Word*)&a1);
}
int Dialog::fWordReturnBit(int)		//0- 0-14,1 - 0-7, 2 - 8-15
{
	if( word.bit0 ) return 1;
	if( word.bit1 ) return 2;
	if( word.bit2 ) return 3;
	if( word.bit3 ) return 4;
	if( word.bit4 ) return 5;
	if( word.bit5 ) return 6;
	if( word.bit6 ) return 7;
	if( word.bit7 ) return 8;
	return 0;
}
void Dialog::fWordWr(ushort a1)
{
	wordWr = *((Word*)&a1);
}
void Dialog::fWordWrSetBit(int)
{
}
ushort Dialog::fWordWr()
{
	ushort a1;
	a1 = *((ushort*)&wordWr);
	return a1;
}
short Dialog::toShort(int a)
{
	short b = a;
	return b;
}
short Dialog::toChar(int a)
{
	char b = a;
	short c = b;
	return c;
}
short Dialog::to12bit(int a)
{
	short b = a;
	b<<=4;
	b>>=4;
	return b;
}
short Dialog::to12bitB(int a)
{
	short b = a;
	b>>=4;
	return b;
}
short Dialog::to13bit(int a)
{
	short b = a;
	b<<=3;
	b>>=3;
	return b;
}
short Dialog::to13bitB(int a)
{
	short b = a;
	b>>=3;
	return b;
}
double Dialog::to1byteP(int a)
{
	char b = a;
	b&=0x7f;
	double c = (double)b/(double)0x80;
//	b/=0x80;
	return c;
}
short Dialog::fr1byteP(double a)
{
	double b = a;
	char c = b * (double)0x80;
	return (short)c;
}
double Dialog::to2byteP(int a)
{
	short b = a;
	b&=0x7fff;
	double c = (double)b/(double)0x8000;
	return c;
}
short Dialog::fr2byteP(double a)
{
	double b = a;
	short c = b * (double)0x8000;
	return (short)c;
}
int Dialog::to2byteP100(int a)
{
	short b = a;
	b&=0x7fff;
	double c = (double)b*100/(double)0x8000;
	return (int)(c+.5);
}
short Dialog::fr2byteP100(double a)
{
	double b = a;
	short c = b * (double)0x8000/100;
	return (short)c;
}
double Dialog::to1byte5v(int a)
{
	char b = a;
	b&=0x7f;
	double c = (double)b/(double)0x80*5.0;
//	b/=0x80;
	return c;
}
short Dialog::fr1byte5v(double a)
{
	double b = a;
	char c = b * (double)0x80/5.0;
	return (short)c;
}
double Dialog::to12bit5(int a)
{
	short b = a;
	b&=0xfff;
	double c = (double)b/(double)0x1000*5.0;
	return c;
}
short Dialog::fr12bit5(double a)
{
	double b = a;
	short c = b * (double)0x1000/5.0;
	return (short)c;
}
double Dialog::to12bit5v(int a)
{
	short b;
	b = a;
	b<<=4;
	b>>=4;
	double d = (double)b/(double)0x800*5.0;
	return d;
}
short Dialog::fr12bit5v(double a)
{
	double b = a;
	short c = (b / 5) * (double)0x800;
	
	return (short)c;
}
QString Dialog::ch110to1_1(int a0)
{
	QString str,str0,str1,str2,str3;
	double d0,d1;
	d0=(double)a0;
	d1=(d0)/100.0;
	str = QString("%1").arg(d1,4,'f',1);
	return str;
}
