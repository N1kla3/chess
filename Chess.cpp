// Chess.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include "ChessBoard.h"
#include <iostream>


using namespace::std;

int main()
{
	ChessBoard*  board = new ChessBoard();
	ChessPiece horse("K");
	printf("%s", board->toString().c_str());
	int i;
	cin >>  i;
	ChessBoard();
    return 0;
}

