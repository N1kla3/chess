#include "ChessPiece.h"
#include <iostream>

ChessPiece::ChessPiece(const char* symbol, bool blocked, string side)
{
	this->symbol = symbol;
	this->blocked = blocked;
	this->side = side;
}


ChessPiece::~ChessPiece()
{
}

const char* ChessPiece::toString()
{
	return this->symbol;
}
//function for empty square ChessPiece.symbol = ' '
void ChessPiece::canMove(int i, int j, ChessBoard* rboard) {
    std::cout << "It is not a Figure!!!";
}
