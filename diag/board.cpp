#include "board.h"

Board::Board(QObject *)
{
	nameBoard="111";
	iDelIni=1;
	iReceiveIni=0;
	iValid=0;
	nCycle=1;
	typeT=0;
	bReadOnly=false;
}

Board::~Board()
{

}
