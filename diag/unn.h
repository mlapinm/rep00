#ifndef UNN_H
#define UNN_H
//#define uchar unsigned char
//#define ushort unsigned short
//#define uint unsigned int

struct Unn 
{
	union
	{
		int iU;
		unsigned int uiU;
		 char bU[4];
		 unsigned char ubU[4];
		 unsigned short uShU[2];
		 short shU[2];
	};

private:
	
};

#endif // UNN_H
