#include "ChessPiece.h"

ChessPiece::ChessPiece(const char* symbol, bool blocked)
{
	this->symbol = symbol;
	this->blocked = blocked;
}


ChessPiece::~ChessPiece()
{
}

const char* ChessPiece::toString()
{
	return this->symbol;
}

